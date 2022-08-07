import Foundation


class Settings: ObservableObject {

    static let defaults: [String: Any] = [
        "preferredTransmitter": TransmitterType.none.id,
        "preferredDevicePattern": BLE.knownDevicesIds.joined(separator: " "),
        "stoppedBluetooth": false,

        "readingInterval": 5,

        "displayingMillimoles": false,
        "targetLow": 80.0,
        "targetHigh": 170.0,

        "alarmSnoozeInterval": 5,
        "lastAlarmDate": Date.distantPast,
        "alarmLow": 70.0,
        "alarmHigh": 200.0,
        "mutedAudio": false,
        "disabledNotifications": false,

        "calendarTitle": "",
        "calendarAlarmIsOn": false,

        "logging": false,
        "reversedLog": true,
        "debugLevel": 0,

        "nightscoutSite": "dashboard.heroku.com/apps",
        "nightscoutToken": "",

        "libreLinkUpEmail": "",
        "libreLinkUpPassword": "",
        "libreLinkUpPatientId": "",
        "libreLinkUpCountry": "",
        "libreLinkUpRegion": "eu",
        "libreLinkUpToken": "",
        "libreLinkUpTokenExpirationDate": Date.distantPast,
        "libreLinkUpScrapingLogbook": false,

        "onlineInterval": 5,
        "lastOnlineDate": Date.distantPast,

        "activeSensorSerial": "",
        "activeSensorAddress": Data(),
        "activeSensorInitialPatchInfo": Data(),
        "activeSensorStreamingUnlockCode": 42,
        "activeSensorStreamingUnlockCount": 0,
        "activeSensorMaxLife": 0,
        "activeSensorCalibrationInfo": try! JSONEncoder().encode(CalibrationInfo()),

        "calibrating": false,
        "calibration": try! JSONEncoder().encode(Calibration()),

        // TODO: rename to currentSensorUid/PatchInfo
        "patchUid": Data(),
        "patchInfo": Data()
    ]


    @Published var preferredTransmitter: TransmitterType = TransmitterType(rawValue: UserDefaults.standard.string(forKey: "preferredTransmitter")!) ?? .none {
        willSet(type) {
            if type == .abbott {
                readingInterval = 1
            }
            if type != .none {
                preferredDevicePattern = type.id
            } else {
                preferredDevicePattern = ""
            }
        }
        didSet { UserDefaults.standard.set(self.preferredTransmitter.id, forKey: "preferredTransmitter") }
    }


    @Published var preferredDevicePattern: String = UserDefaults.standard.string(forKey: "preferredDevicePattern")! {
        willSet(pattern) {
            if !pattern.isEmpty {
                if !preferredTransmitter.id.matches(pattern) {
                    preferredTransmitter = .none
                }
            }
        }
        didSet { UserDefaults.standard.set(self.preferredDevicePattern, forKey: "preferredDevicePattern") }
    }

    @Published var stoppedBluetooth: Bool = UserDefaults.standard.bool(forKey: "stoppedBluetooth") {
        didSet { UserDefaults.standard.set(self.stoppedBluetooth, forKey: "stoppedBluetooth") }
    }

    @Published var readingInterval: Int = UserDefaults.standard.integer(forKey: "readingInterval") {
        didSet { UserDefaults.standard.set(self.readingInterval, forKey: "readingInterval") }
    }

    @Published var displayingMillimoles: Bool = UserDefaults.standard.bool(forKey: "displayingMillimoles") {
        didSet { UserDefaults.standard.set(self.displayingMillimoles, forKey: "displayingMillimoles") }
    }

    @Published var numberFormatter: NumberFormatter = NumberFormatter()

    @Published var targetLow: Double = UserDefaults.standard.double(forKey: "targetLow") {
        didSet { UserDefaults.standard.set(self.targetLow, forKey: "targetLow") }
    }

    @Published var targetHigh: Double = UserDefaults.standard.double(forKey: "targetHigh") {
        didSet { UserDefaults.standard.set(self.targetHigh, forKey: "targetHigh") }
    }

    @Published var alarmSnoozeInterval: Int = UserDefaults.standard.integer(forKey: "alarmSnoozeInterval") {
        didSet { UserDefaults.standard.set(self.alarmSnoozeInterval, forKey: "alarmSnoozeInterval") }
    }

    @Published var lastAlarmDate: Date = Date(timeIntervalSince1970: UserDefaults.standard.double(forKey: "lastAlarmDate")) {
        didSet { UserDefaults.standard.set(self.lastAlarmDate.timeIntervalSince1970, forKey: "lastAlarmDate") }
    }

    @Published var alarmLow: Double = UserDefaults.standard.double(forKey: "alarmLow") {
        didSet { UserDefaults.standard.set(self.alarmLow, forKey: "alarmLow") }
    }

    @Published var alarmHigh: Double = UserDefaults.standard.double(forKey: "alarmHigh") {
        didSet { UserDefaults.standard.set(self.alarmHigh, forKey: "alarmHigh") }
    }

    @Published var mutedAudio: Bool = UserDefaults.standard.bool(forKey: "mutedAudio") {
        didSet { UserDefaults.standard.set(self.mutedAudio, forKey: "mutedAudio") }
    }

    @Published var disabledNotifications: Bool = UserDefaults.standard.bool(forKey: "disabledNotifications") {
        didSet { UserDefaults.standard.set(self.disabledNotifications, forKey: "disabledNotifications") }
    }

    @Published var calendarTitle: String = UserDefaults.standard.string(forKey: "calendarTitle")! {
        didSet { UserDefaults.standard.set(self.calendarTitle, forKey: "calendarTitle") }
    }

    @Published var calendarAlarmIsOn: Bool = UserDefaults.standard.bool(forKey: "calendarAlarmIsOn") {
        didSet { UserDefaults.standard.set(self.calendarAlarmIsOn, forKey: "calendarAlarmIsOn") }
    }

    @Published var logging: Bool = UserDefaults.standard.bool(forKey: "logging") {
        didSet { UserDefaults.standard.set(self.logging, forKey: "logging") }
    }

    @Published var reversedLog: Bool = UserDefaults.standard.bool(forKey: "reversedLog") {
        didSet { UserDefaults.standard.set(self.reversedLog, forKey: "reversedLog") }
    }

    @Published var debugLevel: Int = UserDefaults.standard.integer(forKey: "debugLevel") {
        didSet { UserDefaults.standard.set(self.debugLevel, forKey: "debugLevel") }
    }

    @Published var nightscoutSite: String = UserDefaults.standard.string(forKey: "nightscoutSite")! {
        didSet { UserDefaults.standard.set(self.nightscoutSite, forKey: "nightscoutSite") }
    }

    @Published var nightscoutToken: String = UserDefaults.standard.string(forKey: "nightscoutToken")! {
        didSet { UserDefaults.standard.set(self.nightscoutToken, forKey: "nightscoutToken") }
    }

    @Published var libreLinkUpEmail: String = UserDefaults.standard.string(forKey: "libreLinkUpEmail")! {
        didSet { UserDefaults.standard.set(self.libreLinkUpEmail, forKey: "libreLinkUpEmail") }
    }

    @Published var libreLinkUpPassword: String = UserDefaults.standard.string(forKey: "libreLinkUpPassword")! {
        didSet { UserDefaults.standard.set(self.libreLinkUpPassword, forKey: "libreLinkUpPassword") }
    }

    @Published var libreLinkUpPatientId: String = UserDefaults.standard.string(forKey: "libreLinkUpPatientId")! {
        didSet { UserDefaults.standard.set(self.libreLinkUpPatientId, forKey: "libreLinkUpPatientId") }
    }

    @Published var libreLinkUpCountry: String = UserDefaults.standard.string(forKey: "libreLinkUpCountry")! {
        didSet { UserDefaults.standard.set(self.libreLinkUpCountry, forKey: "libreLinkUpCountry") }
    }

    @Published var libreLinkUpRegion: String = UserDefaults.standard.string(forKey: "libreLinkUpRegion")! {
        didSet { UserDefaults.standard.set(self.libreLinkUpRegion, forKey: "libreLinkUpRegion") }
    }

    @Published var libreLinkUpToken: String = UserDefaults.standard.string(forKey: "libreLinkUpToken")! {
        didSet { UserDefaults.standard.set(self.libreLinkUpToken, forKey: "libreLinkUpToken") }
    }

    @Published var libreLinkUpTokenExpirationDate: Date = Date(timeIntervalSince1970: UserDefaults.standard.double(forKey: "libreLinkUpTokenExpirationDate")) {
        didSet { UserDefaults.standard.set(self.libreLinkUpTokenExpirationDate.timeIntervalSince1970, forKey: "libreLinkUpTokenExpirationDate") }
    }

    @Published var libreLinkUpScrapingLogbook: Bool = UserDefaults.standard.bool(forKey: "libreLinkUpScrapingLogbook") {
        didSet { UserDefaults.standard.set(self.libreLinkUpScrapingLogbook, forKey: "libreLinkUpScrapingLogbook") }
    }

    @Published var onlineInterval: Int = UserDefaults.standard.integer(forKey: "onlineInterval") {
        didSet { UserDefaults.standard.set(self.onlineInterval, forKey: "onlineInterval") }
    }

    @Published var lastOnlineDate: Date = Date(timeIntervalSince1970: UserDefaults.standard.double(forKey: "lastOnlineDate")) {
        didSet { UserDefaults.standard.set(self.lastOnlineDate.timeIntervalSince1970, forKey: "lastOnlineDate") }
    }

    @Published var activeSensorSerial: String = UserDefaults.standard.string(forKey: "activeSensorSerial")! {
        didSet { UserDefaults.standard.set(self.activeSensorSerial, forKey: "activeSensorSerial") }
    }

    @Published var activeSensorAddress: Data = UserDefaults.standard.data(forKey: "activeSensorAddress")! {
        didSet { UserDefaults.standard.set(self.activeSensorAddress, forKey: "activeSensorAddress") }
    }

    @Published var activeSensorInitialPatchInfo: PatchInfo = UserDefaults.standard.data(forKey: "activeSensorInitialPatchInfo")! {
        didSet { UserDefaults.standard.set(self.activeSensorInitialPatchInfo, forKey: "activeSensorInitialPatchInfo") }
    }

    @Published var activeSensorStreamingUnlockCode: Int = UserDefaults.standard.integer(forKey: "activeSensorStreamingUnlockCode") {
        didSet { UserDefaults.standard.set(self.activeSensorStreamingUnlockCode, forKey: "activeSensorStreamingUnlockCode") }
    }

    @Published var activeSensorStreamingUnlockCount: Int = UserDefaults.standard.integer(forKey: "activeSensorStreamingUnlockCount") {
        didSet { UserDefaults.standard.set(self.activeSensorStreamingUnlockCount, forKey: "activeSensorStreamingUnlockCount") }
    }

    @Published var activeSensorMaxLife: Int = UserDefaults.standard.integer(forKey: "activeSensorMaxLife") {
        didSet { UserDefaults.standard.set(self.activeSensorMaxLife, forKey: "activeSensorMaxLife") }
    }

    @Published var activeSensorCalibrationInfo: CalibrationInfo = try! JSONDecoder().decode(CalibrationInfo.self, from: UserDefaults.standard.data(forKey: "activeSensorCalibrationInfo")!) {
        didSet { UserDefaults.standard.set(try! JSONEncoder().encode(self.activeSensorCalibrationInfo), forKey: "activeSensorCalibrationInfo") }
    }

    @Published var calibrating: Bool = UserDefaults.standard.bool(forKey: "calibrating") {
        didSet { UserDefaults.standard.set(self.calibrating, forKey: "calibrating") }
    }

    @Published var calibration: Calibration = try! JSONDecoder().decode(Calibration.self, from: UserDefaults.standard.data(forKey: "calibration")!) {
        didSet { UserDefaults.standard.set(try! JSONEncoder().encode(self.calibration), forKey: "calibration") }
    }

    @Published var patchUid: SensorUid = UserDefaults.standard.data(forKey: "patchUid")! {
        didSet { UserDefaults.standard.set(self.patchUid, forKey: "patchUid") }
    }

    @Published var patchInfo: PatchInfo = UserDefaults.standard.data(forKey: "patchInfo")! {
        didSet { UserDefaults.standard.set(self.patchInfo, forKey: "patchInfo") }
    }

}


// TODO: validate inputs

class HexDataFormatter: Formatter {
    override func string(for obj: Any?) -> String? {
        return (obj as! Data).hex
    }
    override func getObjectValue(_ obj: AutoreleasingUnsafeMutablePointer<AnyObject?>?, for string: String, errorDescription error: AutoreleasingUnsafeMutablePointer<NSString?>?) -> Bool {
        var str = string.filter(\.isHexDigit)
        if str.count % 2 == 1 { str = "0" + str}
        obj?.pointee = str.bytes as AnyObject
        return true
    }
}
