import Foundation
import SwiftUI


struct ConsoleTab: View {
    var body: some View {
        NavigationView {
            // Workaround to avoid top textfields scrolling offscreen in iOS 14
            GeometryReader { _ in
                Console()
            }
        }
        .navigationViewStyle(.stack)
    }
}


struct Console: View {
    @EnvironmentObject var app: AppState
    @EnvironmentObject var log: Log
    @EnvironmentObject var settings: Settings

    @Environment(\.colorScheme) var colorScheme

    @State private var showingNFCAlert = false
    @State private var showingUnlockConfirmationDialog = false
    @State private var showingResetConfirmationDialog = false
    @State private var showingProlongConfirmationDialog = false
    @State private var showingActivateConfirmationDialog = false
    @State private var showingFilterField = false
    @State private var filterString = ""

    var body: some View {
        VStack(spacing: 0) {

            if showingFilterField {
                HStack {

                    HStack {
                        Image(systemName: "magnifyingglass").padding(.leading).foregroundColor(Color(.lightGray))
                        TextField("Filter", text: $filterString)
                            .autocapitalization(.none)
                            .padding(.vertical, 8)
                            .foregroundColor(.accentColor)
                        if filterString.count > 0 {
                            Button {
                                filterString = ""
                            } label: {
                                Image(systemName: "xmark.circle.fill").padding(.trailing)
                            }
                        }
                    }
                    .background(Color(.secondarySystemBackground))
                    .cornerRadius(10)
                    .padding()

                    HStack {
                        ForEach(Array(log.labels), id: \.self) { label in
                            Button {
                                filterString = label
                            } label: {
                                Text(label).font(.footnote).foregroundColor(.blue)
                            }
                        }
                    }
                    .padding()

                }
            }

            HStack(spacing: 4) {

                ScrollViewReader { proxy in
                    ScrollView(showsIndicators: true) {
                        LazyVStack(alignment: .leading, spacing: 20) {
                            if filterString.isEmpty {
                                ForEach(log.entries) { entry in
                                    Text(entry.message)
                                }
                            } else {
                                let pattern = filterString.lowercased()
                                ForEach(log.entries.filter { $0.message.lowercased().contains(pattern) }) { entry in
                                    Text(entry.message)
                                }
                            }
                        }
                        .padding(4)
                    }
                    .font(.system(.footnote, design: .monospaced)).foregroundColor(colorScheme == .dark ? Color(.lightGray) : Color(.darkGray))
                    .onChange(of: log.entries.count) {
                        if !settings.reversedLog {
                            withAnimation {
                                proxy.scrollTo(log.entries.last!.id, anchor: .bottom)
                            }
                        } else {
                            withAnimation {
                                proxy.scrollTo(log.entries[0].id, anchor: .top)
                            }
                        }
                    }
                    .onChange(of: log.entries[0].id) {
                        if !settings.reversedLog {
                            withAnimation {
                                proxy.scrollTo(log.entries.last!.id, anchor: .bottom)
                            }
                        } else {
                            withAnimation {
                                proxy.scrollTo(log.entries[0].id, anchor: .top)
                            }
                        }
                    }
                }

                ConsoleSidebar(showingNFCAlert: $showingNFCAlert)
            }
#if targetEnvironment(macCatalyst)
            .padding(.horizontal, 15)
#endif
        }
        .navigationBarTitleDisplayMode(.inline)
        .navigationTitle("Console")
        .toolbar {
            ToolbarItemGroup(placement: .navigationBarTrailing) {
                Button {
                    withAnimation { showingFilterField.toggle() }
                } label: {
                    VStack(spacing: 0) {
                        Image(systemName: filterString.isEmpty ? "line.horizontal.3.decrease.circle" : "line.horizontal.3.decrease.circle.fill")
                        Text("Filter").font(.footnote)
                    }
                }

                Menu {

                    Button {
                        if app.main.nfc.isAvailable {
                            settings.logging = true
                            app.main.nfc.taskRequest = .enableStreaming
                        } else {
                            showingNFCAlert = true
                        }
                    } label: {
                        Label {
                            Text("RePair Streaming")
                        } icon: {
                            Image("NFC").renderingMode(.template).resizable().frame(width: 26, height: 18)
                        }
                    }

                    Button {
                        if app.main.nfc.isAvailable {
                            settings.logging = true
                            app.main.nfc.taskRequest = .readFRAM
                        } else {
                            showingNFCAlert = true
                        }
                    } label: {
                        Label("Read FRAM", systemImage: "memorychip")
                    }


                    Menu {

                        Button {
                            if app.main.nfc.isAvailable {
                                settings.logging = true
                                showingUnlockConfirmationDialog = true
                            } else {
                                showingNFCAlert = true
                            }
                        } label: {
                            Label("Unlock", systemImage: "lock.open")
                        }

                        Button {
                            if app.main.nfc.isAvailable {
                                settings.logging = true
                                showingResetConfirmationDialog = true
                            } else {
                                showingNFCAlert = true
                            }
                        } label: {
                            Label("Reset", systemImage: "00.circle")
                        }

                        Button {
                            if app.main.nfc.isAvailable {
                                settings.logging = true
                                showingProlongConfirmationDialog = true
                            } else {
                                showingNFCAlert = true
                            }
                        } label: {
                            Label("Prolong", systemImage: "infinity.circle")
                        }

                        Button {
                            if app.main.nfc.isAvailable {
                                settings.logging = true
                                showingActivateConfirmationDialog = true
                            } else {
                                showingNFCAlert = true
                            }
                        } label: {
                            Label("Activate", systemImage: "bolt.circle")
                        }


                    } label: {
                        Label("Hacks", systemImage: "wand.and.stars")
                    }


                    Button {
                        if app.main.nfc.isAvailable {
                            settings.logging = true
                            app.main.nfc.taskRequest = .dump
                        } else {
                            showingNFCAlert = true
                        }
                    } label: {
                        Label("Dump Memory", systemImage: "cpu")
                    }


                } label: {
                    Label {
                        Text("Tools")
                    } icon: {
                        VStack(spacing: 0) {
                            Image(systemName: "wrench.and.screwdriver")
                            Text("Tools").font(.footnote)
                        }
                    }
                }
            }
        }
        .alert("NFC not supported", isPresented: $showingNFCAlert) {
        } message: {
            Text("This device doesn't allow scanning the Libre.")
        }
        .confirmationDialog("Unlocking the Libre 2 is not reversible and will make it unreadable by LibreLink and other apps.", isPresented: $showingUnlockConfirmationDialog, titleVisibility: .visible) {
            Button("Unlock", role: .destructive) {
                app.main.nfc.taskRequest = .unlock
            }
        }
        .confirmationDialog("Resetting the sensor will clear its measurements memory and put it in an inactivated state.", isPresented: $showingResetConfirmationDialog, titleVisibility: .visible) {
            Button("Reset", role: .destructive) {
                app.main.nfc.taskRequest = .reset
            }
        }
        .confirmationDialog("Prolonging the sensor will overwrite its maximum life to 0xFFFF minutes (≈ 45.5 days)", isPresented: $showingProlongConfirmationDialog, titleVisibility: .visible) {
            Button("Prolong", role: .destructive) {
                app.main.nfc.taskRequest = .prolong
            }
        }
        .confirmationDialog("Activating a fresh/ened sensor will put it in the usual warming-up state for 60 minutes.", isPresented: $showingActivateConfirmationDialog, titleVisibility: .visible) {
            Button("Activate", role: .destructive) {
                app.main.nfc.taskRequest = .activate
            }
        }

    }
}


struct ConsoleSidebar: View {
    @EnvironmentObject var app: AppState
    @EnvironmentObject var log: Log
    @EnvironmentObject var settings: Settings

    @Binding var showingNFCAlert: Bool

    @State private var onlineCountdown: Int = 0
    @State private var readingCountdown: Int = 0

    let timer = Timer.publish(every: 1, on: .main, in: .common).autoconnect()

    var body: some View {
        VStack(alignment: .center, spacing: 8) {

            Spacer()

            VStack(spacing: 0) {

                Button {
                    if app.main.nfc.isAvailable {
                        app.main.nfc.startSession()
                    } else {
                        showingNFCAlert = true
                    }
                } label: {
                    Image("NFC").renderingMode(.template).resizable().frame(width: 26, height: 18).padding(EdgeInsets(top: 10, leading: 6, bottom: 14, trailing: 0))
                }

                Button {
                    app.main.rescan()
                } label: {
                    VStack {
                        Image("Bluetooth").renderingMode(.template).resizable().frame(width: 32, height: 32)
                        Text("Scan")
                    }
                }
            }.foregroundColor(.accentColor)


            if (app.status.hasPrefix("Scanning") || app.status.hasSuffix("retrying...")) && app.main.centralManager.state != .poweredOff {
                Button {
                    app.main.centralManager.stopScan()
                    app.main.status("Stopped scanning")
                    app.main.log("Bluetooth: stopped scanning")
                } label: {
                    Image(systemName: "octagon").resizable().frame(width: 32, height: 32)
                        .overlay((Image(systemName: "hand.raised.fill").resizable().frame(width: 18, height: 18).offset(x: 1)))
                }.foregroundColor(.red)

            } else if app.deviceState == "Connected" || app.deviceState == "Reconnecting..." || app.status.hasSuffix("retrying...") {
                Button {
                    if app.device != nil {
                        app.main.centralManager.cancelPeripheralConnection(app.device.peripheral!)
                    }
                } label: {
                    Image(systemName: "escape").resizable().padding(5).frame(width: 32, height: 32)
                        .foregroundColor(.blue)
                }

            } else {
                Image(systemName: "octagon").resizable().frame(width: 32, height: 32)
                    .hidden()
            }

            VStack(spacing: 6) {

                if !app.deviceState.isEmpty && app.deviceState != "Disconnected" {
                    Text(readingCountdown > 0 || app.deviceState == "Reconnecting..." ?
                         "\(readingCountdown) s" : "")
                    .fixedSize()
                    .font(Font.caption.monospacedDigit()).foregroundColor(.orange)
                    .onReceive(timer) { _ in
                        readingCountdown = settings.readingInterval * 60 - Int(Date().timeIntervalSince(app.lastConnectionDate))
                    }
                } else {
                    Text("").fixedSize().font(Font.caption.monospacedDigit()).hidden()
                }

                Text(onlineCountdown > 0 ? "\(onlineCountdown) s" : "")
                    .fixedSize()
                    .foregroundColor(.cyan).font(Font.caption.monospacedDigit())
                    .onReceive(timer) { _ in
                        onlineCountdown = settings.onlineInterval * 60 - Int(Date().timeIntervalSince(settings.lastOnlineDate))
                    }

            }

            Spacer()

            Button {
                settings.userLevel = UserLevel(rawValue: (settings.userLevel.rawValue + 1) % UserLevel.allCases.count)!
            } label: {
                VStack {
                    Image(systemName: ["doc.plaintext", "ladybug", "testtube.2"][settings.userLevel.rawValue]).resizable().frame(width: 24, height: 24).offset(y: 2)
                    Text(["Basic", "Devel", "Test  "][settings.userLevel.rawValue]).font(.caption).offset(y: -4)
                }
            }
            .background(settings.userLevel != .basic ? Color.accentColor : Color.clear)
            .clipShape(RoundedRectangle(cornerRadius: 5))
            .foregroundColor(settings.userLevel != .basic ? Color(.systemBackground) : .accentColor)
            .padding(.bottom, 6)

            VStack(spacing: 0) {

                Button {
                    UIPasteboard.general.string = log.entries.map(\.message).joined(separator: "\n \n")
                } label: {
                    VStack {
                        Image(systemName: "doc.on.doc").resizable().frame(width: 24, height: 24)
                        Text("Copy").offset(y: -6)
                    }
                }

                Button {
                    log.entries = [LogEntry(message: "Log cleared \(Date().local)")]
                    log.labels = []
                    print("Log cleared \(Date().local)")
                } label: {
                    VStack {
                        Image(systemName: "clear").resizable().frame(width: 24, height: 24)
                        Text("Clear").offset(y: -6)
                    }
                }

            }

            Button {
                settings.reversedLog.toggle()
                log.entries.reverse()
            } label: {
                VStack {
                    Image(systemName: "backward.fill").resizable().frame(width: 12, height: 12).offset(y: 5)
                    Text(" REV ").offset(y: -2)
                }
            }
            .background(settings.reversedLog ? Color.accentColor : Color.clear)
            .border(Color.accentColor, width: 3)
            .cornerRadius(5)
            .foregroundColor(settings.reversedLog ? Color(.systemBackground) : .accentColor)


            Button {
                settings.logging.toggle()
                app.main.log("\(settings.logging ? "Log started" : "Log stopped") \(Date().local)")
            } label: {
                VStack {
                    Image(systemName: settings.logging ? "stop.circle" : "play.circle").resizable().frame(width: 32, height: 32)
                }
            }.foregroundColor(settings.logging ? .red : .green)

            Spacer()

        }.font(.footnote)
    }
}


struct Console_Previews: PreviewProvider {

    static var previews: some View {
        Group {
            ContentView()
                .preferredColorScheme(.dark)
                .environmentObject(AppState.test(tab: .console))
                .environmentObject(Log())
                .environmentObject(History.test)
                .environmentObject(Settings())
        }
    }
}
