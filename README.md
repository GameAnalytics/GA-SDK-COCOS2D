# GA-SDK-COCOS2D
GameAnalytics Cocos2D SDK.

Documentation can be found [here](https://gameanalytics.com/docs/cocos2d-sdk).

> :information_source:
>
> The Cocos2D SDK include support for **iOS**, **Android**, **HTML5**, **Tizen**, **Windows**, **Linux**, **UWP** and **Mac** platforms
>
> Supports **C++**, **JavaScript** and **Lua**
>
> Requirements:
> * **Cocos2D-X:** 3.x+  
> * **iOS:** iOS 7+
> * **Android:** Android API Level 14
> * **Tizen:** Tizen 2.4+   
>   
> **Build size:**   
> Note that download size differ from the actual build size.   
>   
> **Android:**   
> The SDK build size in a native Android app is only around **49Kb** and the dependecies take up to **820Kb** depending if your app already uses some of the same dependencies.   
>   
> **iOS:**   
> The SDK build size in a native iOS app is only around **242Kb** (armv7) / **259Kb** (armv8).


Changelog
---------
<!--(CHANGELOG_TOP)-->
**1.7.5**
* fixed session length bug
* fixed not allowing to add events when session is not started

**1.7.4**
* fixed crash bug for closing down sdk for desktop platforms (windows, mac, linux)

**1.7.3**
* jni memory leak fixes (android)

**1.7.2**
* small correction to use int instead of double for session num

**1.7.1**
* jni bug fix for progression events with scores (android)

**1.7.0**
* changed the behaviour of using IMEI with the 'READ_PHONE_STATE' permission to guarantee precise analytics for certain regions (android)

**1.6.4**
* bug fix for end session when using manual session handling

**1.6.3**
* session length precision improvement

**1.6.2**
* custom user id bug fix

**1.6.1**
* added OS version, device model and device manufacturer to event (windows, mac)

**1.6.0**
* added linux support

**1.5.0**
* added tizen support

**1.4.2**
* bug fix for progression events with score in Android builds (android)

**1.4.1**
* restructured file hierarchy

**1.4.0**
* added js and lua support

**1.3.1**
* possible to set custom dimensions and demographics before initialize

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
