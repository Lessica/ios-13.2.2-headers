/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomePodAlarmItem : HFItem <NAIdentifiable> {
    MTAlarm * _alarm;
    NSString * _alarmIdentifier;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, copy) MTAlarm *alarm;
@property (nonatomic, copy) NSString *alarmIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)alarm;
- (id)alarmIdentifier;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMediaProfileContainer:(id)arg1 alarm:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaProfileContainer;
- (void)setAlarm:(id)arg1;
- (void)setAlarmIdentifier:(id)arg1;

@end
