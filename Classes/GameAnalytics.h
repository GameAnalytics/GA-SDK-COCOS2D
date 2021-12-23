#ifndef  _GAMEANALYTICS_H_
#define  _GAMEANALYTICS_H_

#include <vector>
#include "CCValue.h"

namespace gameanalytics {

    namespace cocos2d
    {
        enum EGAResourceFlowType
        {
            Source = 1,
            Sink = 2
        };

        enum EGAProgressionStatus
        {
            Start = 1,
            Complete = 2,
            Fail = 3
        };

        enum EGAErrorSeverity
        {
            Debug = 1,
            Info = 2,
            Warning = 3,
            Error = 4,
            Critical = 5
        };

        enum EGAAdAction
        {
            Clicked = 1,
            Show = 2,
            FailedShow = 3,
            RewardReceived = 4
        };

        enum EGAAdError
        {
            Unknown = 1,
            Offline = 2,
            NoFill = 3,
            InternalError = 4,
            InvalidRequest = 5,
            UnableToPrecache = 6
        };

        enum EGAAdType
        {
            Video = 1,
            RewardedVideo = 2,
            Playable = 3,
            Interstitial = 4,
            OfferWall = 5,
            Banner = 6
        };

        class GameAnalytics
        {
        public:
            static void configureAvailableCustomDimensions01(const std::vector<std::string>& list);
            static void configureAvailableCustomDimensions02(const std::vector<std::string>& list);
            static void configureAvailableCustomDimensions03(const std::vector<std::string>& list);

            static void configureAvailableResourceCurrencies(const std::vector<std::string>& list);
            static void configureAvailableResourceItemTypes(const std::vector<std::string>& list);

            static void configureBuild(const char *build);
            static void configureAutoDetectAppVersion(bool flag);
            static void configureUserId(const char *userId);
            static void configureSdkGameEngineVersion(const char *gameEngineSdkVersion);
            static void configureGameEngineVersion(const char *gameEngineVersion);
            static void initialize(const char *gameKey, const char *gameSecret);

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt);
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const ::cocos2d::ValueMap& customFields);
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const ::cocos2d::ValueMap& customFields, bool mergeFields);
            static void addBusinessEventAndAutoFetchReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType);
            static void addBusinessEventAndAutoFetchReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const ::cocos2d::ValueMap& customFields);
            static void addBusinessEventAndAutoFetchReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const ::cocos2d::ValueMap& customFields, bool mergeFields);
    #elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const char *signature);
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const char *signature, const ::cocos2d::ValueMap& customFields);
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const char *signature, const ::cocos2d::ValueMap &customFields, bool mergeFields);
#endif
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType);
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const ::cocos2d::ValueMap &customFields);
            static void addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addResourceEvent(EGAResourceFlowType flowType, const char *currency, float amount, const char *itemType, const char *itemId);
            static void addResourceEvent(EGAResourceFlowType flowType, const char *currency, float amount, const char *itemType, const char *itemId, const ::cocos2d::ValueMap& customFields);
            static void addResourceEvent(EGAResourceFlowType flowType, const char *currency, float amount, const char *itemType, const char *itemId, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const ::cocos2d::ValueMap& customFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, int score);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, int score, const ::cocos2d::ValueMap &customFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, int score, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const ::cocos2d::ValueMap &customFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, int score);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, int score, const ::cocos2d::ValueMap& customFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, int score, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, const ::cocos2d::ValueMap &customFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score, const ::cocos2d::ValueMap& customFields);
            static void addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addDesignEvent(const char *eventId);
            static void addDesignEvent(const char *eventId, const ::cocos2d::ValueMap& customFields);
            static void addDesignEvent(const char *eventId, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addDesignEvent(const char *eventId, float value);
            static void addDesignEvent(const char *eventId, float value, const ::cocos2d::ValueMap &customFields);
            static void addDesignEvent(const char *eventId, float value, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addErrorEvent(EGAErrorSeverity severity, const char *message);
            static void addErrorEvent(EGAErrorSeverity severity, const char *message, const ::cocos2d::ValueMap &customFields);
            static void addErrorEvent(EGAErrorSeverity severity, const char *message, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement, const ::cocos2d::ValueMap &customFields);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement, int duration);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement, int duration, const ::cocos2d::ValueMap &customFields);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement, int duration, const ::cocos2d::ValueMap &customFields, bool mergeFields);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement, EGAAdError noAdReason);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement, EGAAdError noAdReason, const ::cocos2d::ValueMap &customFields);
            static void addAdEvent(EGAAdAction adAction, EGAAdType adType, const char *adSdkName, const char *adPlacement, EGAAdError noAdReason, const ::cocos2d::ValueMap &customFields, bool mergeFields);

            static void setEnabledInfoLog(bool flag);
            static void setEnabledVerboseLog(bool flag);
            static void setEnabledManualSessionHandling(bool flag);
            static void setEnabledEventSubmission(bool flag);
            static void setCustomDimension01(const char *customDimension);
            static void setCustomDimension02(const char *customDimension);
            static void setCustomDimension03(const char *customDimension);

            static void startSession();
            static void endSession();

            static std::vector<char> getRemoteConfigsValueAsString(const char *key);
            static std::vector<char> getRemoteConfigsValueAsString(const char *key, const char *defaultValue);
            static bool isRemoteConfigsReady();
            static std::vector<char> getRemoteConfigsContentAsString();

            static std::vector<char> getABTestingId();
            static std::vector<char> getABTestingVariantId();

        private:
            static void lazySetWritablePath();
            static bool isWritablePathSet;
        };
    }
}

#endif // _GAMEANALYTICS_H_
