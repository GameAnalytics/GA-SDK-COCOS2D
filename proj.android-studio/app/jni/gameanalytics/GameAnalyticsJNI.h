#ifndef  _GAMEANALYTICS_JNI_H_
#define  _GAMEANALYTICS_JNI_H_

#include <vector>
#include <string>
#include "platform/android/jni/JniHelper.h"

namespace gameanalytics {
	extern "C"
	{
	    extern void jni_configureAvailableCustomDimensions01(const std::vector<std::string>& list);
	    extern void jni_configureAvailableCustomDimensions02(const std::vector<std::string>& list);
	    extern void jni_configureAvailableCustomDimensions03(const std::vector<std::string>& list);
	    
	    extern void jni_configureAvailableResourceCurrencies(const std::vector<std::string>& list);
	    extern void jni_configureAvailableResourceItemTypes(const std::vector<std::string>& list);
	    
	    extern void jni_configureBuild(const char *build);
	    extern void jni_configureSdkGameEngineVersion(const char *gameEngineSdkVersion);
	    extern void jni_configureGameEngineVersion(const char *gameEngineVersion);
	    extern void jni_configureUserId(const char *userId);
	    extern void jni_initialize(const char *gameKey, const char *gameSecret);
	    
	    extern void jni_addBusinessEventWithReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const char *store, const char *signature);
	    extern void jni_addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType);
	    extern void jni_addResourceEvent(int flowType, const char *currency, float amount, const char *itemType, const char *itemId);
	    extern void jni_addProgressionEvent(int progressionStatus, const char *progression01, const char *progression02, const char *progression03);
	    extern void jni_addProgressionEventWithScore(int progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score);
	    extern void jni_addDesignEvent(const char *eventId);
	    extern void jni_addDesignEventWithValue(const char *eventId, float value);
	    extern void jni_addErrorEvent(int severity, const char *message);
	    
	    extern void jni_setEnabledInfoLog(bool flag);
	    extern void jni_setEnabledVerboseLog(bool flag);
	    extern void jni_setEnabledManualSessionHandling(bool flag);
	    extern void jni_setCustomDimension01(const char *customDimension);
	    extern void jni_setCustomDimension02(const char *customDimension);
	    extern void jni_setCustomDimension03(const char *customDimension);
	    extern void jni_setFacebookId(const char *facebookId);
	    extern void jni_setGender(int gender);
	    extern void jni_setBirthYear(int birthYear);

	    extern void jni_startSession();
	    extern void jni_endSession();
	}
}

#endif // _GAMEANALYTICS_JNI_H_