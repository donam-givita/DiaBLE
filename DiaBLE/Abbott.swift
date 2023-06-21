import Foundation
import CoreBluetooth


class Abbott: Transmitter {
    override class var type: DeviceType { DeviceType.transmitter(.abbott) }
    override class var name: String { "Libre" }

    enum UUID: String, CustomStringConvertible, CaseIterable {
        case abbottCustom     = "FDE3"
        case bleLogin         = "F001"
        case compositeRawData = "F002"

        var description: String {
            switch self {
            case .abbottCustom:     "Abbott custom"
            case .bleLogin:         "BLE login"
            case .compositeRawData: "composite raw data"
            }
        }
    }


    override class var knownUUIDs: [String] { UUID.allCases.map(\.rawValue) }

    override class var dataServiceUUID: String { UUID.abbottCustom.rawValue }
    override class var dataWriteCharacteristicUUID: String { UUID.bleLogin.rawValue }
    override class var dataReadCharacteristicUUID: String  { UUID.compositeRawData.rawValue }


    enum AuthenticationState: Int, CustomStringConvertible {
        case notAuthenticated   = 0
        // Gen2
        case enableNotification = 1
        case challengeResponse  = 2
        case getSessionInfo     = 3
        case authenticated      = 4
        // Gen1
        case bleLogin           = 5

        var description: String {
            switch self {
            case .notAuthenticated:   "AUTH_STATE_NOT_AUTHENTICATED"
            case .enableNotification: "AUTH_STATE_ENABLE_NOTIFICATION"
            case .challengeResponse:  "AUTH_STATE_CHALLENGE_RESPONSE"
            case .getSessionInfo:     "AUTH_STATE_GET_SESSION_INFO"
            case .authenticated:      "AUTH_STATE_AUTHENTICATED"
            case .bleLogin:           "AUTH_STATE_BLE_LOGIN"
            }
        }
    }

    var securityGeneration: Int = 0    // unknown; then 1 or 2
    var authenticationState: AuthenticationState = .notAuthenticated
    var sessionInfo = Data()    // 7 + 18 bytes

    override func parseManufacturerData(_ data: Data) {
        if data.count > 7 {
            let uid = Data(data[2...7]) + [0x07, 0xe0]
            // Gen2: doesn't match the sensor Uid, for example 0bf3b7aa48b8 != 5f5aab0100a4
            if data[7] == 0xa4 {
                sensorUid = uid
            }
            log("Bluetooth: advertised \(name)'s UID: \(uid.hex)")
        }
    }

    override func read(_ data: Data, for uuid: String) {

        switch UUID(rawValue: uuid) {

        // Gen2
        case .bleLogin:
            if authenticationState == .challengeResponse {
                if data.count == 14 {
                    log("\(name): challenge response: \(data.hex)")
                    // TODO: processChallengeResponse(), compute streamingUnlockPayload (AUTH_COMMAND_PAYLOAD_LENGTH = 19) and write it
                    authenticationState = .getSessionInfo
                }
            } else if authenticationState == .getSessionInfo {
                if data.count == 7 {
                    sessionInfo = Data(data)
                } else if data.count == 18 {
                    sessionInfo.append(data)
                    if sessionInfo.count == 25 {
                        // TODO: createSecureStreamingSession(), enable read notification
                        authenticationState = .authenticated
                    }
                }
            }


        case .compositeRawData:

            // The Libre 2 always sends 46 bytes as three packets of 20 + 18 + 8 bytes

            if data.count == 20 {
                buffer = Data()
                main.app.lastReadingDate = main.app.lastConnectionDate
                sensor!.lastReadingDate = main.app.lastConnectionDate
            }

            buffer.append(data)
            log("\(name): partial buffer size: \(buffer.count)")

            if buffer.count == 46 {
                do {
                    let bleData = try Libre2.decryptBLE(id: sensor!.uid, data: buffer)

                    let crc = UInt16(bleData[42...43])
                    let computedCRC = crc16(bleData[0...41])
                    // TODO: detect checksum failure

                    let bleGlucose = sensor!.parseBLEData(bleData)

                    let wearTimeMinutes = Int(UInt16(bleData[40...41]))

                    debugLog("Bluetooth: decrypted BLE data: 0x\(bleData.hex), wear time: 0x\(wearTimeMinutes.hex) (\(wearTimeMinutes) minutes, sensor age: \(sensor!.age.formattedInterval)), CRC: \(crc.hex), computed CRC: \(computedCRC.hex), glucose values: \(bleGlucose)")

                    let bleRawValues = bleGlucose.map(\.rawValue)
                    log("BLE raw values: \(bleRawValues)")

                    // TODO
                    if bleRawValues.contains(0) {
                        debugLog("BLE values data quality: [\n\(bleGlucose.map(\.dataQuality.description).joined(separator: ",\n"))\n]")
                        debugLog("BLE values quality flags: [\(bleGlucose.map { "0"+String($0.dataQualityFlags,radix: 2).suffix(2) }.joined(separator: ", "))]")
                    }

                    // TODO: move UI stuff to MainDelegate()

                    let bleTrend = bleGlucose[0...6].map { factoryGlucose(rawGlucose: $0, calibrationInfo: settings.activeSensorCalibrationInfo) }
                    let bleHistory = bleGlucose[7...9].map { factoryGlucose(rawGlucose: $0, calibrationInfo: settings.activeSensorCalibrationInfo) }

                    log("BLE temperatures: \((bleTrend + bleHistory).map { Double(String(format: "%.1f", $0.temperature))! })")
                    log("BLE factory trend: \(bleTrend.map(\.value))")
                    log("BLE factory history: \(bleHistory.map(\.value))")

                    main.history.rawTrend = sensor!.trend
                    let factoryTrend = sensor!.factoryTrend
                    main.history.factoryTrend = factoryTrend
                    log("BLE merged trend: \(factoryTrend.map(\.value))".replacingOccurrences(of: "-1", with: "… "))

                    // TODO: compute accurate delta and update trend arrow
                    let deltaMinutes = factoryTrend[6].value > 0 ? 6 : 7
                    let delta = (factoryTrend[0].value > 0 ? factoryTrend[0].value : (factoryTrend[1].value > 0 ? factoryTrend[1].value : factoryTrend[2].value)) - factoryTrend[deltaMinutes].value
                    main.app.trendDeltaMinutes = deltaMinutes
                    main.app.trendDelta = delta


                    main.history.rawValues = sensor!.history
                    let factoryHistory = sensor!.factoryHistory
                    main.history.factoryValues = factoryHistory
                    log("BLE merged history: \(factoryHistory.map(\.value))".replacingOccurrences(of: "-1", with: "… "))

                    // Slide the OOP history
                    // TODO: apply the following also after a NFC scan
                    let historyDelay = 2
                    if (wearTimeMinutes - historyDelay) % 15 == 0 || wearTimeMinutes - sensor!.history[1].id > 16 {
                        if main.history.values.count > 0 {
                            let missingCount = (sensor!.history[0].id - main.history.values[0].id) / 15
                            var history = [Glucose](main.history.rawValues.prefix(missingCount) + main.history.values.prefix(32 - missingCount))
                            for i in 0 ..< missingCount { history[i].value = -1 }
                            main.history.values = history
                        }
                    }

                    // TODO: complete backfill

                    main.status("\(sensor!.type)  +  BLE")

                } catch {
                    // TODO: verify crc16
                    log(error.localizedDescription)
                    main.errorStatus(error.localizedDescription)
                    buffer = Data()
                }
            }


        default:
            if let sensor = sensor as? Libre3 {
                sensor.read(data, for: uuid)
            }
        }
    }

}
