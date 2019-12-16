/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController> {
    HDSessionAssertionGroup * _assertionGroup;
    HDWorkoutEventsManager * _eventsManager;
    id /* block */  _hkTestTransitionCompletionHandler;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDWorkoutSessionConfiguration * _sessionConfiguration;
    long long  _sessionServerState;
    <HDWorkoutSessionStateController> * _sessionStateController;
}

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;

- (void).cxx_destruct;
- (id)_ownerIdentifier;
- (id)_queue_assertionsPerStateForActivityType:(unsigned long long)arg1;
- (void)_queue_setupAssertionGroup;
- (id)_relaunchPayloadOptions;
- (id)_takeAlertSuppressionAssertion;
- (id)_takeBackgroundRunningAssertion;
- (id)_takeCarouselAssertion;
- (id)_takeClientKeepAliveAssertion;
- (id)_takeCoreMotionAssertion;
- (id)_takeDataCollectionAssertion;
- (id)_takeEventsCollectionAssertion;
- (id)_takeHeartRateRecoveryAssertion;
- (id)_takePlatinumAssertion;
- (id)_takePowerSavingAssertion;
- (id)_takeQuietModeAssertion;
- (void)dealloc;
- (void)hktest_setStateTransitionCompletionHandler:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
- (void)receivedWorkoutEvent:(id)arg1;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;

@end
