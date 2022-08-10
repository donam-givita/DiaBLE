Since the latest **FreeStyle Libre glucose sensors** are **B**luetooth **L**ow **E**nergy devices, I am trying to leverage their capabilities to implement something new compared to the traditional apps:

* a universal **SwiftUI** application for iPhone, iPad and Mac Catalyst;
* an **independent Apple Watch app** connecting directly via Bluetooth;
* scanning the Libre directly via **NFC** and exploring its internals;
* using both online servers and offline methods for calibrating just like the **temperature-based** vendor algorithm;
* showing for comparison the **HealthKit** and **Nightscout** data shared with other apps;
* varying the **reading interval** instead of the usual 5-minute one;
* a detailed **log** to check the traffic from/to the BLE devices and remote servers.

The project should compile fine without external dependencies just after changing the _Bundle Identifier_ in the _General_ panel of the _Targets_ settings and the _Team_ in the _Signing and Capabilities_ tab of Xcode -- Spike and xDrip4iO5 users know already very well what that means... ;-)

I am targeting only the latest betas of Xcode and iOS. The new _async / await_ and _actors_ introduced in Swift 5.5 and iOS 15 probably would require a total rewrite of DiaBLE's foundations, as well as the enhanced *Gen2* protocols adopted by the recent Libre 2 Sense/US/CA/AU which haven't been reversed yet.

Please refer to the [**TODOs**](https://github.com/gui-dos/DiaBLE/blob/main/TODO.md) list for the up-to-date status of all the current limitations and known bugs of this **prototype**.

**Warnings:**
  * the temperature-based algorithm has been derived from the old LibreLink 2.3: it is known that the Vendor improves its algorithms at every new release
  * activating the BLE streaming of data on a Libre 2 will break other apps' pairings and you will have to reinstall them to get their alarms again: in Test mode it is possible however to sniff the incoming data of mjultiple apps running side-by-side by just activating the notifications on the same BLE characteristics; the same technique is used to analyze the Libre 3 incoming traffic since the Core Bluetooth connections are reference-counted.

***Note***: the exploitation which allows to reset and reactivate a Libre 1 is well known to the Vendor and was unveiled already during [BlackAlps 2019](https://www.youtube.com/watch?v=Y9vtGmxh1IQ) and in [PoC||GTFO 0x20](https://archive.org/stream/pocorgtfo20#page/n6/mode/1up).


---
***Credits***: [@bubbledevteam](https://github.com/bubbledevteam), [@captainbeeheart](https://github.com/captainbeeheart), [@creepymonster](https://github.com/creepymonster), [@cryptax](https://github.com/cryptax), [@dabear](https://github.com/dabear), [@DecentWoodpecker67](https://github.com/DecentWoodpecker67), [@ivalkou](https://github.com/ivalkou), [Jaap Korthals Altes](https://www.reddit.com/user/jka512), [@keencave](https://github.com/keencave), [LibreMonitor](https://github.com/UPetersen/LibreMonitor/tree/Swift4), [Loop](https://github.com/LoopKit/Loop), [Marek Macner](https://github.com/MarekM60), [@monder](https://github.com/monder), [Nightguard]( https://github.com/nightscout/nightguard), [Nightscout LibreLink Up Uploader](https://github.com/timoschlueter/nightscout-librelink-up), [@travisgoodspeed](https://github.com/travisgoodspeed), [WoofWoof](https://github.com/gshaviv/ninety-two), [xDrip+](https://github.com/NightscoutFoundation/xDrip), [xDrip4iO5](https://github.com/JohanDegraeve/xdripswift).

###### ***Disclaimer: the decrypting keys I am publishing are not related to user accounts and can be dumped from the sensor memory by using DiaBLE itself. The online servers I am using probably are tracking your personal data but all the traffic sent/received by DiaBLE is clearly shown in its logs. The reversed code I am pasting has been retrieved from other GitHub repos or reproduced simply by using open-source tools like `jadx-gui`.***
