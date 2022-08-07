import Foundation
import SwiftUI
import Charts


extension MeasurementColor {
    var color: Color {
        switch self {
        case .green:  return .green
        case .yellow: return .yellow
        case .orange: return .orange
        case .red:    return .red
        }
    }
}


struct OnlineView: View {
    @EnvironmentObject var app: AppState
    @EnvironmentObject var history: History
    @EnvironmentObject var settings: Settings

    @Environment(\.colorScheme) var colorScheme

    @State private var showingNFCAlert = false
    @State private var onlineCountdown: Int = 0
    @State private var readingCountdown: Int = 0

    @State private var libreLinkUpResponse: String = "[...]"
    @State private var libreLinkUpHistory: [LibreLinkUpGlucose] = []
    @State private var libreLinkUpLogbookHistory: [LibreLinkUpGlucose] = []

    @State private var timer = Timer.publish(every: 1, on: .main, in: .common).autoconnect()
    @State private var minuteTimer = Timer.publish(every: 60, on: .main, in: .common).autoconnect()


    func reloadLibreLinkUp() async {
        if let libreLinkUp = app.main?.libreLinkUp {
            var dataString = ""
            var retries = 0
        loop: repeat {
            do {
                if settings.libreLinkUpPatientId.isEmpty ||
                    settings.libreLinkUpToken.isEmpty ||
                    settings.libreLinkUpTokenExpirationDate < Date() ||
                    retries == 1 {
                    do {
                        try await libreLinkUp.login()
                    } catch {
                        libreLinkUpResponse = error.localizedDescription.capitalized
                    }
                }
                if !(settings.libreLinkUpPatientId.isEmpty ||
                     settings.libreLinkUpToken.isEmpty) {
                    let (data, _, graphHistory, logbookData, logbookHistory, _) = try await libreLinkUp.getPatientGraph()
                    dataString = (data as! Data).string
                    libreLinkUpResponse = dataString + (logbookData as! Data).string
                    // TODO: just merge with newer values
                    libreLinkUpHistory = graphHistory.reversed()
                    libreLinkUpLogbookHistory = logbookHistory
                    if graphHistory.count > 0 {
                        DispatchQueue.main.async {
                            settings.lastOnlineDate = Date()
                            let lastMeasurement = libreLinkUpHistory[0]
                            app.lastReadingDate = lastMeasurement.glucose.date
                            app.sensor?.lastReadingDate = app.lastReadingDate
                            app.currentGlucose = lastMeasurement.glucose.value
                            // TODO: keep the raw values filling the gaps with -1 values
                            history.rawValues = []
                            history.factoryValues = libreLinkUpHistory.dropFirst().map(\.glucose) // TEST
                            var trend = history.factoryTrend
                            if trend.isEmpty || lastMeasurement.id > trend[0].id {
                                trend.insert(lastMeasurement.glucose, at: 0)
                            }
                            trend = trend.filter { lastMeasurement.id - $0.id < 22 }
                            history.factoryTrend = trend
                            // TODO: merge and update sensor history / trend
                            app.main.didParseSensor(app.sensor)
                        }
                    }
                    if dataString != "{\"message\":\"MissingCachedUser\"}\n" {
                        break loop
                    }
                    retries += 1
                }
            } catch {
                libreLinkUpResponse = error.localizedDescription.capitalized
            }
        } while retries == 1
        }
    }


    var body: some View {
        NavigationView {

            // Workaround to avoid top textfields scrolling offscreen in iOS 14
            GeometryReader { _ in
                VStack(spacing: 0) {

                    HStack(alignment: .top) {

                        Button {
                            app.selectedService = app.selectedService == .nightscout ? .libreLinkUp : .nightscout
                        } label: {
                            Image(app.selectedService.description).resizable().frame(width: 32, height: 32).shadow(color: .cyan, radius: 4.0 )
                        }
                        .padding(.top, 8).padding(.trailing, 4)

                        VStack(spacing: 0) {

                            if app.selectedService == .nightscout {
                                HStack(alignment: .firstTextBaseline, spacing: 0) {
                                    Text("https://").foregroundColor(Color(.lightGray))
                                    TextField("Nightscout URL", text: $settings.nightscoutSite)
                                        .keyboardType(.URL)
                                        .textContentType(.URL)
                                        .autocorrectionDisabled(true)
                                }
                                HStack(alignment: .firstTextBaseline) {
                                    Text("token:").foregroundColor(Color(.lightGray))
                                    SecureField("token", text: $settings.nightscoutToken)
                                }

                            } else if app.selectedService == .libreLinkUp {
                                HStack(alignment: .firstTextBaseline, spacing: 0) {
                                    Text("email: ").foregroundColor(Color(.lightGray))
                                    TextField("email", text: $settings.libreLinkUpEmail)
                                        .keyboardType(.emailAddress)
                                        .textContentType(.emailAddress)
                                        .autocorrectionDisabled(true)
                                        .onSubmit {
                                            settings.libreLinkUpPatientId = ""
                                            libreLinkUpResponse = "[Logging in...]"
                                            Task {
                                                await reloadLibreLinkUp()
                                            }
                                        }
                                }
                                HStack(alignment: .firstTextBaseline) {
                                    Text("password:").foregroundColor(Color(.lightGray))
                                    SecureField("password", text: $settings.libreLinkUpPassword)
                                }
                                .onSubmit {
                                    settings.libreLinkUpPatientId = ""
                                    libreLinkUpResponse = "[Logging in...]"
                                    Task {
                                        await reloadLibreLinkUp()
                                    }
                                }
                            }
                        }

                        VStack(spacing: 0) {

                            Button {
                                withAnimation { settings.libreLinkUpScrapingLogbook.toggle() }
                                if settings.libreLinkUpScrapingLogbook {
                                    libreLinkUpResponse = "[...]"
                                    Task {
                                        await reloadLibreLinkUp()
                                    }
                                }
                            } label: {
                                Image(systemName: settings.libreLinkUpScrapingLogbook ? "book.closed.circle.fill" : "book.closed.circle").resizable().frame(width: 32, height: 32).foregroundColor(.blue)
                            }

                            Text(onlineCountdown > -1 ? "\(onlineCountdown) s" : "...")
                                .fixedSize()
                                .foregroundColor(.cyan).font(Font.caption.monospacedDigit())
                                .onReceive(timer) { _ in
                                    onlineCountdown = settings.onlineInterval * 60 - Int(Date().timeIntervalSince(settings.lastOnlineDate))
                                }
                        }

                        Spacer()

                        VStack(spacing: 0) {

                            // TODO: reload web page

                            Button {
                                app.main.rescan()
                            } label: {
                                Image(systemName: "arrow.clockwise.circle").resizable().frame(width: 32, height: 32).foregroundColor(.accentColor)
                            }

                            Text(!app.deviceState.isEmpty && app.deviceState != "Disconnected" && (readingCountdown > 0 || app.deviceState == "Reconnecting...") ?
                                 "\(readingCountdown) s" : "...")
                            .fixedSize()
                            .foregroundColor(.orange).font(Font.caption.monospacedDigit())
                            .onReceive(timer) { _ in
                                readingCountdown = settings.readingInterval * 60 - Int(Date().timeIntervalSince(app.lastConnectionDate))
                            }
                        }

                        Button {
                            if app.main.nfc.isAvailable {
                                app.main.nfc.startSession()
                                if let healthKit = app.main.healthKit { healthKit.read() }
                                if let nightscout = app.main.nightscout { nightscout.read() }
                            } else {
                                showingNFCAlert = true
                            }
                        } label: {
                            Image("NFC").renderingMode(.template).resizable().frame(width: 39, height: 27)
                        }
                        .alert("NFC not supported", isPresented: $showingNFCAlert) {
                        } message: {
                            Text("This device doesn't allow scanning the Libre.")
                        }
                        .padding(.top, 2)

                    }.foregroundColor(.accentColor)
                        .padding(.bottom, 4)
#if targetEnvironment(macCatalyst)
                        .padding(.horizontal, 15)
#endif

                    if app.selectedService == .nightscout {

                        WebView(site: settings.nightscoutSite, query: "token=\(settings.nightscoutToken)", delegate: app.main?.nightscout )
                            .frame(height: UIScreen.main.bounds.size.height * 0.60)
                            .alert("JavaScript", isPresented: $app.showingJavaScriptConfirmAlert) {
                                Button("OK") { app.main.log("JavaScript alert: selected OK") }
                                Button("Cancel", role: .cancel) { app.main.log("JavaScript alert: selected Cancel") }
                            } message: {
                                Text(app.JavaScriptConfirmAlertMessage)
                            }

                        List {
                            ForEach(history.nightscoutValues) { glucose in
                                (Text("\(String(glucose.source[..<(glucose.source.lastIndex(of: " ") ?? glucose.source.endIndex)])) \(glucose.date.shortDateTime)") + Text("  \(glucose.value, specifier: "%3d")").bold())
                                    .fixedSize(horizontal: false, vertical: true).listRowInsets(EdgeInsets())
                            }
                            .frame(maxWidth: .infinity, alignment: .topLeading)
                        }
                        .listStyle(.plain)
                        .font(.system(.caption, design: .monospaced)).foregroundColor(.cyan)
#if targetEnvironment(macCatalyst)
                        .padding(.leading, 15)
#endif
                        .onAppear { if let nightscout = app.main?.nightscout { nightscout.read() } }
                    }


                    if app.selectedService == .libreLinkUp {
                        VStack {
                            ScrollView(showsIndicators: true) {
                                Text(libreLinkUpResponse)
                                    .font(.system(.footnote, design: .monospaced)).foregroundColor(colorScheme == .dark ? Color(.lightGray) : Color(.darkGray))
                                    .textSelection(.enabled)
                            }
#if targetEnvironment(macCatalyst)
                            .padding()
#endif

                            if libreLinkUpHistory.count > 0 {
                                Chart(libreLinkUpHistory) {
                                    PointMark(x: .value("Time", $0.glucose.date),
                                              y: .value("Glucose", $0.glucose.value)
                                    )
                                    .foregroundStyle($0.color.color)
                                    .symbolSize(12)
                                }
                                .chartXAxis {
                                    AxisMarks(values: .stride(by: .hour, count: 3)) { _ in
                                        AxisGridLine()
                                        AxisTick()
                                        AxisValueLabel(format: .dateTime.hour().minute())
                                    }
                                }
                                .padding()
                            }

                            HStack {

                                List {
                                    ForEach(libreLinkUpHistory) { libreLinkUpGlucose in
                                        let glucose = libreLinkUpGlucose.glucose
                                        (Text("\(String(glucose.source[..<(glucose.source.lastIndex(of: " ") ?? glucose.source.endIndex)])) \(glucose.date.shortDateTime)") + Text("  \(glucose.value, specifier: "%3d")").bold())
                                            .foregroundColor(libreLinkUpGlucose.color.color)
                                            .fixedSize(horizontal: false, vertical: true).listRowInsets(EdgeInsets())
                                    }
                                    .frame(maxWidth: .infinity, alignment: .topLeading)
                                }
                                // TODO: respect onlineInterval
                                .onReceive(minuteTimer) { _ in
                                    Task {
                                        await reloadLibreLinkUp()
                                    }
                                }

                                if settings.libreLinkUpScrapingLogbook {
                                    // TODO: alarms
                                    List {
                                        ForEach(libreLinkUpLogbookHistory) { libreLinkUpGlucose in
                                            let glucose = libreLinkUpGlucose.glucose
                                            (Text("\(String(glucose.source[..<(glucose.source.lastIndex(of: " ") ?? glucose.source.endIndex)])) \(glucose.date.shortDateTime)") + Text("  \(glucose.value, specifier: "%3d") ").bold() + Text(libreLinkUpGlucose.trendArrow!.symbol).font(.subheadline))
                                                .foregroundColor(libreLinkUpGlucose.color.color)
                                                .fixedSize(horizontal: false, vertical: true).listRowInsets(EdgeInsets())
                                        }
                                        .frame(maxWidth: .infinity, alignment: .topLeading)
                                    }
                                }
                            }
                            .listStyle(.plain)
                            .font(.system(.caption, design: .monospaced))
                        }
                        .task {
                            await reloadLibreLinkUp()
                        }
#if targetEnvironment(macCatalyst)
                        .padding(.leading, 15)
#endif

                    }
                }
            }
            .navigationBarTitleDisplayMode(.inline)
            .navigationTitle("Online")
        }.navigationViewStyle(.stack)
    }
}


struct OnlineView_Previews: PreviewProvider {

    static var previews: some View {
        Group {
            ContentView()
                .preferredColorScheme(.dark)
                .environmentObject(AppState.test(tab: .online))
                .environmentObject(Log())
                .environmentObject(History.test)
                .environmentObject(Settings())
        }
    }
}
