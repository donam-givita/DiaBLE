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
    }


    var activationTime: Date = Date.distantPast
    var isPaired: Bool = false


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

            case .authChallengeRx:
                let isAuthenticated = data[1] == 1
                let isBonded = data[2] == 1    // data[2] != 2
                log("\(name): authenticated: \(isAuthenticated), bonded: \(isBonded)")

                // TODO
                isPaired = isBonded
                if isPaired {
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
                break
                // TODO

            case .glucoseG6Rx:
                break
                // TODO

            case .calibrationDataRx:
                break
                // TODO

            case .glucoseBackfillRx:
                let status = data[1]
                let backfillStatus = data[2]
                let identifier = data[3]
                let startTime = TimeInterval(UInt32(data[4..<8]))
                let endTime = TimeInterval(UInt32(data[8..<12]))
                let bufferLength = UInt32(data[12..<16])
                let bufferCRC = UInt16(data[16..<18])
                log("\(name): backfill: status: \(status), backfill status: \(backfillStatus), identifier: \(identifier), start time: \(startTime), end time: \(endTime), buffer length: \(bufferLength), buffer CRC: \(bufferCRC.hex), computed CRC: TODO")
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
            break
            // TODO

        default:
            break

        }

    }

}

