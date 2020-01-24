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
#include "json/document.h"
#include "json/writer.h"

#define GA_VERSION "cocos2d 3.0.6"

namespace gameanalytics {
    namespace cocos2d
    {
        bool GameAnalytics::isWritablePathSet = false;

        void addValueToJSON(const std::string &key, const ::cocos2d::Value &value, rapidjson::Document &d, rapidjson::Document::AllocatorType &allocator)
        {
            rapidjson::Value jsonValue;
            if (!value.isNull())
            {
                const ::cocos2d::Value::Type type = value.getType();
                if (type == ::cocos2d::Value::Type::VECTOR)
                {
                    rapidjson::Document documentArray;
                    documentArray.SetArray();

                    for (const ::cocos2d::Value &vectorValue : value.asValueVector())
                    {
                        addValueToJSON("", vectorValue, documentArray, allocator);
                    }

                    jsonValue = documentArray.Move();
                }
                else if (type == ::cocos2d::Value::Type::MAP)
                {
                    rapidjson::Document documentObject;
                    documentObject.SetObject();

                    for (const std::pair<std::string, ::cocos2d::Value> &pair : value.asValueMap())
                    {
                        addValueToJSON(pair.first, pair.second, documentObject, allocator);
                    }

                    jsonValue = documentObject.Move();
                }
                else
                {
                    switch (type)
                    {
                        case ::cocos2d::Value::Type::BYTE:
                            jsonValue = value.asByte();
                            break;
                        case ::cocos2d::Value::Type::INTEGER:
                            jsonValue = value.asInt();
                            break;
                        case ::cocos2d::Value::Type::UNSIGNED:
                            jsonValue = value.asUnsignedInt();
                            break;
                        case ::cocos2d::Value::Type::FLOAT:
                            jsonValue = value.asFloat();
                            break;
                        case ::cocos2d::Value::Type::DOUBLE:
                            jsonValue = value.asDouble();
                            break;
                        case ::cocos2d::Value::Type::BOOLEAN:
                            jsonValue = value.asBool();
                            break;
                        case ::cocos2d::Value::Type::STRING:
                            jsonValue = rapidjson::Value(value.asString().c_str(), allocator);
                            break;
                        default:
                            //CCASSERT(false, "Value type not supported");
                            break;
                    }
                }
            }

            if (key.empty())
            {
                d.PushBack(jsonValue, allocator);
            }
            else
            {
                d.AddMember(rapidjson::Value(key.c_str(), allocator), jsonValue, allocator);
            }
        }

        std::string getStringFromValueMap(const ::cocos2d::ValueMap &map)
        {
            rapidjson::Document d;
            d.SetObject();

            for (const std::pair<std::string, ::cocos2d::Value> &pair : map)
            {
                addValueToJSON(pair.first, pair.second, d, d.GetAllocator());
            }

            rapidjson::StringBuffer buffer;
            rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
            d.Accept(writer);

            return buffer.GetString();
        }

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

        void GameAnalytics::configureAutoDetectAppVersion(bool flag)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::configureAutoDetectAppVersion(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_configureAutoDetectAppVersion(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
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
            GameAnalyticsCpp::addBusinessEvent(currency, amount, itemType, itemId, cartType, receipt, "");
        }

        // void GameAnalytics::addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const ::cocos2d::ValueMap& fields)
        // {
        //     GameAnalyticsCpp::addBusinessEvent(currency, amount, itemType, itemId, cartType, receipt, getStringFromValueMap(fields).c_str());
        // }

        void GameAnalytics::addBusinessEventAndAutoFetchReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType)
        {
            GameAnalyticsCpp::addBusinessEventAndAutoFetchReceipt(currency, amount, itemType, itemId, cartType, "");
        }

        // void GameAnalytics::addBusinessEventAndAutoFetchReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const ::cocos2d::ValueMap& fields)
        // {
        //     GameAnalyticsCpp::addBusinessEventAndAutoFetchReceipt(currency, amount, itemType, itemId, cartType, getStringFromValueMap(fields).c_str());
        // }
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        void GameAnalytics::addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const char *signature)
        {
            jni_addBusinessEventWithReceipt(currency, amount, itemType, itemId, cartType, receipt, "google_play", signature, "");
        }

        // void GameAnalytics::addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *receipt, const char *signature, const ::cocos2d::ValueMap& fields)
        // {
        //     jni_addBusinessEventWithReceipt(currency, amount, itemType, itemId, cartType, receipt, "google_play", signature, getStringFromValueMap(fields).c_str());
        // }
#endif

        void GameAnalytics::addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::addBusinessEvent(currency, amount, itemType, itemId, cartType, "", "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_addBusinessEvent(currency, amount, itemType, itemId, cartType, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addBusinessEvent(currency, amount, itemType, itemId, cartType/*, ""*/);
#endif
        }

//         void GameAnalytics::addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const ::cocos2d::ValueMap& fields)
//         {
// #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//             GameAnalyticsCpp::addBusinessEvent(currency, amount, itemType, itemId, cartType, "", getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//             jni_addBusinessEvent(currency, amount, itemType, itemId, cartType, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
//             gameanalytics::GameAnalytics::addBusinessEvent(currency, amount, itemType, itemId, cartType, getStringFromValueMap(fields).c_str());
// #endif
//         }

        void GameAnalytics::addResourceEvent(EGAResourceFlowType flowType, const char *currency, float amount, const char *itemType, const char *itemId)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::addResourceEvent((int)flowType, currency, amount, itemType, itemId, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_addResourceEvent((int)flowType, currency, amount, itemType, itemId, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addResourceEvent((gameanalytics::EGAResourceFlowType)((int)flowType), currency, amount, itemType, itemId/*, ""*/);
#endif
        }

//         void GameAnalytics::addResourceEvent(EGAResourceFlowType flowType, const char *currency, float amount, const char *itemType, const char *itemId, const ::cocos2d::ValueMap& fields)
//         {
// #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//             GameAnalyticsCpp::addResourceEvent((int)flowType, currency, amount, itemType, itemId, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//             jni_addResourceEvent((int)flowType, currency, amount, itemType, itemId, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
//             gameanalytics::GameAnalytics::addResourceEvent((gameanalytics::EGAResourceFlowType)((int)flowType), currency, amount, itemType, itemId, getStringFromValueMap(fields).c_str());
// #endif
//         }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01)
        {
            addProgressionEvent(progressionStatus, progression01, "", "");
        }

        // void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const ::cocos2d::ValueMap& fields)
        // {
        //     addProgressionEvent(progressionStatus, progression01, "", "", fields);
        // }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, int score)
        {
            addProgressionEvent(progressionStatus, progression01, "", "", score);
        }

        // void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, int score, const ::cocos2d::ValueMap& fields)
        // {
        //     addProgressionEvent(progressionStatus, progression01, "", "", score, fields);
        // }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02)
        {
            addProgressionEvent(progressionStatus, progression01, progression02, "");
        }

        // void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const ::cocos2d::ValueMap& fields)
        // {
        //     addProgressionEvent(progressionStatus, progression01, progression02, "", fields);
        // }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, int score)
        {
            addProgressionEvent(progressionStatus, progression01, progression02, "", score);
        }

        // void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, int score, const ::cocos2d::ValueMap& fields)
        // {
        //     addProgressionEvent(progressionStatus, progression01, progression02, "", score, fields);
        // }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::addProgressionEvent((int)progressionStatus, progression01, progression02, progression03, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_addProgressionEvent((int)progressionStatus, progression01, progression02, progression03, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addProgressionEvent((gameanalytics::EGAProgressionStatus)((int)progressionStatus), progression01, progression02, progression03/*, ""*/);
#endif
        }

//         void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, const ::cocos2d::ValueMap& fields)
//         {
// #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//             GameAnalyticsCpp::addProgressionEvent((int)progressionStatus, progression01, progression02, progression03, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//             jni_addProgressionEvent((int)progressionStatus, progression01, progression02, progression03, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
//             gameanalytics::GameAnalytics::addProgressionEvent((gameanalytics::EGAProgressionStatus)((int)progressionStatus), progression01, progression02, progression03, getStringFromValueMap(fields).c_str());
// #endif
//         }

        void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::addProgressionEventWithScore((int)progressionStatus, progression01, progression02, progression03, score, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_addProgressionEventWithScore((int)progressionStatus, progression01, progression02, progression03, score, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addProgressionEvent((gameanalytics::EGAProgressionStatus)((int)progressionStatus), progression01, progression02, progression03, score/*, ""*/);
#endif
        }

//         void GameAnalytics::addProgressionEvent(EGAProgressionStatus progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score, const ::cocos2d::ValueMap& fields)
//         {
// #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//             GameAnalyticsCpp::addProgressionEventWithScore((int)progressionStatus, progression01, progression02, progression03, score, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//             jni_addProgressionEventWithScore((int)progressionStatus, progression01, progression02, progression03, score, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
//             gameanalytics::GameAnalytics::addProgressionEvent((gameanalytics::EGAProgressionStatus)((int)progressionStatus), progression01, progression02, progression03, score, getStringFromValueMap(fields).c_str());
// #endif
//         }

        void GameAnalytics::addDesignEvent(const char *eventId)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::addDesignEvent(eventId, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_addDesignEvent(eventId, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addDesignEvent(eventId/*, ""*/);
#endif
        }

//         void GameAnalytics::addDesignEvent(const char *eventId, const ::cocos2d::ValueMap& fields)
//         {
// #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//             GameAnalyticsCpp::addDesignEvent(eventId, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//             jni_addDesignEvent(eventId, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
//             gameanalytics::GameAnalytics::addDesignEvent(eventId, getStringFromValueMap(fields).c_str());
// #endif
//         }

        void GameAnalytics::addDesignEvent(const char *eventId, float value)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::addDesignEventWithValue(eventId, value, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_addDesignEventWithValue(eventId, value, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addDesignEvent(eventId, value/*, ""*/);
#endif
        }

//         void GameAnalytics::addDesignEvent(const char *eventId, float value, const ::cocos2d::ValueMap& fields)
//         {
// #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//             GameAnalyticsCpp::addDesignEventWithValue(eventId, value, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//             jni_addDesignEventWithValue(eventId, value, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
//             gameanalytics::GameAnalytics::addDesignEvent(eventId, value, getStringFromValueMap(fields).c_str());
// #endif
//         }

        void GameAnalytics::addErrorEvent(EGAErrorSeverity severity, const char *message)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::addErrorEvent((int)severity, message, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_addErrorEvent((int)severity, message, "");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::addErrorEvent((gameanalytics::EGAErrorSeverity)((int)severity), message/*, ""*/);
#endif
        }

//         void GameAnalytics::addErrorEvent(EGAErrorSeverity severity, const char *message, const ::cocos2d::ValueMap& fields)
//         {
// #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//             GameAnalyticsCpp::addErrorEvent((int)severity, message, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
//             jni_addErrorEvent((int)severity, message, getStringFromValueMap(fields).c_str());
// #elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
//             gameanalytics::GameAnalytics::addErrorEvent((gameanalytics::EGAErrorSeverity)((int)severity), message, getStringFromValueMap(fields).c_str());
// #endif
//         }

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

        void GameAnalytics::setEnabledEventSubmission(bool flag)
        {
            lazySetWritablePath();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            GameAnalyticsCpp::setEnabledEventSubmission(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            jni_setEnabledEventSubmission(flag);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            gameanalytics::GameAnalytics::setEnabledEventSubmission(flag);
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

        std::vector<char> GameAnalytics::getRemoteConfigsValueAsString(const char *key)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            return GameAnalyticsCpp::getRemoteConfigsValueAsString(key);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            return jni_getRemoteConfigsValueAsString(key);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            return gameanalytics::GameAnalytics::getRemoteConfigsValueAsString(key);
#endif
        }

        std::vector<char> GameAnalytics::getRemoteConfigsValueAsString(const char *key, const char *defaultValue)
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            return GameAnalyticsCpp::getRemoteConfigsValueAsString(key, defaultValue);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            return jni_getRemoteConfigsValueAsStringWithDefaultValue(key, defaultValue);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            return gameanalytics::GameAnalytics::getRemoteConfigsValueAsString(key, defaultValue).data();
#endif
        }

        bool GameAnalytics::isRemoteConfigsReady()
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            return GameAnalyticsCpp::isRemoteConfigsReady();
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            return jni_isRemoteConfigsReady();
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            return gameanalytics::GameAnalytics::isRemoteConfigsReady();
#endif
        }

        std::vector<char> GameAnalytics::getRemoteConfigsContentAsString()
        {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            return GameAnalyticsCpp::getRemoteConfigsContentAsString();
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
            return jni_getRemoteConfigsContentAsString();
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
            return gameanalytics::GameAnalytics::getRemoteConfigsContentAsString().data();
#endif
        }

        void  GameAnalytics::lazySetWritablePath()
        {
            if (!isWritablePathSet)
            {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_TIZEN) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
                std::string writablePath = ::cocos2d::FileUtils::getInstance()->getWritablePath() + "GameAnalytics";
                if(!::cocos2d::FileUtils::getInstance()->isDirectoryExist(writablePath))
                {
                    ::cocos2d::FileUtils::getInstance()->createDirectory(writablePath);
                }
                gameanalytics::GameAnalytics::configureWritablePath(writablePath);
#endif
                isWritablePathSet = true;
            }
        }
    }
}
