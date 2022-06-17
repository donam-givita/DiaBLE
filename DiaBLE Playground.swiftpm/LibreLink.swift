import Foundation


// https://github.com/timoschlueter/nightscout-librelink-up


enum LibreLinkUpError: LocalizedError {
    case noConnection
    case notAuthenticated
    case jsonDecoding

    var errorDescription: String? {
        switch self {
        case .noConnection:     return "no connection"
        case .notAuthenticated: return "not authenticated"
        case .jsonDecoding:     return "JSON decoding"
        }
    }
}


struct AuthTicket: Codable {
    let token: String
    let expires: Int
    let duration: Int
}


enum MeasurementColor: Int, Codable {
    case green  = 1
    case yellow = 2
    case red    = 3
}


struct GlucoseMeasurement: Codable {
    let factoryTimestamp: String
    let timestamp: String
    let type: Int
    let valueInMgPerDl: Int
    let trendArrow: OOP.TrendArrow?    // not in graphData
    let trendMessage: String?
    let measurementColor: MeasurementColor
    let glucoseUnits: Int
    let value: Int
    let isHigh: Bool
    let isLow: Bool
    enum CodingKeys: String, CodingKey { case factoryTimestamp = "FactoryTimestamp", timestamp = "Timestamp", type, valueInMgPerDl = "ValueInMgPerDl", trendArrow = "TrendArrow", trendMessage = "TrendMessage", measurementColor = "MeasurementColor", glucoseUnits = "GlucoseUnits", value = "Value", isHigh, isLow }
}


struct LibreLinkUpGlucose: Identifiable, Codable {
    let glucose: Glucose
    let color: MeasurementColor
    var id: Int { glucose.id }
}


class LibreLinkUp: Logging {

    var main: MainDelegate!

    let siteURL = "https://api.libreview.io"
    let localSiteURL = "https://api-eu.libreview.io"
    let loginEndpoint = "llu/auth/login"
    let connectionsEndpoint = "llu/connections"
    let measurementsEndpoint = "lsl/api/measurements"

    let headers = [
        "User-Agent": "Mozilla/5.0",
        "Content-Type": "application/json",
        "product": "llu.ios",
        "version": "4.2.0",
        "Accept-Encoding": "gzip, deflate, br",
        "Connection": "keep-alive",
        "Pragma": "no-cache",
        "Cache-Control": "no-cache",
    ]


    init(main: MainDelegate) {
        self.main = main
    }


    @discardableResult
    func login() async throws -> (Any, URLResponse) {
        var request = URLRequest(url: URL(string: "\(siteURL)/\(loginEndpoint)")!)
        let credentials = await [
            "email": main.settings.libreLinkUpEmail,
            "password": main.settings.libreLinkUpPassword
        ]
        request.httpMethod = "POST"
        for (header, value) in headers {
            request.setValue(value, forHTTPHeaderField: header)
        }
        let jsonData = try? JSONSerialization.data(withJSONObject: credentials)
        request.httpBody = jsonData
        do {
            debugLog("LibreLinkUp: posting to \(request.url!.absoluteString) \(jsonData!.string), headers: \(headers)")
            let (data, response) = try await URLSession.shared.data(for: request)
            debugLog("LibreLinkUp: response data: \(data.string)")
            if let response = response as? HTTPURLResponse {
                let status = response.statusCode
                if status == 401 {
                    log("LibreLinkUp: POST not authorized")
                } else {
                    log("LibreLinkUp: POST \((200..<300).contains(status) ? "success" : "error") (status: \(status))")
                }
            }
            do {
                if let json = try JSONSerialization.jsonObject(with: data) as? [String: Any],
                   let status = json["status"] as? Int {
                    if status == 2 {  // {"status":2,"error":{"message":"notAuthenticated"}}
                        throw LibreLinkUpError.notAuthenticated
                    }
                    if let data = json["data"] as? [String: Any],
                       let user = data["user"] as? [String: Any],
                       let id = user["id"] as? String,
                       let authTicketDict = data["authTicket"] as? [String: Any] {
                        let authTicket = AuthTicket(token: authTicketDict["token"] as? String ?? "",
                                                    expires: authTicketDict["expires"] as? Int ?? 0,
                                                    duration: authTicketDict["duration"] as? Int ?? 0)
                        self.log("LibreLinkUp: user id: \(id), authTicket: \(authTicket), expires on \(Date(timeIntervalSince1970: Double(authTicket.expires)))")
                        DispatchQueue.main.async {
                            self.main.settings.libreLinkUpPatientId = id
                            self.main.settings.libreLinkUpToken = authTicket.token
                            self.main.settings.libreLinkUpTokenExpirationDate = Date(timeIntervalSince1970: Double(authTicket.expires))
                        }
                    }
                }
                return (data, response)
            }
        } catch {
            log("LibreLinkUp: server error: \(error.localizedDescription)")
            throw error
        }
    }


    func getPatientGraph() async throws -> (Any, URLResponse, [LibreLinkUpGlucose]) {
        var request = URLRequest(url: URL(string: "\(siteURL)/\(connectionsEndpoint)/\(await main.settings.libreLinkUpPatientId)/graph")!)
        var authenticatedHeaders = headers
        authenticatedHeaders["authorization"] = await "Bearer \(main.settings.libreLinkUpToken)"
        for (header, value) in authenticatedHeaders {
            request.setValue(value, forHTTPHeaderField: header)
        }
        debugLog("LibreLinkUp: URL request: \(request.url!.absoluteString), authenticated headers: \(authenticatedHeaders)")
        var history: [LibreLinkUpGlucose] = []
        do {
            let (data, response) = try await URLSession.shared.data(for: request)
            debugLog("LibreLinkUp: response data: \(data.string)")
            do {
                if let json = try JSONSerialization.jsonObject(with: data) as? [String: Any],
                   let data = json["data"] as? [String: Any],
                   let connection = data["connection"] as? [String: Any] {
                    log("LibreLinkUp: connection data: \(connection)")
                    if let activeSensors = data["activeSensors"] as? [String: Any] {
                        log("LibreLinkUp: active sensors: \(activeSensors)")
                    }
                    if let sensor = connection["sensor"] as? [String: Any],
                       let sn = sensor["sn"] as? String,
                       let a = sensor["a"] as? Int {
                        log("LibreLinkUp: sensor serial: \(sn), activation date: \(Date(timeIntervalSince1970: Double(a))) (timestamp = \(a))")
                    }
                    let formatter = DateFormatter()
                    formatter.dateFormat = "M/d/yyyy h:mm:ss a"
                    var id = 1
                    if let graphData = data["graphData"] as? [[String: Any]] {
                        _ = graphData.map { glucoseMeasurement in
                            if let measurementData = try? JSONSerialization.data(withJSONObject: glucoseMeasurement),
                               let measurement = try? JSONDecoder().decode(GlucoseMeasurement.self, from: measurementData) {
                                history.append(LibreLinkUpGlucose(glucose: Glucose(measurement.valueInMgPerDl, id: id, date: formatter.date(from: measurement.timestamp)!, source: "LibreLinkUp"), color: measurement.measurementColor))
                                log("LibreLinkUp: graph measurement #\(id): \(measurement) (JSON: \(glucoseMeasurement))")
                                id += 1
                            }
                        }
                    }
                    if let glucoseMeasurement = connection["glucoseMeasurement"] as? [String: Any],
                       let measurementData = try? JSONSerialization.data(withJSONObject: glucoseMeasurement),
                       let measurement = try? JSONDecoder().decode(GlucoseMeasurement.self, from: measurementData) {
                        log("LibreLinkUp: last glucose measurement: \(measurement) (JSON: \(glucoseMeasurement))")
                        history.append(LibreLinkUpGlucose(glucose: Glucose(measurement.valueInMgPerDl, id: id, date: formatter.date(from: measurement.timestamp)!, source: "LibreLinkUp"), color: measurement.measurementColor))
                    }
                    log("LibreLinkUp: graph values: \(history.map { ($0.glucose.id, $0.glucose.value, $0.glucose.date.shortDateTime, $0.color) })")
                }
                return (data, response, history)
            } catch {
                log("LibreLinkUp: error while decoding response: \(error.localizedDescription)")
                throw LibreLinkUpError.jsonDecoding
            }
        } catch {
            log("LibreLinkUp: server error: \(error.localizedDescription)")
            throw LibreLinkUpError.noConnection
        }
    }

}
