
--------------------------------
-- @module GameAnalytics
-- @parent_module ga

--------------------------------
--
-- @function [parent=#GameAnalytics] configureAvailableCustomDimensions03
-- @param self
-- @param #array_table list
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] configureAvailableCustomDimensions02
-- @param self
-- @param #array_table list
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] configureAvailableCustomDimensions01
-- @param self
-- @param #array_table list
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] endSession
-- @param self
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setEnabledManualSessionHandling
-- @param self
-- @param #bool flag
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setCustomDimension03
-- @param self
-- @param #char customDimension
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setCustomDimension02
-- @param self
-- @param #char customDimension
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setCustomDimension01
-- @param self
-- @param #char customDimension
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] startSession
-- @param self
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] addBusinessEventAndAutoFetchReceipt
-- @param self
-- @param #char currency
-- @param #int amount
-- @param #char itemType
-- @param #char itemId
-- @param #char cartType
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
-- @overload self, int, char, int
-- @overload self, int, char
-- @overload self, int, char, char
-- @overload self, int, char, char, int
-- @overload self, int, char, char, char
-- @overload self, int, char, char, char, int
-- @function [parent=#GameAnalytics] addProgressionEvent
-- @param self
-- @param #int progressionStatus
-- @param #char progression01
-- @param #char progression02
-- @param #char progression03
-- @param #int score
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] addResourceEvent
-- @param self
-- @param #int flowType
-- @param #char currency
-- @param #float amount
-- @param #char itemType
-- @param #char itemId
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] addErrorEvent
-- @param self
-- @param #int severity
-- @param #char message
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setGender
-- @param self
-- @param #int gender
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] configureAvailableResourceCurrencies
-- @param self
-- @param #array_table list
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] configureUserId
-- @param self
-- @param #char userId
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setBirthYear
-- @param self
-- @param #int birthYear
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setEnabledInfoLog
-- @param self
-- @param #bool flag
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
-- @overload self, char, float
-- @overload self, char
-- @function [parent=#GameAnalytics] addDesignEvent
-- @param self
-- @param #char eventId
-- @param #float value
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] initialize
-- @param self
-- @param #char gameKey
-- @param #char gameSecret
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setEnabledVerboseLog
-- @param self
-- @param #bool flag
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] setFacebookId
-- @param self
-- @param #char facebookId
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] configureBuild
-- @param self
-- @param #char build
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] configureGameEngineVersion
-- @param self
-- @param #char gameEngineVersion
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
-- @overload self, char, int, char, char, char, char, char
-- @overload self, char, int, char, char, char, char
-- @overload self, char, int, char, char, char
-- @function [parent=#GameAnalytics] addBusinessEvent
-- @param self
-- @param #char currency
-- @param #int amount
-- @param #char itemType
-- @param #char itemId
-- @param #char cartType
-- @param #char receipt
-- @param #char signature
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] configureSdkGameEngineVersion
-- @param self
-- @param #char gameEngineSdkVersion
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

--------------------------------
--
-- @function [parent=#GameAnalytics] configureAvailableResourceItemTypes
-- @param self
-- @param #array_table list
-- @return gameanalytics::GameAnalytics#gameanalytics::GameAnalytics self (return value: gameanalytics::cc.GameAnalytics)

return nil
