import Foundation
import CoreBluetooth


// https://github.com/LoopKit/CGMBLEKit
// https://github.com/LoopKit/G7SensorKit
// https://github.com/Faifly/xDrip/blob/develop/xDrip/Services/Bluetooth/DexcomG6/
// https://github.com/JohanDegraeve/xdripswift/blob/master/xdrip/BluetoothTransmitter/CGM/Dexcom/G5/CGMG5Transmitter.swift
// https://github.com/NightscoutFoundation/xDrip/tree/master/app/src/main/java/com/eveningoutpost/dexdrip/G5Model/
// https://github.com/NightscoutFoundation/xDrip/blob/master/app/src/main/java/com/eveningoutpost/dexdrip/services/G5CollectionService.java


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
    override class var dataReadCharacteristicUUID: String  { UUID.communication.rawValue }


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
        case authRequestTx = 0x01

        case authRequestRx = 0x03
        case authChallengeTx = 0x04
        case authChallengeRx = 0x05
        case keepAlive = 0x06 // auth; setAdvertisementParametersTx for control
        case bondRequest = 0x07 // FaiFly: case pairRequestTx = 0x07
        case pairRequestRx = 0x08 // comes in after having accepted the bluetooth pairing request

        // Control
        case disconnectTx = 0x09

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
        case calibrationDataTx = 0x32
        case calibrationDataRx = 0x33
        case calibrateGlucoseTx = 0x34
        case calibrateGlucoseRx = 0x35

        case glucoseHistoryTx = 0x3e

        case resetTx = 0x42
        case resetRx = 0x43

        case transmitterVersionTx = 0x4a
        case transmitterVersionRx = 0x4b

        case glucoseG6Tx = 0x4e  // also G7
        case glucoseG6Rx = 0x4f

        case glucoseBackfillTx = 0x50
        case glucoseBackfillRx = 0x51

        case backfillFinished = 0x59  // G7

        case keepAliveRx = 0xFF


        var data: Data { Data([rawValue]) }
    }


    var activationDate: Date = Date.distantPast

    var authenticated: Bool = false
    var bonded: Bool = false


    var opCode: Opcode = .unknown

    override func read(_ data: Data, for uuid: String) {

        if uuid == UUID.authentication.rawValue ||  uuid == UUID.control.rawValue {
            opCode = Opcode(rawValue: data[0]) ?? .unknown
            log("\(name): opCode: \(String(describing: opCode)) (0x\(data[0].hex))")
        }

        switch UUID(rawValue: uuid) {

        case .authentication:

            switch opCode {

            case .authRequestRx:
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
                bonded = data[2] == 1    // data[2] != 2
                log("\(name): authenticated: \(authenticated), bonded: \(bonded)")

                // TODO
                if bonded {
                    peripheral?.setNotifyValue(true, for: characteristics[Dexcom.UUID.communication.rawValue]!)
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
                let status = data[1]  // 0: ok, 0x81: lowBattery  TODO: TransmitterStatus
                let sequence = UInt32(data[2..<6])
                let timestamp = UInt32(data[6..<10])
                let date = activationDate + TimeInterval(timestamp)
                let glucoseBytes = UInt16(data[10..<12])
                let glucoseIsDisplayOnly = (glucoseBytes & 0xf000) > 0
                let glucose = glucoseBytes & 0xfff
                let state = data[12]  // CalibrationState, DexcomAlgorithmState
                let trend = Int8(bitPattern: data[13])
                log("\(name): glucose: status: 0x\(status.hex), sequence: \(sequence), valid CRC: \(data.dropLast(2).crc == UInt16(data.suffix(2))), timestamp: \(timestamp.formattedInterval), date: \(date), glucose: \(glucose), is display only: \(glucoseIsDisplayOnly), state: \(DexcomAlgorithmState(rawValue: state)?.description ?? "unknown") (0x\(state.hex)), trend: \(trend)")

            case .calibrationDataRx:
                break
                // TODO

            case .glucoseBackfillRx:
                let status = data[1]   // 0: ok, 0x81: lowBattery  TODO: TransmitterStatus
                let backfillStatus = data[2]
                let identifier = data[3]
                let startTime = TimeInterval(UInt32(data[4..<8]))
                let endTime = TimeInterval(UInt32(data[8..<12]))
                let bufferLength = UInt32(data[12..<16])
                let bufferCRC = UInt16(data[16..<18])
                log("\(name): backfill: status: \(status), backfill status: \(backfillStatus), identifier: \(identifier), start time: \(startTime.formattedInterval), end time: \(endTime.formattedInterval), buffer length: \(bufferLength), buffer CRC: \(bufferCRC.hex), computed CRC: TODO")
                // TODO

            default:
                break
            }


            // https://github.com/LoopKit/CGMBLEKit/blob/dev/CGMBLEKit/Messages/GlucoseBackfillMessage.swift
            // https://github.com/Faifly/xDrip/blob/develop/xDrip/Services/Bluetooth/DexcomG6/Logic/Messages/Incoming/DexcomG6BackfillStream.swift

        case .backfill:
            let index = data[0]
            log("\(name): backfill stream: received packet # \(index)")
            // TODO


        default:
            break
        }

        if let sensor = sensor as? DexcomOne {
            sensor.read(data, for: uuid)
        }
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


// TODO: https://github.com/JohanDegraeve/xdripswift/blob/master/xdrip/BluetoothTransmitter/CGM/Dexcom/Generic/DexcomAlgorithmState.swift

enum DexcomAlgorithmState: UInt8, CustomStringConvertible {
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
}
