import SwiftUI
import CoreBluetooth
import AVFoundation
import os.log


public class MainDelegate: NSObject, WKApplicationDelegate, WKExtendedRuntimeSessionDelegate {

    var app: AppState
    var logger: Logger
    var log: Log
    var history: History
    var settings: Settings

    var extendedSession: WKExtendedRuntimeSession! // TODO

    var centralManager: CBCentralManager
    var bluetoothDelegate: BluetoothDelegate
    var healthKit: HealthKit?
    var libreLinkUp: LibreLinkUp?
    var nightscout: Nightscout?


    override init() {

        UserDefaults.standard.register(defaults: Settings.defaults)

        app = AppState()
        logger = Logger(subsystem: Bundle.main.bundleIdentifier!, category: "Debug")
        log = Log()
        history = History()
        settings = Settings()

        extendedSession = WKExtendedRuntimeSession()

        bluetoothDelegate = BluetoothDelegate()
        centralManager = CBCentralManager(delegate: bluetoothDelegate,
                                          queue: nil,
                                          options: [CBCentralManagerOptionRestoreIdentifierKey: "DiaBLE"])

        healthKit = HealthKit()

        super.init()

        log.entries = [LogEntry(message: "Welcome to DiaBLE!"), LogEntry(message: "\(settings.logging ? "Log started" : "Log stopped") \(Date().local)")]
        debugLog("User defaults: \(Settings.defaults.keys.map { [$0, UserDefaults.standard.dictionaryRepresentation()[$0]!] }.sorted{($0[0] as! String) < ($1[0] as! String) })")

        app.main = self
        extendedSession.delegate = self
        bluetoothDelegate.main = self

        if let healthKit {
            healthKit.main = self
            healthKit.authorize {
                self.log("HealthKit: \( $0 ? "" : "not ")authorized")
                if healthKit.isAuthorized {
                    healthKit.read { [self] in debugLog("HealthKit last 12 stored values: \($0[..<(min(12, $0.count))])") }
                }
            }
        } else {
            self.log("HealthKit: not available")
        }

        libreLinkUp = LibreLinkUp(main: self)
        nightscout = Nightscout(main: self)
        nightscout!.read()

        let numberFormatter = NumberFormatter()
        numberFormatter.minimumFractionDigits = 8
        settings.numberFormatter = numberFormatter

        // features currently in beta testing
        if settings.userLevel >= .test {
            Libre3.testAESCCM()
            // app.sensor = LibrePro.test(main: self)
        }

    }


    public func log(_ msg: String, level: LogLevel = .info, label: String = "") {
        if settings.logging || msg.hasPrefix("Log") {
            DispatchQueue.main.async {
                let entry = LogEntry(message: msg, level: level, label: label)
                if self.settings.reversedLog {
                    self.log.entries.insert(entry, at: 0)
                } else {
                    self.log.entries.append(entry)
                }
                print(msg)
                if self.settings.userLevel > .basic {
                    self.logger.log("\(msg)")
                }
                if !entry.label.isEmpty {
                    self.log.labels.insert(entry.label)
                }
            }
        }
    }


    public func debugLog(_ msg: String) {
        if settings.userLevel > .basic {
            log(msg, level: .debug)
        }
    }

    public func status(_ text: String) {
        DispatchQueue.main.async {
            self.app.status = text
        }
    }

    public func errorStatus(_ text: String) {
        if !self.app.status.contains(text) {
            DispatchQueue.main.async {
                self.app.status.append("\n\(text)")
            }
        }
    }


    public func handle(_ backgroundTasks: Set<WKRefreshBackgroundTask>) {
        log("TODO: handling background tasks")
    }


    public func rescan() {
        if let device = app.device {
            centralManager.cancelPeripheralConnection(device.peripheral!)
        }
        if centralManager.state == .poweredOn {
            settings.stoppedBluetooth = false
            if let peripheral = centralManager.retrieveConnectedPeripherals(withServices: [CBUUID(string: Libre3.UUID.data.rawValue)]).first {
                bluetoothDelegate.centralManager(centralManager, didDiscover: peripheral, advertisementData: [CBAdvertisementDataServiceUUIDsKey: [CBUUID(string: Libre3.UUID.data.rawValue)]], rssi: 0)
            } else if let peripheral = centralManager.retrieveConnectedPeripherals(withServices: [CBUUID(string: Abbott.dataServiceUUID)]).first {
                bluetoothDelegate.centralManager(centralManager, didDiscover: peripheral, advertisementData: [CBAdvertisementDataServiceUUIDsKey: [CBUUID(string: Abbott.dataServiceUUID)]], rssi: 0)
            } else if let peripheral = centralManager.retrieveConnectedPeripherals(withServices: [CBUUID(string: Dexcom.dataServiceUUID)]).first {
                bluetoothDelegate.centralManager(centralManager, didDiscover: peripheral, advertisementData: [CBAdvertisementDataServiceUUIDsKey: [CBUUID(string: Dexcom.dataServiceUUID)]], rssi: 0)
            } else {
                centralManager.scanForPeripherals(withServices: nil, options: nil)
                status("Scanning...")
            }
        }
        healthKit?.read()
        nightscout?.read()
    }


    public func playAlarm() {
        let currentGlucose = app.currentGlucose
        if !settings.mutedAudio {
            do {
                try AVAudioSession.sharedInstance().setCategory(AVAudioSession.Category.playback, options: [.duckOthers])
                try AVAudioSession.sharedInstance().setActive(true)
            } catch {
                log("Audio Session error: \(error)")
            }
            let soundName = currentGlucose > Int(settings.alarmHigh) ? "alarm_high" : "alarm_low"
            let audioPlayer = try! AVAudioPlayer(contentsOf: URL(fileURLWithPath: Bundle.main.path(forResource: soundName, ofType: "mp3")!), fileTypeHint: "mp3")
            audioPlayer.play()
            _ = Timer.scheduledTimer(withTimeInterval: 4, repeats: false) {
                _ in audioPlayer.stop()
                do {
                    try AVAudioSession.sharedInstance().setActive(false)
                } catch { }
            }
        }
        if !settings.disabledNotifications {
            let hapticDirection: WKHapticType = currentGlucose > Int(settings.alarmHigh) ? .directionUp : .directionDown
            WKInterfaceDevice.current().play(hapticDirection)
            let times = currentGlucose > Int(settings.alarmHigh) ? 3 : 4
            let pause = times == 3 ? 1.0 : 5.0 / 6
            for s in 0 ..< times {
                DispatchQueue.main.asyncAfter(deadline: .now() + Double(s) * pause) {
                    WKInterfaceDevice.current().play(.notification)
                }
            }
        }
    }


    func parseSensorData(_ sensor: Sensor) {

        sensor.detailFRAM()

        if sensor.history.count > 0 || sensor.trend.count > 0 {

            let calibrationInfo = sensor.calibrationInfo
            if sensor.serial == settings.activeSensorSerial {
                settings.activeSensorCalibrationInfo = calibrationInfo
            }

            history.rawTrend = sensor.trend
            log("Raw trend: \(sensor.trend.map(\.rawValue))")
            debugLog("Raw trend temperatures: \(sensor.trend.map(\.rawTemperature))")
            let factoryTrend = sensor.factoryTrend
            history.factoryTrend = factoryTrend
            log("Factory trend: \(factoryTrend.map(\.value))")
            log("Trend temperatures: \(factoryTrend.map { Double(String(format: "%.1f", $0.temperature))! }))")
            history.rawValues = sensor.history
            log("Raw history: \(sensor.history.map(\.rawValue))")
            debugLog("Raw historic temperatures: \(sensor.history.map(\.rawTemperature))")
            let factoryHistory = sensor.factoryHistory
            history.factoryValues = factoryHistory
            log("Factory history: \(factoryHistory.map(\.value))")
            log("Historic temperatures: \(factoryHistory.map { Double(String(format: "%.1f", $0.temperature))! })")

            // TODO
            debugLog("Trend has errors: \(sensor.trend.map(\.hasError))")
            debugLog("Trend data quality: [\n\(sensor.trend.map(\.dataQuality.description).joined(separator: ",\n"))\n]")
            debugLog("Trend quality flags: [\(sensor.trend.map { "0" + String($0.dataQualityFlags,radix: 2).suffix(2) }.joined(separator: ", "))]")
            debugLog("History has errors: \(sensor.history.map(\.hasError))")
            debugLog("History data quality: [\n\(sensor.history.map(\.dataQuality.description).joined(separator: ",\n"))\n]")
            debugLog("History quality flags: [\(sensor.history.map { "0" + String($0.dataQualityFlags,radix: 2).suffix(2) }.joined(separator: ", "))]")
        }

        debugLog("Sensor uid: \(sensor.uid.hex), saved uid: \(settings.patchUid.hex), patch info: \(sensor.patchInfo.hex.count > 0 ? sensor.patchInfo.hex : "<nil>"), saved patch info: \(settings.patchInfo.hex)")

        if sensor.uid.count > 0 && sensor.patchInfo.count > 0 {
            settings.patchUid = sensor.uid
            settings.patchInfo = sensor.patchInfo
        }

        if sensor.uid.count == 0 || settings.patchUid.count > 0 {
            if sensor.uid.count == 0 {
                sensor.uid = settings.patchUid
            }

            if sensor.uid == settings.patchUid {
                sensor.patchInfo = settings.patchInfo
            }
        }

        Task {

            didParseSensor(sensor)

        }

    }


    func didParseSensor(_ sensor: Sensor?) {

        guard let sensor else {
            extendedSession.start(at: max(app.lastReadingDate, app.lastConnectionDate) + Double(settings.readingInterval * 60) - 5.0)
            log("Watch: extended session to be started in \(Double(settings.readingInterval * 60) - 5.0) seconds")
            return
        }

        if history.factoryTrend.count > 0 {
            app.currentGlucose = history.factoryTrend[0].value
        }

        let currentGlucose = app.currentGlucose

        // TODO: delete mirrored implementation from Abbott Device
        // TODO: compute accurate delta and update trend arrow
        if history.factoryTrend.count > 6 {
            let deltaMinutes = history.factoryTrend[5].value > 0 ? 5 : 6
            let delta = (history.factoryTrend[0].value > 0 ? history.factoryTrend[0].value : (history.factoryTrend[1].value > 0 ? history.factoryTrend[1].value : history.factoryTrend[2].value)) - history.factoryTrend[deltaMinutes].value
            app.trendDeltaMinutes = deltaMinutes
            app.trendDelta = delta
        }

        // var title = currentGlucose > 0 ? currentGlucose.units : "---"

        let snoozed = settings.lastAlarmDate.timeIntervalSinceNow >= -Double(settings.alarmSnoozeInterval * 60) && settings.disabledNotifications

        if currentGlucose > 0 && (currentGlucose > Int(settings.alarmHigh) || currentGlucose < Int(settings.alarmLow)) {
            log("ALARM: current glucose: \(currentGlucose.units) (settings: high: \(settings.alarmHigh.units), low: \(settings.alarmLow.units), muted audio: \(settings.mutedAudio ? "yes" : "no")), \(snoozed ? "" : "not ")snoozed")

            if !snoozed {
                playAlarm()
            }
        }

        if !snoozed {
            settings.lastAlarmDate = Date.now
        }

        if history.values.count > 0 || history.factoryValues.count > 0 || currentGlucose > 0 {
            var entries = [Glucose]()
            if history.values.count > 0 {
                entries += history.values
            } else {
                entries += history.factoryValues
            }
            entries += history.factoryTrend.dropFirst() + [Glucose(currentGlucose, date: sensor.lastReadingDate)]
            entries = entries.filter { $0.value > 0 && $0.id > -1 }

            // TODO
            let newEntries = (entries.filter { $0.date > healthKit?.lastDate ?? Calendar.current.date(byAdding: .hour, value: -8, to: Date())! })
            if newEntries.count > 0 {
                healthKit?.write(newEntries)
                healthKit?.read()
            }

            nightscout?.read { values in
                let newEntries = values.count > 0 ? entries.filter { $0.date > values[0].date } : entries
                if newEntries.count > 0 {
                    self.nightscout?.post(entries: newEntries) {
                        data, response, error in
                        self.nightscout?.read()
                    }
                }
            }
        }

        // TODO:
        extendedSession.start(at: max(app.lastReadingDate, app.lastConnectionDate) + Double(settings.readingInterval * 60) - 5.0)
        log("Watch: extended session to be started in \(Double(settings.readingInterval * 60) - 5.0) seconds")
    }


    public func extendedRuntimeSessionDidStart(_ extendedRuntimeSession: WKExtendedRuntimeSession) {
        debugLog("Watch: extended session did start")
    }

    public func extendedRuntimeSessionWillExpire(_ extendedRuntimeSession: WKExtendedRuntimeSession) {
        debugLog("Watch: extended session wiil expire")
    }

    public func extendedRuntimeSession(_ extendedRuntimeSession: WKExtendedRuntimeSession, didInvalidateWith reason: WKExtendedRuntimeSessionInvalidationReason, error: Error?) {
        let errorDescription = error != nil ? error!.localizedDescription : "undefined"
        debugLog("Watch: extended session did invalidate: reason: \(reason), error: \(errorDescription)")
    }
}
