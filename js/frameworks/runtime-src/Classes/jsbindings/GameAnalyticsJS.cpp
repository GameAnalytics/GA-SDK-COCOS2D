#include "GameAnalyticsJS.hpp"
#include "scripting/js-bindings/manual/cocos2d_specifics.hpp"
#include "GameAnalytics.h"

template<class T>
static bool dummy_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS_ReportError(cx, "Constructor for the requested class is not available, please refer to the API reference.");
    return false;
}

static bool empty_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
    return false;
}

static bool js_is_native_obj(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    args.rval().setBoolean(true);
    return true;
}
JSClass  *jsb_gameanalytics_cocos2d_GameAnalytics_class;
JSObject *jsb_gameanalytics_cocos2d_GameAnalytics_prototype;

void js_GameAnalyticsJS_GameAnalytics_finalize(JSFreeOp *fop, JSObject *obj)
{
    CCLOGINFO("jsbindings: finalizing JS object %p (JSBRelation)", obj);
}

bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= jsval_to_std_vector_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions03(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03 : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= jsval_to_std_vector_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions02(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02 : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= jsval_to_std_vector_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions01(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01 : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_endSession(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (argc == 0) {
        gameanalytics::cocos2d::GameAnalytics::endSession();
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_endSession : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        bool arg0;
        arg0 = JS::ToBoolean(args.get(0));
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setEnabledManualSessionHandling(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension03(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension03 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension03(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension03 : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension02(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension02 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension02(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension02 : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension01(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension01 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension01(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension01 : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_startSession(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (argc == 0) {
        gameanalytics::cocos2d::GameAnalytics::startSession();
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_startSession : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_addBusinessEventAndAutoFetchReceipt(JSContext *cx, uint32_t argc, jsval *vp)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 5) {
        const char* arg0 = nullptr;
        int arg1 = 0;
        const char* arg2 = nullptr;
        const char* arg3 = nullptr;
        const char* arg4 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
        std::string arg2_tmp; ok &= jsval_to_std_string(cx, args.get(2), &arg2_tmp); arg2 = arg2_tmp.c_str();
        std::string arg3_tmp; ok &= jsval_to_std_string(cx, args.get(3), &arg3_tmp); arg3 = arg3_tmp.c_str();
        std::string arg4_tmp; ok &= jsval_to_std_string(cx, args.get(4), &arg4_tmp); arg4 = arg4_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_addBusinessEventAndAutoFetchReceipt : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::addBusinessEventAndAutoFetchReceipt(arg0, arg1, arg2, arg3, arg4);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_addBusinessEventAndAutoFetchReceipt : wrong number of arguments");
#else
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_addBusinessEventAndAutoFetchReceipt : only works on iOS");
#endif
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_addProgressionEvent(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;

    do {
        if (argc == 3) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg2 = 0;
            ok &= jsval_to_int32(cx, args.get(2), (int32_t *)&arg2);
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2);
            return true;
        }
    } while (0);

    do {
        if (argc == 2) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1);
            return true;
        }
    } while (0);

    do {
        if (argc == 3) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp; ok &= jsval_to_std_string(cx, args.get(2), &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2);
            return true;
        }
    } while (0);

    do {
        if (argc == 4) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp; ok &= jsval_to_std_string(cx, args.get(2), &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg3 = 0;
            ok &= jsval_to_int32(cx, args.get(3), (int32_t *)&arg3);
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3);
            return true;
        }
    } while (0);

    do {
        if (argc == 4) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp; ok &= jsval_to_std_string(cx, args.get(2), &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp; ok &= jsval_to_std_string(cx, args.get(3), &arg3_tmp); arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3);
            return true;
        }
    } while (0);

    do {
        if (argc == 5) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp; ok &= jsval_to_std_string(cx, args.get(2), &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp; ok &= jsval_to_std_string(cx, args.get(3), &arg3_tmp); arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg4 = 0;
            ok &= jsval_to_int32(cx, args.get(4), (int32_t *)&arg4);
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3, arg4);
            return true;
        }
    } while (0);
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_addProgressionEvent : wrong number of arguments");
    return false;
}
bool js_GameAnalyticsJS_GameAnalytics_addResourceEvent(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 5) {
        gameanalytics::cocos2d::EGAResourceFlowType arg0;
        const char* arg1 = nullptr;
        double arg2 = 0;
        const char* arg3 = nullptr;
        const char* arg4 = nullptr;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
        ok &= JS::ToNumber( cx, args.get(2), &arg2) && !isnan(arg2);
        std::string arg3_tmp; ok &= jsval_to_std_string(cx, args.get(3), &arg3_tmp); arg3 = arg3_tmp.c_str();
        std::string arg4_tmp; ok &= jsval_to_std_string(cx, args.get(4), &arg4_tmp); arg4 = arg4_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_addResourceEvent : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::addResourceEvent(arg0, arg1, arg2, arg3, arg4);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_addResourceEvent : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_addErrorEvent(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        gameanalytics::cocos2d::EGAErrorSeverity arg0;
        const char* arg1 = nullptr;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_addErrorEvent : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::addErrorEvent(arg0, arg1);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_addErrorEvent : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setGender(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        gameanalytics::cocos2d::EGAGender arg0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setGender : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setGender(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setGender : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= jsval_to_std_vector_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableResourceCurrencies(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_configureUserId(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureUserId : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureUserId(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureUserId : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setBirthYear(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        int arg0 = 0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setBirthYear : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setBirthYear(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setBirthYear : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        bool arg0;
        arg0 = JS::ToBoolean(args.get(0));
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setEnabledInfoLog(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_addDesignEvent(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;

    do {
        if (argc == 2) {
            const char* arg0 = nullptr;
            std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            double arg1 = 0;
            ok &= JS::ToNumber( cx, args.get(1), &arg1) && !isnan(arg1);
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addDesignEvent(arg0, arg1);
            return true;
        }
    } while (0);

    do {
        if (argc == 1) {
            const char* arg0 = nullptr;
            std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addDesignEvent(arg0);
            return true;
        }
    } while (0);
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_addDesignEvent : wrong number of arguments");
    return false;
}
bool js_GameAnalyticsJS_GameAnalytics_initialize(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        const char* arg0 = nullptr;
        const char* arg1 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_initialize : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::initialize(arg0, arg1);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_initialize : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        bool arg0;
        arg0 = JS::ToBoolean(args.get(0));
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setEnabledVerboseLog(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_setFacebookId(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_setFacebookId : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setFacebookId(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_setFacebookId : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_configureBuild(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureBuild : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureBuild(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureBuild : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_configureGameEngineVersion(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureGameEngineVersion : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureGameEngineVersion(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureGameEngineVersion : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_addBusinessEvent(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    do {
        if (argc == 7) {
            const char* arg0 = nullptr;
            std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg1 = 0;
            ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp; ok &= jsval_to_std_string(cx, args.get(2), &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp; ok &= jsval_to_std_string(cx, args.get(3), &arg3_tmp); arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg4 = nullptr;
            std::string arg4_tmp; ok &= jsval_to_std_string(cx, args.get(4), &arg4_tmp); arg4 = arg4_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg5 = nullptr;
            std::string arg5_tmp; ok &= jsval_to_std_string(cx, args.get(5), &arg5_tmp); arg5 = arg5_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg6 = nullptr;
            std::string arg6_tmp; ok &= jsval_to_std_string(cx, args.get(6), &arg6_tmp); arg6 = arg6_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
            return true;
        }
    } while (0);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    do {
        if (argc == 6) {
            const char* arg0 = nullptr;
            std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg1 = 0;
            ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp; ok &= jsval_to_std_string(cx, args.get(2), &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp; ok &= jsval_to_std_string(cx, args.get(3), &arg3_tmp); arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg4 = nullptr;
            std::string arg4_tmp; ok &= jsval_to_std_string(cx, args.get(4), &arg4_tmp); arg4 = arg4_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg5 = nullptr;
            std::string arg5_tmp; ok &= jsval_to_std_string(cx, args.get(5), &arg5_tmp); arg5 = arg5_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4, arg5);
            return true;
        }
    } while (0);
#endif
    do {
        if (argc == 5) {
            const char* arg0 = nullptr;
            std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg1 = 0;
            ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp; ok &= jsval_to_std_string(cx, args.get(2), &arg2_tmp); arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp; ok &= jsval_to_std_string(cx, args.get(3), &arg3_tmp); arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg4 = nullptr;
            std::string arg4_tmp; ok &= jsval_to_std_string(cx, args.get(4), &arg4_tmp); arg4 = arg4_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4);
            return true;
        }
    } while (0);
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_addBusinessEvent : wrong number of arguments");
    return false;
}
bool js_GameAnalyticsJS_GameAnalytics_configureSdkGameEngineVersion(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureSdkGameEngineVersion : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureSdkGameEngineVersion(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureSdkGameEngineVersion : wrong number of arguments");
    return false;
}

bool js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= jsval_to_std_vector_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableResourceItemTypes(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes : wrong number of arguments");
    return false;
}


void js_register_GameAnalyticsJS_GameAnalytics(JSContext *cx, JS::HandleObject global) {
    jsb_gameanalytics_cocos2d_GameAnalytics_class = (JSClass *)calloc(1, sizeof(JSClass));
    jsb_gameanalytics_cocos2d_GameAnalytics_class->name = "GameAnalytics";
    jsb_gameanalytics_cocos2d_GameAnalytics_class->addProperty = JS_PropertyStub;
    jsb_gameanalytics_cocos2d_GameAnalytics_class->delProperty = JS_DeletePropertyStub;
    jsb_gameanalytics_cocos2d_GameAnalytics_class->getProperty = JS_PropertyStub;
    jsb_gameanalytics_cocos2d_GameAnalytics_class->setProperty = JS_StrictPropertyStub;
    jsb_gameanalytics_cocos2d_GameAnalytics_class->enumerate = JS_EnumerateStub;
    jsb_gameanalytics_cocos2d_GameAnalytics_class->resolve = JS_ResolveStub;
    jsb_gameanalytics_cocos2d_GameAnalytics_class->convert = JS_ConvertStub;
    jsb_gameanalytics_cocos2d_GameAnalytics_class->finalize = js_GameAnalyticsJS_GameAnalytics_finalize;
    jsb_gameanalytics_cocos2d_GameAnalytics_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

    static JSPropertySpec properties[] = {
        JS_PSG("__nativeObj", js_is_native_obj, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_PS_END
    };

    static JSFunctionSpec funcs[] = {
        JS_FS_END
    };

    static JSFunctionSpec st_funcs[] = {
        JS_FN("configureAvailableCustomDimensions03", js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("configureAvailableCustomDimensions02", js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("configureAvailableCustomDimensions01", js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("endSession", js_GameAnalyticsJS_GameAnalytics_endSession, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setEnabledManualSessionHandling", js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setCustomDimension03", js_GameAnalyticsJS_GameAnalytics_setCustomDimension03, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setCustomDimension02", js_GameAnalyticsJS_GameAnalytics_setCustomDimension02, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setCustomDimension01", js_GameAnalyticsJS_GameAnalytics_setCustomDimension01, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("startSession", js_GameAnalyticsJS_GameAnalytics_startSession, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("addBusinessEventAndAutoFetchReceipt", js_GameAnalyticsJS_GameAnalytics_addBusinessEventAndAutoFetchReceipt, 5, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("addProgressionEvent", js_GameAnalyticsJS_GameAnalytics_addProgressionEvent, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("addResourceEvent", js_GameAnalyticsJS_GameAnalytics_addResourceEvent, 5, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("addErrorEvent", js_GameAnalyticsJS_GameAnalytics_addErrorEvent, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setGender", js_GameAnalyticsJS_GameAnalytics_setGender, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("configureAvailableResourceCurrencies", js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("configureUserId", js_GameAnalyticsJS_GameAnalytics_configureUserId, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setBirthYear", js_GameAnalyticsJS_GameAnalytics_setBirthYear, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setEnabledInfoLog", js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("addDesignEvent", js_GameAnalyticsJS_GameAnalytics_addDesignEvent, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("initialize", js_GameAnalyticsJS_GameAnalytics_initialize, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setEnabledVerboseLog", js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setFacebookId", js_GameAnalyticsJS_GameAnalytics_setFacebookId, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("configureBuild", js_GameAnalyticsJS_GameAnalytics_configureBuild, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("configureGameEngineVersion", js_GameAnalyticsJS_GameAnalytics_configureGameEngineVersion, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("addBusinessEvent", js_GameAnalyticsJS_GameAnalytics_addBusinessEvent, 5, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("configureSdkGameEngineVersion", js_GameAnalyticsJS_GameAnalytics_configureSdkGameEngineVersion, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("configureAvailableResourceItemTypes", js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
    };

    jsb_gameanalytics_cocos2d_GameAnalytics_prototype = JS_InitClass(
        cx, global,
        JS::NullPtr(),
        jsb_gameanalytics_cocos2d_GameAnalytics_class,
        dummy_constructor<gameanalytics::cocos2d::GameAnalytics>, 0, // no constructor
        properties,
        funcs,
        NULL, // no static properties
        st_funcs);

    // add the proto and JSClass to the type->js info hash table
    JS::RootedObject proto(cx, jsb_gameanalytics_cocos2d_GameAnalytics_prototype);
    jsb_register_class<gameanalytics::cocos2d::GameAnalytics>(cx, jsb_gameanalytics_cocos2d_GameAnalytics_class, proto, JS::NullPtr());
}

void register_all_GameAnalyticsJS(JSContext* cx, JS::HandleObject obj) {
    // Get the ns
    JS::RootedObject ns(cx);
    get_or_create_js_obj(cx, obj, "ga", &ns);

    js_register_GameAnalyticsJS_GameAnalytics(cx, ns);
}
