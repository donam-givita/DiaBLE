import Foundation
import CoreBluetooth


// https://github.com/LoopKit/CGMBLEKit
// https://github.com/LoopKit/G7SensorKit
// https://github.com/Faifly/xDrip/blob/develop/xDrip/Services/Bluetooth/DexcomG6/
// https://github.com/JohanDegraeve/xdripswift/blob/master/xdrip/BluetoothTransmitter/CGM/Dexcom/G5/CGMG5Transmitter.swift
// https://github.com/NightscoutFoundation/xDrip/tree/master/app/src/main/java/com/eveningoutpost/dexdrip/G5Model/
// https://github.com/NightscoutFoundation/xDrip/blob/master/app/src/main/java/com/eveningoutpost/dexdrip/services/G5CollectionService.java
// https://github.com/NightscoutFoundation/xDrip/blob/master/app/src/main/java/com/eveningoutpost/dexdrip/services/Ob1G5CollectionService.java
// https://github.com/NightscoutFoundation/xDrip/tree/master/libkeks/src/main/java/jamorham/keks


class Dexcom: Transmitter {
    override class var type: DeviceType { DeviceType.transmitter(.dexcom) }
    override class var name: String { "Dexcom" }

    enum UUID: String, CustomStringConvertible, CaseIterable {
        case advertisement  = "FEBC"

        case data           = "F8083532-849E-531C-C594-30F1F86A4EA5"
        case communication  = "F8083533-849E-531C-C594-30F1F86A4EA5"
        case control        = "F8083534-849E-531C-C594-30F1F86A4EA5"
        case authentication = "F8083535-849E-531C-C594-30F1F86A4EA5"
        case backfill       = "F8083536-849E-531C-C594-30F1F86A4EA5"

        // Unknown attribute present on older G6 transmitters
        case unknown1       = "F8083537-849E-531C-C594-30F1F86A4EA5"
        // Updated G6 characteristic (read/notify)
        case unknown2       = "F8083538-849E-531C-C594-30F1F86A4EA5"

        var description: String {
            switch self {
            case .advertisement:  return "advertisement"
            case .data:           return "data service"
            case .communication:  return "communication"
            case .control:        return "control"
            case .authentication: return "authentication"
            case .backfill:       return "backfill"
            case .unknown1:       return "unknown 1"
            case .unknown2:       return "unknown 2"
            }
        }
    }


    override class var knownUUIDs: [String] { UUID.allCases.map(\.rawValue) }

    override class var dataServiceUUID: String { UUID.data.rawValue }
    override class var dataWriteCharacteristicUUID: String { UUID.control.rawValue }
    override class var dataReadCharacteristicUUID: String  { UUID.control.rawValue }


    override func parseManufacturerData(_ data: Data) {
        if data.count > 0 {
            // TODO
        }
        log("Bluetooth: advertised \(name)'s data: \(data.hex)")
    }


    // https://github.com/LoopKit/CGMBLEKit/blob/dev/CGMBLEKit/Opcode.swift
    // https://github.com/Faifly/xDrip/blob/develop/xDrip/Services/Bluetooth/DexcomG6/Logic/DexcomG6OpCode.swift

    enum Opcode: UInt8 {

        case unknown = 0x00

        // Auth
        case authRequestTx = 0x01   // TxIdChallenge
        case authRequest2Tx = 0x02  // Dexcom ONE/G7 AppKeyChallenge
        case authRequestRx = 0x03   // ChallengeReply
        case authChallengeTx = 0x04
        case authChallengeRx = 0x05 // StatusReply
        case keepAlive = 0x06       // KeepConnectionAlive; setAdvertisementParametersTx for control
        case bondRequest = 0x07     // pairRequestTx
        case pairRequestRx = 0x08

        // Control
        case disconnectTx = 0x09

        case exchangePakePayload = 0x0a  // Auth Dexcom ONE
        case changeAppLevelKeyTx = 0x0f
        case appLevelKeyAcceptedTx = 0x10

        case setAdvertisementParametersRx = 0x1c

        case firmwareVersionTx = 0x20
        case firmwareVersionRx = 0x21
        case batteryStatusTx = 0x22
        case batteryStatusRx = 0x23
        case transmitterTimeTx = 0x24
        case transmitterTimeRx = 0x25
        case sessionStartTx = 0x26
        case sessionStartRx = 0x27
        case sessionStopTx = 0x28
        case sessionStopRx = 0x29

        case sensorDataTx = 0x2E
        case sensorDataRx = 0x2F

        case glucoseTx = 0x30
        case glucoseRx = 0x31
        case calibrationDataTx = 0x32  // G6Bounds
        case calibrationDataRx = 0x33
        case calibrateGlucoseTx = 0x34
        case calibrateGlucoseRx = 0x35

        case glucoseHistoryTx = 0x3e

        case resetTx = 0x42
        case resetRx = 0x43

        case transmitterVersionTx = 0x4a
        case transmitterVersionRx = 0x4b

        case glucoseG6Tx = 0x4e  // TODO: rename to G7 .glucoseRx / .egv
        case glucoseG6Rx = 0x4f

        case glucoseBackfillTx = 0x50  // DataStream
        case glucoseBackfillRx = 0x51

        case transmitterVersionExtendedTx = 0x52  // Dexcom ONE

        case backfillFinished = 0x59  // G7
        case unknown1_G7 = 0xEA       // TODO

        case keepAliveRx = 0xFF


        var data: Data { Data([rawValue]) }
    }


    var activationDate: Date = Date.distantPast

    var authenticated: Bool = false
    var bonded: Bool = false


    var opCode: Opcode = .unknown

    override func read(_ data: Data, for uuid: String) {

        if uuid == UUID.authentication.rawValue || uuid == UUID.control.rawValue {
            opCode = Opcode(rawValue: data[0]) ?? .unknown
            log("\(name): opCode: \(String(describing: opCode)) (0x\(data[0].hex))")
        }

        switch UUID(rawValue: uuid) {

        case .authentication:

            switch opCode {

            case .authRequestRx:

                // TODO: Dexcom ONE/G7 J-PAKE
                // https://github.com/NightscoutFoundation/xDrip/commit/7ee3473 ("Add keks library")
                // https://github.com/NightscoutFoundation/xDrip/blob/master/libkeks/src/main/java/jamorham/keks/Calc.java
                // https://github.com/NightscoutFoundation/xDrip/blob/master/libkeks/src/main/java/jamorham/keks/Plugin.java

                let tokenHash = data.subdata(in: 1 ..< 9)
                let challenge = data.subdata(in: 9 ..< 17)
                log("\(name): tokenHash: \(tokenHash.hex), challenge: \(challenge.hex)")
                if main.settings.userLevel < .test { // not sniffing
                    let doubleChallenge = challenge + challenge
                    let cryptKey = "00\(serial)00\(serial)".data(using: .utf8)!
                    let encrypted = doubleChallenge.aes128Encrypt(keyData: cryptKey)!
                    let challengeResponse = Opcode.authChallengeTx.data + encrypted[0 ..< 8]
                    log("\(name): replying to challenge for transmitter serial \(serial): doubled challenge: \(doubleChallenge.hex), key: \(cryptKey.hex), encrypted: \(encrypted.hex), response: \(challengeResponse.hex)")
                    write(challengeResponse, for: UUID.authentication.rawValue, .withResponse)
                }


            case .authChallengeRx:
                authenticated = data[1] == 1
                bonded = data[2] == 1    // data[2] != 2  // TODO: if data[2] == 3 needsRefresh()
                log("\(name): authenticated: \(authenticated), bonded: \(bonded)")

                // TODO
                if bonded {
                    if let communicationCharacteristic = characteristics[Dexcom.UUID.communication.rawValue] {
                        peripheral?.setNotifyValue(true, for: communicationCharacteristic)
                        peripheral?.readValue(for: communicationCharacteristic)
                    }
                    peripheral?.setNotifyValue(true, for: characteristics[Dexcom.UUID.control.rawValue]!)
                    peripheral?.setNotifyValue(true, for: characteristics[Dexcom.UUID.backfill.rawValue]!)
                }

            default:
                break

            }


        case .control:

            switch opCode {

            case .transmitterTimeRx:
                let status = data[1]  // 0: ok, 0x81: lowBattery  TODO: TransmitterStatus
                let age = TimeInterval(UInt32(data[2..<6]))
                activationDate = Date.now - age
                let sessionStartTime = TimeInterval(UInt32(data[6..<10]))
                log("\(name): transmitter status: 0x\(status.hex), age: \(age.formattedInterval), session start time: \(sessionStartTime.formattedInterval), valid CRC: \(data.dropLast(2).crc == UInt16(data.suffix(2))), activation date: \(activationDate)")


            case .glucoseG6Rx:
                if sensor?.type != .dexcomG7 {
                    let status = data[1]  // 0: ok, 0x81: lowBattery  TODO: TransmitterStatus
                    let sequence = UInt32(data[2..<6])
                    let timestamp = UInt32(data[6..<10])
                    let date = activationDate + TimeInterval(timestamp)
                    let glucoseBytes = UInt16(data[10..<12])
                    let glucoseIsDisplayOnly = (glucoseBytes & 0xf000) > 0
                    let glucose = Int(glucoseBytes & 0xfff)
                    let state = data[12]  // AlgorithmState
                    let trend = Int8(bitPattern: data[13])
                    log("\(name): glucose: status: 0x\(status.hex), sequence: \(sequence), valid CRC: \(data.dropLast(2).crc == UInt16(data.suffix(2))), timestamp: \(timestamp.formattedInterval), date: \(date), glucose: \(glucose), is display only: \(glucoseIsDisplayOnly), state: \(AlgorithmState(rawValue: state)?.description ?? "unknown") (0x\(state.hex)), trend: \(trend)")
                }


                // TODO: rename to G7 .glucoseRx / .egv
            case .glucoseG6Tx:

                // https://github.com/LoopKit/G7SensorKit/blob/main/G7SensorKit/Messages/G7GlucoseMessage.swift

                //    0  1  2 3 4 5  6 7  8  9 10 11 1213 14 15 1617 18
                //         TTTTTTTT SQSQ       AG    BGBG SS TR PRPR C
                // 0x4e 00 d5070000 0900 00 01 05 00 6100 06 01 ffff 0e
                // TTTTTTTT = timestamp
                //     SQSQ = sequence
                //       AG = age
                //     BGBG = glucose
                //       SS = algorithm state
                //       TR = trend
                //     PRPR = predicted
                //        C = calibration

                let status = data[1]
                let messageTimestamp = UInt32(data[2..<6])  // seconds since pairing of the *message*. Subtract age to get timestamp of glucose
                activationDate = Date.now - TimeInterval(messageTimestamp)
                sensor?.activationTime = UInt32(activationDate.timeIntervalSince1970)
                let sequence = UInt16(data[6..<8])
                let age = data[10] // amount of time elapsed (seconds) from sensor reading to BLE comms
                let timestamp = messageTimestamp - UInt32(age)
                let date = activationDate + TimeInterval(timestamp)
                let glucoseData = UInt16(data[12..<14])
                let glucose: UInt16? = glucoseData != 0xffff ? glucoseData & 0xfff : nil
                let state = data[14]
                let trend: Double? = data[15] != 0x7f ? Double(Int8(bitPattern: data[15])) / 10 : nil
                let glucoseIsDisplayOnly: Bool? = glucoseData != 0xffff ? (data[18] & 0x10) > 0 : nil
                let predictionData = UInt16(data[16..<18])
                let predicted: UInt16? = predictionData != 0xffff ? predictionData & 0xfff : nil
                let calibration = data[18]
                log("\(name): glucose: status: 0x\(status.hex), message timestamp: \(messageTimestamp.formattedInterval), sensor activation date: \(activationDate), sequence: \(sequence), age: \(age) seconds, timestamp: \(timestamp.formattedInterval), date: \(date), glucose: \(glucose != nil ? String(glucose!) : "nil"), is display only: \(glucoseIsDisplayOnly != nil ? String(glucoseIsDisplayOnly!) : "nil"), state: \(AlgorithmState(rawValue: state)?.description ?? "unknown") (0x\(state.hex)), trend: \(trend != nil ? String(trend!) : "nil"), predicted: \(predicted != nil ? String(predicted!) : "nil"), calibration: \(calibration.hex)")


            case .calibrationDataTx:  // G7
                // TODO: i.e. 3200014e000000000000000000010100e4000000
                break


            case .unknown1_G7:
                // TODO: i.e. ea00030100000000000200000045ffffff
                break


            case .calibrationDataRx:  // G6Bounds
                // TODO: i.e. 3300325000440114005802000000000000018ba4
                let weight = data[2]
                let calBoundError1 = UInt16(data[3...4])
                let calBoundError0 = UInt16(data[5...6])
                let calBoundMin = UInt16(data[7...8])
                let calBoundMax = UInt16(data[9...10])
                let lastBGValue = UInt16(data[11...12])
                let lastCalibrationTimeSeconds = UInt32(data[13...16])
                let autoCalibration: Bool = data[17] == 1
                let crc = UInt16(data[18...19])
                log("\(name): bounds (TODO): weight: \(weight), calBoundError1: \(calBoundError1), calBoundError0: \(calBoundError0), calBoundMin: \(calBoundMin), calBoundMax: \(calBoundMax), lastBGValue: \(lastBGValue), lastCalibrationTimeSeconds: \(lastCalibrationTimeSeconds.formattedInterval), autoCalibration: \(autoCalibration), valid CRC: \(data.dropLast(2).crc == crc)")


            case .glucoseBackfillRx:
                let status = data[1]   // 0: ok, 0x81: lowBattery  TODO: TransmitterStatus
                let backfillStatus = data[2]
                let identifier = data[3]
                let startTime = TimeInterval(UInt32(data[4..<8]))
                let endTime = TimeInterval(UInt32(data[8..<12]))
                let bufferLength = UInt32(data[12..<16])
                let bufferCRC = UInt16(data[16..<18])
                log("\(name): backfill: status: \(status), backfill status: \(backfillStatus), identifier: \(identifier), start time: \(startTime.formattedInterval), end time: \(endTime.formattedInterval), buffer length: \(bufferLength), buffer CRC: \(bufferCRC.hex), computed CRC: \(buffer.crc.hex)")
                var packets = [Data]()
                for i in 0 ..< (buffer.count + 19) / 20 {
                    packets.append(Data(buffer[i * 20 ..< min((i + 1) * 20, buffer.count)]))
                }
                // Drop the first 2 bytes from each frame and the first 4 bytes from the combined message
                let glucoseData = Data(packets.reduce(into: Data(), { $0.append($1.dropFirst(2)) }).dropFirst(4))
                var history = [Glucose]()
                for i in 0 ..< glucoseData.count / 8 {
                    let data = glucoseData.subdata(in: i * 8 ..< (i + 1) * 8)
                    // extract same fields as in .glucoseG6Rx
                    let timestamp = UInt32(data[0..<4])
                    let date = activationDate + TimeInterval(timestamp)
                    let glucoseBytes = UInt16(data[4..<6])
                    let glucoseIsDisplayOnly = (glucoseBytes & 0xf000) > 0
                    let glucose = Int(glucoseBytes & 0xfff)
                    let state = data[6]  // CalibrationState, AlgorithmState
                    let trend = Int8(bitPattern: data[7])
                    log("\(name): backfilled glucose: timestamp: \(timestamp.formattedInterval), date: \(date), glucose: \(glucose), is display only: \(glucoseIsDisplayOnly), state: \(AlgorithmState(rawValue: state)?.description ?? "unknown") (0x\(state.hex)), trend: \(trend)")
                    let item = Glucose(glucose, id: Int(Double(timestamp) / 60 / 5), date: date)
                    // TODO: manage trend and state
                    history.append(item)
                }
                log("\(name): backfilled history (\(history.count) values): \(history)")
                buffer = Data()
                // TODO


            case .backfillFinished:  // G7
                // TODO: i. e. 5900003600000010382C01D25C0100AE620100 (19 bytes)
                var packets = [Data]()
                for i in 0 ..< (buffer.count / 9) {
                    packets.append(Data(buffer[i * 9 ..< min((i + 1) * 9, buffer.count)]))
                }
                var history = [Glucose]()
                for data in packets {

                    // TODO

                    // https://github.com/LoopKit/G7SensorKit/blob/main/G7SensorKit/G7CGMManager/G7BackfillMessage.swift
                    //
                    //    0 1 2  3  4 5  6  7  8
                    //   TTTTTT    BGBG SS    TR
                    //   45a100 00 9600 06 0f fc

                    let timestamp = UInt32(data[0..<4]) // seconds since pairing
                    let date = activationDate + TimeInterval(timestamp)
                    let glucoseBytes = UInt16(data[4..<6])
                    let glucose = glucoseBytes != 0xffff ? Int(glucoseBytes & 0xfff) : nil
                    let glucoseIsDisplayOnly: Bool? = glucoseBytes != 0xffff ? (glucoseBytes & 0xf000) > 0 : nil
                    let state = data[6]
                    let trend: Double? = data[8] != 0x7f ? Double(Int8(bitPattern: data[8])) / 10 : nil
                    log("\(name): backfilled glucose: timestamp: \(timestamp.formattedInterval), date: \(date), glucose: \(glucose != nil ? String(glucose!) : "nil"), is display only: \(glucoseIsDisplayOnly != nil ? String(glucoseIsDisplayOnly!) : "nil"), state: \(AlgorithmState(rawValue: state)?.description ?? "unknown") (0x\(state.hex)), trend: \(trend != nil ? String(trend!) : "nil")")
                    if let glucose {
                        let item = Glucose(glucose, id: Int(Double(timestamp) / 60 / 5), date: date)
                        // TODO: manage trend and state
                        history.append(item)
                    }
                }
                log("\(name): backfilled history (\(history.count) values): \(history)")
                buffer = Data()
                // TODO


            case .batteryStatusRx:
                let status = data[1]
                let voltageA = Int(UInt16(data[2..<4]))
                let voltageB = Int(UInt16(data[4..<6]))
                let resistance = Int(UInt16(data[6..<8]))
                let runtime = data.count == 10 ? -1 : Int(data[8])
                // FIXME: [8...9] is a final CRC...
                let temperature = Int(data[9])
                log("\(name): battery status: status: 0x\(status.hex), static voltage A: \(voltageA), dynamic voltage B: \(voltageB), resistance: \(resistance), run time: \(runtime) days, temperature: \(temperature), valid CRC: \(data.dropLast(2).crc == UInt16(data.suffix(2)))")
                // TODO

            default:
                break
            }


            // https://github.com/LoopKit/CGMBLEKit/blob/dev/CGMBLEKit/Messages/GlucoseBackfillMessage.swift
            // https://github.com/Faifly/xDrip/blob/develop/xDrip/Services/Bluetooth/DexcomG6/Logic/Messages/Incoming/DexcomG6BackfillStream.swift

        case .backfill:
            if buffer.count == 0 {
                buffer = Data(data)
            } else {
                buffer += data
            }
            let index = sensor?.type != .dexcomG7 ? Int(data[0]) : buffer.count / 9
            log("\(name): backfill stream: received packet # \(index), partial buffer size: \(buffer.count)")


        default:
            break
        }

        if let sensor = sensor as? DexcomOne {
            sensor.read(data, for: uuid)
        }
        if let sensor = sensor as? DexcomG7 {
            sensor.read(data, for: uuid)
        }
    }


    // TODO: https://github.com/JohanDegraeve/xdripswift/blob/master/xdrip/BluetoothTransmitter/CGM/Dexcom/Generic/DexcomAlgorithmState.swift

    enum AlgorithmState: UInt8, CustomStringConvertible {
        case none = 0x00
        case sessionStopped = 0x01
        case sensorWarmup = 0x02
        case excessNoise = 0x03
        case firstOfTwoBGsNeeded = 0x04
        case secondOfTwoBGsNeeded = 0x05
        case okay = 0x06
        case needsCalibration = 0x07
        case calibrationError1 = 0x08
        case calibrationError2 = 0x09
        case calibrationLinearityFitFailure = 0x0A
        case sensorFailedDuetoCountsAberration = 0x0B
        case sensorFailedDuetoResidualAberration = 0x0C
        case outOfCalibrationDueToOutlier = 0x0D
        case outlierCalibrationRequest = 0x0E
        case sessionExpired = 0x0F
        case sessionFailedDueToUnrecoverableError = 0x10
        case sessionFailedDueToTransmitterError = 0x11
        case temporarySensorIssue = 0x12
        case sensorFailedDueToProgressiveSensorDecline = 0x13
        case sensorFailedDueToHighCountsAberration = 0x14
        case sensorFailedDueToLowCountsAberration = 0x15
        case sensorFailedDueToRestart = 0x16

        // CalStateStartUp(129),
        // CalStateFirstOfTwoCalibrationsNeeded(130),
        // CalStateHighWedgeDisplayWithFirstBg(131),
        // CalStateLowWedgeDisplayWithFirstBg(132),
        // CalStateSecondOfTwoCalibrationsNeeded(133),
        // CalStateInCalTransmitter(134),
        // CalStateInCalDisplay(135),
        // CalStateHighWedgeTransmitter(136),
        // CalStateLowWedgeTransmitter(137),
        // CalStateLinearityFitTransmitter(138),
        // CalStateOutOfCalDueToOutlierTransmitter(139),
        // CalStateHighWedgeDisplay(140),
        // CalStateLowWedgeDisplay(141),
        // CalStateLinearityFitDisplay(142),
        // CalStateSessionNotInProgress(143);

        public var description: String {
            switch self {
            case .none: return "none"
            case .sessionStopped: return "session stopped"
            case .sensorWarmup: return "sensor warmup"
            case .excessNoise: return "excess noise"
            case .firstOfTwoBGsNeeded: return "first of two BGs needed"
            case .secondOfTwoBGsNeeded: return "second of two BGs needed"
            case .okay: return "OK / calibrated"
            case .needsCalibration: return "needs calibration"
            case .calibrationError1: return "calibration error 1"
            case .calibrationError2: return "calibration error 2"
            case .calibrationLinearityFitFailure: return "calibration linearity fit failure"
            case .sensorFailedDuetoCountsAberration: return "sensor failed due to counts aberration"
            case .sensorFailedDuetoResidualAberration: return "sensor failed due to residual aberration"
            case .outOfCalibrationDueToOutlier: return "out of calibration due to outlier"
            case .outlierCalibrationRequest: return "outlier calibration request"
            case .sessionExpired: return "session expired"
            case .sessionFailedDueToUnrecoverableError: return "session failed due to unrecoverable error"
            case .sessionFailedDueToTransmitterError: return "session failed due to transmitter error"
            case .temporarySensorIssue: return "temporary sensor issue"
            case .sensorFailedDueToProgressiveSensorDecline: return "sensor failed due to progressive sensor decline"
            case .sensorFailedDueToHighCountsAberration: return "sensor failed due to high counts aberration"
            case .sensorFailedDueToLowCountsAberration: return "sensor failed due to low counts aberration"
            case .sensorFailedDueToRestart: return "sensor failed due to restart"
            }
        }
    }


    enum TrendArrow: Int,/* CustomStringConvertible, */ CaseIterable, Codable {
        case none           = 0
        case doubleUp       = 1
        case singleUp       = 2
        case fortyFiveUp    = 3
        case flat           = 4
        case fortyFiveDown  = 5
        case singleDown     = 6
        case doubleDown     = 7
        case notComputable  = 8
        case rateOutOfRange = 9
    }


    enum DataStreamType: Int,/* CustomStringConvertible, */ CaseIterable, Codable {
        // TODO
        case manifestData   = 0
        case privateData    = 1
        case encryptionInfo = 2
        case backFill       = 3
    }


}


class DexcomOne: Sensor {

    /// called by Dexcom Transmitter class
    func read(_ data: Data, for uuid: String) {

        switch Dexcom.UUID(rawValue: uuid) {

        case .communication:
            log("\(transmitter!.peripheral!.name!): received \(data.count) \(Dexcom.UUID(rawValue: uuid)!) bytes: \(data.hex)")
            // TODO

        default:
            break

        }

    }

}


class DexcomG7: Sensor {

    /// called by Dexcom Transmitter class
    func read(_ data: Data, for uuid: String) {

        switch Dexcom.UUID(rawValue: uuid) {

        case .communication:
            log("\(transmitter!.peripheral!.name!): received \(data.count) \(Dexcom.UUID(rawValue: uuid)!) bytes: \(data.hex)")
            // TODO

        default:
            break

        }

    }

}


// crcCCITTXModem: https://github.com/LoopKit/CGMBLEKit/blob/dev/CGMBLEKit/NSData+CRC.swift

extension Data {
    var crc: UInt16 {
        var crc: UInt16 = 0
        for byte in self {
            crc ^= UInt16(byte) << 8
            for _ in 0..<8 {
                if crc & 0x8000 != 0 {
                    crc = crc << 1 ^ 0x1021
                } else {
                    crc = crc << 1
                }
            }
        }
        return crc
    }
    var appendingCRC: Data { self + self.crc.data }
}


// https://github.com/JohanDegraeve/xdripswift/blob/master/xdrip/BluetoothTransmitter/CGM/Dexcom/Generic/DexcomCalibrationParameters.swift

// class com.dexcom.coresdk.transmitter.command.SensorCode
//
// Code5171; 2300, 2900
// Code5177; 2400, 2900
// Code5317; 2400, 3000
// Code5375; 2500, 3100
// Code5391; 2600, 3100
// Code5397; 2600, 3200
// Code5795; 2500, 3000
// Code5915; 3100, 3600
// Code5917; 3000, 3500
// Code5931; 2900, 3400
// Code5937; 2800, 3300
// Code5951; 3100, 3500
// Code5955; 3000, 3400
// Code7135; 2700, 3200
// Code7171; 2700, 3300
// Code7197; 2800, 3300
// Code7539; 2700, 3300
// Code9117; 2700, 3200
// Code9137; 2900, 3400
// Code9159; 2600, 3200
// Code9179; 3000, 3400
// Code9311; 2600, 3100
// Code9357; 3000, 3500
// Code9371; 2500, 3100
// Code9515; 2500, 3000
// Code9517; 3100, 3500
// Code9551; 2400, 3000
// Code9577; 2400, 2900
// Code9713; 2300, 2900
// Code9759; 3100, 3600
