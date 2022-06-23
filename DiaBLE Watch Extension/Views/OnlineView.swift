import Foundation
import SwiftUI


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

    @State private var readingCountdown: Int = 0

    @State private var libreLinkUpResponse: String = "[...]"
    @State private var libreLinkUpHistory: [LibreLinkUpGlucose] = []
    @State private var libreLinkUpLogbookHistory: [LibreLinkUpGlucose] = []
    @State private var showingCredentials: Bool = true

    let timer = Timer.publish(every: 1, on: .main, in: .common).autoconnect()
    // TODO: one-minute timer for Libre 3


    func reloadLibreLinkUp() async {
        libreLinkUpHistory = []
        libreLinkUpLogbookHistory = []
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
                    let (data, _, history, logbookData, logbookHistory, _) = try await libreLinkUp.getPatientGraph()
                    dataString = (data as! Data).string
                    libreLinkUpResponse = dataString + (logbookData as! Data).string
                    libreLinkUpHistory = history.reversed()
                    libreLinkUpLogbookHistory = logbookHistory
                    // TODO
                    if dataString != "{\"message\":\"MissingCachedUser\"}" {
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
        VStack {

            HStack {

                Button {
                    app.selectedService = app.selectedService == .nightscout ? .libreLinkUp : .nightscout
                } label: {
                    Image(app.selectedService.description).resizable().frame(width: 32, height: 32).shadow(color: .cyan, radius: 4.0 )
                }

                VStack(spacing: 0) {

                    Text("\(app.selectedService.description)").foregroundColor(.accentColor)

                    HStack {

                        Button {
                            withAnimation { showingCredentials.toggle() }
                        } label: {
                            Image(systemName: showingCredentials ? "person.crop.circle.fill" : "person.crop.circle").resizable().frame(width: 20, height: 20).foregroundColor(.blue)
                        }

                        Button {
                            withAnimation { settings.libreLinkUpScrapingLogbook.toggle() }
                            if settings.libreLinkUpScrapingLogbook {
                                libreLinkUpResponse = "[...]"
                                Task {
                                    await reloadLibreLinkUp()
                                }
                            }
                        } label: {
                            Image(systemName: settings.libreLinkUpScrapingLogbook ? "book.closed.circle.fill" : "book.closed.circle").resizable().frame(width: 20, height: 20).foregroundColor(.blue)
                        }
                    }
                }
                .frame(maxWidth: .infinity)

                VStack(spacing: 0) {
                    Button {
                        app.main.rescan()
                    } label: {
                        Image(systemName: "arrow.clockwise.circle").resizable().frame(width: 16, height: 16)
                            .foregroundColor(.blue)
                    }
                    Text(app.deviceState != "Disconnected" && (readingCountdown > 0 || app.deviceState == "Reconnecting...") ?
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

            if showingCredentials {
                HStack {

                    if app.selectedService == .nightscout {
                        TextField("Nightscout URL", text: $settings.nightscoutSite)
                            .textContentType(.URL)
                        SecureField("token", text: $settings.nightscoutToken)

                    } else if app.selectedService == .libreLinkUp {
                        TextField("email", text: $settings.libreLinkUpEmail)
                            .textContentType(.emailAddress)
                            .onSubmit {
                                settings.libreLinkUpPatientId = ""
                                libreLinkUpResponse = "[Logging in...]"
                                Task {
                                    await reloadLibreLinkUp()
                                }
                            }
                        SecureField("password", text: $settings.libreLinkUpPassword)
                            .onSubmit {
                                settings.libreLinkUpPatientId = ""
                                libreLinkUpResponse = "[Logging in...]"
                                Task {
                                    await reloadLibreLinkUp()
                                }
                            }
                    }
                }.font(.footnote)
            }

            if app.selectedService == .nightscout {
                List {
                    ForEach(history.nightscoutValues) { glucose in
                        (Text("\(String(glucose.source[..<(glucose.source.lastIndex(of: " ") ?? glucose.source.endIndex)])) \(glucose.date.shortDateTime)") + Text("  \(glucose.value, specifier: "%3d")").bold())
                            .fixedSize(horizontal: false, vertical: true)
                    }
                    .frame(maxWidth: .infinity, alignment: .topLeading)
                }
                // .font(.system(.footnote, design: .monospaced))
                .foregroundColor(.cyan)
                .onAppear { if let nightscout = app.main?.nightscout { nightscout.read()
                    app.main.log("nightscoutValues count \(history.nightscoutValues.count)")

                } }
            }

            if app.selectedService == .libreLinkUp {

                ScrollView(showsIndicators: true) {

                    VStack(spacing: 0) {


                        List {
                            ForEach(libreLinkUpHistory) { libreLinkUpGlucose in
                                let glucose = libreLinkUpGlucose.glucose
                                (Text("\(String(glucose.source[..<(glucose.source.lastIndex(of: " ") ?? glucose.source.endIndex)])) \(glucose.date.shortDateTime)") + Text("  \(glucose.value, specifier: "%3d")").bold())
                                    .foregroundColor(libreLinkUpGlucose.color.color)
                                    .padding(.vertical, 1)
                                    .fixedSize(horizontal: false, vertical: true)
                            }
                            .frame(maxWidth: .infinity, alignment: .topLeading)
                        }
                        // .font(.system(.footnote, design: .monospaced))
                        .frame(minHeight: 64)

                        Text(libreLinkUpResponse)

                        // .font(.system(.footnote, design: .monospaced)).foregroundColor(Color(.lightGray))
                            .font(.footnote).foregroundColor(Color(.lightGray))
                    }

                }
                .task {
                    await reloadLibreLinkUp()
                }
            }
        }
        .navigationTitle("Online")
        .edgesIgnoringSafeArea([.bottom])
        .buttonStyle(.plain)
        .accentColor(.blue)

    }
}


struct OnlineView_Previews: PreviewProvider {

    static var previews: some View {
        Group {
            OnlineView()
                .environmentObject(AppState.test(tab: .online))
                .environmentObject(History.test)
                .environmentObject(Settings())
        }
    }
}
