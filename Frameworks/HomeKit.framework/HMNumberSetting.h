/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMNumberSetting : HMSetting <HFStateDumpBuildable> {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *stepValue;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)internalValue;
- (bool)isKindOfClass:(Class)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (id)valueForUpdate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
