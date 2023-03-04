import Foundation
import SwiftUI


struct Monitor: View {
    @EnvironmentObject var app: AppState
    @EnvironmentObject var history: History
    @EnvironmentObject var settings: Settings

    @State var showingHamburgerMenu = false

    @State private var showingNFCAlert = false

    @State private var readingCountdown: Int = 0
    @State private var minutesSinceLastReading: Int = 0

    @State private var timer = Timer.publish(every: 1, on: .main, in: .common).autoconnect()
    @State private var minuteTimer = Timer.publish(every: 60, on: .main, in: .common).autoconnect()

    var body: some View {
        NavigationView {

            ZStack(alignment: .topLeading) {

                VStack {

                    Spacer()

                    VStack {

                        HStack {

                            VStack {
                                if app.lastReadingDate != Date.distantPast {
                                    Text(app.lastReadingDate.shortTime).monospacedDigit()
                                    Text("\(minutesSinceLastReading) min ago").font(.footnote).monospacedDigit()
                                        .onReceive(minuteTimer) { _ in
                                            minutesSinceLastReading = Int(Date().timeIntervalSince(app.lastReadingDate)/60)
                                        }
                                } else {
                                    Text("---")
                                }
                            }
                            .frame(maxWidth: .infinity, alignment: .trailing).padding(.trailing, 12).foregroundColor(Color(.lightGray))
                            .onReceive(app.$lastReadingDate) { readingDate in
                                minutesSinceLastReading = Int(Date().timeIntervalSince(readingDate)/60)
                            }

                            Text(app.currentGlucose > 0 ? "\(app.currentGlucose.units) " : "--- ")
                                .font(.system(size: 42, weight: .black)).monospacedDigit()
                                .foregroundColor(.black)
                                .padding(5)
                                .background(app.currentGlucose > 0 && (app.currentGlucose > Int(settings.alarmHigh) || app.currentGlucose < Int(settings.alarmLow)) ?
                                            Color.red : Color.blue)
                                .cornerRadius(8)

                            // TODO: display both delta and trend arrow
                            Group {
                                if app.trendDeltaMinutes > 0 {
                                    VStack {
                                        Text("\(app.trendDelta > 0 ? "+ " : app.trendDelta < 0 ? "- " : "")\(app.trendDelta == 0 ? "→" : abs(app.trendDelta).units)")
                                            .fontWeight(.black)
                                        Text("\(app.trendDeltaMinutes) min").font(.footnote)
                                    }.frame(maxWidth: .infinity, alignment: .leading).padding(.leading, 12)
                                } else {
                                    Text(app.oopTrend.symbol).font(.largeTitle).bold()
                                        .frame(maxWidth: .infinity, alignment: .leading).padding(.leading, 12)
                                }
                            }.foregroundColor(app.currentGlucose > 0 && ((app.currentGlucose > Int(settings.alarmHigh) && app.trendDelta > 0) || (app.currentGlucose < Int(settings.alarmLow) && app.trendDelta < 0)) ?
                                .red : .blue)

                        }

                        Text("\(app.oopAlarm.description.replacingOccurrences(of: "_", with: " "))\(app.oopAlarm.description != "" ? " - " : "")\(app.oopTrend.description.replacingOccurrences(of: "_", with: " "))")
                            .foregroundColor(.blue)

                        HStack {
                            Text(app.deviceState)
                                .foregroundColor(app.deviceState == "Connected" ? .green : .red)
                                .fixedSize()

                            if !app.deviceState.isEmpty && app.deviceState != "Disconnected" {
                                Text(readingCountdown > 0 || app.deviceState == "Reconnecting..." ?
                                     "\(readingCountdown) s" : "")
                                .fixedSize()
                                .font(Font.callout.monospacedDigit()).foregroundColor(.orange)
                                .onReceive(timer) { _ in
                                    readingCountdown = settings.readingInterval * 60 - Int(Date().timeIntervalSince(app.lastConnectionDate))
                                }
                            }
                        }
                    }

                    Graph().frame(width: 31 * 7 + 60, height: 150)

                    VStack {

                        HStack(spacing: 12) {

                            if app.sensor != nil && (app.sensor.state != .unknown || app.sensor.serial != "") {
                                VStack {
                                    Text(app.sensor.state.description)
                                        .foregroundColor(app.sensor.state == .active ? .green : .red)

                                    if app.sensor.age > 0 {
                                        Text(app.sensor.age.shortFormattedInterval)
                                    }
                                }
                            }

                            if app.device != nil {
                                VStack {
                                    if app.device.battery > -1 {
                                        let battery = app.device.battery
                                        HStack(spacing: 4) {
                                            let ext = battery > 95 ? 100 :
                                            battery > 65 ? 75 :
                                            battery > 35 ? 50 :
                                            battery > 10 ? 25 : 0
                                            Image(systemName: "battery.\(ext)")
                                            Text("\(app.device.battery)%")
                                        }
                                        .foregroundColor(app.device.battery > 10 ? .green : .red)
                                    }
                                    if app.device.rssi != 0 {
                                        Text("RSSI: ").foregroundColor(Color(.lightGray)) +
                                        Text("\(app.device.rssi) dB")
                                    }
                                }
                            }

                        }.font(.footnote).foregroundColor(.yellow)

                        Text(app.status)
                            .font(.footnote)
                            .padding(.vertical, 5)
                            .frame(maxWidth: .infinity)

                        NavigationLink(destination: Details()) {
                            Text("Details").font(.footnote).bold().fixedSize()
                                .padding(.horizontal, 4).padding(2).overlay(RoundedRectangle(cornerRadius: 5).stroke(Color.accentColor, lineWidth: 2))
                        }
                    }

                    Spacer()
                    Spacer()

                    HStack {

                        Button {
                            app.main.rescan()

                        } label: {
                            Image(systemName: "arrow.clockwise.circle").resizable().frame(width: 32, height: 32).padding(.bottom, 8).foregroundColor(.accentColor)
                        }

                        if (app.status.hasPrefix("Scanning") || app.status.hasSuffix("retrying...")) && app.main.centralManager.state != .poweredOff {
                            Button {
                                app.main.centralManager.stopScan()
                                app.main.status("Stopped scanning")
                                app.main.log("Bluetooth: stopped scanning")
                            } label: {
                                Image(systemName: "stop.circle").resizable().frame(width: 32, height: 32)
                            }.padding(.bottom, 8).foregroundColor(.red)
                        }

                    }

                }
                .multilineTextAlignment(.center)
                .navigationBarTitleDisplayMode(.inline)
                .navigationTitle("DiaBLE  \(Bundle.main.object(forInfoDictionaryKey: "CFBundleShortVersionString") as! String)  -  Monitor")
                .onAppear {
                    timer = Timer.publish(every: 1, on: .main, in: .common).autoconnect()
                    minuteTimer = Timer.publish(every: 60, on: .main, in: .common).autoconnect()
                    if app.lastReadingDate != Date.distantPast {
                        minutesSinceLastReading = Int(Date().timeIntervalSince(app.lastReadingDate)/60)
                    }
                }
                .onDisappear {
                    timer.upstream.connect().cancel()
                    minuteTimer.upstream.connect().cancel()
                }
                .toolbar {

                    ToolbarItem(placement: .navigationBarLeading) {
                        Button {
                            withAnimation(.easeOut(duration: 0.15)) { showingHamburgerMenu.toggle() }
                        } label: {
                            Image(systemName: "line.horizontal.3")
                        }
                    }

                    ToolbarItem(placement: .navigationBarTrailing) {
                        Button {
                            if app.main.nfc.isAvailable {
                                app.main.nfc.startSession()
                            } else {
                                showingNFCAlert = true
                            }
                        } label: {
                            VStack(spacing: 0) {
                                // original: .frame(width: 39, height: 27
                                Image("NFC").renderingMode(.template).resizable().frame(width: 26, height: 18)
                                Text("Scan").font(.footnote)
                            }
                        }
                    }
                }
                .alert("NFC not supported", isPresented: $showingNFCAlert) {
                } message: {
                    Text("This device doesn't allow scanning the Libre.")
                }

                HamburgerMenu(showingHamburgerMenu: $showingHamburgerMenu)
                    .frame(width: 180)
                    .offset(x: showingHamburgerMenu ? 0 : -180)
            }
        }.navigationViewStyle(.stack)
    }
}


struct Monitor_Previews: PreviewProvider {

    static var previews: some View {
        Group {
            ContentView()
                .preferredColorScheme(.dark)
                .environmentObject(AppState.test(tab: .monitor))
                .environmentObject(Log())
                .environmentObject(History.test)
                .environmentObject(Settings())
        }
    }
}
