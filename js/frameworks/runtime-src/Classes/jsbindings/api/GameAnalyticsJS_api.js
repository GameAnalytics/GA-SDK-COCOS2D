/**
 * @module GameAnalyticsJS
 */
var ga = ga || {};

/**
 * @class GameAnalytics
 */
ga.GameAnalytics = {

    /**
     * @method configureAvailableCustomDimensions01
     * @param {Array} arg0
     */
    configureAvailableCustomDimensions01 : function (
    array
    )
    {
    },

    /**
     * @method configureAvailableCustomDimensions02
     * @param {Array} arg0
     */
    configureAvailableCustomDimensions02 : function (
    array
    )
    {
    },

    /**
     * @method configureAvailableCustomDimensions03
     * @param {Array} arg0
     */
    configureAvailableCustomDimensions03 : function (
    array
    )
    {
    },

    /**
     * @method configureAvailableResourceCurrencies
     * @param {Array} arg0
     */
    configureAvailableResourceCurrencies : function (
    array
    )
    {
    },

    /**
     * @method configureAvailableResourceItemTypes
     * @param {Array} arg0
     */
    configureAvailableResourceItemTypes : function (
    array
    )
    {
    },

    /**
     * @method configureBuild
     * @param {char} arg0
     */
    configureBuild : function (
    char
    )
    {
    },

    /**
     * @method configureAutoDetectAppVersion
     * @param {bool} arg0
     */
    configureAutoDetectAppVersion : function (
    bool
    )
    {
    },

    /**
     * @method configureUserId
     * @param {char} arg0
     */
    configureUserId : function (
    char
    )
    {
    },

    /**
     * @method initialize
     * @param {char} arg0
     * @param {char} arg1
     */
    initialize : function (
    char,
    char
    )
    {
    },

    /**
     * @method addBusinessEvent
    * @param {char|char|char} char
    * @param {int|int|int} int
    * @param {char|char|char} char
    * @param {char|char|char} char
    * @param {char|char|char} char
    * @param {char|char|bool} char
    * @param {char} char
    */
    addBusinessEvent : function(
    char,
    int,
    char,
    char,
    char,
    char,
    char
    )
    {
    },

    /**
     * @method addResourceEvent
     * @param {gameanalytics::cc.EGAResourceFlowType} arg0
     * @param {char} arg1
     * @param {float} arg2
     * @param {char} arg3
     * @param {char} arg4
     */
    addResourceEvent : function (
    egaresourceflowtype,
    char,
    float,
    char,
    char
    )
    {
    },

    /**
     * @method addProgressionEvent
    * @param {gameanalytics::cc.EGAProgressionStatus|gameanalytics::cc.EGAProgressionStatus|gameanalytics::cc.EGAProgressionStatus|gameanalytics::cc.EGAProgressionStatus|gameanalytics::cc.EGAProgressionStatus|gameanalytics::cc.EGAProgressionStatus} egaprogressionstatus
    * @param {char|char|char|char|char|char} char
    * @param {int|char|char|char|char} int
    * @param {int|char|char} int
    * @param {int} int
    */
    addProgressionEvent : function(
    egaprogressionstatus,
    char,
    char,
    char,
    int
    )
    {
    },

    /**
     * @method addDesignEvent
    * @param {char|char} char
    * @param {float} float
    */
    addDesignEvent : function(
    char,
    float
    )
    {
    },

    /**
     * @method addErrorEvent
     * @param {gameanalytics::cc.EGAErrorSeverity} arg0
     * @param {char} arg1
     */
    addErrorEvent : function (
    egaerrorseverity,
    char
    )
    {
    },

    /**
     * @method setEnabledInfoLog
     * @param {bool} arg0
     */
    setEnabledInfoLog : function (
    bool
    )
    {
    },

    /**
     * @method setEnabledVerboseLog
     * @param {bool} arg0
     */
    setEnabledVerboseLog : function (
    bool
    )
    {
    },

    /**
     * @method setEnabledManualSessionHandling
     * @param {bool} arg0
     */
    setEnabledManualSessionHandling : function (
    bool
    )
    {
    },

    /**
     * @method setEnabledEventSubmission
     * @param {bool} arg0
     */
    setEnabledEventSubmission : function (
    bool
    )
    {
    },

    /**
     * @method setCustomDimension01
     * @param {char} arg0
     */
    setCustomDimension01 : function (
    char
    )
    {
    },

    /**
     * @method setCustomDimension02
     * @param {char} arg0
     */
    setCustomDimension02 : function (
    char
    )
    {
    },

    /**
     * @method setCustomDimension03
     * @param {char} arg0
     */
    setCustomDimension03 : function (
    char
    )
    {
    },

    /**
     * @method startSession
     */
    startSession : function (
    )
    {
    },

    /**
     * @method endSession
     */
    endSession : function (
    )
    {
    },

    /**
     * @method getRemoteConfigsValueAsString
     * @param {char} arg0
     * @param {char} arg1
     */
    getRemoteConfigsValueAsString : function (
    char,
    char,
    )
    {
        return "";
    },

    /**
     * @method isRemoteConfigsReady
     */
    isRemoteConfigsReady : function (
    )
    {
        return false;
    },

    /**
     * @method getRemoteConfigsContentAsString
     */
    getRemoteConfigsContentAsString : function (
    )
    {
        return "";
    },

};
