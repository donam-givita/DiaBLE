import Foundation
import SwiftUI


struct SettingsView: View {
    @EnvironmentObject var app: AppState
    @EnvironmentObject var history: History
    @EnvironmentObject var settings: Settings

    @State private var showingCalendarPicker = false


    var body: some View {

        VStack(spacing: 8) {

            HStack {

                Button {
                    settings.stoppedBluetooth.toggle()
                    if settings.stoppedBluetooth {
                        app.main.centralManager.stopScan()
                        app.main.status("Stopped scanning")
                        app.main.log("Bluetooth: stopped scanning")
                    } else {
                        app.main.rescan()
                    }
                } label: {
                    Image("Bluetooth").renderingMode(.template).resizable().frame(width: 28, height: 28).foregroundColor(.blue)
                        .overlay(settings.stoppedBluetooth ? Image(systemName: "line.diagonal").resizable().frame(width: 18, height: 18).rotationEffect(.degrees(90)) : nil).foregroundColor(.red)
                }
                .padding(.horizontal, -8)

                Picker(selection: $settings.preferredTransmitter, label: Text("Preferred")) {
                    ForEach(TransmitterType.allCases) { t in
                        Text(t.name).tag(t)
                    }
                }
                .frame(height: 20)
                .labelsHidden()
                .disabled(settings.stoppedBluetooth)

                TextField("device name pattern", text: $settings.preferredDevicePattern)
                    .frame(height: 20)
                    .disabled(settings.stoppedBluetooth)

            }
            .font(.footnote)
            .foregroundColor(.blue)
            .padding(.top, 16)

            HStack {

                Button {
                    settings.onlineInterval = settings.onlineInterval != 0 ? 0 : 5
                } label: {
                    Image(systemName: settings.onlineInterval != 0 ? "network" : "wifi.slash").resizable().frame(width: 20, height: 20).foregroundColor(.cyan)
                }

                Picker(selection: $settings.onlineInterval, label: Text("")) {
                    ForEach([0, 1, 2, 3, 4, 5, 10, 15, 20, 30, 45, 60],
                            id: \.self) { t in
                        Text("\(t) min")
                    }
                }
                .font(.footnote)
                .foregroundColor(.cyan)
                .labelsHidden()
                .frame(width: 62, height: 20)

                Picker(selection: $settings.displayingMillimoles, label: Text("Unit")) {
                    ForEach(GlucoseUnit.allCases) { unit in
                        Text(unit.description).tag(unit == .mmoll)
                    }
                }
                .font(.footnote)
                .labelsHidden()
                .frame(width: 68, height: 20)

                Button {
                    settings.calibrating.toggle()
                    settings.usingOOP = settings.calibrating
                    Task {
                        await app.main.applyOOP(sensor: app.sensor)
                        app.main.didParseSensor(app.sensor)
                    }
                } label: {
                    Image(systemName: settings.calibrating ? "tuningfork" : "tuningfork").resizable().frame(width: 20, height: 20)
                        .foregroundColor(settings.calibrating ? .blue : .primary)
                }

            }

            VStack {
                VStack(spacing: 0) {
                    HStack(spacing: 20) {
                        Image(systemName: "hand.thumbsup.fill").foregroundColor(.green)
                            .offset(x: -10) // align to the bell
                        Text("\(settings.targetLow.units) - \(settings.targetHigh.units)").foregroundColor(.green)
                        Spacer().frame(width: 20)
                    }
                    HStack {
                        Slider(value: $settings.targetLow,  in: 40 ... 99, step: 1).frame(height: 20).scaleEffect(0.6)
                        Slider(value: $settings.targetHigh, in: 140 ... 300, step: 1).frame(height: 20).scaleEffect(0.6)
                    }
                }.accentColor(.green)

                VStack(spacing: 0) {
                    HStack(spacing: 20) {
                        Image(systemName: "bell.fill").foregroundColor(.red)
                        Text("< \(settings.alarmLow.units)   > \(settings.alarmHigh.units)").foregroundColor(.red)
                        Spacer().frame(width: 20)
                    }
                    HStack {
                        Slider(value: $settings.alarmLow,  in: 40 ... 99, step: 1).frame(height: 20).scaleEffect(0.6)
                        Slider(value: $settings.alarmHigh, in: 140 ... 300, step: 1).frame(height: 20).scaleEffect(0.6)
                    }
                }.accentColor(.red)
            }

            HStack {

                HStack(spacing: 3) {
                    NavigationLink(destination: Monitor()) {
                        Image(systemName: "timer").resizable().frame(width: 20, height: 20)
                    }.simultaneousGesture(TapGesture().onEnded {
                        // app.selectedTab = (settings.preferredTransmitter != .none) ? .monitor : .log
                        app.main.rescan()
                    })

                    Picker(selection: $settings.readingInterval, label: Text("")) {
                        ForEach(Array(stride(from: settings.preferredTransmitter == .blu || (settings.preferredTransmitter == .none && app.transmitter != nil && app.transmitter.type == .transmitter(.blu)) ?
                                             5 : 1,
                                             through: settings.preferredTransmitter == .miaomiao || (settings.preferredTransmitter == .none && app.transmitter != nil && app.transmitter.type == .transmitter(.miaomiao)) ? 5 :
                                                settings.preferredTransmitter == .abbott || (settings.preferredTransmitter == .none && app.transmitter != nil && app.transmitter.type == .transmitter(.abbott)) ? 1 : 15,
                                             by: settings.preferredTransmitter == .miaomiao || (settings.preferredTransmitter == .none && app.transmitter != nil && app.transmitter.type == .transmitter(.miaomiao)) ? 2 : 1)),
                                id: \.self) { t in
                            Text("\(t) min")
                        }
                    }.labelsHidden().frame(width: 60, height: 20)
                }.font(.footnote).foregroundColor(.orange)

                Spacer()

                Button {
                    settings.mutedAudio.toggle()
                } label: {
                    Image(systemName: settings.mutedAudio ? "speaker.slash.fill" : "speaker.2.fill").resizable().frame(width: 20, height: 20).foregroundColor(.blue)
                }

                Spacer()

                Button(action: {
                    settings.disabledNotifications.toggle()
                    if settings.disabledNotifications {
                        // UIApplication.shared.applicationIconBadgeNumber = 0
                    } else {
                        // UIApplication.shared.applicationIconBadgeNumber = settings.displayingMillimoles ?
                        //     Int(Float(app.currentGlucose.units)! * 10) : Int(app.currentGlucose.units)!
                    }
                }) {
                    Image(systemName: settings.disabledNotifications ? "zzz" : "app.badge.fill").resizable().frame(width: 20, height: 20).foregroundColor(.blue)
                }

                Spacer()

            }

        }
        .edgesIgnoringSafeArea([.bottom])
        .navigationTitle("Settings")
        .font(Font.body.monospacedDigit())
        .buttonStyle(.plain)
    }
}


struct SettingsView_Previews: PreviewProvider {

    static var previews: some View {
        Group {
            SettingsView()
                .environmentObject(AppState.test(tab: .settings))
                .environmentObject(History.test)
                .environmentObject(Settings())
        }
    }
}
