#include "GameAnalyticsJNI.h"

#define GAMEANALYTICS_CLASS_NAME "com/gameanalytics/sdk/GameAnalytics"
#define COCOS2DXACTIVITY_CLASS_NAME "org/cocos2dx/lib/Cocos2dxActivity"

namespace gameanalytics {
    //extern "C"
    {
        void jni_configureAvailableCustomDimensions01(const std::vector<std::string>& list)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureAvailableCustomDimensions01", "([Ljava/lang/String;)V"))
            {
                jstring str;
                jobjectArray j_array = 0;
                jsize len = list.size();
                j_array = methodInfo.env->NewObjectArray(len, methodInfo.env->FindClass("java/lang/String"), 0);

                int i = 0;
                for (std::string s : list)
                {
                    str = methodInfo.env->NewStringUTF(s.c_str());
                    methodInfo.env->SetObjectArrayElement(j_array, i, str);
                    ++i;
                }

                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_array);
                for (i = 0; i < list.size(); ++i)
                {
                    jobject localRef = methodInfo.env->GetObjectArrayElement(j_array, i);
                    methodInfo.env->DeleteLocalRef(localRef);
                }
                methodInfo.env->DeleteLocalRef(j_array);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_configureAvailableCustomDimensions02(const std::vector<std::string>& list)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureAvailableCustomDimensions02", "([Ljava/lang/String;)V"))
            {
                jstring str;
                jobjectArray j_array = 0;
                jsize len = list.size();
                j_array = methodInfo.env->NewObjectArray(len, methodInfo.env->FindClass("java/lang/String"), 0);

                int i = 0;
                for (std::string s : list)
                {
                    str = methodInfo.env->NewStringUTF(s.c_str());
                    methodInfo.env->SetObjectArrayElement(j_array, i, str);
                    ++i;
                }

                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_array);
                for (i = 0; i < list.size(); ++i)
                {
                    jobject localRef = methodInfo.env->GetObjectArrayElement(j_array, i);
                    methodInfo.env->DeleteLocalRef(localRef);
                }
                methodInfo.env->DeleteLocalRef(j_array);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_configureAvailableCustomDimensions03(const std::vector<std::string>& list)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureAvailableCustomDimensions03", "([Ljava/lang/String;)V"))
            {
                jstring str;
                jobjectArray j_array = 0;
                jsize len = list.size();
                j_array = methodInfo.env->NewObjectArray(len, methodInfo.env->FindClass("java/lang/String"), 0);

                int i = 0;
                for (std::string s : list)
                {
                    str = methodInfo.env->NewStringUTF(s.c_str());
                    methodInfo.env->SetObjectArrayElement(j_array, i, str);
                    ++i;
                }

                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_array);
                for (i = 0; i < list.size(); ++i)
                {
                    jobject localRef = methodInfo.env->GetObjectArrayElement(j_array, i);
                    methodInfo.env->DeleteLocalRef(localRef);
                }
                methodInfo.env->DeleteLocalRef(j_array);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_configureAvailableResourceCurrencies(const std::vector<std::string>& list)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureAvailableResourceCurrencies", "([Ljava/lang/String;)V"))
            {
                jstring str;
                jobjectArray j_array = 0;
                jsize len = list.size();
                j_array = methodInfo.env->NewObjectArray(len, methodInfo.env->FindClass("java/lang/String"), 0);

                int i = 0;
                for (std::string s : list)
                {
                    str = methodInfo.env->NewStringUTF(s.c_str());
                    methodInfo.env->SetObjectArrayElement(j_array, i, str);
                    ++i;
                }

                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_array);
                for (i = 0; i < list.size(); ++i)
                {
                    jobject localRef = methodInfo.env->GetObjectArrayElement(j_array, i);
                    methodInfo.env->DeleteLocalRef(localRef);
                }
                methodInfo.env->DeleteLocalRef(j_array);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_configureAvailableResourceItemTypes(const std::vector<std::string>& list)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureAvailableResourceItemTypes", "([Ljava/lang/String;)V"))
            {
                jstring str;
                jobjectArray j_array = 0;
                jsize len = list.size();
                j_array = methodInfo.env->NewObjectArray(len, methodInfo.env->FindClass("java/lang/String"), 0);

                int i = 0;
                for (std::string s : list)
                {
                    str = methodInfo.env->NewStringUTF(s.c_str());
                    methodInfo.env->SetObjectArrayElement(j_array, i, str);
                    ++i;
                }

                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_array);
                for (i = 0; i < list.size(); ++i)
                {
                    jobject localRef = methodInfo.env->GetObjectArrayElement(j_array, i);
                    methodInfo.env->DeleteLocalRef(localRef);
                }
                methodInfo.env->DeleteLocalRef(j_array);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_configureBuild(const char *build)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureBuild", "(Ljava/lang/String;)V"))
            {
                jstring j_string = methodInfo.env->NewStringUTF(build);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_string);
                methodInfo.env->DeleteLocalRef(j_string);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_configureAutoDetectAppVersion(bool flag)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureAutoDetectAppVersion",
                "(Z)V"))
            {
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flag);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }


        void jni_configureUserId(const char *userId)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureUserId", "(Ljava/lang/String;)V"))
            {
                jstring j_string = methodInfo.env->NewStringUTF(userId);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_string);
                methodInfo.env->DeleteLocalRef(j_string);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_configureSdkGameEngineVersion(const char *gameEngineSdkVersion)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureSdkGameEngineVersion", "(Ljava/lang/String;)V"))
            {
                jstring j_string = methodInfo.env->NewStringUTF(gameEngineSdkVersion);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_string);
                methodInfo.env->DeleteLocalRef(j_string);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_configureGameEngineVersion(const char *gameEngineVersion)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "configureGameEngineVersion", "(Ljava/lang/String;)V"))
            {
                jstring j_string = methodInfo.env->NewStringUTF(gameEngineVersion);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_string);
                methodInfo.env->DeleteLocalRef(j_string);
            }
        }

        void jni_initialize(const char *gameKey, const char *gameSecret)
        {
            cocos2d::JniMethodInfo methodInfo1;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo1, GAMEANALYTICS_CLASS_NAME, "initialize", "(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V"))
            {
                cocos2d::JniMethodInfo methodInfo2;
                if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo2, COCOS2DXACTIVITY_CLASS_NAME, "getContext", "()Landroid/content/Context;"))
                {
                    jobject activity = methodInfo2.env->CallStaticObjectMethod(methodInfo2.classID, methodInfo2.methodID);
                    jstring j_gameKey = methodInfo1.env->NewStringUTF(gameKey);
                    jstring j_gameSecret = methodInfo1.env->NewStringUTF(gameSecret);
                    methodInfo1.env->CallStaticVoidMethod(methodInfo1.classID, methodInfo1.methodID, activity, j_gameKey, j_gameSecret);
                    methodInfo1.env->DeleteLocalRef(j_gameKey);
                    methodInfo1.env->DeleteLocalRef(j_gameSecret);
                    methodInfo2.env->DeleteLocalRef(methodInfo2.classID);
                }
                methodInfo1.env->DeleteLocalRef(methodInfo1.classID);
            }
        }

        void jni_addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addBusinessEvent",
                "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"))
            {
                jstring j_currency = methodInfo.env->NewStringUTF(currency);
                jstring j_itemType = methodInfo.env->NewStringUTF(itemType);
                jstring j_itemId = methodInfo.env->NewStringUTF(itemId);
                jstring j_cartType = methodInfo.env->NewStringUTF(cartType);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_currency, amount, j_itemType, j_itemId, j_cartType/*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_currency);
                methodInfo.env->DeleteLocalRef(j_itemType);
                methodInfo.env->DeleteLocalRef(j_itemId);
                methodInfo.env->DeleteLocalRef(j_cartType);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addBusinessEventWithReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType,
            const char *receipt, const char *store, const char *signature, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addBusinessEvent",
                "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"))
            {
                jstring j_currency = methodInfo.env->NewStringUTF(currency);
                jstring j_itemType = methodInfo.env->NewStringUTF(itemType);
                jstring j_itemId = methodInfo.env->NewStringUTF(itemId);
                jstring j_cartType = methodInfo.env->NewStringUTF(cartType);
                jstring j_receipt = methodInfo.env->NewStringUTF(receipt);
                jstring j_store = methodInfo.env->NewStringUTF(store);
                jstring j_signature = methodInfo.env->NewStringUTF(signature);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_currency, amount, j_itemType, j_itemId, j_cartType, j_receipt, j_store, j_signature/*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_currency);
                methodInfo.env->DeleteLocalRef(j_itemType);
                methodInfo.env->DeleteLocalRef(j_itemId);
                methodInfo.env->DeleteLocalRef(j_cartType);
                methodInfo.env->DeleteLocalRef(j_receipt);
                methodInfo.env->DeleteLocalRef(j_store);
                methodInfo.env->DeleteLocalRef(j_signature);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addResourceEvent(int flowType, const char *currency, float amount, const char *itemType, const char *itemId, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addResourceEvent",
                "(ILjava/lang/String;FLjava/lang/String;Ljava/lang/String;)V"))
            {
                jstring j_currency = methodInfo.env->NewStringUTF(currency);
                jstring j_itemType = methodInfo.env->NewStringUTF(itemType);
                jstring j_itemId = methodInfo.env->NewStringUTF(itemId);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flowType, j_currency, amount, j_itemType, j_itemId/*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_currency);
                methodInfo.env->DeleteLocalRef(j_itemType);
                methodInfo.env->DeleteLocalRef(j_itemId);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addProgressionEvent(int progressionStatus, const char *progression01, const char *progression02, const char *progression03, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addProgressionEvent",
                "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"))
            {
                jstring j_progression01 = methodInfo.env->NewStringUTF(progression01);
                jstring j_progression02 = methodInfo.env->NewStringUTF(progression02);
                jstring j_progression03 = methodInfo.env->NewStringUTF(progression03);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, progressionStatus, j_progression01, j_progression02, j_progression03/*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_progression01);
                methodInfo.env->DeleteLocalRef(j_progression02);
                methodInfo.env->DeleteLocalRef(j_progression03);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addProgressionEventWithScore(int progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addProgressionEvent",
                "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;D)V"))
            {
                jstring j_progression01 = methodInfo.env->NewStringUTF(progression01);
                jstring j_progression02 = methodInfo.env->NewStringUTF(progression02);
                jstring j_progression03 = methodInfo.env->NewStringUTF(progression03);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, progressionStatus, j_progression01, j_progression02, j_progression03, (double)score/*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_progression01);
                methodInfo.env->DeleteLocalRef(j_progression02);
                methodInfo.env->DeleteLocalRef(j_progression03);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addDesignEvent(const char *eventId, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addDesignEvent",
                "(Ljava/lang/String;)V"))
            {
                jstring j_eventId = methodInfo.env->NewStringUTF(eventId);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_eventId/*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_eventId);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addDesignEventWithValue(const char *eventId, float value, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addDesignEvent",
                "(Ljava/lang/String;D)V"))
            {
                jstring j_eventId = methodInfo.env->NewStringUTF(eventId);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_eventId, value/*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_eventId);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addErrorEvent(int severity, const char *message, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addErrorEvent",
                "(ILjava/lang/String;)V"))
            {
                jstring j_message = methodInfo.env->NewStringUTF(message);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, severity, j_message/*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_message);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addAdEvent(int adAction, int adType, const char *adSdkName, const char *adPlacement, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addAdEvent",
                                                        "(IILjava/lang/String;Ljava/lang/String;)V"))
            {
                jstring j_adSdkName = methodInfo.env->NewStringUTF(adSdkName);
                jstring j_adPlacement = methodInfo.env->NewStringUTF(adPlacement);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, adAction, adType, j_adSdkName, j_adPlacement /*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_adSdkName);
                methodInfo.env->DeleteLocalRef(j_adPlacement);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addAdEventWithDuration(int adAction, int adType, const char *adSdkName, const char *adPlacement, int duration, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addAdEvent",
                                                        "(IILjava/lang/String;Ljava/lang/String;J)V"))
            {
                jstring j_adSdkName = methodInfo.env->NewStringUTF(adSdkName);
                jstring j_adPlacement = methodInfo.env->NewStringUTF(adPlacement);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, adAction, adType, j_adSdkName, j_adPlacement, duration /*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_adSdkName);
                methodInfo.env->DeleteLocalRef(j_adPlacement);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_addAdEventWithNoAdReason(int adAction, int adType, const char *adSdkName, const char *adPlacement, int noAdReason, const char *fields)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addAdEvent",
                                                        "(IILjava/lang/String;Ljava/lang/String;I)V"))
            {
                jstring j_adSdkName = methodInfo.env->NewStringUTF(adSdkName);
                jstring j_adPlacement = methodInfo.env->NewStringUTF(adPlacement);
                jstring j_fields = methodInfo.env->NewStringUTF(fields);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, adAction, adType, j_adSdkName, j_adPlacement, noAdReason /*, j_fields*/);
                methodInfo.env->DeleteLocalRef(j_adSdkName);
                methodInfo.env->DeleteLocalRef(j_adPlacement);
                methodInfo.env->DeleteLocalRef(j_fields);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_setEnabledInfoLog(bool flag)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setEnabledInfoLog",
                "(Z)V"))
            {
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flag);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_setEnabledVerboseLog(bool flag)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setEnabledVerboseLog",
                "(Z)V"))
            {
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flag);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_setEnabledManualSessionHandling(bool flag)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setEnabledManualSessionHandling",
                "(Z)V"))
            {
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flag);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_setEnabledEventSubmission(bool flag)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setEnabledEventSubmission",
                "(Z)V"))
            {
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flag);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_setCustomDimension01(const char *customDimension)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setCustomDimension01",
                "(Ljava/lang/String;)V"))
            {
                jstring j_customDimension = methodInfo.env->NewStringUTF(customDimension);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_customDimension);
                methodInfo.env->DeleteLocalRef(j_customDimension);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_setCustomDimension02(const char *customDimension)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setCustomDimension02",
                "(Ljava/lang/String;)V"))
            {
                jstring j_customDimension = methodInfo.env->NewStringUTF(customDimension);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_customDimension);
                methodInfo.env->DeleteLocalRef(j_customDimension);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_setCustomDimension03(const char *customDimension)
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setCustomDimension03",
                "(Ljava/lang/String;)V"))
            {
                jstring j_customDimension = methodInfo.env->NewStringUTF(customDimension);
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_customDimension);
                methodInfo.env->DeleteLocalRef(j_customDimension);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_startSession()
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "startSession",
                "()V"))
            {
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        void jni_endSession()
        {
            cocos2d::JniMethodInfo methodInfo;
            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "endSession",
                "()V"))
            {
                methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }
        }

        std::vector<char> jni_getRemoteConfigsValueAsString(const char *key)
        {
            cocos2d::JniMethodInfo methodInfo;
            std::string returnString;
            std::vector<char> result;

            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "getRemoteConfigsValueAsString",
                "(Ljava/lang/String;)Ljava/lang/String;"))
            {
                jstring j_key = methodInfo.env->NewStringUTF(key);
                jstring j_s = (jstring)methodInfo.env->CallStaticObjectMethod(methodInfo.classID, methodInfo.methodID, j_key);
                const char* s = methodInfo.env->GetStringUTFChars(j_s, 0);
                returnString = s;
                methodInfo.env->ReleaseStringUTFChars(j_s, s);
                methodInfo.env->DeleteLocalRef(j_key);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }

            for(size_t i = 0; i < returnString.size(); ++i)
            {
                result.push_back(returnString[i]);
            }
            result.push_back('\0');

            return result;
        }

        std::vector<char> jni_getRemoteConfigsValueAsStringWithDefaultValue(const char *key, const char *defaultValue)
        {
            cocos2d::JniMethodInfo methodInfo;
            std::string returnString;
            std::vector<char> result;

            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "getRemoteConfigsValueAsString",
                "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;"))
            {
                jstring j_key = methodInfo.env->NewStringUTF(key);
                jstring j_defaultValue = methodInfo.env->NewStringUTF(defaultValue);
                jstring j_s = (jstring)methodInfo.env->CallStaticObjectMethod(methodInfo.classID, methodInfo.methodID, j_key, j_defaultValue);
                const char* s = methodInfo.env->GetStringUTFChars(j_s, 0);
                returnString = s;
                methodInfo.env->ReleaseStringUTFChars(j_s, s);
                methodInfo.env->DeleteLocalRef(j_key);
                methodInfo.env->DeleteLocalRef(j_defaultValue);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }

            for(size_t i = 0; i < returnString.size(); ++i)
            {
                result.push_back(returnString[i]);
            }
            result.push_back('\0');

            return result;
        }

        bool jni_isRemoteConfigsReady()
        {
            cocos2d::JniMethodInfo methodInfo;
            bool result = false;

            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "isRemoteConfigsReady",
                "()Z"))
            {
                result = methodInfo.env->CallStaticBooleanMethod(methodInfo.classID, methodInfo.methodID);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }

            return false;
        }

        std::vector<char> jni_getRemoteConfigsContentAsString()
        {
            cocos2d::JniMethodInfo methodInfo;
            std::string returnString;
            std::vector<char> result;

            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "getRemoteConfigsContentAsString",
                "()Ljava/lang/String;"))
            {
                jstring j_s = (jstring)methodInfo.env->CallStaticObjectMethod(methodInfo.classID, methodInfo.methodID);
                const char* s = methodInfo.env->GetStringUTFChars(j_s, 0);
                returnString = s;
                methodInfo.env->ReleaseStringUTFChars(j_s, s);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }

            for(size_t i = 0; i < returnString.size(); ++i)
            {
                result.push_back(returnString[i]);
            }
            result.push_back('\0');

            return result;
        }

        std::vector<char> jni_getABTestingId()
        {
            cocos2d::JniMethodInfo methodInfo;
            std::string returnString;
            std::vector<char> result;

            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "getABTestingId",
                "()Ljava/lang/String;"))
            {
                jstring j_s = (jstring)methodInfo.env->CallStaticObjectMethod(methodInfo.classID, methodInfo.methodID);
                const char* s = methodInfo.env->GetStringUTFChars(j_s, 0);
                returnString = s;
                methodInfo.env->ReleaseStringUTFChars(j_s, s);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }

            for(size_t i = 0; i < returnString.size(); ++i)
            {
                result.push_back(returnString[i]);
            }
            result.push_back('\0');

            return result;
        }

        std::vector<char> jni_getABTestingVariantId()
        {
            cocos2d::JniMethodInfo methodInfo;
            std::string returnString;
            std::vector<char> result;

            if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "getABTestingVariantId",
                "()Ljava/lang/String;"))
            {
                jstring j_s = (jstring)methodInfo.env->CallStaticObjectMethod(methodInfo.classID, methodInfo.methodID);
                const char* s = methodInfo.env->GetStringUTFChars(j_s, 0);
                returnString = s;
                methodInfo.env->ReleaseStringUTFChars(j_s, s);
                methodInfo.env->DeleteLocalRef(methodInfo.classID);
            }

            for(size_t i = 0; i < returnString.size(); ++i)
            {
                result.push_back(returnString[i]);
            }
            result.push_back('\0');

            return result;
        }
    }
}
