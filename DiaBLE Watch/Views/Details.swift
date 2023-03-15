import Foundation
import SwiftUI


struct Details: View {
    @EnvironmentObject var app: AppState
    @EnvironmentObject var history: History
    @EnvironmentObject var settings: Settings

    @State private var showingCalibrationInfoForm = false

    @State private var readingCountdown: Int = 0
    @State private var secondsSinceLastConnection: Int = 0
    @State private var minutesSinceLastReading: Int = 0

    @State private var timer = Timer.publish(every: 1, on: .main, in: .common).autoconnect()
    @State private var minuteTimer = Timer.publish(every: 60, on: .main, in: .common).autoconnect()


    // TODO:
    @ViewBuilder func Row(_ label: String, _ value: String, foregroundColor: Color? = .yellow) -> some View {
        if !value.isEmpty {
            HStack {
                Text(label)
                Spacer()
                Text(value).foregroundColor(foregroundColor)
            }
        } else {
            EmptyView()
        }
    }


    var body: some View {
        VStack {

            Form {

                if app.status.starts(with: "Scanning") {
                    HStack {
                        Text("\(app.status)").font(.footnote)
                    }
                } else {
                    if app.device == nil && app.sensor == nil {
                        HStack {
                            Spacer()
                            Text("No device connected").foregroundColor(.red)
                            Spacer()
                        }
                    }
                }


                if app.device != nil {

                    Section(header: Text("Device")) {

                        Group {
                            Row("Name", app.device.peripheral?.name ?? app.device.name)

                            Row("State", (app.device.peripheral?.state ?? app.device.state).description.capitalized,
                                foregroundColor: (app.device.peripheral?.state ?? app.device.state) == .connected ? .green : .red)

                            if app.device.lastConnectionDate != .distantPast {
                                HStack {
                                    Text("Since")
                                    Spacer()
                                    Text("\(secondsSinceLastConnection.minsAndSecsFormattedInterval)")
                                        .monospacedDigit()
                                        .foregroundColor(app.device.state == .connected ? .yellow : .red)
                                        .onReceive(timer) { _ in
                                            if let device = app.device {
                                                secondsSinceLastConnection = Int(Date().timeIntervalSince(device.lastConnectionDate))
                                            } else {
                                                secondsSinceLastConnection = 1
                                            }
                                        }
                                }
                            }

                            if settings.userLevel > .basic && app.device.peripheral != nil {
                                Row("Identifier", app.device.peripheral!.identifier.uuidString)
                            }

                            if app.device.name != app.device.peripheral?.name ?? "Unnamed" {
                                Row("Type", app.device.name)
                            }
                        }

                        Row("Serial", app.device.serial)

                        Group {
                            if !app.device.company.isEmpty && app.device.company != "< Unknown >" {
                                Row("Company", app.device.company)
                            }
                            Row("Manufacturer", app.device.manufacturer)
                            Row("Model", app.device.model)
                            Row("Firmware", app.device.firmware)
                            Row("Hardware", app.device.hardware)
                            Row("Software", app.device.software)
                        }

                        if app.device.macAddress.count > 0 {
                            Row("MAC Address", app.device.macAddress.hexAddress)
                        }

                        if app.device.rssi != 0 {
                            Row("RSSI", "\(app.device.rssi) dB")
                        }

                        if app.device.battery > -1 {
                            Row("Battery", "\(app.device.battery)%",
                                foregroundColor: app.device.battery > 10 ? .green : .red)
                        }
                    }
                }


                if app.sensor != nil {

                    Section(header: Text("Sensor")) {

                        Row("State", app.sensor.state.description,
                            foregroundColor: app.sensor.state == .active ? .green : .red)

                        if app.sensor.state == .failure && app.sensor.fram.count > 8 {
                            let fram = app.sensor.fram
                            let errorCode = fram[6]
                            let failureAge = Int(fram[7]) + Int(fram[8]) << 8
                            let failureInterval = failureAge == 0 ? "an unknown time" : "\(failureAge.formattedInterval)"
                            Row("Failure", "\(decodeFailure(error: errorCode).capitalized) (0x\(errorCode.hex)) at \(failureInterval)",
                                foregroundColor: .red)
                        }

                        Row("Type", "\(app.sensor.type.description)\(app.sensor.patchInfo.hex.hasPrefix("a2") ? " (new 'A2' kind)" : "")")

                        Row("Serial", app.sensor.serial)

                        Row("Reader Serial", app.sensor.readerSerial.count >= 16 ? app.sensor.readerSerial[...13].string : "")

                        Row("Region", app.sensor.region.description)

                        if app.sensor.maxLife > 0 {
                            Row("Maximum Life", app.sensor.maxLife.formattedInterval)
                        }

                        if app.sensor.age > 0 {
                            Group {
                                Row("Age", (app.sensor.age + minutesSinceLastReading).formattedInterval)
                                if app.sensor.maxLife - app.sensor.age - minutesSinceLastReading > 0 {
                                    Row("Ends in", (app.sensor.maxLife - app.sensor.age - minutesSinceLastReading).formattedInterval,
                                        foregroundColor: (app.sensor.maxLife - app.sensor.age - minutesSinceLastReading) > 360 ? .green : .red)
                                }
                                Row("Started on", (app.sensor.activationTime > 0 ? Date(timeIntervalSince1970: Double(app.sensor.activationTime)) : (app.sensor.lastReadingDate - Double(app.sensor.age) * 60)).shortDateTime)
                            }
                            .onReceive(minuteTimer) { _ in
                                minutesSinceLastReading = Int(Date().timeIntervalSince(app.sensor.lastReadingDate)/60)
                            }
                        }

                        Row("UID", app.sensor.uid.hex)

                        Group {
                            if app.sensor.type == .libre3 && (app.sensor as! Libre3).receiverId != 0 {
                                Row("Receiver ID", "\((app.sensor as! Libre3).receiverId)")
                            }
                            if app.sensor.type == .libre3 && !(app.sensor as! Libre3).blePIN.isEmpty {
                                Row("BLE PIN", "\((app.sensor as! Libre3).blePIN.hex)")
                            }
                            if !app.sensor.patchInfo.isEmpty {
                                Row("Patch Info", app.sensor.patchInfo.hex)
                                Row("Firmware", app.sensor.firmware)
                                Row("Security Generation", "\(app.sensor.securityGeneration)")
                            }
                        }

                    }
                }

                if app.device != nil && app.device.type == .transmitter(.abbott) || settings.preferredTransmitter == .abbott {

                    Section(header: Text("BLE Setup")) {

                        HStack {
                            Text("Patch Info")
                            TextField("Patch Info", value: $settings.activeSensorInitialPatchInfo, formatter: HexDataFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                        }
                        // TODO: allow editing when a transmitter is not available
                        HStack {
                            Text("Calibration Info")
                            Spacer()
                            Text("[\(settings.activeSensorCalibrationInfo.i1), \(settings.activeSensorCalibrationInfo.i2), \(settings.activeSensorCalibrationInfo.i3), \(settings.activeSensorCalibrationInfo.i4), \(settings.activeSensorCalibrationInfo.i5), \(settings.activeSensorCalibrationInfo.i6)]")
                                .foregroundColor(.blue)
                        }
                        .onTapGesture {
                            showingCalibrationInfoForm.toggle()
                        }
                        .sheet(isPresented: $showingCalibrationInfoForm) {
                            Form {
                                Section(header: Text("Calibration Info")) {
                                    HStack {
                                        Text("i1")
                                        TextField("i1", value: $settings.activeSensorCalibrationInfo.i1,
                                                  formatter: NumberFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                                    }
                                    HStack {
                                        Text("i2")
                                        TextField("i2", value: $settings.activeSensorCalibrationInfo.i2,
                                                  formatter: NumberFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                                    }
                                    HStack {
                                        Text("i3")
                                        TextField("i3", value: $settings.activeSensorCalibrationInfo.i3,
                                                  formatter: NumberFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                                    }
                                    HStack {
                                        Text("i4")
                                        TextField("i4", value: $settings.activeSensorCalibrationInfo.i4,
                                                  formatter: NumberFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                                    }
                                    HStack {
                                        Text("i5")
                                        TextField("i5", value: $settings.activeSensorCalibrationInfo.i5,
                                                  formatter: NumberFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                                    }
                                    HStack {
                                        Text("i6")
                                        TextField("i6", value: $settings.activeSensorCalibrationInfo.i6,
                                                  formatter: NumberFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                                    }
                                    HStack {
                                        Spacer()
                                        Button {
                                            showingCalibrationInfoForm = false
                                        } label: {
                                            Text("Set").bold().foregroundColor(.accentColor).padding(.horizontal, 4).padding(2).overlay(RoundedRectangle(cornerRadius: 5).stroke(Color.accentColor, lineWidth: 2))
                                        }.accentColor(.blue)
                                        Spacer()
                                    }
                                }
                            }
                            .toolbar {
                                ToolbarItem(placement: .cancellationAction) {
                                    Button("Set") { showingCalibrationInfoForm = false }
                                }
                            }
                        }
                        HStack {
                            Text("Unlock Code")
                            TextField("Unlock Code", value: $settings.activeSensorStreamingUnlockCode, formatter: NumberFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                        }
                        HStack {
                            Text("Unlock Count")
                            TextField("Unlock Count", value: $settings.activeSensorStreamingUnlockCount, formatter: NumberFormatter()).multilineTextAlignment(.trailing).foregroundColor(.blue)
                        }

                    }
                }


                // TODO
                if (app.device != nil && app.device.type == .transmitter(.dexcom)) || settings.preferredTransmitter == .dexcom {

                    Section(header: Text("BLE Setup")) {

                        HStack {
                            Text("Transmitter Serial")
                            TextField("Transmitter Serial", text: $settings.activeTransmitterSerial)
                                .multilineTextAlignment(.trailing)
                                .foregroundColor(.blue)
                        }

                        HStack {
                            Text("Sensor Code")
                            TextField("Sensor Code", text: $settings.activeSensorCode)
                                .multilineTextAlignment(.trailing)
                                .foregroundColor(.blue)
                        }

                        Button {
                            app.main.rescan()
                        } label: { Label { Text("RePair") } icon: { Image("Bluetooth").renderingMode(.template).resizable().frame(width: 32, height: 32)
                        }.foregroundColor(.blue)
                        }
                    }
                }


                if settings.userLevel > .basic {
                    Section(header: Text("Known Devices")) {
                        VStack(alignment: .leading) {
                            ForEach(app.main.bluetoothDelegate.knownDevices.sorted(by: <), id: \.key) { key, value in
                                Text(value).font(.callout).foregroundColor(.blue)
                            }
                        }
                    }
                }

            }
            .foregroundColor(.secondary)

            HStack(alignment: .top, spacing: 32) {

                Spacer()

                Button {
                    app.main.rescan()
                } label: {
                    HStack {
                        Image(systemName: "arrow.clockwise.circle").resizable().frame(width: 24, height: 24)
                            .foregroundColor(.blue)
                        Text(!app.deviceState.isEmpty && app.deviceState != "Disconnected" && (readingCountdown > 0 || app.deviceState == "Reconnecting...") ?
                             "\(readingCountdown) s" : "...")
                        .fixedSize()
                        .foregroundColor(.orange).font(Font.footnote.monospacedDigit())
                        .onReceive(timer) { _ in
                            // workaround: watchOS fails converting the interval to an Int32
                            if app.lastConnectionDate == Date.distantPast {
                                readingCountdown = 0
                            } else {
                                readingCountdown = settings.readingInterval * 60 - Int(Date().timeIntervalSince(app.lastConnectionDate))
                            }
                        }
                    }
                }

                Button {
                    if app.device != nil {
                        app.main.centralManager.cancelPeripheralConnection(app.device.peripheral!)
                    }
                } label: {
                    Image(systemName: "escape").resizable().frame(width: 22, height: 22)
                        .foregroundColor(.blue)
                }

                Spacer()

            }.edgesIgnoringSafeArea(.bottom).padding(.vertical, -40).offset(y: 40)

        }
        .navigationTitle("Details")
        .buttonStyle(.plain)
        .onAppear {
            if app.sensor != nil {
                minutesSinceLastReading = Int(Date().timeIntervalSince(app.sensor.lastReadingDate)/60)
            } else if app.lastReadingDate != Date.distantPast {
                minutesSinceLastReading = Int(Date().timeIntervalSince(app.lastReadingDate)/60)
            }
        }
    }
}


struct Details_Preview: PreviewProvider {
    static var previews: some View {
        Group {
            Details()
                .environmentObject(AppState.test(tab: .monitor))
                .environmentObject(Settings())
            NavigationView {
                Details()
                    .environmentObject(AppState.test(tab: .monitor))
                    .environmentObject(Settings())
            }
        }
    }
}
