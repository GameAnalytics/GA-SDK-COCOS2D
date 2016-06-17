#include "GameAnalyticsJNI.h"

#define GAMEANALYTICS_CLASS_NAME "com/gameanalytics/sdk/GameAnalytics"
#define COCOS2DXACTIVITY_CLASS_NAME "org/cocos2dx/lib/Cocos2dxActivity"

namespace gameanalytics {
	extern "C"
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
			    methodInfo.env->DeleteLocalRef(j_array);
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
			    methodInfo.env->DeleteLocalRef(j_array);
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
			    methodInfo.env->DeleteLocalRef(j_array);
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
			    methodInfo.env->DeleteLocalRef(j_array);
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
			    methodInfo.env->DeleteLocalRef(j_array);
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
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo1, GAMEANALYTICS_CLASS_NAME, "initializeWithGameKey", "(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V")) 
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
	        	} 
	        }
	    }
	    
	    void jni_addBusinessEvent(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addBusinessEventWithCurrency", 
	        	"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")) 
	        {
	            jstring j_currency = methodInfo.env->NewStringUTF(currency);
	            jstring j_itemType = methodInfo.env->NewStringUTF(itemType);
	            jstring j_itemId = methodInfo.env->NewStringUTF(itemId);
	            jstring j_cartType = methodInfo.env->NewStringUTF(cartType);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_currency, amount, j_itemType, j_itemId, j_cartType);
	            methodInfo.env->DeleteLocalRef(j_currency);
	            methodInfo.env->DeleteLocalRef(j_itemType);
	            methodInfo.env->DeleteLocalRef(j_itemId);
	            methodInfo.env->DeleteLocalRef(j_cartType);
	        }
	    }

	    void jni_addBusinessEventWithReceipt(const char *currency, int amount, const char *itemType, const char *itemId, const char *cartType, 
	    	const char *receipt, const char *store, const char *signature)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addBusinessEventWithCurrency", 
	        	"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")) 
	        {
	            jstring j_currency = methodInfo.env->NewStringUTF(currency);
	            jstring j_itemType = methodInfo.env->NewStringUTF(itemType);
	            jstring j_itemId = methodInfo.env->NewStringUTF(itemId);
	            jstring j_cartType = methodInfo.env->NewStringUTF(cartType);
	            jstring j_receipt = methodInfo.env->NewStringUTF(receipt);
	            jstring j_store = methodInfo.env->NewStringUTF(store);
	            jstring j_signature = methodInfo.env->NewStringUTF(signature);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_currency, amount, j_itemType, j_itemId, j_cartType, j_receipt, j_store, j_signature);
	            methodInfo.env->DeleteLocalRef(j_currency);
	            methodInfo.env->DeleteLocalRef(j_itemType);
	            methodInfo.env->DeleteLocalRef(j_itemId);
	            methodInfo.env->DeleteLocalRef(j_cartType);
	            methodInfo.env->DeleteLocalRef(j_receipt);
	            methodInfo.env->DeleteLocalRef(j_store);
	            methodInfo.env->DeleteLocalRef(j_signature);
	        }
	    }

	    void jni_addResourceEvent(int flowType, const char *currency, float amount, const char *itemType, const char *itemId)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addResourceEventWithFlowType", 
	        	"(ILjava/lang/String;FLjava/lang/String;Ljava/lang/String;)V")) 
	        {
	            jstring j_currency = methodInfo.env->NewStringUTF(currency);
	            jstring j_itemType = methodInfo.env->NewStringUTF(itemType);
	            jstring j_itemId = methodInfo.env->NewStringUTF(itemId);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flowType, j_currency, amount, j_itemType, j_itemId);
	            methodInfo.env->DeleteLocalRef(j_currency);
	            methodInfo.env->DeleteLocalRef(j_itemType);
	            methodInfo.env->DeleteLocalRef(j_itemId);
	        }
	    }

	    void jni_addProgressionEvent(int progressionStatus, const char *progression01, const char *progression02, const char *progression03)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addProgressionEventWithProgressionStatus", 
	        	"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")) 
	        {
	            jstring j_progression01 = methodInfo.env->NewStringUTF(progression01);
	            jstring j_progression02 = methodInfo.env->NewStringUTF(progression02);
	            jstring j_progression03 = methodInfo.env->NewStringUTF(progression03);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, progressionStatus, j_progression01, j_progression02, j_progression03);
	            methodInfo.env->DeleteLocalRef(j_progression01);
	            methodInfo.env->DeleteLocalRef(j_progression02);
	            methodInfo.env->DeleteLocalRef(j_progression03);
	        }
	    }

	    void jni_addProgressionEventWithScore(int progressionStatus, const char *progression01, const char *progression02, const char *progression03, int score)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addProgressionEventWithProgressionStatus", 
	        	"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;D)V")) 
	        {
	            jstring j_progression01 = methodInfo.env->NewStringUTF(progression01);
	            jstring j_progression02 = methodInfo.env->NewStringUTF(progression02);
	            jstring j_progression03 = methodInfo.env->NewStringUTF(progression03);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, progressionStatus, j_progression01, j_progression02, j_progression03);
	            methodInfo.env->DeleteLocalRef(j_progression01);
	            methodInfo.env->DeleteLocalRef(j_progression02);
	            methodInfo.env->DeleteLocalRef(j_progression03);
	        }
	    }

	    void jni_addDesignEvent(const char *eventId)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addDesignEventWithEventId", 
	        	"(Ljava/lang/String;)V")) 
	        {
	            jstring j_eventId = methodInfo.env->NewStringUTF(eventId);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_eventId);
	            methodInfo.env->DeleteLocalRef(j_eventId);
	        }
	    }

	    void jni_addDesignEventWithValue(const char *eventId, float value)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addDesignEventWithEventId", 
	        	"(Ljava/lang/String;D)V")) 
	        {
	            jstring j_eventId = methodInfo.env->NewStringUTF(eventId);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_eventId, value);
	            methodInfo.env->DeleteLocalRef(j_eventId);
	        }
	    }

	    void jni_addErrorEvent(int severity, const char *message)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "addErrorEventWithSeverity", 
	        	"(ILjava/lang/String;)V")) 
	        {
	            jstring j_message = methodInfo.env->NewStringUTF(message);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, severity, j_message);
	            methodInfo.env->DeleteLocalRef(j_message);
	        }
	    }
	    
	    void jni_setEnabledInfoLog(bool flag)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setEnabledInfoLog", 
	        	"(Z)V")) 
	        {
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flag);
	        }
	    }

	    void jni_setEnabledVerboseLog(bool flag)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setEnabledVerboseLog", 
	        	"(Z)V")) 
	        {
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, flag);
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
	        }
	    }

	    void jni_setFacebookId(const char *facebookId)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setFacebookId", 
	        	"(Ljava/lang/String;)V")) 
	        {
	        	jstring j_facebookId = methodInfo.env->NewStringUTF(facebookId);
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, j_facebookId);
	            methodInfo.env->DeleteLocalRef(j_facebookId);
	        }
	    }

	    void jni_setGender(int gender)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setGender", 
	        	"(I)V")) 
	        {
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, gender);
	        }
	    }

	    void jni_setBirthYear(int birthYear)
	    {
	    	cocos2d::JniMethodInfo methodInfo;
	        if (cocos2d::JniHelper::getStaticMethodInfo(methodInfo, GAMEANALYTICS_CLASS_NAME, "setBirthYear", 
	        	"(I)V")) 
	        {
	            methodInfo.env->CallStaticVoidMethod(methodInfo.classID, methodInfo.methodID, birthYear);
	        }
	    }
	}
}