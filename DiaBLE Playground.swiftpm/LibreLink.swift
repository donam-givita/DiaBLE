import Foundation


// https://github.com/timoschlueter/nightscout-librelink-up


enum LibreLinkUpError: LocalizedError {
    case noConnection
    case jsonDecoding

    var errorDescription: String? {
        switch self {
        case .noConnection: return "no connection"
        case .jsonDecoding: return "JSON decoding"
        }
    }
}


struct AuthTicket: Codable {
    let token: String
    let expires: Int
    let duration: Int
    let invitations: Int?
}


class LibreLinkUp: Logging {

    var main: MainDelegate!

    let siteURL = "https://api-eu.libreview.io"
    let loginEndpoint = "llu/auth/login"
    let connectionsEndpoint = "llu/connections"

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
                let json = try JSONSerialization.jsonObject(with: data)
                if let dict = json as? [String: Any] {
                    if let data = dict["data"] as? [String: Any] {
                        if let authTicketDict = data["authTicket"] as? [String: Any] {
                            let authTicket = AuthTicket(token: authTicketDict["token"] as? String ?? "",
                                                        expires: authTicketDict["expires"] as? Int ?? 0,
                                                        duration: authTicketDict["duration"] as? Int ?? 0,
                                                        invitations: authTicketDict["invitations"] as? Int)
                            self.log("LibreLinkUp: authTicket: \(authTicket), expires on \(Date(timeIntervalSince1970: Double(authTicket.expires)))")
                            DispatchQueue.main.async {
                                self.main.settings.libreLinkUpToken = authTicket.token
                                self.main.settings.libreLinkUpTokenExpires = Double(authTicket.expires)
                            }
                        }
                    }
                    return (data, response)
                }
            } catch {
                log("LibreLinkUp: error while decoding response: \(error.localizedDescription)")
                throw LibreLinkUpError.jsonDecoding
            }
        } catch {
            log("LibreLinkUp: server error: \(error.localizedDescription)")
            throw LibreLinkUpError.noConnection
        }
        return (["": ""], URLResponse())
    }


    func requestConnections() async throws -> (Any, URLResponse) {
        var request = URLRequest(url: URL(string: "\(siteURL)/\(connectionsEndpoint)")!)
        var authenticatedHeaders = headers
        authenticatedHeaders["authorization"] = await "Bearer \(main.settings.libreLinkUpToken)"
        for (header, value) in authenticatedHeaders {
            request.setValue(value, forHTTPHeaderField: header)
        }
        debugLog("LibreLinkUp: URL request: \(request.url!.absoluteString), authenticated headers: \(authenticatedHeaders)")
        do {
            let (data, response) = try await URLSession.shared.data(for: request)
            debugLog("LibreLinkUp: response data: \(data.string)")
            do {
                let json = try JSONSerialization.jsonObject(with: data)
                if let dict = json as? [String: Any] {
                    if let data = dict["data"] as? [[String: Any]] {
                        log("LibreLinkUp: connections data: \(data)")
                        if data.count == 1 {
                            let connection = data[0]
                            let patientId = connection["patientId"] as! String
                            log("LibreLinkUp: patient Id: \(patientId)")
                            request.url = URL(string: "\(siteURL)/\(connectionsEndpoint)/\(patientId)/graph")!
                            let (data, response) = try await URLSession.shared.data(for: request)
                            debugLog("LibreLinkUp: patient graph data: \(data.string)")
                            let json = try JSONSerialization.jsonObject(with: data)
                            if let dict = json as? [String: Any] {
                                if let data = dict["data"] as? [String: Any] {
                                    if let connection = data["connection"] as? [String: Any] {
                                        log("LibreLinkUp: connection: \(connection)")
                                    }
                                    if let activeSensors = data["activeSensors"] as? [String: Any] {
                                        log("LibreLinkUp: active sensors: \(activeSensors)")
                                    }
                                    if let glucoseMeasurement = connection["glucoseMeasurement"] as? [String: Any] {
                                        log("LibreLinkUp: last glucose measurement: \(glucoseMeasurement)")
                                    }
                                    if let graphData = data["graphData"] as? [[String: Any]] {
                                        log("LibreLinkUp: measurements: \(graphData.count)")
                                    }
                                }
                            }
                            return (data, response)
                        }
                    }
                    return (data, response)
                }
            } catch {
                log("LibreLinkUp: error while decoding response: \(error.localizedDescription)")
                throw LibreLinkUpError.jsonDecoding
            }
        } catch {
            log("LibreLinkUp: server error: \(error.localizedDescription)")
            throw LibreLinkUpError.noConnection
        }
        return (["": ""], URLResponse())
    }

}
