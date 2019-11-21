#include "GameAnalyticsLua.hpp"
#include "GameAnalytics.h"
#include "scripting/lua-bindings/manual/tolua_fix.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"


int lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions03(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::vector<std::string> arg0;
        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, "ga.GameAnalytics:configureAvailableCustomDimensions03");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions03'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions03(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureAvailableCustomDimensions03",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions03'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions02(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::vector<std::string> arg0;
        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, "ga.GameAnalytics:configureAvailableCustomDimensions02");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions02'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions02(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureAvailableCustomDimensions02",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions02'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions01(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::vector<std::string> arg0;
        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, "ga.GameAnalytics:configureAvailableCustomDimensions01");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions01'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureAvailableCustomDimensions01(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureAvailableCustomDimensions01",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions01'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_endSession(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_endSession'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::endSession();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:endSession",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_endSession'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setEnabledManualSessionHandling(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ga.GameAnalytics:setEnabledManualSessionHandling");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setEnabledManualSessionHandling'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setEnabledManualSessionHandling(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setEnabledManualSessionHandling",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setEnabledManualSessionHandling'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setEnabledEventSubmission(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ga.GameAnalytics:setEnabledEventSubmission");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setEnabledEventSubmission'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setEnabledEventSubmission(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setEnabledEventSubmission",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setEnabledEventSubmission'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setCustomDimension03(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:setCustomDimension03"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setCustomDimension03'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension03(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setCustomDimension03",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setCustomDimension03'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setCustomDimension02(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:setCustomDimension02"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setCustomDimension02'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension02(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setCustomDimension02",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setCustomDimension02'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setCustomDimension01(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:setCustomDimension01"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setCustomDimension01'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setCustomDimension01(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setCustomDimension01",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setCustomDimension01'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_startSession(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_startSession'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::startSession();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:startSession",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_startSession'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_addBusinessEventAndAutoFetchReceipt(lua_State* tolua_S)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 5)
    {
        const char* arg0;
        int arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:addBusinessEventAndAutoFetchReceipt"); arg0 = arg0_tmp.c_str();
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ga.GameAnalytics:addBusinessEventAndAutoFetchReceipt");
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ga.GameAnalytics:addBusinessEventAndAutoFetchReceipt"); arg2 = arg2_tmp.c_str();
        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "ga.GameAnalytics:addBusinessEventAndAutoFetchReceipt"); arg3 = arg3_tmp.c_str();
        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "ga.GameAnalytics:addBusinessEventAndAutoFetchReceipt"); arg4 = arg4_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_addBusinessEventAndAutoFetchReceipt'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::addBusinessEventAndAutoFetchReceipt(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:addBusinessEventAndAutoFetchReceipt",argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_addBusinessEventAndAutoFetchReceipt'.",&tolua_err);
#endif
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_addProgressionEvent(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do
    {
        if (argc == 3)
        {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:addProgressionEvent"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            int arg2;
            ok &= luaval_to_int32(tolua_S, 4,(int *)&arg2, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 2)
        {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:addProgressionEvent"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 3)
        {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:addProgressionEvent"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ga.GameAnalytics:addProgressionEvent"); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 4)
        {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:addProgressionEvent"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ga.GameAnalytics:addProgressionEvent"); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            int arg3;
            ok &= luaval_to_int32(tolua_S, 5,(int *)&arg3, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 4)
        {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:addProgressionEvent"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ga.GameAnalytics:addProgressionEvent"); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            const char* arg3;
            std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "ga.GameAnalytics:addProgressionEvent"); arg3 = arg3_tmp.c_str();
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 5)
        {
            gameanalytics::cocos2d::EGAProgressionStatus arg0;
            ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:addProgressionEvent"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ga.GameAnalytics:addProgressionEvent"); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            const char* arg3;
            std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "ga.GameAnalytics:addProgressionEvent"); arg3 = arg3_tmp.c_str();
            if (!ok) { break; }
            int arg4;
            ok &= luaval_to_int32(tolua_S, 6,(int *)&arg4, "ga.GameAnalytics:addProgressionEvent");
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addProgressionEvent(arg0, arg1, arg2, arg3, arg4);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "ga.GameAnalytics:addProgressionEvent",argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_addProgressionEvent'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_addResourceEvent(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 5)
    {
        gameanalytics::cocos2d::EGAResourceFlowType arg0;
        const char* arg1;
        double arg2;
        const char* arg3;
        const char* arg4;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:addResourceEvent");
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:addResourceEvent"); arg1 = arg1_tmp.c_str();
        ok &= luaval_to_number(tolua_S, 4,&arg2, "ga.GameAnalytics:addResourceEvent");
        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "ga.GameAnalytics:addResourceEvent"); arg3 = arg3_tmp.c_str();
        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "ga.GameAnalytics:addResourceEvent"); arg4 = arg4_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_addResourceEvent'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::addResourceEvent(arg0, arg1, arg2, arg3, arg4);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:addResourceEvent",argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_addResourceEvent'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_addErrorEvent(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        gameanalytics::cocos2d::EGAErrorSeverity arg0;
        const char* arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:addErrorEvent");
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:addErrorEvent"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_addErrorEvent'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::addErrorEvent(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:addErrorEvent",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_addErrorEvent'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setGender(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        gameanalytics::cocos2d::EGAGender arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:setGender");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setGender'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setGender(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setGender",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setGender'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_configureAvailableResourceCurrencies(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::vector<std::string> arg0;
        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, "ga.GameAnalytics:configureAvailableResourceCurrencies");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableResourceCurrencies'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureAvailableResourceCurrencies(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureAvailableResourceCurrencies",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableResourceCurrencies'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_configureUserId(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:configureUserId"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureUserId'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureUserId(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureUserId",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureUserId'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setBirthYear(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ga.GameAnalytics:setBirthYear");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setBirthYear'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setBirthYear(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setBirthYear",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setBirthYear'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setEnabledInfoLog(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ga.GameAnalytics:setEnabledInfoLog");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setEnabledInfoLog'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setEnabledInfoLog(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setEnabledInfoLog",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setEnabledInfoLog'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_addDesignEvent(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:addDesignEvent"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            double arg1;
            ok &= luaval_to_number(tolua_S, 3,&arg1, "ga.GameAnalytics:addDesignEvent");
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addDesignEvent(arg0, arg1);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:addDesignEvent"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addDesignEvent(arg0);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "ga.GameAnalytics:addDesignEvent",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_addDesignEvent'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_initialize(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 2)
    {
        const char* arg0;
        const char* arg1;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:initialize"); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp, "ga.GameAnalytics:initialize"); arg1 = arg1_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_initialize'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::initialize(arg0, arg1);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:initialize",argc, 2);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_initialize'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setEnabledVerboseLog(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        bool arg0;
        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ga.GameAnalytics:setEnabledVerboseLog");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setEnabledVerboseLog'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setEnabledVerboseLog(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setEnabledVerboseLog",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setEnabledVerboseLog'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_setFacebookId(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:setFacebookId"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_setFacebookId'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::setFacebookId(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:setFacebookId",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_setFacebookId'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_configureBuild(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:configureBuild"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureBuild'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureBuild(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureBuild",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureBuild'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_configureGameEngineVersion(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:configureGameEngineVersion"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureGameEngineVersion'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureGameEngineVersion(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureGameEngineVersion",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureGameEngineVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_addBusinessEvent(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    do
    {
        if (argc == 7)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:addBusinessEvent"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ga.GameAnalytics:addBusinessEvent");
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ga.GameAnalytics:addBusinessEvent"); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            const char* arg3;
            std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "ga.GameAnalytics:addBusinessEvent"); arg3 = arg3_tmp.c_str();
            if (!ok) { break; }
            const char* arg4;
            std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "ga.GameAnalytics:addBusinessEvent"); arg4 = arg4_tmp.c_str();
            if (!ok) { break; }
            const char* arg5;
            std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp, "ga.GameAnalytics:addBusinessEvent"); arg5 = arg5_tmp.c_str();
            if (!ok) { break; }
            const char* arg6;
            std::string arg6_tmp; ok &= luaval_to_std_string(tolua_S, 8, &arg6_tmp, "ga.GameAnalytics:addBusinessEvent"); arg6 = arg6_tmp.c_str();
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    do
    {
        if (argc == 6)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:addBusinessEvent"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ga.GameAnalytics:addBusinessEvent");
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ga.GameAnalytics:addBusinessEvent"); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            const char* arg3;
            std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "ga.GameAnalytics:addBusinessEvent"); arg3 = arg3_tmp.c_str();
            if (!ok) { break; }
            const char* arg4;
            std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "ga.GameAnalytics:addBusinessEvent"); arg4 = arg4_tmp.c_str();
            if (!ok) { break; }
            const char* arg5;
            std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp, "ga.GameAnalytics:addBusinessEvent"); arg5 = arg5_tmp.c_str();
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4, arg5);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
#endif
    do
    {
        if (argc == 5)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:addBusinessEvent"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            int arg1;
            ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ga.GameAnalytics:addBusinessEvent");
            if (!ok) { break; }
            const char* arg2;
            std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp, "ga.GameAnalytics:addBusinessEvent"); arg2 = arg2_tmp.c_str();
            if (!ok) { break; }
            const char* arg3;
            std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp, "ga.GameAnalytics:addBusinessEvent"); arg3 = arg3_tmp.c_str();
            if (!ok) { break; }
            const char* arg4;
            std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp, "ga.GameAnalytics:addBusinessEvent"); arg4 = arg4_tmp.c_str();
            if (!ok) { break; }
            gameanalytics::cocos2d::GameAnalytics::addBusinessEvent(arg0, arg1, arg2, arg3, arg4);
            lua_settop(tolua_S, 1);
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "ga.GameAnalytics:addBusinessEvent",argc, 5);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_addBusinessEvent'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_configureSdkGameEngineVersion(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:configureSdkGameEngineVersion"); arg0 = arg0_tmp.c_str();
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureSdkGameEngineVersion'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureSdkGameEngineVersion(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureSdkGameEngineVersion",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureSdkGameEngineVersion'.",&tolua_err);
#endif
    return 0;
}
int lua_GameAnalyticsLua_GameAnalytics_configureAvailableResourceItemTypes(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        std::vector<std::string> arg0;
        ok &= luaval_to_std_vector_string(tolua_S, 2, &arg0, "ga.GameAnalytics:configureAvailableResourceItemTypes");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableResourceItemTypes'", nullptr);
            return 0;
        }
        gameanalytics::cocos2d::GameAnalytics::configureAvailableResourceItemTypes(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:configureAvailableResourceItemTypes",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_configureAvailableResourceItemTypes'.",&tolua_err);
#endif
    return 0;
}

int lua_GameAnalyticsLua_GameAnalytics_getRemoteConfigsValueAsString(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;
#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S)-1;

    do
    {
        if (argc == 2)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:getRemoteConfigsValueAsString"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            const char* arg1;
            std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg1_tmp, "ga.GameAnalytics:getRemoteConfigsValueAsString"); arg1 = arg1_tmp.c_str();
            if (!ok) { break; }
            std::string result = gameanalytics::cocos2d::GameAnalytics::getRemoteConfigsValueAsString(arg0, arg1).data();
            tolua_pushstring(tolua_S,(const char*)result.c_str());
            return 1;
        }
    } while (0);
    ok  = true;
    do
    {
        if (argc == 1)
        {
            const char* arg0;
            std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp, "ga.GameAnalytics:getRemoteConfigsValueAsString"); arg0 = arg0_tmp.c_str();
            if (!ok) { break; }
            std::string result = gameanalytics::cocos2d::GameAnalytics::getRemoteConfigsValueAsString(arg0).data();
            tolua_pushstring(tolua_S,(const char*)result.c_str());
            return 1;
        }
    } while (0);
    ok  = true;
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d", "ga.GameAnalytics:getRemoteConfigsValueAsString",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_getRemoteConfigsValueAsString'.",&tolua_err);
#endif
    return 0;
}

int lua_GameAnalyticsLua_GameAnalytics_isRemoteConfigsReady(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_isRemoteConfigsReady'", nullptr);
            return 0;
        }
        bool result = gameanalytics::cocos2d::GameAnalytics::isRemoteConfigsReady();
        tolua_pushboolean(tolua_S,(bool)result);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:isRemoteConfigsReady",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_isRemoteConfigsReady'.",&tolua_err);
#endif
    return 0;
}

int lua_GameAnalyticsLua_GameAnalytics_getRemoteConfigsContentAsString(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ga.GameAnalytics",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_GameAnalyticsLua_GameAnalytics_getRemoteConfigsContentAsString'", nullptr);
            return 0;
        }
        std::string result = gameanalytics::cocos2d::GameAnalytics::getRemoteConfigsContentAsString();
        tolua_pushstring(tolua_S,(const char*)result.c_str());
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ga.GameAnalytics:getRemoteConfigsContentAsString",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_GameAnalyticsLua_GameAnalytics_getRemoteConfigsContentAsString'.",&tolua_err);
#endif
    return 0;
}

static int lua_GameAnalyticsLua_GameAnalytics_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (GameAnalytics)");
    return 0;
}

int lua_register_GameAnalyticsLua_GameAnalytics(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ga.GameAnalytics");
    tolua_cclass(tolua_S,"GameAnalytics","ga.GameAnalytics","",nullptr);

    tolua_beginmodule(tolua_S,"GameAnalytics");
        tolua_function(tolua_S,"configureAvailableCustomDimensions03", lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions03);
        tolua_function(tolua_S,"configureAvailableCustomDimensions02", lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions02);
        tolua_function(tolua_S,"configureAvailableCustomDimensions01", lua_GameAnalyticsLua_GameAnalytics_configureAvailableCustomDimensions01);
        tolua_function(tolua_S,"endSession", lua_GameAnalyticsLua_GameAnalytics_endSession);
        tolua_function(tolua_S,"setEnabledManualSessionHandling", lua_GameAnalyticsLua_GameAnalytics_setEnabledManualSessionHandling);
        tolua_function(tolua_S,"setEnabledEventSubmission", lua_GameAnalyticsLua_GameAnalytics_setEnabledEventSubmission);
        tolua_function(tolua_S,"setCustomDimension03", lua_GameAnalyticsLua_GameAnalytics_setCustomDimension03);
        tolua_function(tolua_S,"setCustomDimension02", lua_GameAnalyticsLua_GameAnalytics_setCustomDimension02);
        tolua_function(tolua_S,"setCustomDimension01", lua_GameAnalyticsLua_GameAnalytics_setCustomDimension01);
        tolua_function(tolua_S,"startSession", lua_GameAnalyticsLua_GameAnalytics_startSession);
        tolua_function(tolua_S,"addBusinessEventAndAutoFetchReceipt", lua_GameAnalyticsLua_GameAnalytics_addBusinessEventAndAutoFetchReceipt);
        tolua_function(tolua_S,"addProgressionEvent", lua_GameAnalyticsLua_GameAnalytics_addProgressionEvent);
        tolua_function(tolua_S,"addResourceEvent", lua_GameAnalyticsLua_GameAnalytics_addResourceEvent);
        tolua_function(tolua_S,"addErrorEvent", lua_GameAnalyticsLua_GameAnalytics_addErrorEvent);
        tolua_function(tolua_S,"setGender", lua_GameAnalyticsLua_GameAnalytics_setGender);
        tolua_function(tolua_S,"configureAvailableResourceCurrencies", lua_GameAnalyticsLua_GameAnalytics_configureAvailableResourceCurrencies);
        tolua_function(tolua_S,"configureUserId", lua_GameAnalyticsLua_GameAnalytics_configureUserId);
        tolua_function(tolua_S,"setBirthYear", lua_GameAnalyticsLua_GameAnalytics_setBirthYear);
        tolua_function(tolua_S,"setEnabledInfoLog", lua_GameAnalyticsLua_GameAnalytics_setEnabledInfoLog);
        tolua_function(tolua_S,"addDesignEvent", lua_GameAnalyticsLua_GameAnalytics_addDesignEvent);
        tolua_function(tolua_S,"initialize", lua_GameAnalyticsLua_GameAnalytics_initialize);
        tolua_function(tolua_S,"setEnabledVerboseLog", lua_GameAnalyticsLua_GameAnalytics_setEnabledVerboseLog);
        tolua_function(tolua_S,"setFacebookId", lua_GameAnalyticsLua_GameAnalytics_setFacebookId);
        tolua_function(tolua_S,"configureBuild", lua_GameAnalyticsLua_GameAnalytics_configureBuild);
        tolua_function(tolua_S,"configureGameEngineVersion", lua_GameAnalyticsLua_GameAnalytics_configureGameEngineVersion);
        tolua_function(tolua_S,"addBusinessEvent", lua_GameAnalyticsLua_GameAnalytics_addBusinessEvent);
        tolua_function(tolua_S,"configureSdkGameEngineVersion", lua_GameAnalyticsLua_GameAnalytics_configureSdkGameEngineVersion);
        tolua_function(tolua_S,"configureAvailableResourceItemTypes", lua_GameAnalyticsLua_GameAnalytics_configureAvailableResourceItemTypes);
        tolua_function(tolua_S,"getRemoteConfigsValueAsString", lua_GameAnalyticsLua_GameAnalytics_getRemoteConfigsValueAsString);
        tolua_function(tolua_S,"isRemoteConfigsReady", lua_GameAnalyticsLua_GameAnalytics_isRemoteConfigsReady);
        tolua_function(tolua_S,"getRemoteConfigsContentAsString", lua_GameAnalyticsLua_GameAnalytics_getRemoteConfigsContentAsString);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(gameanalytics::cocos2d::GameAnalytics).name();
    g_luaType[typeName] = "ga.GameAnalytics";
    g_typeCast["GameAnalytics"] = "ga.GameAnalytics";
    return 1;
}
TOLUA_API int register_all_GameAnalyticsLua(lua_State* tolua_S)
{
	tolua_open(tolua_S);

	tolua_module(tolua_S,"ga",0);
	tolua_beginmodule(tolua_S,"ga");

	lua_register_GameAnalyticsLua_GameAnalytics(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}
