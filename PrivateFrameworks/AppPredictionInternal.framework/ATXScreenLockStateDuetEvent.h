/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXScreenLockStateDuetEvent : ATXDuetEvent {
    long long  _screenLockState;
}

@property (nonatomic, readonly) long long screenLockState;

- (id)description;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithScreenLockState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (long long)screenLockState;

@end
