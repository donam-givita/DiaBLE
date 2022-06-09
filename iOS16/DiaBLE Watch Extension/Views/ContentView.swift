import SwiftUI


struct ContentView: View {

    @EnvironmentObject var app: AppState
    @EnvironmentObject var log: Log
    @EnvironmentObject var history: History
    @EnvironmentObject var settings: Settings

    var body: some View {

        NavigationStack {

            ScrollView {

                VStack(spacing: 4) {

                    HStack(spacing: 10) {
                        NavigationLink(destination: Monitor()) {
                            VStack {
                                Image(systemName: "gauge").resizable().frame(width: 40, height: 40).offset(y: 4)
                                Text("Monitor").bold().foregroundColor(.blue)
                            }.frame(maxWidth: .infinity)
                        }
                        NavigationLink(destination: Details()) {
                            VStack {
                                Image(systemName: "info.circle").resizable().frame(width: 40, height: 40).offset(y: 4)
                                Text("Details").bold().foregroundColor(.blue)
                            }.frame(maxWidth: .infinity)
                        }
                    }
                    .padding(.top, -4)

                    HStack(spacing: 10) {
                        NavigationLink(destination: Console()) {
                            VStack {
                                Image(systemName: "terminal").resizable().frame(width: 40, height: 40).offset(y: 4)
                                Text("Console").bold().foregroundColor(.blue)
                            }.frame(maxWidth: .infinity)
                        }
                        NavigationLink(destination: SettingsView()) {
                            VStack {
                                Image(systemName: "gear").resizable().frame(width: 40, height: 40).offset(y: 4)
                                Text("Settings").bold().foregroundColor(.blue)
                            }.frame(maxWidth: .infinity)
                        }
                    }

                    HStack(spacing: 10) {
                        NavigationLink(destination: DataView()) {
                            VStack {
                                Image(systemName: "tray.full.fill").resizable().frame(width: 40, height: 40).offset(y: 4)
                                Text("Data").bold().foregroundColor(.blue)
                            }.frame(maxWidth: .infinity)
                        }
                        NavigationLink(destination: OnlineView()) {
                            VStack {
                                Image(systemName: "globe").resizable().frame(width: 40, height: 40).offset(y: 4)
                                Text("Online").bold().foregroundColor(.blue)
                            }.frame(maxWidth: .infinity)
                        }
                    }
                }
                .foregroundColor(.red)
                .buttonStyle(.plain)

            }
            .navigationTitle("DiaBLE  \(Bundle.main.object(forInfoDictionaryKey: "CFBundleShortVersionString") as! String)")
            .navigationBarTitleDisplayMode(.inline)

        }
        .edgesIgnoringSafeArea([.bottom])
    }
}

struct ContentView_Previews: PreviewProvider {

    static var previews: some View {
        Group {
            ContentView()
                .environmentObject(AppState.test(tab: .monitor))
                .environmentObject(Log())
                .environmentObject(History.test)
                .environmentObject(Settings())
        }
    }
}
