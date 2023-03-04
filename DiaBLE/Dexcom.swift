import Foundation
import CoreBluetooth


// https://github.com/LoopKit/CGMBLEKit
// https://github.com/LoopKit/G7SensorKit
// https://github.com/Faifly/xDrip/tree/develop/xDrip/Model/Device
// https://github.com/JohanDegraeve/xdripswift/blob/master/xdrip/BluetoothTransmitter/CGM/Dexcom/G6Firefly/CGMG6FireflyTransmitter.swift


class Dexcom: Transmitter {
    override class var type: DeviceType { DeviceType.transmitter(.dexcom) }
    override class var name: String { "Dexcom" }

    // G6
    enum UUID: String, CustomStringConvertible, CaseIterable {
        case advertisement         = "0000FEBC-0000-1000-8000-00805F9B34FB"
        case data                  = "F8083532-849E-531C-C594-30F1F86A4EA5"
        case communication         = "F8083533-849E-531C-C594-30F1F86A4EA5"
        case writeControl          = "F8083534-849E-531C-C594-30F1F86A4EA5"
        case receiveAuthentication = "F8083535-849E-531C-C594-30F1F86A4EA5"
        case backfill              = "F8083536-849E-531C-C594-30F1F86A4EA5"

        var description: String {
            switch self {
            case .advertisement:          return "advertisement"
            case .data:                   return "data service"
            case .communication:          return "communication"
            case .writeControl:           return "write control"
            case .receiveAuthentication:  return "receive authentication"
            case .backfill:               return "backfill"
            }
        }
    }


    override class var knownUUIDs: [String] { UUID.allCases.map(\.rawValue) }

    override class var dataServiceUUID: String { UUID.data.rawValue }
    override class var dataWriteCharacteristicUUID: String { UUID.writeControl.rawValue }
    override class var dataReadCharacteristicUUID: String  { UUID.communication.rawValue }

    // TODO
    var property: Int = 0
    var info = Data()

    override func parseManufacturerData(_ data: Data) {
        if data.count > 0 {
            // TODO
        }
        log("Bluetooth: advertised \(name)'s data: \(data.hex)")
    }

    override func read(_ data: Data, for uuid: String) {

        switch UUID(rawValue: uuid) {

        default:
            if let sensor = sensor as? DexcomONE {
                sensor.read(data, for: uuid)
            }
        }
    }

}


class DexcomONE: Sensor {

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
