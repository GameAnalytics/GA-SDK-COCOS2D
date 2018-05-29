#include <sstream>
#include <ostream>
#include "cocos2d.h"
#include "GameAnalytics.h"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
#include "GameAnalyticsCpp.h"
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
#include "GameAnalyticsJNI.h"
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
#include "cpp/GameAnalytics.h"
#endif

#define GA_VERSION "cocos2d 1.8.0"

namespace gameanalytics {
    namespace cocos2d
    {
        bool GameAnalytics::isWritablePathSet = false;

    	void GameAnalytics::configureAvailableCustomDimensions01(const std::vector<std::string>& list)
    	{
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    		GameAnalyticsCpp::configureAvailableCustomDimensions01(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    		jni_configureAvailableCustomDimensions01(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureAvailableCustomDimensions01(list);
#endif
    	}

        void GameAnalytics::configureAvailableCustomDimensions02(const std::vector<std::string>& list)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::configureAvailableCustomDimensions02(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_configureAvailableCustomDimensions02(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureAvailableCustomDimensions02(list);
#endif
        }

        void GameAnalytics::configureAvailableCustomDimensions03(const std::vector<std::string>& list)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::configureAvailableCustomDimensions03(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_configureAvailableCustomDimensions03(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureAvailableCustomDimensions03(list);
#endif
        }

        void GameAnalytics::configureAvailableResourceCurrencies(const std::vector<std::string>& list)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::configureAvailableResourceCurrencies(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_configureAvailableResourceCurrencies(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureAvailableResourceCurrencies(list);
#endif
        }

        void GameAnalytics::configureAvailableResourceItemTypes(const std::vector<std::string>& list)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::configureAvailableResourceItemTypes(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_configureAvailableResourceItemTypes(list);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureAvailableResourceItemTypes(list);
#endif
        }

        void GameAnalytics::configureBuild(const char *build)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::configureBuild(build);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_configureBuild(build);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureBuild(build);
#endif
        }

        void GameAnalytics::configureUserId(const char *userId)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::configureUserId(userId);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_configureUserId(userId);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureUserId(userId);
#endif
        }

        void GameAnalytics::configureSdkGameEngineVersion(const char *gameEngineSdkVersion)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::configureSdkGameEngineVersion(gameEngineSdkVersion);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_configureSdkGameEngineVersion(gameEngineSdkVersion);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureSdkGameEngineVersion(gameEngineSdkVersion);
#endif
        }

        void GameAnalytics::configureGameEngineVersion(const char *gameEngineVersion)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::configureGameEngineVersion(gameEngineVersion);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_configureGameEngineVersion(gameEngineVersion);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::configureGameEngineVersion(gameEngineVersion);
#endif
        }

        void GameAnalytics::initialize(const char *gameKey, const char *gameSecret)
        {
            lazySetWritablePath();
            configureSdkGameEngineVersion(GA_VERSION);

            int v = COCOS2D_VERSION;
            int hi = (v & 0x00FF0000) >> 16;
            int me = (v & 0x0000FF00) >> 8;
            int lo = v & 0x000000FF;
            std::stringstream stream;
            stream << "cocos2d " << std::hex << hi << "." << std::hex << me << "." << std::hex << lo;
            configureGameEngineVersion(stream.str().c_str());

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::initialize(gameKey, gameSecret);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_initialize(gameKey, gameSecret);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::initialize(gameKey, gameSecret);
#endif
        }

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        void GameAnalytics::addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt)
        {
        	GameAnalyticsCpp::addBusinessEvent(currency, amount, itemType, itemId, cartType, receipt);
        }

        void GameAnalytics::addBusinessEventAndAutoFetchReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType)
        {
        	GameAnalyticsCpp::addBusinessEventAndAutoFetchReceipt(currency, amount, itemType, itemId, cartType);
        }
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        void GameAnalytics::addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const char *signature)
        {
        	jni_addBusinessEventWithReceipt(currency, amount, itemType, itemId, cartType, receipt, "google_play", signature);
        }
#endif

        void GameAnalytics::addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::addBusinessEvent(currency, amount, itemType, itemId, cartType, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_addBusinessEvent(currency, amount, itemType, itemId, cartType);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addBusinessEvent(currency, amount, itemType, itemId, cartType);
#endif
        }

        void GameAnalytics::addResourceEvent(EGAResourceFlowType flowType, const char *currency, float amount, const char *itemType, const char *itemId)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::addResourceEvent((int)flowType, currency, amount, itemType, itemId);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_addResourceEvent((int)flowType, currency, amount, itemType, itemId);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addResourceEvent((gameanalytics::EGAResourceFlowType)((int)flowType), currency, amount, itemType, itemId);
#endif
        }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01)
        {
            addProgressionEvent(progressionStatus, progression01, "", "");
        }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, int score)
        {
            addProgressionEvent(progressionStatus, progression01, "", "", score);
        }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02)
        {
            addProgressionEvent(progressionStatus, progression01, progression02, "");
        }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, int score)
        {
            addProgressionEvent(progressionStatus, progression01, progression02, "", score);
        }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::addProgressionEvent((int)progressionStatus, progression01, progression02, progression03);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_addProgressionEvent((int)progressionStatus, progression01, progression02, progression03);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addProgressionEvent((gameanalytics::EGAProgressionStatus)((int)progressionStatus), progression01, progression02, progression03);
#endif
        }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::addProgressionEventWithScore((int)progressionStatus, progression01, progression02, progression03, score);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_addProgressionEventWithScore((int)progressionStatus, progression01, progression02, progression03, score);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addProgressionEvent((gameanalytics::EGAProgressionStatus)((int)progressionStatus), progression01, progression02, progression03, score);
#endif
        }

        void GameAnalytics::addDesignEvent(const char *eventId)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::addDesignEvent(eventId);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_addDesignEvent(eventId);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addDesignEvent(eventId);
#endif
        }

        void GameAnalytics::addDesignEvent(const char *eventId, float value)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::addDesignEventWithValue(eventId, value);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_addDesignEventWithValue(eventId, value);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addDesignEvent(eventId, value);
#endif
        }

        void GameAnalytics::addErrorEvent(EGAErrorSeverity severity, const char *message)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::addErrorEvent((int)severity, message);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_addErrorEvent((int)severity, message);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addErrorEvent((gameanalytics::EGAErrorSeverity)((int)severity), message);
#endif
        }

        void GameAnalytics::setEnabledInfoLog(bool flag)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::setEnabledInfoLog(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_setEnabledInfoLog(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::setEnabledInfoLog(flag);
#endif
        }

        void GameAnalytics::setEnabledVerboseLog(bool flag)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::setEnabledVerboseLog(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_setEnabledVerboseLog(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::setEnabledVerboseLog(flag);
#endif
        }

        void GameAnalytics::setEnabledManualSessionHandling(bool flag)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::setEnabledManualSessionHandling(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_setEnabledManualSessionHandling(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::setEnabledManualSessionHandling(flag);
#endif
        }

        void GameAnalytics::setCustomDimension01(const char *customDimension)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::setCustomDimension01(customDimension);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_setCustomDimension01(customDimension);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::setCustomDimension01(customDimension);
#endif
        }

        void GameAnalytics::setCustomDimension02(const char *customDimension)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::setCustomDimension02(customDimension);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_setCustomDimension02(customDimension);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::setCustomDimension02(customDimension);
#endif
        }

        void GameAnalytics::setCustomDimension03(const char *customDimension)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::setCustomDimension03(customDimension);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_setCustomDimension03(customDimension);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::setCustomDimension03(customDimension);
#endif
        }

        void GameAnalytics::setFacebookId(const char *facebookId)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::setFacebookId(facebookId);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_setFacebookId(facebookId);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::setFacebookId(facebookId);
#endif
        }

        void GameAnalytics::setGender(EGAGender gender)
        {
            lazySetWritablePath();
        	switch(gender)
        	{
        		case Male:
        		{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        			GameAnalyticsCpp::setGender("male");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        			jni_setGender((int)gender);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
                    gameanalytics::GameAnalytics::setGender((gameanalytics::EGAGender)((int)gender));
#endif
        		}
        		break;

        		case Female:
        		{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        			GameAnalyticsCpp::setGender("female");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        			jni_setGender((int)gender);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
                    gameanalytics::GameAnalytics::setGender((gameanalytics::EGAGender)((int)gender));
#endif
        		}
        		break;
        	}
        }

        void GameAnalytics::setBirthYear(int birthYear)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        	GameAnalyticsCpp::setBirthYear(birthYear);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        	jni_setBirthYear(birthYear);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
                    gameanalytics::GameAnalytics::setBirthYear(birthYear);
#endif
        }

        void GameAnalytics::startSession()
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::startSession();
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_startSession();
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
#endif
        }

        void GameAnalytics::endSession()
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::endSession();
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_endSession();
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
#endif
        }

        void  GameAnalytics::lazySetWritablePath()
        {
            if (!isWritablePathSet)
            {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
                gameanalytics::GameAnalytics::configureWritablePath(::cocos2d::FileUtils::getInstance()->getWritablePath());
#endif
                isWritablePathSet = true;
            }
        }
    }
}
