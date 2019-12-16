/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCapabilityManager : NSObject {
    NSNumber * _overrideForAllBoolValues;
    NSMutableDictionary * _overrides;
}

@property (nonatomic, retain) NSNumber *overrideForAllBoolValues;
@property (nonatomic, retain) NSMutableDictionary *overrides;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)applicationDisplayIdentifiers;
- (id)capabilityAnswer:(id)arg1;
- (bool)capabilityBoolAnswer:(id)arg1;
- (bool)hasCapabilities:(id)arg1;
- (id)init;
- (id)overrideForAllBoolValues;
- (id)overrides;
- (id)preferencesCapabilityAnswer:(id)arg1;
- (void)resetOverrides;
- (void)setOverrideForAllBoolValues:(id)arg1;
- (void)setOverrideValue:(id)arg1 forKey:(id)arg2;
- (void)setOverrides:(id)arg1;
- (id)supportsAutoWhiteBalanceCapability;
- (id)supportsDisplayZoomCapability;
- (id)supportsInEDUModeCapability;
- (id)supportsInStoreDemoModeCapability;
- (id)supportsNightShiftCapability;
- (id)supportsPSDeveloperSettingsCapability;
- (id)supportsPSTTYCapability;
- (id)supportsRaiseToWakeCapability;

@end
