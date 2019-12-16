/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationConnectionPreferences : NSObject {
    AFPreferences * _afPreferences;
}

@property (nonatomic, retain) AFPreferences *afPreferences;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)afPreferences;
- (void)afPreferencesChanged:(id)arg1;
- (long long)dataSharingOptInStatus;
- (bool)dictationIsEnabled;
- (id)dictationSLSEnabledLanguages;
- (bool)ignoreServerManualEndpointingThreshold;
- (id)initSingleton;
- (id)languageCode;
- (id)manualEndpointingThreshold;
- (void)setAfPreferences:(id)arg1;
- (bool)suppressDataSharingOptIn;
- (bool)suppressDictationOptIn;

@end