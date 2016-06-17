//
//  GameAnalytics.h
//  GA-SDK-IOS
//
//  Copyright (c) 2015 GameAnalytics. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 @enum
 @discussion
 This enum is used to specify flow in resource events
 @constant GAResourceFlowTypeSource
 Used when adding to a resource currency
 @constant GAResourceFlowTypeSink
 Used when subtracting from a resource currency
 */
typedef enum GAResourceFlowType : NSInteger {
    GAResourceFlowTypeSource = 1,
    GAResourceFlowTypeSink = 2
} GAResourceFlowType;


/*!
 @enum
 @discussion
 his enum is used to specify status for progression event
 @constant GAProgressionStatusStart
 User started progression
 @constant GAProgressionStatusComplete
 User succesfully ended a progression
 @constant GAProgressionStatusFail
 User failed a progression
 */
typedef enum GAProgressionStatus : NSInteger {
    GAProgressionStatusStart = 1,
    GAProgressionStatusComplete = 2,
    GAProgressionStatusFail = 3
} GAProgressionStatus;


/*!
 @enum
 @discussion
 his enum is used to specify severity of an error event
 @constant GAErrorSeverityDebug
 @constant GAErrorSeverityInfo
 @constant GAErrorSeverityWarning
 @constant GAErrorSeverityError
 @constant GAErrorSeverityCritical
 */
typedef enum GAErrorSeverity : NSInteger {
    GAErrorSeverityDebug = 1,
    GAErrorSeverityInfo = 2,
    GAErrorSeverityWarning = 3,
    GAErrorSeverityError = 4,
    GAErrorSeverityCritical = 5
} GAErrorSeverity;

// Orbit delegates for general orbit status
@protocol GAOrbitDelegate <NSObject>
@optional
- (void)onGAOrbitInitialized;   /** Orbit has been initialized */
- (void)onGAOrbitDisabled;      /** Orbit is currently disabled due to config or error */
- (void)onGAOrbitFetched;       /** possible to show Orbit promo */
@end

@protocol GAOrbitPromoDelegate <NSObject>
@optional
- (void)onGAOrbitPromoStarted;                  /** pause game */
- (void)onGAOrbitPromoFinished:(BOOL)didShow;   /** unpause game (+ call fetch again) */
@end

/*!
 @enum
 @discussion
 this enum is used for the general Orbit status / events
 */
typedef enum GAOrbitStatus : NSInteger {
    GAORBIT_STATUS_INITIALIZE_NOT_CALLED=0,     /** Orbit has not been called with initialize yet */
    GAORBIT_STATUS_INITIALIZING=1,              /** Orbit is initializing / fetching config */
    GAORBIT_STATUS_INITIALIZE_FAILED_CONNECT=2, /** Orbit could not initialize. Likely due to being offline */
    GAORBIT_STATUS_INITIALIZED=3,               /** Orbit is initialized and active */
    GAORBIT_STATUS_DISABLED=4                   /** Orbit is disabled. Either from configuration or due to error */
} GAOrbitStatus;

/*!
 @enum
 @discussion
 this enum is used to set the lifetime status for an Orbit Promo
 */
typedef enum GAOrbitPromoStatus : NSInteger {
    GAORBIT_PROMO_STATUS_INITIALIZING=0, /** The promo is initializing / fetching promo config */
    GAORBIT_PROMO_STATUS_FETCHING=1,     /** The promo is fetching resources (images) */
    GAORBIT_PROMO_STATUS_FETCHED=2,      /** The promo is ready to display (resources fetched) */
    GAORBIT_PROMO_STATUS_STARTED=3,      /** The promo has started to display */
    GAORBIT_PROMO_STATUS_FINISHED=4      /** The promo has finished (either after display or due to being aborted) */
} GAOrbitPromoStatus;


@class GameAnalytics;

@interface GameAnalytics : NSObject


/*!
 @method

 @abstract Define available 1st custom dimensions

 @discussion <i>Example usage:</i>
 <pre><code>
 NSArray *dimensionArray = @[@"dimA", @"dimB", @"dimC"];<br>
 [GameAnalytics configureAvailableCustomDimensions01:dimensionArray];
 </code></pre>

 @param customDimensions
 Must be an array of strings.<br>
 (Array max length=20, String max length=32)

 @availability Available since 2.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureAvailableCustomDimensions01:(NSArray *)customDimensions;

/*!
 @method

 @abstract Set available 2nd custom dimensions

 @discussion <i>Example usage:</i>
 <pre><code>
 NSArray *available = @[@"dimD", @"dimE", @"dimF"];<br>
 [GameAnalytics configureAvailableCustomDimensions02:dimensionArray;
 </code></pre>

 @param customDimensions
 Must be an array of strings.<br>
 (Array max length=20, String max length=32)

 @availability Available since 2.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureAvailableCustomDimensions02:(NSArray *)customDimensions;

/*!
 @method

 @abstract Set available 3rd custom dimensions

 @discussion <i>Example usage:</i>
 <pre><code>
 NSArray *available = @[@"dimA", @"dimB", @"dimC"];<br>
 [GameAnalytics configureAvailableCustomDimensions03:dimensionArray];
 </code></pre>

 @param customDimensions
 Must be an array of strings.<br>
 (Array max length=20, String max length=32)

 @availability Available since 2.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureAvailableCustomDimensions03:(NSArray *)customDimensions;

/*!
 @method

 @abstract Set available resource currencies

 @discussion <i>Example usage:</i>
 <pre><code>
 NSArray *availableCurrencies = @[@"gems", @"gold"];<br>
 [GameAnalytics configureAvailableResourceCurrencies:availableCurrencies];
 </code></pre>

 @param resourceCurrencies
 Must be an array of strings.<br>
 (Array max length=20, String max length=32)

 @availability Available since 2.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureAvailableResourceCurrencies:(NSArray *)resourceCurrencies;

/*!
 @method

 @abstract Set available resource item types

 @discussion <i>Example usage:</i>
 <pre><code>
 NSArray *availableItemTypes = @[@"upgrades", @"powerups"];<br>
 [GameAnalytics configureAvailableResourceItemTypes:availableItemTypes];
 </code></pre>

 @param resourceItemTypes
 Must be an array of strings.<br>
 (Array max length=20, String max length=32)

 @availability Available since 2.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureAvailableResourceItemTypes:(NSArray *)resourceItemTypes;

/*!
 @method

 @abstract Set app build version

 @discussion <i>Example usage:</i>
 <pre><code>
 [GameAnalytics configureBuild:@"0.0.1"];
 </code></pre>

 @param build
 (String max length=32)

 @availability Available since 2.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureBuild:(NSString *)build;

/*!
 @method

 @abstract Set a custom unique user_id identifying the user.

 @discussion <i>Example usage:</i>
 <pre><code>
 [GameAnalytics configureUserId:@"24566"];
 </code></pre>

 @param userId
 (String max length=64)

 @availability Available since 4.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureUserId:(NSString *)userId;


/* @IF WRAPPER */

/*
 Used ONLY by GameAnalytics wrapper SDK's (for example Unity).
 Never call this manually!
 */
+ (void)configureSdkVersion:(NSString *)wrapperSdkVersion;
/* @ENDIF WRAPPER */

/*!
 @method

 @abstract Set app engine version

 @discussion <i>Example usage:</i>
 <pre><code>
 [GameAnalytics configureEngineVersion:@"unreal 4.8.1"];
 </code></pre>

 @param engineVersion
 (String)

 @availability Available since 2.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureEngineVersion:(NSString *)engineVersion;

/*!
 @method

 @abstract Configure the game key and secret key before initializing. Used by certain frameworks (like Frabric.io) needing to set the keys during configure phase.

 @discussion
 <i>Example usage:</i>
 <pre><code>
 [GameAnalytics configureGameKey:@"123456789ABCDEFGHIJKLMNOPQRSTU" gameSecret:@"123456789ABCDEFGHIJKLMNOPQRSTU12345678"];
 </code></pre>

 @param gameKey
 (String)
 @param gameSecret
 (String)

 @availability Available since 2.0.8
 */
+ (void)configureGameKey:(NSString *)gameKey
              gameSecret:(NSString *)gameSecret;

/*!
 @method

 @abstract Initialize GameAnalytics SDK

 @discussion
 <i>Example usage:</i>
 <pre><code>
 [GameAnalytics initializeWithGameKey:@"123456789ABCDEFGHIJKLMNOPQRSTU" gameSecret:@"123456789ABCDEFGHIJKLMNOPQRSTU12345678"];
 </code></pre>

 @param gameKey
 (String)
 @param gameSecret
 (String)

 @availability Available since 2.0.0
 */
+ (void)initializeWithGameKey:(NSString *)gameKey
                   gameSecret:(NSString *)gameSecret;



/*!
 @method

 @abstract Initialize GameAnalytics SDK when the game key and game secret has been configured earlier.

 @discussion <i>Example usage:</i>
 <pre><code>
 [GameAnalytics initializeWithConfiguredGameKeyAndGameSecret];
 </code></pre>

 @availability Available since 2.0.8

 @attribute Note! This method can only be used if the configureGameKey:gameSecret: method is called before.
 */
+ (void)initializeWithConfiguredGameKeyAndGameSecret;


/*!
 @method

 @abstract Add new business event with receipt

 @param currency
 Currency code in ISO 4217 format. (e.g. USD)
 @param amount
 Amount in cents (int). (e.g. 99)
 @param itemType
 Item Type bought. (e.g. Gold Pack)
 @param itemId
 Item bought. (e.g. 1000 gold)
 @param receipt
 Transaction receipt string. (Optional, can be nil)

 @availability Available since 2.0.0

 @attribute Note! This method cannot be called before initialize method has been triggered
 */
+ (void)addBusinessEventWithCurrency:(NSString *)currency
                              amount:(NSInteger)amount
                            itemType:(NSString *)itemType
                              itemId:(NSString *)itemId
                            cartType:(NSString *)cartType
                             receipt:(NSString *)receipt;


/*!
 @method

 @abstract Add new business event

 @param currency
 Currency code in ISO 4217 format. (e.g. USD)
 @param amount
 (Integer) Amount in cents. (e.g. 99)
 @param itemType
 Item Type bought. (e.g. Gold Pack)
 @param itemId
 Item bought. (e.g. 1000 gold)
 @param autoFetchReceipt
 Should the SDK automatically fetch the transaction receipt and add it to the event

 @availability Available since 1.0.0

 @attribute Note! This method cannot be called before initialize method has been triggered
 */
+ (void)addBusinessEventWithCurrency:(NSString *)currency
                              amount:(NSInteger)amount
                            itemType:(NSString *)itemType
                              itemId:(NSString *)itemId
                            cartType:(NSString *)cartType
                    autoFetchReceipt:(BOOL)autoFetchReceipt;


/*!
 @method

 @abstract Add new resource event

 @param flowType
 Add or substract resource.<br> (See. GAResourceFlowType)
 @param currency
 One of the available currencies set in configureAvailableResourceCurrencies
 @param amount
 Amount sourced or sinked
 @param itemType
 One of the available currencies set in configureAvailableResourceItemTypes
 @param itemId
 Item id (string max length=32)

 @availability Available since 2.0.0

 @attribute Note! This method cannot be called before initialize method has been triggered
 */
+ (void)addResourceEventWithFlowType:(GAResourceFlowType)flowType
                            currency:(NSString *)currency
                              amount:(NSNumber *)amount
                            itemType:(NSString *)itemType
                              itemId:(NSString *)itemId;


/*!
 @method

 @abstract Add new progression event

 @param progressionStatus
 Status of added progression.<br> (See. GAProgressionStatus)
 @param progression01
 1st progression (e.g. world01)
 @param progression02
 2nd progression (e.g. level01)
 @param progression03
 3rd progression (e.g. phase01)

 @availability Available since 1.0.0

 @attribute Note! This method cannot be called before initialize method has been triggered
 */
+ (void)addProgressionEventWithProgressionStatus:(GAProgressionStatus)progressionStatus
                                   progression01:(NSString *)progression01
                                   progression02:(NSString *)progression02
                                   progression03:(NSString *)progression03;

/*!
 @method

 @abstract Add new progression event with score

 @param progressionStatus
 Status of added progression.<br> (See. GAProgressionStatus)
 @param progression01
 1st progression (e.g. world01)
 @param progression02
 2nd progression (e.g. level01)
 @param progression03
 3rd progression (e.g. phase01)

 @availability Available since 2.0.0

 @attribute Note! This method cannot be called before initialize method has been triggered
 */
+ (void)addProgressionEventWithProgressionStatus:(GAProgressionStatus)progressionStatus
                                   progression01:(NSString *)progression01
                                   progression02:(NSString *)progression02
                                   progression03:(NSString *)progression03
                                           score:(NSInteger)score;

/*!
 @method

 @abstract Add new design event without a value

 @param eventId
 String can consist of 1 to 5 segments.<br>
 Segments are seperated by ':' and segments can have a max length of 32.<br>
 (e.g. segment1:anotherSegment:gold)

 @availability Available since 2.0.0

 @attribute Note! This method cannot be called before initialize method has been triggered
 */
+ (void)addDesignEventWithEventId:(NSString *)eventId;

/*!
 @method

 @abstract Add new design event with a value

 @param eventId
 String can consist of 1 to 5 segments.<br>
 segments are seperated by ':' and segments can have a max length of 32.<br>
 (e.g. segment1:anotherSegment:gold)
 @param value
 Number value of event

 @availability Available since 2.0.0

 @attribute Note! This method cannot be called before initialize method has been triggered
 */
+ (void)addDesignEventWithEventId:(NSString *)eventId
                            value:(NSNumber *)value;


/*!
 @method

 @abstract Add new error event

 @param severity
 Severity of error (See. GAErrorSeverity)
 @param message
 Error message (Optional, can be nil)

 @availability Available since 2.0.0

 @attribute Note! This method cannot be called before initialize method has been triggered
 */
+ (void)addErrorEventWithSeverity:(GAErrorSeverity)severity
                          message:(NSString *)message;


/*!
 @method

 @abstract Enable analytics logging to console

 @param flag
 Enable or disable analytics log output

 @availability Available since 4.0.0

 */
+ (void)setEnabledAnalyticsLog:(BOOL)flag;

/*!
 @method

 @abstract Enable orbit logging to console

 @param flag
 Enable or disable orbit log output

 @availability Available since 4.0.0

 */
+ (void)setEnabledOrbitLog:(BOOL)flag;


/*!
 @method

 @abstract Enable verbose info logging of analytics and orbit. Will output event JSON data to console.

 @param flag
 Enable or disable verbose info log mode

 @availability Available since 2.0.0

 */
+ (void)setEnabledVerboseLog:(BOOL)flag;

/*!
 @method

 @abstract Set 1st custom dimension

 @param dimension01
 One of the available dimension values set in configureAvailableCustomDimensions01<br>
 Will persist cross session. Set to nil to reset.

 @availability Available since 2.0.0

 @attribute Note! Must be called after setAvailableCustomDimensions01WithCustomDimensions
 */
+ (void)setCustomDimension01:(NSString *)dimension01;

/*!
 @method

 @abstract Set 2nd custom dimension

 @param dimension02
 One of the available dimension values set in configureAvailableCustomDimensions02<br>
 Will persist cross session. Set to nil to reset.

 @availability Available since 2.0.0

 @attribute Note! Must be called after setAvailableCustomDimensions02
 */
+ (void)setCustomDimension02:(NSString *)dimension02;

/*!
 @method

 @abstract Set 3rd custom dimension

 @param dimension03
 One of the available dimension values set in configureAvailableCustomDimensions03<br>
 Will persist cross session. Set to nil to reset.

 @availability Available since 2.0.0

 @attribute Note! Must be called after setAvailableCustomDimensions03W
 */
+ (void)setCustomDimension03:(NSString *)dimension03;

/*!
 @method

 @abstract Set user facebook id

 @param facebookId
 Facebook id of user (Persists cross session)

 @availability Available since 2.0.0
 */
+ (void)setFacebookId:(NSString *)facebookId;

/*!
 @method

 @abstract Set user gender

 @param gender
 Gender of user (Persists cross session)<br>
 Must be one of (male / female)

 @availability Available since 2.0.0
 */
+ (void)setGender:(NSString *)gender;

/*!
 @method

 @abstract Set user birth year

 @param birthYear
 Birth year of user (Persists cross session)

 @availability Available since 2.0.0
 */
+ (void)setBirthYear:(NSInteger)birthYear;


// -------------------------------
// ------------ ORBIT ------------

/*!
 @method

 @abstract Configure testmode for Orbit. Will then always return content bypassing frequency capping etc.

 @availability Available since 4.0.0

 @attribute Note! This method must be called before initializing the SDK
 */
+ (void)configureOrbitTestModeEnabled;

/*!
 @method

 @abstract Set an Orbit delegate to retrieve information about the status - like when an Orbit Promo is ready to display.

 @availability Available since 4.0.0
 */
+ (void)setOrbitDelegate:(id)delegate;

/*!
 @method

 @abstract Instruct Orbit to start fetching all resources needed for showing a promotion.

 @param flag
 Flag for enabling Orbit to automatically keep fetching promo content to avoid calling this manually.

 @availability Available since 4.0.0
 */
+ (BOOL)fetchOrbitPromoWithAutoFetch:(BOOL)flag;

/*!
 @method

 @abstract Instruct Orbit to show a Promo (if fetched) with an (optional) delegate for status changes.

 @param delegate
 An OrbitPromo delegate that will be called when status changes during the display of Orbit.

 @availability Available since 4.0.0
 */
+ (BOOL)showOrbitPromoWithDelegate:(id<GAOrbitPromoDelegate>)delegate;

/*!
 @method

 @abstract A method to get the current status of Orbit.

 @availability Available since 4.0.0
 */
+ (GAOrbitStatus)getOrbitStatus;

/*!
 @method

 @abstract A method to get the current status of an Orbit Promo.

 @availability Available since 4.0.0
 */
+ (GAOrbitPromoStatus)getOrbitPromoStatus;

/*!
 @method

 @abstract A method to determine if Orbit is currently ready to show a promotion (fetched).

 @availability Available since 4.0.0
 */
+ (BOOL)isOrbitPromoFetched;

@end
