/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMShareAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol> {
    NSString * _activityType;
    NSString * _orientation;
}

@property (nonatomic, copy) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *orientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityType;
- (id)eventName;
- (id)eventPayload;
- (id)initWithActivityType:(id)arg1 isLandscape:(bool)arg2;
- (id)orientation;
- (void)sendToCoreAnalytics;
- (void)setActivityType:(id)arg1;
- (void)setOrientation:(id)arg1;

@end
