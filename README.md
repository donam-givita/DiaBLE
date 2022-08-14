<p align="center"><img src="./DiaBLE/Assets.xcassets/AppIcon.appiconset/Icon.png" width="25%" /></p>

The project should compile fine without external dependencies just after changing the _Bundle Identifier_ in the _General_ panel of the _Targets_ settings and the _Team_ in the _Signing and Capabilities_ tab of Xcode -- Spike and xDrip4iO5 users know already very well what that means... ;-)

If you own an iPad you can download the [zipped archive](https://github.com/gui-dos/DiaBLE/archive/refs/heads/main.zip) of this repository and tap _DiaBLE Playground.swiftpm_: DiaBLE was born in fact as a single script for the iPad Swift Playgrounds to test the internal workings of the several troublesome BLE devices I bought, mainly the **Bubble** and the **MiaoMiao**. I upgraded it to the version 4.1 of the Playgrounds which still support iOS 15 but I cannot afford to support such transmitters and the WebOOP glucose.space server anymore.

Currently I am targeting only the latest betas of Xcode and iOS and focusing on the new Libre 3. The new _async / await_ and _actors_ introduced in Swift 5.5 and iOS 15 probably would require a total rewrite of DiaBLE's foundations, as well as the enhanced *Gen2* protocols already adopted by the Libre 2 Sense/US/CA/AU which haven't been reversed yet.

Still too early to decide the final design (but I really like already the evil logo 😈), here there are some recent screenshots I tweeted or posted in the comments:

<br><br>
<p align="center"><img src="https://user-images.githubusercontent.com/7220550/181923772-f9b35a52-1ff7-47a4-ba7a-445233cb8e25.PNG" width="25%" align="middle" /> &nbsp; &nbsp; <img src="https://user-images.githubusercontent.com/7220550/181924382-8b325de0-e457-4dbf-a3fc-ea87e85fd231.PNG" width="25%" align="middle" /></p>
<br><br>

Please refer to the [**TODOs**](https://github.com/gui-dos/DiaBLE/blob/main/TODO.md) list for the up-to-date status of all the current limitations and known bugs of this **prototype**.

**Warnings:**
  * the temperature-based calibration algorithm has been derived from the old LibreLink 2.3: it is known that the Vendor improves its algorithms at every new release, smoothing the historical values and projecting the trend ones into the future to compensate the interstitial delay but these further stages aren't understood yet; I never was convinced by the simple linear regression models that others apply on finger pricks;
  * activating the BLE streaming of data on a Libre 2 will break other apps' pairings and you will have to reinstall them to get their alarms back again; in Test mode it is possible however to sniff the incoming data of multiple apps running side-by-side by just activating the notifications on the same BLE characteristics: the same technique is used to analyze the Libre 3 incoming traffic since the Core Bluetooth connections are reference-counted;
  * connecting directly to a Libre 2/3 from an AppleWatch is currently just a proof of concept that it is technically possiBLE: keeping the connection will require additional work and AFAIK nobody else is capable to do the job... :-P

### DON'T TRUST THE GROWING NUMBER OF "METABOLIC HEALTH" STARTUPS WHICH RESELL LIBRE SENSORS AND REUSE MY NAIVE NFC CODE: IT IS A SCANDAL WHICH WOULD DESERVE A CLASS ACTION THAT THE VENDOR PROMOTES SUCH PSEUDOSCIENTIFIC FRAUDS AND RESELLS TO HYPOCHONDRIACS "BIOSENSORS" THAT ARE JUST A REBRAND OF THE SECURED GEN2 MODEL BECAUSE THEY COULDN'T PROMOTE IT AS A CGM DEVICE IN 2021 GIVEN THE LEGAL BATTLE WITH DEXCOM.

***Note***: the exploitation which allows to reset and reactivate a Libre 1 is well known to the Vendor and was unveiled already during [BlackAlps 2019](https://www.youtube.com/watch?v=Y9vtGmxh1IQ) and in [PoC||GTFO 0x20](https://archive.org/stream/pocorgtfo20#page/n6/mode/1up).

---
***Credits***: [@bubbledevteam](https://github.com/bubbledevteam), [@captainbeeheart](https://github.com/captainbeeheart), [@creepymonster](https://github.com/creepymonster), [@cryptax](https://github.com/cryptax), [@dabear](https://github.com/dabear), [@DecentWoodpecker67](https://github.com/DecentWoodpecker67), [@ivalkou](https://github.com/ivalkou), [Jaap Korthals Altes](https://www.reddit.com/user/jka512), [@keencave](https://github.com/keencave), [LibreMonitor](https://github.com/UPetersen/LibreMonitor/tree/Swift4), [Loop](https://github.com/LoopKit/Loop), [Marek Macner](https://github.com/MarekM60), [@monder](https://github.com/monder), [Nightguard]( https://github.com/nightscout/nightguard), [Nightscout LibreLink Up Uploader](https://github.com/timoschlueter/nightscout-librelink-up), [@travisgoodspeed](https://github.com/travisgoodspeed), [WoofWoof](https://github.com/gshaviv/ninety-two), [xDrip+](https://github.com/NightscoutFoundation/xDrip), [xDrip4iO5](https://github.com/JohanDegraeve/xdripswift).

###### ***Disclaimer: the decrypting keys I am publishing are not related to user accounts and can be dumped from the sensor memory by using DiaBLE itself. The online servers I am using probably are tracking your personal data but all the traffic sent/received by DiaBLE is clearly shown in its logs. The reversed code I am pasting has been retrieved from other GitHub repos or reproduced simply by using open-source tools like `jadx-gui`.***
