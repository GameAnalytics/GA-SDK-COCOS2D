#include "base/ccConfig.h"
#ifndef __GameAnalyticsJS_h__
#define __GameAnalyticsJS_h__

#include "jsapi.h"
#include "jsfriendapi.h"

extern JSClass  *jsb_gameanalytics_cocos2d_GameAnalytics_class;
extern JSObject *jsb_gameanalytics_cocos2d_GameAnalytics_prototype;

bool js_GameAnalyticsJS_GameAnalytics_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_GameAnalyticsJS_GameAnalytics_finalize(JSContext *cx, JSObject *obj);
void js_register_GameAnalyticsJS_GameAnalytics(JSContext *cx, JS::HandleObject global);
void register_all_GameAnalyticsJS(JSContext* cx, JS::HandleObject obj);
bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions03(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions02(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_configureAvailableCustomDimensions01(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_endSession(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setEnabledManualSessionHandling(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension03(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension02(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setCustomDimension01(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_startSession(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_addBusinessEventAndAutoFetchReceipt(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_addProgressionEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_addResourceEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_addErrorEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setGender(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceCurrencies(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_configureUserId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setBirthYear(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setEnabledInfoLog(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_addDesignEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_initialize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setEnabledVerboseLog(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_setFacebookId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_configureBuild(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_configureGameEngineVersion(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_addBusinessEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_configureSdkGameEngineVersion(JSContext *cx, uint32_t argc, jsval *vp);
bool js_GameAnalyticsJS_GameAnalytics_configureAvailableResourceItemTypes(JSContext *cx, uint32_t argc, jsval *vp);

#endif // __GameAnalyticsJS_h__
