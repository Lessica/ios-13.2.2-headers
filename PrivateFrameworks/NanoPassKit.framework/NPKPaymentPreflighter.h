/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentPreflighter : NSObject {
    bool  _authRandomSetIfNecessary;
    bool  _checkedCompanioniCloudStatus;
    bool  _checkedWatchPasscodeAndUnlockedStatus;
    bool  _checkedWatchiCloudStatus;
    bool  _checkedWristDetectionStatus;
    NPKCompanionAgentConnection * _companionAgentConnection;
    bool  _needsCompanioniCloudAccount;
    bool  _needsPasscode;
    bool  _needsUnlock;
    bool  _needsWatchiCloudAccount;
    bool  _needsWristDetection;
    PUConnection * _passcodeConnection;
    id /* block */  _preflightCompletionHandler;
    bool  _preflighting;
    bool  _spaceAvailableOnSecureElement;
    NSSManager * _systemSettingsManager;
    bool  _watchConnected;
    NSDate * _watchPasscodeAndUnlockedQueryDate;
    PKPaymentWebService * _webService;
}

@property (nonatomic) bool authRandomSetIfNecessary;
@property (nonatomic) bool checkedCompanioniCloudStatus;
@property (nonatomic) bool checkedWatchPasscodeAndUnlockedStatus;
@property (nonatomic) bool checkedWatchiCloudStatus;
@property (nonatomic) bool checkedWristDetectionStatus;
@property (nonatomic, retain) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic) bool needsCompanioniCloudAccount;
@property (nonatomic) bool needsPasscode;
@property (nonatomic) bool needsUnlock;
@property (nonatomic) bool needsWatchiCloudAccount;
@property (nonatomic) bool needsWristDetection;
@property (nonatomic, retain) PUConnection *passcodeConnection;
@property (nonatomic, copy) id /* block */ preflightCompletionHandler;
@property (getter=isPreflighting, nonatomic) bool preflighting;
@property (nonatomic) bool spaceAvailableOnSecureElement;
@property (nonatomic, retain) NSSManager *systemSettingsManager;
@property (nonatomic) bool watchConnected;
@property (nonatomic, retain) NSDate *watchPasscodeAndUnlockedQueryDate;
@property (nonatomic, retain) PKPaymentWebService *webService;

+ (bool)watchConnected;

- (void).cxx_destruct;
- (void)_checkCompanioniCloudAccount;
- (void)_checkPasscodeEnabledAndUnlockedState;
- (void)_checkSpaceAvailableOnSecureElement;
- (void)_checkWatchConnected;
- (void)_checkWatchiCloudAccount;
- (void)_checkWristDetectEnabledState;
- (bool)_currentlyPairing;
- (id)_errorForCompanionAccountNeeded;
- (id)_errorForConnectionIssue;
- (id)_errorForGenericIssue;
- (id)_errorForGizmoAccountNeeded;
- (id)_errorForPasscodeNeeded;
- (id)_errorForUnlockNeeded;
- (id)_errorForWristDetectNeeded;
- (void)_finishPresentingSetupControllerIfReadyWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_setAuthRandomIfNecessary;
- (void)addCardPreflightWithCompletion:(id /* block */)arg1;
- (bool)authRandomSetIfNecessary;
- (bool)checkedCompanioniCloudStatus;
- (bool)checkedWatchPasscodeAndUnlockedStatus;
- (bool)checkedWatchiCloudStatus;
- (bool)checkedWristDetectionStatus;
- (id)companionAgentConnection;
- (id)initWithWebService:(id)arg1 companionAgentConnection:(id)arg2;
- (bool)isPreflighting;
- (bool)needsCompanioniCloudAccount;
- (bool)needsPasscode;
- (bool)needsUnlock;
- (bool)needsWatchiCloudAccount;
- (bool)needsWristDetection;
- (id)passcodeConnection;
- (id /* block */)preflightCompletionHandler;
- (void)setAuthRandomSetIfNecessary:(bool)arg1;
- (void)setCheckedCompanioniCloudStatus:(bool)arg1;
- (void)setCheckedWatchPasscodeAndUnlockedStatus:(bool)arg1;
- (void)setCheckedWatchiCloudStatus:(bool)arg1;
- (void)setCheckedWristDetectionStatus:(bool)arg1;
- (void)setCompanionAgentConnection:(id)arg1;
- (void)setNeedsCompanioniCloudAccount:(bool)arg1;
- (void)setNeedsPasscode:(bool)arg1;
- (void)setNeedsUnlock:(bool)arg1;
- (void)setNeedsWatchiCloudAccount:(bool)arg1;
- (void)setNeedsWristDetection:(bool)arg1;
- (void)setPasscodeConnection:(id)arg1;
- (void)setPreflightCompletionHandler:(id /* block */)arg1;
- (void)setPreflighting:(bool)arg1;
- (void)setSpaceAvailableOnSecureElement:(bool)arg1;
- (void)setSystemSettingsManager:(id)arg1;
- (void)setWatchConnected:(bool)arg1;
- (void)setWatchPasscodeAndUnlockedQueryDate:(id)arg1;
- (void)setWebService:(id)arg1;
- (bool)spaceAvailableOnSecureElement;
- (id)systemSettingsManager;
- (void)transferToCompanionPreflightWithCompletion:(id /* block */)arg1;
- (bool)watchConnected;
- (id)watchPasscodeAndUnlockedQueryDate;
- (id)webService;

@end
