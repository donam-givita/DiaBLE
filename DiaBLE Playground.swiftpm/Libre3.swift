import Foundation


// https://insulinclub.de/index.php?thread/33795-free-three-ein-xposed-lsposed-modul-f%C3%BCr-libre-3-aktueller-wert-am-sperrbildschir/&postID=655055#post655055

extension String {
    /// Converts a LibreView account ID string into a receiverID
    /// i.e. "2977dec2-492a-11ea-9702-0242ac110002" -> 524381581
    var fnv32Hash: UInt32 { UInt32(self.reduce(0) { 0xFFFFFFFF & (UInt64($0) * 0x811C9DC5) ^ UInt64($1.asciiValue!) }) }
}


class Libre3: Sensor {


    enum State: UInt8, CustomStringConvertible {
        case manufacturing      = 0    // PATCH_STATE_MANUFACTURING

        /// out of package, not activated yet
        case storage            = 1    // PATCH_STATE_STORAGE

        case insertionDetection = 2    // PATCH_STATE_INSERTION_DETECTION
        case insertionFailed    = 3    // PATCH_STATE_INSERTION_FAILED

        /// advertising via BLE already 10/15 minutes after activation
        case paired             = 4    // PATCH_STATE_PAIRED

        /// if Trident is not run on the 15th day, still advertising further than 12 hours, almost 24
        case expired            = 5    // PATCH_STATE_EXPIRED

        /// Trident sent the shutdown command as soon as run on the 15th day or
        /// the sensor stopped advertising via BLE by itself on the 16th day anyway
        case terminated         = 6    // PATCH_STATE_TERMINATED_NORMAL

        /// detected for a sensor that fell off
        case error              = 7    // PATCH_STATE_ERROR

        case errorTerminated    = 8    // PATCH_STATE_ERROR_TERMINATED

        var description: String {
            switch self {
            case .manufacturing:      return "Manufacturing"
            case .storage:            return "Not activated"
            case .insertionDetection: return "Insertion detection"
            case .insertionFailed:    return "Insertion failed"
            case .paired:             return "Paired"
            case .expired:            return "Expired"
            case .terminated:         return "Terminated"
            case .error:              return "Error"
            case .errorTerminated:    return "Terminated (error)"
            }
        }
    }


    enum LifeState: Int, CustomStringConvertible {  // SensorLifeState
        case missing         = 1    // MISSING
        case warmup          = 2    // WARMUP
        case ready           = 3    // READY
        case expired         = 4    // EXPIRED
        case active          = 5    // ACTIVE
        case ended           = 6    // ENDED
        case insertionFailed = 7    // INSERTION_FAILED

        var description: String {
            switch self {
            case .missing:         return "missing"
            case .warmup:          return "warmup"
            case .ready:           return "ready"
            case .expired:         return "expired"
            case .active:          return "active"
            case .ended:           return "ended"
            case .insertionFailed: return "insertion failed"
            }
        }
    }


    enum Condition: Int, CustomStringConvertible {   // SensorCondition
        case ok      = 0    // LIBRE3_SENSOR_CONDITION_OK        - OK
        case invalid = 1    // LIBRE3_SENSOR_CONDITION_INVALID   - INVALID

        /// Early Signal Attenuation
        case esa     = 2    // LIBRE3_SENSOR_CONDITION_ESA_CHECK - ESA

        var description: String {
            switch self {
            case .ok:      return "OK"
            case .invalid: return "invalid"
            case .esa:     return "ESA"
            }
        }
    }


    enum ProductType: Int, CustomStringConvertible {
        case others = 1
        case sensor = 4

        var description: String {
            switch self {
            case .others: return "OTHERS"
            case .sensor: return "SENSOR"
            }
        }
    }


    enum ResultRange: Int, CustomStringConvertible {
        case `in`  = 0    // IN_RANGE
        case below = 1    // BELOW_RANGE
        case above = 2    // ABOVE_RANGE

        var description: String {
            switch self {
            case .in:    return "in range"
            case .below: return "below range"
            case .above: return "above range"
            }
        }
    }


    // TODO: var members, struct references, enums

    // libre3DPCRLInterface

    struct ActivationInfo {
        let signatureActivation: Int
        let signatureEnableBle: Int
        let wearDuration: Int
        let obpState: Int
    }


    struct PatchInfo {
        let NFC_Key: Int
        let localization: Int  // 1: Europe, 2: US
        let generation: Int
        let wearDuration: Int
        let warmupTime: Int
        let productType: ProductType
        let state: State
        let fwVersion: Data
        let compressedSN: Data
        let securityVersion: Int
    }


    struct ErrorData {
        let errorCode: Int
        let data: Data
    }


    struct GlucoseData {
        let lifeCount: UInt16
        let readingMgDl: UInt16
        let dqError: UInt16
        let historicalLifeCount: UInt16
        let historicalReading: UInt16
        let projectedGlucose: UInt16
        let historicalReadingDQError: UInt16
        let rateOfChange: UInt16
        let trend: OOP.TrendArrow
        let esaDuration: UInt16
        let temperatureStatus: Int
        let actionableStatus: Int
        let glycemicAlarmStatus: OOP.Alarm
        let glucoseRangeStatus: ResultRange
        let sensorCondition: Condition
        let uncappedCurrentMgDl: Int
        let uncappedHistoricMgDl: Int
        let temperature: Int
        let fastData: Data
    }


    struct HistoricalData {
        let reading: Int
        let dqError: Int
        let lifeCount: Int
    }


    // - The payload to append to `A8` to activate a sensor (CMD_SWITCH_RECEIVER)
    //   is formed by the activation time - 1 (4 bytes), the `receiverID` (4 bytes)
    //   and a final CRC (NFC_ACTIVATION_COMMAND_PAYLOAD_SIZE = 10 bytes)
    // - The 18-byte reply starts with the dummy bytes `A5 00` and ends in a CRC16

    struct ActivationResponse {
        let bdAddress: Data         // 6 bytes
        let BLE_Pin: Data           // 4 bytes
        let activationTime: UInt32  // 4 bytes
    }


    struct EventLog {
        let lifeCount: Int
        let errorData: Int
        let eventData: Int
        let index: Int      // 255 means no data

        //        struct EventLog {
        //            int16_t lifeCount;
        //            int16_t errorData;
        //            int16_t eventData;
        //            int8_t index; // index==255 means no data
        //            } __attribute__ ((packed));
    }


    struct FastData {
        let lifeCount: Int
        let uncappedReadingMgdl: Int
        let uncappedHistoricReadingMgDl: Int
        let dqError: Int
        let temperature: Int
        let rawData: Data

        //        struct fastData {
        //            uint16_t lifeCount;
        //            uint8_t rawData[8];
        //            uint16_t readingMgDl;
        //            uint16_t historicMgDl;
        //            int getHistoricLifeCount() const {
        //                return round((lifeCount-19.0)/5.0)*5; //  -17?
        //                };
        //            } __attribute__ ((packed));
        //        static_assert(sizeof(fastData)==14);
        //
        // B43E7E091F4071140000B600B500:
        //   B43E: lifeCount 16052 (0x3EB4)
        //   7E091F4071140000: rawData
        //   B600: readingMgDl 182
        //   B500: historicMgDl 181
    }


    struct PatchStatus {
        let patchState: State
        let totalEvents: Int
        let lifeCount: Int
        let errorData: Int
        let eventData: Int
        let index: UInt8
        let currentLifeCount: Int
        let stackDisconnectReason: UInt8
        let appDisconnectReason: UInt8

        // PatchStatus FC2C00000D002104FC2C1603:
        //   FC2C: lifeCount 11516 (0x2CFC)
        //   0000: errorData
        //   000D: evenData 4013 (?)
        //   21: index 33
        //   04: patchState 4
        //   FC2C: currentLlifeCount 11516 (0x2CFC)
        //   16: stackDisconnectReason 22
        //   03: appDisconnectReason 3
    }


    struct InitParam {
        let activationTime: UInt32
        var firstConnect: Bool
        let serialNumber: String
        var lastLifeCountReceived: Int
        let hybridModeEnabled: Bool
        let dataFile: Any
        let blePIN: Data
        var lastEventReceived: Int
        let deviceAddress: Data
        let warmupDuration: Int
        let wearDuration: Int
        var lastHistoricLifeCountReceived: Int
        let exportedKAuth: Data
        let securityVersion: Int
    }


    enum PacketType: UInt8 {
        case controlCommand   = 0    // PACKET_TYPE_CONTROL_COMMAND
        case controlResponse  = 1    // PACKET_TYPE_CONTROL_RESPONSE
        case patchStatus      = 2    // PACKET_TYPE_PATCH_STATUS
        case currentGlucose   = 3    // PACKET_TYPE_CURRENT_GLUCOSE
        case backfillHistoric = 4    // PACKET_TYPE_BACKFILL_HISTORIC
        case backfillClinical = 5    // PACKET_TYPE_BACKFILL_CLINICAL
        case eventLog         = 6    // PACKET_TYPE_EVENT_LOG
        case factoryData      = 7    // PACKET_TYPE_FACTORY_DATA
    }

    static let packetDescriptors: [[UInt8]] = [
        [0x00, 0x00, 0x00],
        [0x00, 0x00, 0x0F],
        [0x00, 0x00, 0xF0],
        [0x00, 0x0F, 0x00],
        [0x00, 0xF0, 0x00],
        [0x0F, 0x00, 0x00],
        [0xF0, 0x00, 0x00],
        [0x44, 0x00, 0x00]
    ]


    struct BCSecurityContext {
        let packetDescriptorArray: [[UInt8]] = packetDescriptors
        var key: Data    = Data(count: 16)
        var iv_enc: Data = Data(count: 8)
        var nonce: Data  = Data(count: 13)
        var outCryptoSequence: UInt16 = 0

        // when decrypting initialize:
        // nonce[0...1]: outCryptoSequence
        // nonce[2...4]: packetDesciptors(packetType)
        // nonce[5...12]: iv_enc
        // taglen = 4
    }


    struct CGMSensor {
        var sensor: Sensor
        var deviceType: Int
        var cryptoLib: Any
        var securityContext: Int    // ISecurityContext
        var patchEphemeral: Data
        var r1: Data
        var r2: Data
        var nonce1: Data
        var kEnc: Data
        var ivEnc: Data
        var exportedkAuth: Data
        var securityLibInitialized: Bool
        var isPreAuthorized: Bool
        var initParam: InitParam
        var securityVersion: Int
    }


    enum UUID: String, CustomStringConvertible, CaseIterable {

        /// Advertised primary data service
        case data = "089810CC-EF89-11E9-81B4-2A2AE2DBCCE4"

        /// Requests data by writing 13 bytes embedding a "patch control command" (7 bytes)
        /// and a final sequential Int (starting by 01 00) since it is enqueued
        /// Notifies at the end of the data stream 10 bytes ending in the enqueued id
        /// (for example 01 00 and 02 00 when receiving historic and clinical data on 195A and 1AB8)
        case patchControl = "08981338-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify", "Write"]

        // Receiving "Encryption is insufficient" error when activating notifications before the security commands
        /// Notifies one or more 18-byte packets during a connection
        case patchStatus = "08981482-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify", "Read"]

        /// Notifies every minute 35 bytes as two packets of 15 + 20 bytes ending in a sequential id
        case oneMinuteReading = "0898177A-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify"]

        /// Notifies a first stream of historic data
        /// Very probably 6 readings of 3 bytes are indexed in each packet (12 readings = 2 packets per hour) and sent as FastData on .clinicalData
        /// (`ABT_HISTORICAL_POINTS_PER_NOTIFICATION` = 6)
        case historicalData = "0898195A-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify"]

        /// Notifies a second longer stream of clinical data (max 120 packets when reconnecting aftert some hours)
        case clinicalData = "08981AB8-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify"]

        /// Notifies 20 + 20 bytes towards the end of activation
        /// Notifies 20 bytes when shutting down a sensor (CTRL_CMD_SHUTDOWN_PATCH)
        /// and at the first connection after activation
        case eventLog = "08981BEE-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify"]

        /// Notifies the final stream of data during activation
        case factoryData = "08981D24-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify"]

        /// Security service
        case security = "0898203A-EF89-11E9-81B4-2A2AE2DBCCE4"

        /// - Writes a single byte command as defined in libre3SecurityConstants' `CMD_`
        /// - May notify two bytes: the successful status (also defined as `CMD_READY/DONE/FAILURE`)
        ///   and the effective length of the payload streamed on 22CE / 23FA
        /// - 01: very first command when activating a sensor
        /// - 02: written immediately after 01
        /// - 03: third command sent during activation
        /// - 04: notified immediately after 03
        /// - 08: read the final 67-byte session info, notifies 08 43 -> 22CE notifies 67 bytes + prefixes
        /// - 09: during activation notifies A0 8C -> 23FA notifies 140 bytes + prefixes
        /// - 0D: during activation is written before 0E
        /// - 0E: during activation notifies 0F 41 -> 23FA notifies 65 bytes + prefixes
        /// - 11: read the 23-byte security challenge, notifies 08 17
        case securityCommands = "08982198-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify", "Write"]

        /// Notifies the 23-byte security challenge + prefixes
        /// Writes the 40-byte challenge response + prefixes
        /// Notifies the 67-byte session info + prefixes
        /// The first two of the last seven notified bytes (16 + 7, 60 + 7) are a progressive Int since activation
        case challengeData = "089822CE-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify", "Write"]

        /// Writes and notifies 20-byte packets during activation and repairing a sensor
        case certificateData = "089823FA-EF89-11E9-81B4-2A2AE2DBCCE4"  // ["Notify", "Write"]

        // TODO:
        case debug = "08982400-EF89-11E9-81B4-2A2AE2DBCCE4"
        case bleLogin = "F001"

        var description: String {
            switch self {
            case .data:             return "data service"
            case .patchControl:     return "patch control"
            case .patchStatus:      return "patch status"
            case .oneMinuteReading: return "one-minute reading"
            case .historicalData:   return "historical data"
            case .clinicalData:     return "clinical data"
            case .eventLog:         return "event log"
            case .factoryData:      return "factory data"
            case .security:         return "security service"
            case .securityCommands: return "security commands"
            case .challengeData:    return "challenge data"
            case .certificateData:  return "certificate data"
            case .debug:            return "debug service"
            case .bleLogin:         return "BLE login"
            }
        }
    }

    class var knownUUIDs: [String] { UUID.allCases.map(\.rawValue) }


    // - maximum packet size is 20
    // - notified packets are prefixed by 00, 01, 02, ...
    // - written packets are prefixed by 00 00, 12 00, 24 00, 36 00, ...
    // - data packets end in a sequential Int: 01 00, 02 00, ...
    //
    // Connection:
    // enable notifications for 2198, 23FA and 22CE
    // write  2198  11
    // notify 2198  08 17
    // notify 22CE  20 + 5 bytes        // 23-byte challenge
    // write  22CE  20 + 20 + 6 bytes   // 40-byte challenge response
    // write  2198  08
    // notify 2198  08 43
    // notify 22CE  20 * 3 + 11 bytes   // 67-byte session info (wrapped kAuth?)
    // enable notifications for 1338, 1BEE, 195A, 1AB8, 1D24, 1482
    // notify 1482  18-byte packets     // patch status
    // enable notifications for 177A
    // write  1338  13 bytes            // command ending in 01 00
    // notify 177A  15 + 20 bytes       // one-minute reading
    // notify 195A  20-byte packets     // historical data
    // notify 1338  10 bytes            // ending in 01 00
    // write  1338  13 bytes            // command ending in 02 00
    // notify 1AB8  20-byte packets     // clinical data
    // notify 1338  10 bytes            // ending in 02 00
    //
    // Activation:
    // enable notifications for 2198, 23FA and 22CE
    // write  2198  01
    // write  2198  02
    // write  23FA  20 * 9 bytes        // 162-byte fixed certificate data
    // write  2198  03
    // notify 2198  04                  // certificate accepted event
    // write  2198  09
    // notify 2198  0A 8C               // certificate ready event
    // notify 23FA  20 * 7 + 8 bytes    // 140-byte payload
    // write  2198  0D
    // write  23FA  20 * 3 + 13 bytes   // 65-byte payload
    // write  2198  0E
    // notify 2198  0F 41               // ephemeral ready event
    // notify 23FA  20 * 3 + 9 bytes    // 65-byte paylod
    // write  2198  11
    // notify 2198  08 17
    // notify 22CE  20 + 5 bytes        // 23-byte challenge
    // write  22CE  20 * 2 + 6 bytes    // 40-byte challenge response
    // write  2198  08
    // notify 2198  08 43
    // notify 22CE  20 * 3 + 11 bytes   // 67-byte session info (wrapped kAuth?)
    // enable notifications for 1338, 1BEE, 195A, 1AB8, 1D24, 1482
    // notify 1482  18 bytes            // patch status
    // enable notifications for 177A
    // write  1338  13 bytes            // command ending in 01 00
    // notify 1BEE  20 + 20 bytes       // event log
    // notify 1338  10 bytes            // ending in 01 00
    // write  1338  13 bytes            // command ending in 02 00
    // notify 1D24  20 * 10 + 17 bytes  // 195-byte factory data
    // notify 1338  10 bytes            // ending in 02 00
    //
    // Shutdown:
    // write  1338  13 bytes            // command ending in 03 00
    // notify 1BEE  20 bytes            // event log
    // notify 1338  10 bytes            // ending in 03 00
    // write  1338  13 bytes            // command ending in 04 00


    /// Single byte command written to the .securityCommands characteristic 0x2198
    enum SecurityCommand: UInt8, CustomStringConvertible {

        // can be sent sequentially during both the initial activation and when repairing a sensor
        case security_01 = 0x01
        case security_02 = 0x02
        case security_03 = 0x03
        case security_09 = 0x09
        case security_0D = 0x0D
        case security_0E = 0x0E

        /// final command to get a 67-byte session info
        case getSessionInfo = 0x08

        /// first command sent when reconnecting
        case readChallenge  = 0x11

        var description: String {
            switch self {
            case .security_01:    return "security 0x01 command"
            case .security_02:    return "security 0x02 command"
            case .security_03:    return "security 0x03 command"
            case .security_09:    return "security 0x09 command"
            case .security_0D:    return "security 0x0D command"
            case .security_0E:    return "security 0x0E command"
            case .getSessionInfo: return "get session info"
            case .readChallenge:  return "read security challenge"
            }
        }
    }

    enum SecurityEvent: UInt8, CustomStringConvertible {

        case unknown             = 0x00
        case certificateAccepted = 0x04
        case challengeLoadDone   = 0x08
        case certificateReady    = 0x0A
        case ephemeralReady      = 0x0F

        var description: String {
            switch self {
            case .unknown:             return "unknown [TODO]"
            case .certificateAccepted: return "certificate accepted"
            case .challengeLoadDone:   return "challenge load done"
            case .certificateReady:    return "certificate ready"
            case .ephemeralReady:      return "ephemeral ready"
            }
        }
    }

    /// 13 bytes written to the .patchControl characteristic 0x1338:
    /// - PATCH_CONTROL_COMMAND_SIZE = 7
    /// - a final sequential Int starting by 01 00 since it is enqueued
    enum ControlCommand {
        /// - 010001 EC2C 0000 requests historical data from lifeCount 11500 (0x2CEC)
        case historic(Data)       // type 1 - CTRL_CMD_HISTORIC

        /// Requests past clinical data
        /// - 010101 9B48 0000 requests clinical data from lifeCount 18587 (0x489B)
        case backfill(Data)       // type 2 - CTRL_CMD_BACKFILL

        /// - 040100 0000 0000
        case eventLog(Data)       // type 3 - CTRL_CMD_EVENTLOG

        /// - 060000 0000 0000
        case factoryData(Data)    // type 4 - CTRL_CMD_FACTORY_DATA

        case shutdownPatch(Data)  // type 5 - CTRL_CMD_SHUTDOWN_PATCH
    }

    var receiverId: UInt32 = 0    // fnv32Hash of LibreView ID string

    var blePIN: Data = Data()    // 4 bytes returned by the activation command

    var buffer: Data = Data()
    var currentControlCommand:  ControlCommand?
    var currentSecurityCommand: SecurityCommand?
    var lastSecurityEvent: SecurityEvent = .unknown
    var expectedStreamSize = 0

    var outCryptoSequence: UInt16 = 0


    func parsePatchInfo() {

        let securityVersion = UInt16(patchInfo[0...1])
        let localization    = UInt16(patchInfo[2...3])
        let generation      = UInt16(patchInfo[4...5])
        log("Libre 3: security version: \(securityVersion) (0x\(securityVersion.hex)), localization: \(localization) (0x\(localization.hex)), generation: \(generation) (0x\(generation.hex))")

        region = SensorRegion(rawValue: Int(localization)) ?? .unknown

        let wearDuration = patchInfo[6...7]
        maxLife = Int(UInt16(wearDuration))
        log("Libre 3: wear duration: \(maxLife) minutes (\(maxLife.formattedInterval), 0x\(maxLife.hex))")

        let fwVersion = patchInfo.subdata(in: 8 ..< 12)
        firmware = "\(fwVersion[3]).\(fwVersion[2]).\(fwVersion[1]).\(fwVersion[0])"
        log("Libre 3: firmware version: \(firmware)")

        let productType = Int(patchInfo[12])  // 04 = SENSOR
        log("Libre 3: product type: \(ProductType(rawValue: productType)?.description ?? "unknown") (0x\(productType.hex))")

        // TODO: verify
        let warmupTime = patchInfo[13]
        log("Libre 3: warmup time: \(warmupTime * 5) minutes (0x\(warmupTime.hex) * 5?)")

        let sensorState = patchInfo[14]
        // TODO: manage specific Libre 3 states
        state = SensorState(rawValue: sensorState <= 2 ? sensorState: sensorState - 1) ?? .unknown
        log("Libre 3: specific state: \(State(rawValue: sensorState)!.description.lowercased()) (0x\(sensorState.hex)), state: \(state.description.lowercased()) ")

        let serialNumber = Data(patchInfo[15...23])
        serial = serialNumber.string
        log("Libre 3: serial number: \(serial) (0x\(serialNumber.hex))")

    }


    func send(securityCommand cmd: SecurityCommand) {
        log("Bluetooth: sending to \(type) \(transmitter!.peripheral!.name ?? "(unnamed)") `\(cmd.description)` command 0x\(cmd.rawValue.hex)")
        currentSecurityCommand = cmd
        transmitter!.write(Data([cmd.rawValue]), for: UUID.securityCommands.rawValue, .withResponse)
    }


    func parsePackets(_ data: Data) -> (Data, String) {
        var payload = Data()
        var str = ""
        var offset = data.startIndex
        var offsetEnd = offset
        let endIndex = data.endIndex
        while offset < endIndex {
            str += data[offset].hex + "  "
            _ = data.formIndex(&offsetEnd, offsetBy: 20, limitedBy: endIndex)
            str += data[offset + 1 ..< offsetEnd].hexBytes
            payload += data[offset + 1 ..< offsetEnd]
            _ = data.formIndex(&offset, offsetBy: 20, limitedBy: endIndex)
            if offset < endIndex { str += "\n" }
        }
        return (payload, str)
    }


    func write(_ data: Data, for uuid: UUID = .challengeData) {
        let packets = (data.count - 1) / 18 + 1
        for i in 0 ... packets - 1 {
            let offset = i * 18
            let id = Data([UInt8(offset & 0xFF), UInt8(offset >> 8)])
            let packet = id + data[offset ... min(offset + 17, data.count - 1)]
            debugLog("Bluetooth: writing packet \(packet.hexBytes) to \(transmitter!.peripheral!.name!)'s \(uuid.description) characteristic")
            transmitter!.write(packet, for: uuid.rawValue, .withResponse)
        }
    }


    /// called by Abbott Transmitter class
    func read(_ data: Data, for uuid: String) {

        switch UUID(rawValue: uuid) {

        case .patchControl:
            if data.count == 10 {
                let suffix = data.suffix(2).hex
                // TODO: manage enqueued id
                if buffer.count % 20 == 0 {
                    if suffix == "0100" {
                        log("\(type) \(transmitter!.peripheral!.name!): received \(buffer.count/20) packets of historical data")
                        // TODO
                    } else if suffix == "0200" {
                        log("\(type) \(transmitter!.peripheral!.name!): received \(buffer.count/20) packets of clinical data")
                        // TODO
                    }
                } else {
                    var packets = [Data]()
                    for i in 0 ..< (buffer.count + 19) / 20 {
                        packets.append(Data(buffer[i * 20 ... min(i * 20 + 17, buffer.count - 3)]))
                    }
                    if buffer.count == 217 {
                        log("\(type) \(transmitter!.peripheral!.name!): received \(packets.count) packets of factory data, payload: \(Data(packets.joined()).hexBytes)")
                    }
                }
                buffer = Data()
                currentControlCommand = nil
            }

            // The Libre 3 sends every minute 35 bytes as two packets of 15 + 20 bytes
            // The final Int is a sequential id
        case .oneMinuteReading:
            if buffer.count == 0 {
                buffer = Data(data)
            } else {
                buffer += data
                if buffer.count == 35 {
                    let payload = buffer.prefix(33)
                    let id = UInt16(buffer.suffix(2))
                    log("\(type) \(transmitter!.peripheral!.name!): received \(buffer.count) bytes of \(UUID(rawValue: uuid)!) (payload: \(payload.count) bytes): \(payload.hex), id: \(id.hex)")
                    buffer = Data()
                }
            }

        case .historicalData, .clinicalData, .eventLog, .factoryData:
            if buffer.count == 0 {
                buffer = Data(data)
            } else {
                buffer += data
            }
            let payload = data.prefix(18)
            let id = UInt16(data.suffix(2))
            log("\(type) \(transmitter!.peripheral!.name!): received \(data.count) bytes of \(UUID(rawValue: uuid)!) (payload: \(payload.count) bytes): \(payload.hex), id: \(id.hex)")

        case .patchStatus:
            if buffer.count == 0 {
                let payload = data.prefix(16)
                let id = UInt16(data.suffix(2))
                log("\(type) \(transmitter!.peripheral!.name!): received \(data.count) bytes of \(UUID(rawValue: uuid)!) (payload: \(payload.count) bytes): \(payload.hex), id: \(id.hex)")
            }
            // TODO


        case .securityCommands:
            lastSecurityEvent = SecurityEvent(rawValue: data[0]) ?? .unknown
            log("\(type) \(transmitter!.peripheral!.name!): security event: \(lastSecurityEvent)\(lastSecurityEvent == .unknown ? " (" + data[0].hex + ")" : "")")
            if data.count == 2 {
                expectedStreamSize = Int(data[1] + data[1] / 20 + 1)
                log("\(type) \(transmitter!.peripheral!.name!): expected response size: \(expectedStreamSize) bytes (payload: \(data[1]) bytes)")
                // TEST: when sniffing Trident:
                if data[1] == 23 {
                    currentSecurityCommand = .readChallenge
                } else if data[1] == 67 {
                    currentSecurityCommand = .getSessionInfo
                }
                // TODO: 140 and 65 .certificateData bytes received during activation/repair
            }
            if currentSecurityCommand == .security_03 && lastSecurityEvent == .certificateAccepted {
                send(securityCommand: .security_09)
            }


        case .challengeData, .certificateData:
            if buffer.count == 0 {
                buffer = Data(data)
            } else {
                buffer += data
            }

            if buffer.count == expectedStreamSize {

                let (payload, hexDump) = parsePackets(buffer)
                log("\(type) \(transmitter!.peripheral!.name!): received \(buffer.count) bytes of \(UUID(rawValue: uuid)!) (payload: \(payload.count) bytes):\n\(hexDump)")

                switch currentSecurityCommand {

                case .security_09:
                    send(securityCommand: .security_0D)
                    // TODO

                case .readChallenge:

                    // getting: df4bd2f783178e3ab918183e5fed2b2b c201 0000 e703a7
                    //                                        increasing

                    outCryptoSequence = UInt16(payload[16...17])
                    log("\(type) \(transmitter!.peripheral!.name!): security challenge: \(payload.hex) (crypto sequence #: \(outCryptoSequence.hex))")

                    let r1 = payload.prefix(16)
                    let nonce1 = payload.suffix(7)
                    let r2 = Data((0 ..< 16).map { _ in UInt8.random(in: UInt8.min ... UInt8.max) })
                    debugLog("\(type): r1: \(r1.hex), r2: \(r2.hex), nonce1: \(nonce1.hex)")

                    // TODO:
                    // let response = process2(command: 7, nonce1, Data(r1 + r2 + blePIN))


                    if main.settings.userLevel < .test { // TEST: sniff Trident
                        log("\(type) \(transmitter!.peripheral!.name!): writing 40-zero challenge response")

                        let challengeData = Data(count: 40)
                        write(challengeData)
                        // writing .getSessionInfo makes the Libre 3 disconnect
                        send(securityCommand: .getSessionInfo)
                    }

                case .getSessionInfo:
                    outCryptoSequence = UInt16(payload[60...61])
                    log("\(type) \(transmitter!.peripheral!.name!): session info: \(payload.hex) (crypto sequence #: \(outCryptoSequence.hex))")
                    transmitter!.peripheral?.setNotifyValue(true, for: transmitter!.characteristics[UUID.patchStatus.rawValue]!)
                    log("\(type) \(transmitter!.peripheral!.name!): enabling notifications on the patch status characteristic")
                    currentSecurityCommand = nil


                default:
                    break // currentSecurityCommand
                }

                buffer = Data()
                expectedStreamSize = 0

            }

        default:
            break  // uuid
        }

    }


    func parseCurrentReading(_ data: Data) {  // -> GlucoseData
        // TODO
        // 062DEE00FCFF0000945CF12CF0000BEE00F000010C530E72482F130000 (29 bytes):
        // 062D: lifeCount 11526 (0x2D06)
        // EE00: readingMgDl 238
        // FCFF: rateOfChange -4 (2**16 - 0xFFFC)
        // 0000: esaDuration
        // 945C: projectedGlucose 23700 (0x5C94)
        // F12C: historicalLifeCount 11505 (0x2CF1)
        // F000: historicalReading 240
        // 0B: 00001 011 (bitfields 3: trend, 5: rest)
        // EE00: uncappedCurrentMgDl 238
        // F000: uncappedHistoricMgDl 240
        // 010C: temperature 3073 (0x0C01)
        // 530E72482F130000: fastData
    }


    // TODO: separate CMD_ACTIVATE_SENSOR and CMD_SWITCH_RECEIVER
    var activationNFCCommand: NFCCommand {
        var parameters: Data = Data()
        parameters += ((activationTime != 0 ? activationTime : UInt32(Date().timeIntervalSince1970)) - 1).data
        parameters += (receiverId != 0 ? receiverId : main.settings.libreLinkUpPatientId.fnv32Hash).data
        parameters += parameters.crc16.data

        // - A8 changes the BLE PIN on an activated sensor and returns the error 0x1B0 on an expired one.
        // - A0 returns the current BLE PIN on an activated sensor, the error 0x1B2 on an expired one with a
        //   firmware like 1.1.13.30 and a new BLE PIN with older firmwares like 1.0.25.30...
        let code = patchInfo[14] == State.storage.rawValue ? 0xA8 : 0xA0

        return NFCCommand(code: code, parameters: parameters, description: "activate")
    }


    func pair() {
        send(securityCommand: .security_01)
        send(securityCommand: .security_02)
        let certificate = "03 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F 10 00 01 5F 14 9F E1 01 00 00 00 00 00 00 00 00 04 E2 36 95 4F FD 06 A2 25 22 57 FA A7 17 6A D9 0A 69 02 E6 1D DA FF 40 FB 36 B8 FB 52 AA 09 2C 33 A8 02 32 63 2E 94 AF A8 28 86 AE 75 CE F9 22 CD 88 85 CE 8C DA B5 3D AB 2A 4F 23 9B CB 17 C2 6C DE 74 9E A1 6F 75 89 76 04 98 9F DC B3 F0 C7 BC 1D A5 E6 54 1D C3 CE C6 3E 72 0C D9 B3 6A 7B 59 3C FC C5 65 D6 7F 1E E1 84 64 B9 B9 7C CF 06 BE D0 40 C7 BB D5 D2 2F 35 DF DB 44 58 AC 7C 46 15".bytes
        write(certificate, for: .certificateData)
        send(securityCommand: .security_03)
        // TODO
    }


    // https://github.dev/j-kaltes/Juggluco/blob/primary/Common/src/libre3/java/tk/glucodata/ECDHCrypto.java

    let appCertificates = [
        "03 00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10 00 01 5f 14 9f e1 01 00 00 00 00 00 00 00 00 04 27 51 fd 1e f4 2b 14 5a 52 c5 93 ae 6b 5a 75 58 8a 9f 7e af 1c 0f 99 85 f9 93 d5 8f 14 7b b8 41 68 42 24 49 96 37 92 dc 43 f3 84 47 ef eb bb eb 4a 53 b3 25 5c 0b e0 fe 1f 23 58 44 a3 d3 29 9e ba 97 b8 e6 c3 17 09 39 f2 77 8f 64 86 6f 06 6d eb 91 5d d6 62 9e ee 47 30 a1 e1 4c ab 75 c1 8c 4f ec 53 f8 85 4c 87 64 3a 76 4f 40 87 ae c0 39 4c 21 0c 18 86 5a 8f f4 5a dc 37 27 f4 8b 53 a7",
        "03 03 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10 00 01 61 89 76 55 01 00 00 00 00 00 00 00 00 04 82 42 be 33 f1 a3 30 88 01 12 fa 62 cc 48 42 a4 3d 12 04 92 2a d2 01 d8 77 5b b2 26 f6 11 f7 5b 0e f3 d5 bc 6c c4 31 7c aa 45 75 84 ab 00 3f 17 12 33 60 89 d3 a4 f2 98 38 ed 0d c6 66 de ae a2 d6 5a 00 df ff 5d 7b ca e2 16 55 e3 02 e3 45 8e 77 4d aa aa ca 87 af 75 f1 b8 78 84 b1 8d 4c e8 75 d0 d1 08 c9 03 a8 34 47 1a 4f f6 74 b2 d3 0b cb a0 62 37 30 14 b7 78 6e 44 37 b1 77 ae c3 c8"
    ]

    let appPrivateKeys = [
        "43 F2 C5 3D 02 00 00 00 01 00 00 01 00 00 00 00 00 96 95 77 4B 9A 04 53 51 FB 16 0B EC 5F 49 DB DF 57 45 48 50 67 78 6C DE 13 08 83 D8 3D F6 96 81 4E A4 1E A7 D2 F8 D2 30 84 76 B4 9A 01 2C 4E BB 00 00 00 01 7D 4D 61 51 06 81 BF 22 31 67 6B 90 3B 17 ED 53 98 0D 98 FE 68 2E E4 4B 00 00 00 20 5B 7B 96 AA E3 FF 22 2D 4D 37 1E 7A A6 2C FA A0 9B F8 42 1C C1 DA 7B 7B 0D F9 34 33 CC 49 FB 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 96 9E DB 28 BF 6F C0 FF 76 0A F0 95 92 1D 9F 1E 3B 16 77 B5",
        "1D 85 8F 06 02 00 00 00 01 00 00 01 00 00 00 00 00 96 95 77 4B 9A 04 53 51 FB 16 0B EC 5F 49 DB DF 0D C0 CE 52 FB 56 5F 84 E6 13 B8 19 AE D3 DF 91 9C E3 0A 3D D4 C0 12 EA EA 70 C8 CC E2 89 58 40 00 00 00 01 9B C7 79 12 3D 86 60 B3 7E 99 B4 BF 10 C1 C4 2C 11 35 B3 02 5B C9 B2 EF 00 00 00 20 E3 A1 FB 17 80 A1 63 80 2A A0 FE B1 F2 00 AC 26 9A 42 B2 29 03 8C A6 E1 4D 40 EF BC 6B 7B 6A E8 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CE C6 67 E6 C0 9D 20 F5 C0 33 D0 61 B5 FC A1 8B 39 92 06 8B"
    ]

    let patchSingningKeys = [
        "04 B6 9D 17 34 F5 E4 25 BC C0 57 6A D1 F7 27 C1 31 1C 90 B6 EA 98 6F 00 6E 7E 9F 90 96 F6 A8 28 4F 12 BF 7D DF E1 54 A3 F1 D4 5A 0F 27 34 EC AB CA 6B 9E B5 6E E4 EC CA 87 85 3A D8 53 B6 A6 41 80",
        "04 A2 D8 47 89 90 94 5F 70 A9 57 0A DE 07 B1 55 BC 90 4D 2D 38 06 47 58 7B 12 39 17 01 30 9B D1 0B 59 90 C4 C4 7C 47 F1 F0 80 46 CB 6F 2D E0 74 8D 1F A7 F7 37 90 EC 9D 8D D6 37 21 27 78 52 88 38"
    ]


    // https://github.dev/j-kaltes/Juggluco/blob/primary/Common/src/libre3/java/tk/glucodata/Libre3GattCallback.java

    // Juggluco wrappers to Trident's process1() and process2() in liblibre3extension.so (processint() and processbar())
    //
    // public native boolean initECDH(byte[] bArr, int i):
    //     public boolean initECDH(byte[] exportedKAuth, int level) {
    //         if(level >= max_keys)
    //             return true;
    //         securityVersion = level;
    //         int resp1 = Natives.processint(1, null, null);
    //         byte[] privatekey= LIBRE3_APP_PRIVATE_KEYS[level];
    //         int resp2 = Natives.processint(2, privatekey, exportedKAuth);
    //         return true;
    //   }
    //
    // byte[] getAppCertificate() {
    //        return LIBRE3_APP_CERTIFICATES_B[securityVersion];
    //  }
    //
    // setPatchCertificate(byte[] bArr):
    //     Natives.processint(4, input, null);
    //
    // generateEphemeralKeys():
    //     var evikeys = Natives.processbar(5, null, null);
    //
    // boolean generateKAuth(byte[] bArr):
    //     Natives.processint(6, patchEphemeral, null);
    //     var uit = new byte[evikeys.length + 1];
    //     arraycopy(evikeys, 0, uit, 1, evikeys.length);
    //     uit[0] = (byte)0x4;
    //     return uit;
    //
    // encrypt challenge response:
    //     arraycopy(rdtData, 0, r1, 0, 16);
    //     arraycopy(rdtData, 16, nonce1, 0, 7);
    //     (new SecureRandom()).nextBytes(r2)
    //     byte[] uit = new byte[36];
    //     arraycopy(r1, 0, uit, 0, 16);
    //     arraycopy(r2, 0, uit, 16, 16);
    //     byte[] pin = Natives.getpin(sensorptr);
    //     arraycopy(pin, 0, uit, 32, 4);
    //     var encrypted = Natives.processbar(7, nonce1, uit);
    //
    // decrypt 67-byte exported kAuth ("session info" wrappedkAuth):
    //     arraycopy(rdtData, 0, first, 0, 60);
    //     arraycopy(rdtData, 60, nonce, 0, 7);
    //     byte[] decr = Natives.processbar(8, nonce, first);
    //     var backr2 = copyOfRange(decr, 0, 16);
    //     var backr1 = copyOfRange(decr, 16, 32);
    //     var kEnc = copyOfRange(decr, 32, 48);
    //     var ivEnc = copyOfRange(decr, 48, 56);
    //
    // byte[] exportAuthorizationKey():
    //     byte[] AuthKey = Natives.processbar(9, null, null);  // 149 bytes
    //     cryptptr = initcrypt(cryptptr, kEnc, ivEnc);


    // https://github.dev/j-kaltes/Juggluco/blob/primary/Common/src/main/cpp/libre3/loadlibs.cpp

    func process1(command: Int, _ d1: Data?, _ d2: Data?) -> Int {
        return 0
    }

    func process2(command: Int, _ d1: Data?, _ d2: Data?) -> Data {
        return Data()
    }


    // MARK: - Constants


    // Libre3BLESensor
    static let STATE_NONE           = 0
    static let STATE_AUTHENTICATING = 5
    static let STATE_AUTHORIZING    = 8
    static let MAX_WRITE_OFFSET_DATA_LENGTH = 18
    static let HISTORIC_POINT_LATENCY = 17


    // Trident MSLibre3Constants
    static let LIBRE3_HISTORIC_LIFECOUNT_INTERVAL = 5
    static let LIBRE3_MAX_HISTORIC_READING_IN_PACKET = 10
    static let LIBRE3_DQERROR_MAX = 0xFFFF
    static let LIBRE3_DQERROR_DQ              = 0x8000  // 32768
    static let LIBRE3_DQERROR_SENSOR_TOO_HOT  = 0xA000  // 40960
    static let LIBRE3_DQERROR_SENSOR_TOO_COLD = 0xC000  // 49152
    static let LIBRE3_DQERROR_OUTLIER_FILTER_DELTA = 2


    // Libre3.libre3DPCRLInterface
    static let ABT_NO_ERROR = 0x0
    static let ABT_ERR3_TIME_CHANGE = 0x2e
    static let ABT_ERR3_SENSOR_EXPIRED = 0x33
    static let ABT_ERR3_SENSOR_RSSI_ERROR = 0x39
    static let ABT_ERR3_BLE_TURNED_OFF = 0x4b
    static let ABT_ERR3_REPLACE_SENSOR_ERROR = 0x16d
    static let ABT_ERR3_SENSOR_FALL_OUT_ERROR = 0x16e
    static let ABT_ERR3_INCOMPATIBLE_SENSOR_TYPE_ERROR = 0x16f
    static let ABT_ERR3_SENSOR_CAL_CODE_ERROR = 0x170
    static let ABT_ERR3_SENSOR_DYNAMIC_DATA_CRC_ERROR = 0x171
    static let ABT_ERR3_SENSOR_FACTORY_DATA_CRC_ERROR = 0x172
    static let ABT_ERR3_SENSOR_LOG_DATA_CRC_ERROR = 0x173
    static let ABT_ERR3_SENSOR_NOT_YOURS_ERROR = 0x174
    static let ABT_ERR3_REALTIME_RESULT_DQ_ERROR = 0x175
    static let ABT_ERR3_SENSOR_ESA_DETECTED = 0x17c
    static let ABT_ERR3_SENSOR_NOT_IN_GLUCOSE_MEASUREMENT_STATE = 0x181
    static let ABT_ERR3_BLE_PACKET_ERROR = 0x182
    static let ABT_ERR3_INVALID_DATA_SIZE_ERROR = 0x183
    static let ABT_ERR9_LIB_NOT_INITIALIZED_ERROR = 0x3d6
    static let ABT_ERR9_MEMORY_SIZE_ERROR = 0x3d7
    static let ABT_ERR9_NV_MEMORY_CRC_ERROR = 0x3da
    static let ABT_ERROR_DATA_BYTES = 0x8
    static let LIBRE3_DP_LIBRARY_PARSE_ERROR = ~0x0
    static let NFC_ACTIVATION_COMMAND_PAYLOAD_SIZE = 0xa
    static let PATCH_CONTROL_BACKFILL_GREATER_SIZE = 0xb
    static let ABT_HISTORICAL_POINTS_PER_NOTIFICATION = 0x6
    static let LIB3_RECORD_ORDER_NEWEST_TO_OLDEST = 0x0
    static let LIB3_RECORD_ORDER_OLDEST_TO_NEWEST = 0x1
    static let PATCH_CONTROL_COMMAND_SIZE = 0x7
    static let PATCH_NFC_EVENT_LOG_NUM_EVENTS = 0x3
    static let ABT_EVENT_LOGS_PER_NOTIFICATION = 0x2
    static let ABT_ERR10_INVALID_USER = 0x582
    static let ABT_ERR10_DUPLICATE_USER = 0x596
    static let ABT_ERR10_INVALID_TOKEN = 0x5a6
    static let ABT_ERR10_INVALID_DEVICE = 0x5aa
    static let ABT_ERR0_BLE_TURNED_OFF = 0x1f7
    static let SCRATCH_PAD_BUFFER_SIZE = 0x400
    static let CRL_NV_MEMORY_SIZE = 0x400
    static let LIBRE3_DEFAULT_WARMUP_TIME = 0x3c
    static let MAX_SERIAL_NUMBER_SIZE = 0xf


    // Trident ISecurityContext
    static let IV_ENC_SIZE = 8
    static let MODE_DECRYPT = 2
    static let MODE_ENCRYPT = 1
    static let PACKET_TYPE_CONTROL_COMMAND = 0
    static let PACKET_TYPE_CONTROL_RESPONSE = 1
    static let PACKET_TYPE_PATCH_STATUS = 2
    static let PACKET_TYPE_CURRENT_GLUCOSE = 3
    static let PACKET_TYPE_BACKFILL_HISTORIC = 4
    static let PACKET_TYPE_BACKFILL_CLINICAL = 5
    static let PACKET_TYPE_EVENT_LOG = 6
    static let PACKET_TYPE_FACTORY_DATA = 7


    // Trident MSLibre3ActivationResponse
    static let LIBRE3_ACTIVATION_ERROR_INCOMPATIBLE     = 1
    static let LIBRE3_ACTIVATION_ERROR_TERMINATED       = 2
    static let LIBRE3_ACTIVATION_ERROR_SCAN_ERROR       = 3
    static let LIBRE3_ACTIVATION_ERROR_SENSOR_ERROR     = 4
    static let LIBRE3_ACTIVATION_ERROR_NOT_YOURS        = 5
    static let LIBRE3_ACTIVATION_ERROR_INSERTION_FAILED = 6
    static let LIBRE3_ACTIVATION_ERROR_SENSOR_EXPIRED   = 7


    // Libre3SensorDriver
    static let L3_ACTIVATION_ERROR_CRC_FAILURE: UInt = 0xDEADBEEF    // Trident
    static let L3_ACTIVATION_ERROR_LOW_BATTERY: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_MANUFACTURING_STATE: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_INSERTION_DETECTION_STATE: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_PAIRED_STATE: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_EXPIRED_STATE: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_TERMINATION_NORMAL: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_TERMINATION_ERROR: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_NFC_COMMUNICATION_FAILURE: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_CRL_ERROR: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_REPLACE_SENSOR: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_INCOMPATIBLE_SENSOR: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_SENSOR_NOT_YOURS: UInt = 0xDEADBEEF
    static let L3_ACTIVATION_ERROR_NOT_MEASUREMENT_STATE: UInt = 0xDEADBEEF


    // Trident libre3SecurityConstants
    static let CERT_PATCH_DATE_STAMP_LENGTH: UInt = 0xDEADBEEF
    static let CERT_PATCH_LENGTH: UInt = 0xDEADBEEF
    static let CERT_PATCH_VERSION_LENGTH: UInt = 0xDEADBEEF
    static let CERT_PUBLIC_KEY_LENGTH: UInt = 0xDEADBEEF
    static let CERT_SERIAL_NUMBER_LENGTH: UInt = 0xDEADBEEF
    static let CERT_SIGNATURE_LENGTH: UInt = 0xDEADBEEF

    static let CMD_AUTHORIZATION_CHALLENGE: UInt8 = 42
    static let CMD_AUTHORIZED: UInt8 = 42
    static let CMD_AUTHORIZE_ECDSA: UInt8 = 42
    static let CMD_AUTHORIZE_SYMMETRIC: UInt8 = 42
    static let CMD_CERT_ACCEPTED: UInt8 = 42
    static let CMD_CERT_READY: UInt8 = 42
    static let CMD_CHALLENGE_LOAD_DONE: UInt8 = 42
    static let CMD_ECDH_COMPLETE: UInt8 = 42
    static let CMD_ECDH_START: UInt8 = 42
    static let CMD_EPHEMERAL_KEY_READY: UInt8 = 42
    static let CMD_EPHEMERAL_LOAD_DONE: UInt8 = 42
    static let CMD_IV_AUTHENTICATED_SEND: UInt8 = 42
    static let CMD_IV_READY: UInt8 = 42
    static let CMD_KEY_AGREEMENT: UInt8 = 42
    static let CMD_LOAD_CERT_DATA: UInt8 = 42
    static let CMD_LOAD_CERT_DONE: UInt8 = 42
    static let CMD_MODE_SWITCH: UInt8 = 42
    static let CMD_SEND_CERT: UInt8 = 42
    static let CMD_VERIFICATION_FAILURE: UInt8 = 42

    static let CRYPTO_KEY_LENGTH_BYTES: UInt = 0xDEADBEEF
    static let CRYPTO_MAC_LENGTH_BYTES: UInt = 0xDEADBEEF
    static let L3_SEC_ERROR_AUTHENTICATION_FAILED: UInt = 0xDEADBEEF
    static let L3_SEC_ERROR_AUTHORIZATION_FAILED: UInt = 0xDEADBEEF
    static let L3_SEC_ERROR_DECRYPTION_FAILED: UInt = 0xDEADBEEF
    static let L3_SEC_ERROR_ENCRYPTION_FAILED: UInt = 0xDEADBEEF
    static let L3_SEC_ERROR_INVALID_CERTIFICATE: UInt = 0xDEADBEEF
    static let L3_SEC_ERROR_LIB_ERROR: UInt = 0xDEADBEEF

}


/// whiteCryption Secure Key Box
struct Libre3SKBCryptoLib {
    let g_engine: Int
    let CRYPTO_EXTENSION_INIT_LIB: Int
    let CRYPTO_RETURN_SUCCESS: Int
    let CRYPTO_EXTENSION_INIT_ECDH: Int
    let CRYPTO_EXTENSION_SET_PATCH_ATTRIB: Int
    let CRYPTO_EXTENSION_SET_CERTIFICATE: Int
    let CRYPTO_EXTENSION_GENERATE_EPHEMERAL: Int
    let CRYPTO_EXTENSION_GENERATE_KAUTH: Int
    let CRYPTO_EXTENSION_ENCRYPT: Int
    let CRYPTO_EXTENSION_DECRYPT: Int
    let CRYPTO_EXTENSION_EXPORT_KAUTH: Int
    let PUBLIC_KEY_TYPE_UNCOMPRESSED: UInt8
    let CRYPTO_PUBLIC_KEY_SIZE: Int
    let CRYPTO_EXTENSION_WRAP_DIAGNOSTIC_DATA: Int
    let CRYPTO_RETURN_INVALID_PARAM: Int
    let patchSigningKey: Data
    let securityVersion: Int
    let max_key_index: Int
    let app_private_key: Data
    let app_certificate: Data
}
