FIXME
-----

* Libre 3:
  - Gen2 `.getSessionInfo` outpassed by new certificate data and ECDH ephemeral keys (whiteCryption's Secure Key Box)
* AppleWatch:
  - *"How do I add 'com.apple.developer.bluetooth-central-background' entitlement for WatchOS?"*
    (https://developer.apple.com/forums/thread/109947)
* iOS 16:
  - *"This method should not be called on the main thread as it may lead to UI unresponsiveness"* warning for `App.swift`
* Swift Playgrounds 4.2 build fails on the iPad
* `@AppStorage(selectedTab)` prevents managing the "More..." fifth tab item


TODO
----

* Apple Watch app: workout and extended runtime background sessions, complications
* alarm snooze, public timers instead of SwiftUI private ones
* scrollable graph, offline trend arrow, landscape mode, realtime RSSI
* smooth the historic values and project the trend ones (see [LibreTransmitter](https://github.com/dabear/LibreTransmitter/commit/49b50d7995955b76861440e5e34a0accd064d18f))
* log: limit to a number of readings, prepend time, Share menu, record to a file, add Logger support
* new iOS 16 Widgets and App Intents
* TabularData as persistence layer
