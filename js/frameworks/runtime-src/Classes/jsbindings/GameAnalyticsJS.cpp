#include "GameAnalyticsJS.hpp"
#include "scripting/js-bindings/jswrapper/SeApi.h"
#include "scripting/js-bindings/manual/jsb_conversions.hpp"
#include "GameAnalytics.h"

static se::Object* __jsb_gameanalytics_cocos2d_GameAnalytics_proto = nullptr;
static se::Class* __jsb_gameanalytics_cocos2d_GameAnalytics_class = nullptr;

static bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= seval_to_std_vector_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions01(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01 : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01)

static bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= seval_to_std_vector_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions02(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02 : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02)

static bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= seval_to_std_vector_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions03(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03 : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03)

static bool js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= seval_to_std_vector_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableResourceCurrencies(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies)

static bool js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= seval_to_std_vector_string(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAvailableResourceItemTypes(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes)

static bool js_GameAnalyticsJS_GameAnalytics_configureBuild(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp;
        ok &= seval_to_std_string(args[0], &arg0_tmp);
        arg0 = arg0_tmp.c_str();
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_configureBuild : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureBuild(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_configureBuild : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_configureBuild)

static bool js_GameAnalyticsJS_GameAnalytics_configureAutoDetectAppVersion(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_setEnabledEventSubmission : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureAutoDetectAppVersion(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_configureAutoDetectAppVersion : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_configureAutoDetectAppVersion)

static bool js_GameAnalyticsJS_GameAnalytics_configureUserId(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp;
        ok &= seval_to_std_string(args[0], &arg0_tmp);
        arg0 = arg0_tmp.c_str();
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_configureUserId : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::configureUserId(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_configureUserId : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_configureUserId)

static bool js_GameAnalyticsJS_GameAnalytics_initialize(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 2) {
        const char* arg0 = nullptr;
        const char* arg1 = nullptr;
        std::string arg0_tmp;
        ok &= seval_to_std_string(args[0], &arg0_tmp);
        arg0 = arg0_tmp.c_str();
        std::string arg1_tmp;
        ok &= seval_to_std_string(args[1], &arg1_tmp);
        arg1 = arg1_tmp.c_str();
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_initialize : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::initialize(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_initialize : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_initialize)

static bool js_GameAnalyticsJS_GameAnalytics_addBusinessEvent(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    do {
        if (argc == 7) {
            const char* arg0 = nullptr;
            std::string arg0_tmp;
            ok &= seval_to_std_string(args[0], &arg0_tmp);
            arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg1 = 0;
            ok &= seval_to_int32(args[1], (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp;
            ok &= seval_to_std_string(args[2], &arg2_tmp);
            arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp;
            ok &= seval_to_std_string(args[3], &arg3_tmp);
            arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg4 = nullptr;
            std::string arg4_tmp;
            ok &= seval_to_std_string(args[4], &arg4_tmp);
            arg4 = arg4_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg5 = nullptr;
            std::string arg5_tmp;
            ok &= seval_to_std_string(args[5], &arg5_tmp);
            arg5 = arg5_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg6 = nullptr;
            std::string arg6_tmp;
            ok &= seval_to_std_string(args[6], &arg6_tmp);
            arg6 = arg6_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
            return true;
        }
    } while (0);
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    do {
        if (argc == 6) {
            const char* arg0 = nullptr;
            std::string arg0_tmp;
            ok &= seval_to_std_string(args[0], &arg0_tmp);
            arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg1 = 0;
            ok &= seval_to_int32(args[1], (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp;
            ok &= seval_to_std_string(args[2], &arg2_tmp);
            arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp;
            ok &= seval_to_std_string(args[3], &arg3_tmp);
            arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg4 = nullptr;
            std::string arg4_tmp;
            ok &= seval_to_std_string(args[4], &arg4_tmp);
            arg4 = arg4_tmp.c_str();
            if (!ok) { ok = true; break; }
            bool arg5_bool;
            ok &= seval_to_boolean(args[5], &arg5_bool);
            if (!ok)
            {
                ok = true;
                const char* arg5_string = nullptr;
                std::string arg5_tmp;
                ok &= seval_to_std_string(args[5], &arg5_tmp);
                arg5 = arg5_tmp.c_str();
                if (!ok) { ok = true; break; }
                gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4, arg5_string);
            }
            else
            {
                if(arg5_bool)
                {
                    gameanalytics::cocos2d::GameAnalytics::addBusinessEventAndAutoFetchReceipt(arg0, arg1, arg2, arg3, arg4);
                }
                else
                {
                    gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4);
                }
            }

            return true;
        }
    } while (0);
#endif
    do {
        if (argc == 5) {
            const char* arg0 = nullptr;
            std::string arg0_tmp;
            ok &= seval_to_std_string(args[0], &arg0_tmp);
            arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg1 = 0;
            ok &= seval_to_int32(args[1], (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp;
            ok &= seval_to_std_string(args[2], &arg2_tmp);
            arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp;
            ok &= seval_to_std_string(args[3], &arg3_tmp);
            arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg4 = nullptr;
            std::string arg4_tmp;
            ok &= seval_to_std_string(args[4], &arg4_tmp);
            arg4 = arg4_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4);
            return true;
        }
    } while (0);
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_addBusinessEvent : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_addBusinessEvent)

static bool js_GameAnalyticsJS_GameAnalytics_addResourceEvent(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 5) {
        gameanalytics::cocos2d::EGAResourceFlowType arg0;
        const char* arg1 = nullptr;
        double arg2 = 0;
        const char* arg3 = nullptr;
        const char* arg4 = nullptr;
        ok &= seval_to_int32(args[0], (int32_t *)&arg0);
        std::string arg1_tmp;
        ok &= seval_to_std_string(args[1], &arg1_tmp);
        arg1 = arg1_tmp.c_str();
        ok &= seval_to_double(args[2], &arg2) && !isnan(arg2);
        std::string arg3_tmp;
        ok &= seval_to_std_string(args[3], &arg3_tmp);
        arg3 = arg3_tmp.c_str();
        std::string arg4_tmp;
        ok &= seval_to_std_string(args[4], &arg4_tmp);
        arg4 = arg4_tmp.c_str();
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_addResourceEvent : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::addResourceEvent(arg0, arg1, arg2, arg3, arg4);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_addResourceEvent : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_addResourceEvent)

static bool js_GameAnalyticsJS_GameAnalytics_addProgressionEvent(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;

    do {
        if (argc == 3) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= seval_to_int32(args[0], (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp;
            ok &= seval_to_std_string(args[1], &arg1_tmp);
            arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg2 = 0;
            ok &= seval_to_int32(args[2], (int32_t *)&arg2);
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2);
            return true;
        }
    } while (0);

    do {
        if (argc == 2) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= seval_to_int32(args[0], (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp;
            ok &= seval_to_std_string(args[1], &arg1_tmp);
            arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1);
            return true;
        }
    } while (0);

    do {
        if (argc == 3) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= seval_to_int32(args[0], (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp;
            ok &= seval_to_std_string(args[1], &arg1_tmp);
            arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp;
            ok &= seval_to_std_string(args[2], &arg2_tmp);
            arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2);
            return true;
        }
    } while (0);

    do {
        if (argc == 4) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= seval_to_int32(args[0], (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp;
            ok &= seval_to_std_string(args[1], &arg1_tmp);
            arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp;
            ok &= seval_to_std_string(args[2], &arg2_tmp);
            arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg3 = 0;
            ok &= seval_to_int32(args[3], (int32_t *)&arg3);
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3);
            return true;
        }
    } while (0);

    do {
        if (argc == 4) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= seval_to_int32(args[0], (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp;
            ok &= seval_to_std_string(args[1], &arg1_tmp);
            arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp;
            ok &= seval_to_std_string(args[2], &arg2_tmp);
            arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp;
            ok &= seval_to_std_string(args[3], &arg3_tmp);
            arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3);
            return true;
        }
    } while (0);

    do {
        if (argc == 5) {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= seval_to_int32(args[0], (int32_t *)&arg0);
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp;
            ok &= seval_to_std_string(args[1], &arg1_tmp);
            arg1 = arg1_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg2 = nullptr;
            std::string arg2_tmp;
            ok &= seval_to_std_string(args[2], &arg2_tmp);
            arg2 = arg2_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg3 = nullptr;
            std::string arg3_tmp;
            ok &= seval_to_std_string(args[3], &arg3_tmp);
            arg3 = arg3_tmp.c_str();
            if (!ok) { ok = true; break; }
            int arg4 = 0;
            ok &= seval_to_int32(args[4], (int32_t *)&arg4);
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3, arg4);
            return true;
        }
    } while (0);
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_addProgressionEvent : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_addProgressionEvent)

static bool js_GameAnalyticsJS_GameAnalytics_addDesignEvent(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;

    do {
        if (argc == 2) {
            const char* arg0 = nullptr;
            std::string arg0_tmp;
            ok &= seval_to_std_string(args[0], &arg0_tmp);
            arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            double arg1 = 0;
            ok &= seval_to_double(args[1], &arg1) && !isnan(arg1);
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addDesignEvent(arg0, arg1);
            return true;
        }
    } while (0);

    do {
        if (argc == 1) {
            const char* arg0 = nullptr;
            std::string arg0_tmp;
            ok &= seval_to_std_string(args[0], &arg0_tmp);
            arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            gameanalytics::cocos2d::GameAnalytics::addDesignEvent(arg0);
            return true;
        }
    } while (0);
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_addDesignEvent : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_addDesignEvent)

static bool js_GameAnalyticsJS_GameAnalytics_addErrorEvent(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 2) {
        gameanalytics::cocos2d::EGAErrorSeverity arg0;
        const char* arg1 = nullptr;
        ok &= seval_to_int32(args[0], (int32_t *)&arg0);
        std::string arg1_tmp;
        ok &= seval_to_std_string(args[1], &arg1_tmp);
        arg1 = arg1_tmp.c_str();
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_addErrorEvent : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::addErrorEvent(arg0, arg1);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_addErrorEvent : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_addErrorEvent)

static bool js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setEnabledInfoLog(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog)

static bool js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setEnabledVerboseLog(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog)

static bool js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setEnabledManualSessionHandling(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling)

static bool js_GameAnalyticsJS_GameAnalytics_setEnabledEventSubmission(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        bool arg0;
        ok &= seval_to_boolean(args[0], &arg0);
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_setEnabledEventSubmission : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setEnabledEventSubmission(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_setEnabledEventSubmission : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_setEnabledEventSubmission)

static bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension01(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp;
        ok &= seval_to_std_string(args[0], &arg0_tmp);
        arg0 = arg0_tmp.c_str();
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension01 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension01(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_setCustomDimension01 : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_setCustomDimension01)

static bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension02(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp;
        ok &= seval_to_std_string(args[0], &arg0_tmp);
        arg0 = arg0_tmp.c_str();
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension02 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension02(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_setCustomDimension02 : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_setCustomDimension02)

static bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension03(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;
    if (argc == 1) {
        const char* arg0 = nullptr;
        std::string arg0_tmp;
        ok &= seval_to_std_string(args[0], &arg0_tmp);
        arg0 = arg0_tmp.c_str();
        SE_PRECONDITION2(ok, false, "js_GameAnalyticsJS_GameAnalytics_setCustomDimension03 : Error processing arguments");
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension03(arg0);
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_setCustomDimension03 : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_setCustomDimension03)

static bool js_GameAnalyticsJS_GameAnalytics_startSession(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc == 0) {
        gameanalytics::cocos2d::GameAnalytics::startSession();
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_startSession : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_startSession)

static bool js_GameAnalyticsJS_GameAnalytics_endSession(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc == 0) {
        gameanalytics::cocos2d::GameAnalytics::endSession();
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_endSession : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_endSession)

static bool js_GameAnalyticsJS_GameAnalytics_getRemoteConfigsValueAsString(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    bool ok = true;

    do {
        if (argc == 2) {
            const char* arg0 = nullptr;
            std::string arg0_tmp;
            ok &= seval_to_std_string(args[0], &arg0_tmp);
            arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            const char* arg1 = nullptr;
            std::string arg1_tmp;
            ok &= seval_to_std_string(args[1], &arg1_tmp);
            arg1 = arg1_tmp.c_str();
            s.rval().setString(gameanalytics::cocos2d::GameAnalytics::getRemoteConfigsValueAsString(arg0, arg1).data());
            return true;
        }
    } while (0);

    do {
        if (argc == 1) {
            const char* arg0 = nullptr;
            std::string arg0_tmp;
            ok &= seval_to_std_string(args[0], &arg0_tmp);
            arg0 = arg0_tmp.c_str();
            if (!ok) { ok = true; break; }
            s.rval().setString(gameanalytics::cocos2d::GameAnalytics::getRemoteConfigsValueAsString(arg0).data());
            return true;
        }
    } while (0);
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_getRemoteConfigsValueAsString : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_getRemoteConfigsValueAsString)

static bool js_GameAnalyticsJS_GameAnalytics_isRemoteConfigsReady(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc == 0) {
        s.rval().setBoolean(gameanalytics::cocos2d::GameAnalytics::isRemoteConfigsReady());
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_isRemoteConfigsReady : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_isRemoteConfigsReady)

static bool js_GameAnalyticsJS_GameAnalytics_getRemoteConfigsContentAsString(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc == 0) {
        s.rval().setString(gameanalytics::cocos2d::GameAnalytics::getRemoteConfigsContentAsString());
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_getRemoteConfigsContentAsString : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_getRemoteConfigsContentAsString)

static bool js_GameAnalyticsJS_GameAnalytics_getABTestingId(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc == 0) {
        s.rval().setString(gameanalytics::cocos2d::GameAnalytics::getABTestingId());
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_getABTestingId : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_getABTestingId)

static bool js_GameAnalyticsJS_GameAnalytics_getABTestingVariantId(se::State& s)
{
    const auto& args = s.args();
    int argc = (int)args.size();
    if (argc == 0) {
        s.rval().setString(gameanalytics::cocos2d::GameAnalytics::getABTestingVariantId());
        return true;
    }
    SE_REPORT_ERROR("js_GameAnalyticsJS_GameAnalytics_getABTestingVariantId : wrong number of arguments");
    return false;
}
SE_BIND_FUNC(js_GameAnalyticsJS_GameAnalytics_getABTestingVariantId)

static bool js_GameAnalyticsJS_GameAnalytics_finalize(se::State& s)
{
    CCLOG("jsbindings: finalizing JS object %p (gameanalytics::GameAnalytics)", s.nativeThisObject());
    return true;
}
SE_BIND_FINALIZE_FUNC(js_GameAnalyticsJS_GameAnalytics_finalize)

bool js_register_GameAnalyticsJS_GameAnalytics(se::Object* global) {
    // Make sure the namespace exists
    se::Value nsVal;
    if (!global->getProperty("ga", &nsVal))
    {
        // If it doesn't exist, create one. Similar as `var ns = {};` in JS.
        se::HandleObject jsobj(se::Object::createPlainObject());
        nsVal.setObject(jsobj);

        // Set the object to the global object with the property name `ns`.
        global->setProperty("ga", nsVal);
    }
    se::Object* ns = nsVal.toObject();
    // Create a se::Class object, developers do not need to consider the release of the se::Class object, which is automatically handled by the ScriptEngine.
    auto cls = se::Class::create("GameAnalytics", ns, nullptr, nullptr); // If the registered class doesn't need a  constructor, the last argument can be passed in with nullptr, it will make  `new SomeClass();` illegal.

    // Define finalize callback function
    cls->defineFinalizeFunction(_SE(js_GameAnalyticsJS_GameAnalytics_finalize));

    // Install the class to JS virtual machine
    cls->install();

    // JSBClassType::registerClass is a helper function in the Cocos2D-X native binding code, which is not a part of the ScriptEngine.
    JSBClassType::registerClass<gameanalytics::cocos2d::GameAnalytics>(cls);

    // Save the result to global variable for easily use in other places, for example class inheritence.
    __jsb_gameanalytics_cocos2d_GameAnalytics_proto = cls->getProto();
    __jsb_gameanalytics_cocos2d_GameAnalytics_class = cls;

    // Register static member variables and static member functions
    se::Value ctorVal;
    if (ns->getProperty("GameAnalytics", &ctorVal) && ctorVal.isObject())
    {
        ctorVal.toObject()->defineFunction("configureAvailableCustomDimensions01", _SE(js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01));
        ctorVal.toObject()->defineFunction("configureAvailableCustomDimensions02", _SE(js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02));
        ctorVal.toObject()->defineFunction("configureAvailableCustomDimensions03", _SE(js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03));
        ctorVal.toObject()->defineFunction("configureAvailableResourceCurrencies", _SE(js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies));
        ctorVal.toObject()->defineFunction("configureAvailableResourceItemTypes", _SE(js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes));
        ctorVal.toObject()->defineFunction("configureBuild", _SE(js_GameAnalyticsJS_GameAnalytics_configureBuild));
        ctorVal.toObject()->defineFunction("configureAutoDetectAppVersion", _SE(js_GameAnalyticsJS_GameAnalytics_configureAutoDetectAppVersion));
        ctorVal.toObject()->defineFunction("configureUserId", _SE(js_GameAnalyticsJS_GameAnalytics_configureUserId));
        ctorVal.toObject()->defineFunction("initialize", _SE(js_GameAnalyticsJS_GameAnalytics_initialize));
        ctorVal.toObject()->defineFunction("addBusinessEvent", _SE(js_GameAnalyticsJS_GameAnalytics_addBusinessEvent));
        ctorVal.toObject()->defineFunction("addResourceEvent", _SE(js_GameAnalyticsJS_GameAnalytics_addResourceEvent));
        ctorVal.toObject()->defineFunction("addProgressionEvent", _SE(js_GameAnalyticsJS_GameAnalytics_addProgressionEvent));
        ctorVal.toObject()->defineFunction("addDesignEvent", _SE(js_GameAnalyticsJS_GameAnalytics_addDesignEvent));
        ctorVal.toObject()->defineFunction("addErrorEvent", _SE(js_GameAnalyticsJS_GameAnalytics_addErrorEvent));
        ctorVal.toObject()->defineFunction("setEnabledInfoLog", _SE(js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog));
        ctorVal.toObject()->defineFunction("setEnabledVerboseLog", _SE(js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog));
        ctorVal.toObject()->defineFunction("setEnabledManualSessionHandling", _SE(js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling));
        ctorVal.toObject()->defineFunction("setEnabledEventSubmission", _SE(js_GameAnalyticsJS_GameAnalytics_setEnabledEventSubmission));
        ctorVal.toObject()->defineFunction("setCustomDimension01", _SE(js_GameAnalyticsJS_GameAnalytics_setCustomDimension01));
        ctorVal.toObject()->defineFunction("setCustomDimension02", _SE(js_GameAnalyticsJS_GameAnalytics_setCustomDimension02));
        ctorVal.toObject()->defineFunction("setCustomDimension03", _SE(js_GameAnalyticsJS_GameAnalytics_setCustomDimension03));
        ctorVal.toObject()->defineFunction("startSession", _SE(js_GameAnalyticsJS_GameAnalytics_startSession));
        ctorVal.toObject()->defineFunction("endSession", _SE(js_GameAnalyticsJS_GameAnalytics_endSession));
        ctorVal.toObject()->defineFunction("getRemoteConfigsValueAsString", _SE(js_GameAnalyticsJS_GameAnalytics_getRemoteConfigsValueAsString));
        ctorVal.toObject()->defineFunction("isRemoteConfigsReady", _SE(js_GameAnalyticsJS_GameAnalytics_isRemoteConfigsReady));
        ctorVal.toObject()->defineFunction("getRemoteConfigsContentAsString", _SE(js_GameAnalyticsJS_GameAnalytics_getRemoteConfigsContentAsString));
    }

    // Clear JS exceptions
    se::ScriptEngine::getInstance()->clearException();
    return true;
}

bool register_all_GameAnalyticsJS(se::Object* obj) {
    js_register_GameAnalyticsJS_GameAnalytics(obj);

    return true;
}
