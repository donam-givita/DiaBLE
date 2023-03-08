import SwiftUI


struct HamburgerMenu: View {

    @Environment(\.colorScheme) var colorScheme

    @Binding var showingHamburgerMenu: Bool

    @State private var showingHelp = false
    @State private var showingAbout = false

    let credits = [
        "@bubbledevteam": "https://github.com/bubbledevteam",
        "@captainbeeheart": "https://github.com/captainbeeheart",
        "@creepymonster": "https://github.com/creepymonster",
        "@cryptax": "https://github.com/cryptax",
        "CryptoSwift": "https://github.com/krzyzanowskim/CryptoSwift",
        "@dabear": "https://github.com/dabear",
        "@DecentWoodpecker67": "https://github.com/DecentWoodpecker67",
        "@ivalkou": "https://github.com/ivalkou",
        "Jaap Korthals Altes": "https://github.com/j-kaltes",
        "@keencave": "https://github.com/keencave",
        "LibreMonitor": "https://github.com/UPetersen/LibreMonitor/tree/Swift4",
        "Loop": "https://github.com/LoopKit/Loop",
        "Marek Macner": "https://github.com/MarekM60",
        "@monder": "https://github.com/monder",
        "Nightguard": "https://github.com/nightscout/nightguard",
        "Nightscout LibreLink Up Uploader": "https://github.com/timoschlueter/nightscout-librelink-up",
        "@travisgoodspeed": "https://github.com/travisgoodspeed",
        "WoofWoof": "https://github.com/gshaviv/ninety-two",
        "xDrip": "https://github.com/Faifly/xDrip",
        "xDrip+": "https://github.com/NightscoutFoundation/xDrip",
        "xDrip4iO5": "https://github.com/JohanDegraeve/xdripswift"
    ]

    var body: some View {
        VStack(alignment: .leading, spacing: 20) {

            HStack {
                Spacer()
            }

            Button {
                withAnimation { showingHelp = true }
            } label: {
                Label("Help", systemImage: "questionmark.circle")
            }
            .padding(.leading, 6)
            .padding(.top, 20)
            .sheet(isPresented: $showingHelp) {
                NavigationView {
                    VStack(spacing: 40) {
                        VStack {
                            Text("Wiki").font(.headline)
                            Link("https://github.com/gui-dos/DiaBLE/wiki",
                                 destination: URL(string: "https://github.com/gui-dos/DiaBLE/wiki")!)
                        }
                        .padding(.top, 80)
                        Text("[ TODO ]")
                        Spacer()
                    }
                    .navigationBarTitleDisplayMode(.inline)
                    .navigationTitle("Help")
                    .navigationViewStyle(.stack)
                    .toolbar {
                        Button {
                            withAnimation { showingHelp = false }
                        } label: {
                            Text("Close")

                        }
                    }
                    .onAppear {
                        withAnimation { showingHamburgerMenu = false }
                    }
                    // TODO: click on any area
                    .onTapGesture {
                        withAnimation { showingHelp = false }
                    }
                }
            }

            Button {
                withAnimation { showingAbout = true }
            } label: {
                Label("About", systemImage: "info.circle")
            }
            .padding(.leading, 6)
            .sheet(isPresented: $showingAbout) {
                NavigationView {
                    VStack(spacing: 40) {
                        VStack {
                            // TODO: get AppIcon 1024x1024
                            // Image("AppIcon").resizable().frame(width: 100, height: 100)
                            // FIXME: crashes in TestFlight (not in Release scheme)
                            if UIImage(named: "AppIcon") != nil {
                                Image(uiImage: UIImage(named: "AppIcon")!).resizable().frame(width: 100, height: 100)
                            }
                            Link("https://github.com/gui-dos/DiaBLE",
                                 destination: URL(string: "https://github.com/gui-dos/DiaBLE")!)
                        }

                        VStack {
                            Image(systemName: colorScheme == .dark ? "envelope.fill" : "envelope")
                            Link(Data(base64Encoded: "Z3VpZG8uc29yYW56aW9AZ21haWwuY29t")!.string,
                                 destination: URL(string: "mailto:\(Data(base64Encoded: "Z3VpZG8uc29yYW56aW9AZ21haWwuY29t")!.string)")!)
                        }

                        VStack {
                            Image(systemName: "giftcard")
                            Link("PayPal", destination: URL(string: Data(base64Encoded: "aHR0cHM6Ly9wYXlwYWwubWUvZ3Vpc29y")!.string)!)
                        }

                        VStack {
                            Text("Credits:")
                            ScrollView {
                                ForEach(credits.sorted(by: <), id: \.key) { name, url in
                                    Link(name, destination: URL(string: url)!)
                                        .padding(.horizontal, 32)
                                }
                            }
                            .frame(height: 130)
                        }

                    }
                    .navigationBarTitleDisplayMode(.inline)
                    .navigationTitle("About")
                    .navigationViewStyle(.stack)
                    .toolbar {
                        Button {
                            withAnimation { showingAbout = false }
                        } label: {
                            Text("Close")

                        }
                    }
                }
                .onAppear {
                    withAnimation { showingHamburgerMenu = false }
                }
                // TODO: click on any area
                .onTapGesture {
                    withAnimation { showingAbout = false }
                }
            }

            Spacer()

        }
        .background(Color(.secondarySystemBackground))

        // TODO: swipe gesture
        .onLongPressGesture(minimumDuration: 0) {
            withAnimation(.easeOut(duration: 0.15)) { showingHamburgerMenu = false }
        }

    }
}


struct HamburgerMenu_Previews: PreviewProvider {
    static var previews: some View {
        Group {
            HamburgerMenu(showingHamburgerMenu: Monitor(showingHamburgerMenu: true).$showingHamburgerMenu)
                .preferredColorScheme(.dark)
                .previewLayout(.fixed(width: 180, height: 400))
        }
    }
}
