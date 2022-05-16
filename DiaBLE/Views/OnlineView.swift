import Foundation
import SwiftUI


struct OnlineView: View {
    @EnvironmentObject var app: AppState
    @EnvironmentObject var history: History
    @EnvironmentObject var settings: Settings

    @Environment(\.colorScheme) var colorScheme

    @State private var showingNFCAlert = false
    @State private var readingCountdown: Int = 0

    @State private var libreLinkUpResponse: String = "TODO"
    @State private var libreLinkUpHistory: [Glucose] = []


    let timer = Timer.publish(every: 1, on: .main, in: .common).autoconnect()


    var body: some View {
        NavigationView {

            // Workaround to avoid top textfields scrolling offscreen in iOS 14
            GeometryReader { _ in
                VStack(spacing: 0) {

                    HStack {
                        Button {
                            app.selectedService = app.selectedService == .nightscout ? .libreLinkUp : .nightscout
                        } label: {
                            Image(app.selectedService.description).resizable().frame(width: 32, height: 32).shadow(color: .cyan, radius: 4.0 )
                        }

                        VStack(spacing: 0) {

                            if app.selectedService == .nightscout {
                                HStack(alignment: .firstTextBaseline, spacing: 0) {
                                    Text("https://").foregroundColor(Color(.lightGray))
                                    TextField("Nightscout URL", text: $settings.nightscoutSite)
                                        .keyboardType(.URL)
                                        .textContentType(.URL)
                                        .disableAutocorrection(true)
                                }
                                HStack(alignment: .firstTextBaseline) {
                                    Text("token:").foregroundColor(Color(.lightGray))
                                    SecureField("token", text: $settings.nightscoutToken)
                                }

                            } else {
                                HStack(alignment: .firstTextBaseline, spacing: 0) {
                                    Text("email: ").foregroundColor(Color(.lightGray))
                                    TextField("email", text: $settings.libreLinkUpEmail)
                                        .keyboardType(.emailAddress)
                                        .textContentType(.emailAddress)
                                        .disableAutocorrection(true)
                                }
                                HStack(alignment: .firstTextBaseline) {
                                    Text("password:").foregroundColor(Color(.lightGray))
                                    SecureField("password", text: $settings.libreLinkUpPassword)
                                }
                            }
                        }

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
                            Image("NFC").renderingMode(.template).resizable().frame(width: 39, height: 27).padding(.bottom, 12)
                        }
                        .alert("NFC not supported", isPresented: $showingNFCAlert) {
                        } message: {
                            Text("This device doesn't allow scanning the Libre.")
                        }

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
                            List {
                                ForEach(libreLinkUpHistory) { glucose in
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
                        }
                        .task {
                            do {
                                let libreLinkUp = LibreLinkUp(main: app.main)
                                if Date(timeIntervalSince1970: settings.libreLinkUpTokenExpires) < Date() {
                                    _ = try await libreLinkUp.login()
                                }
                                let (data, _, history) = try await libreLinkUp.requestConnections()
                                libreLinkUpResponse = (data as! Data).string
                                libreLinkUpHistory = history.reversed()
                            } catch {
                                libreLinkUpResponse = error.localizedDescription
                            }
                        }

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
