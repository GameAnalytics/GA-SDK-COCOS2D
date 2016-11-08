# GA-SDK-COCOS2D
GameAnalytics Cocos2D SDK.

Documentation is in the [wiki](https://github.com/GameAnalytics/GA-SDK-COCOS2D/wiki).

> :information_source:<br>
>
> The Cocos2D SDK include support for **iOS**, **Android**, **Windows**, **UWP** and **Mac** platforms
>
> Requirements:<br/>
> **Cocos2D-X:** 3.x+  
> **iOS:** iOS 7+<br/>
> **Android:** Android API Level 14<br>


Changelog
---------
**1.3.0**
* added support for UWP

**1.2.2**
* fixed user_id tracking for iOS 10 (ios)
* fix isAppStoreReceiptSandbox bug on iOS 6 devices and lower (ios)
* switched to use libCurl as networking library (mac, windows)

**1.2.1**
* wrong platform in events bug fix (windows, mac)
* crash bug fix (windows, mac)

**1.2.0**
* added support for manual session handling

**1.1.0**
* added support for Windows and Mac

**1.0.1**
* fixed validator in native libs to allow 'cocos2d' as sdk wrapper

**1.0.0**
* support for iOS and Android
* only C++ supported at the moment
