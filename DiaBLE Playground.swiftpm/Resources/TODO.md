FIXME
-----

* Libre 3:
  - Gen2 `.getSessionInfo` outpassed by new certificate data and ECDH ephemeral keys (whiteCryption's Secure Key Box)
* Swift 5.6:
  - "Non-sendable type" warnings
* iOS 15:
  - *"NFC scan success sheet displayed when NFC scan time out"* (https://developer.apple.com/forums/thread/687264)
* Xcode 13:
  - *"No 'async' operations occur within 'await' expression"* warnings
* Playgrounds 4:
  - frequent crashes while unwrapping optionals
  - missing entitlements for HealthKit, NFC and Bluetooth background mode
* Mac Catalyst:
  - log bogging down too early
* Libre Pro / MiaoMiao:
  - `buffer[3...4]` doesn't match the real sensor age in `body[2...3]`
  - the appended 21 historic blocks aren't dated properly
* @Published classes nonsense
* the new Libre2() subclass is not instantiated specifically in Transmitters
* `@AppStorage(selectedTab)` prevents managing the "More..." fifth tab item
* Console's Clear button must be tapped twice


TODO
----

* Apple Watch app: snapshots, workout and extended runtime background sessions, complications
* Libre 3 / Gen2:
  - native and/or online en/decoding
* scrollable graph, offline trend arrow, landcape mode, realtime RSSI
* smooth the historic values and project the trend ones (see [LibreTransmitter](https://github.com/dabear/LibreTransmitter/commit/49b50d7995955b76861440e5e34a0accd064d18f))
* log: limit to a number of readings, autoscroll to bottom, prepend time, Share menu, record to a file, add Logger support
* HealthKit, Nightscout: more than just a few ported dozen lines of code
* profile and avoid retain cycles
* make use of Actors, Combine, TabularData, ...


PLANS / WISHES
---------------

* a predictive meal log using Machine Learning (see [WoofWoof](https://github.com/gshaviv/ninety-two))
* LoopKit integrations
