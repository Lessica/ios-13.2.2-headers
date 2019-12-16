/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutSessionConfiguration : NSObject {
    HDHealthStoreClient * _client;
    NSString * _clientApplicationIdentifier;
    NSString * _clientProcessBundleIdentifier;
    bool  _requiresCoreLocationAssertion;
    NSUUID * _sessionIdentifier;
    bool  _supportsAppRelaunchForRecovery;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (nonatomic, readonly, copy) NSString *clientApplicationIdentifier;
@property (nonatomic, readonly, copy) NSString *clientProcessBundleIdentifier;
@property (nonatomic, readonly) bool requiresCoreLocationAssertion;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) bool supportsAppRelaunchForRecovery;
@property (nonatomic, readonly, copy) HKWorkoutConfiguration *workoutConfiguration;

- (void).cxx_destruct;
- (id)client;
- (id)clientApplicationIdentifier;
- (id)clientProcessBundleIdentifier;
- (id)initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 client:(id)arg3 processBundleIdentifier:(id)arg4 applicationIdentifier:(id)arg5 requiresCoreLocationAssertion:(bool)arg6 supportsAppRelaunchForRecovery:(bool)arg7;
- (bool)requiresCoreLocationAssertion;
- (id)sessionIdentifier;
- (bool)supportsAppRelaunchForRecovery;
- (id)workoutConfiguration;

@end
