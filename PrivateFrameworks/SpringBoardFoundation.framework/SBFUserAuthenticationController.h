/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFUserAuthenticationController : NSObject <SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFMobileKeyBagObserver, SBFPasscodeFieldChangeObserver, SBFUserAuthenticationModelDelegate> {
    SBFAuthenticationAssertionManager * _assertionManager;
    long long  _authenticationState;
    long long  _cachedAuthFlag;
    SBFMobileKeyBagState * _cachedExtendedState;
    SBFMobileKeyBag * _keybag;
    NSString * _lastIncorrectPasscodeAttempt;
    NSDate * _lastRevokedAuthenticationDate;
    <SBFUserAuthenticationModel> * _model;
    NSHashTable * _observers;
    <SBFAuthenticationPolicy> * _policy;
    NSMutableArray * _responders;
    struct __CFRunLoopObserver { } * _runLoopObserver;
    SBFSecureDisplayCoordinator * _secureDisplayCoordinator;
    SBFAuthenticationAssertion * _transientAuthCheckingAssertion;
    PCPersistentTimer * _unblockTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inSecureDisplayMode;
@property (nonatomic, readonly) NSDate *lastRevokedAuthenticationDate;
@property (getter=_policy, setter=_setPolicy:, nonatomic, retain) <SBFAuthenticationPolicy> *policy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAsFirstResponder:(id)arg1;
- (void)_addAuthenticationAssertion:(id)arg1;
- (void)_addPrivateAuthenticationObserver:(id)arg1;
- (bool)_authenticateIfInGracePeriod;
- (bool)_boolForAuthenticationResult:(long long)arg1;
- (id)_cachedLockStateExtended;
- (void)_clearBlockedState;
- (void)_clearUnblockTimer;
- (long long)_evaluateAuthenticationAttempt:(id)arg1 outError:(id*)arg2;
- (long long)_evaluateBiometricAttempt:(id)arg1;
- (long long)_evaluatePasscodeAttempt:(id)arg1 outError:(id*)arg2;
- (void)_handleFailedAuthentication:(id)arg1 error:(id)arg2 responder:(id)arg3;
- (void)_handleInvalidAuthentication:(id)arg1 responder:(id)arg2;
- (void)_handleSuccessfulAuthentication:(id)arg1 responder:(id)arg2;
- (void)_invalidateCachedPasscodeLockState;
- (bool)_isAssertionValid:(id)arg1;
- (bool)_isInBioUnlockState;
- (bool)_isInGracePeriodState;
- (bool)_isPermanentlyBlocked;
- (bool)_isTemporarilyBlocked;
- (bool)_isUserAuthenticated;
- (void)_noteDeviceLockStateMayHaveChangedForExternalReasons;
- (void)_notifyAboutTemporaryBlockStatusChanged;
- (void)_notifyClientsOfAuthenticationResult:(long long)arg1 forRequest:(id)arg2 error:(id)arg3 withResponder:(id)arg4;
- (bool)_performNilPasscodeCheck;
- (id)_policy;
- (bool)_processAuthenticationRequest:(id)arg1 responder:(id)arg2;
- (void)_refreshModelCacheIfNeeded;
- (void)_removeAuthResponder:(id)arg1;
- (void)_removeAuthenticationAssertion:(id)arg1;
- (void)_removePrivateAuthenticationObserver:(id)arg1;
- (void)_revokeAuthenticationImmediately:(bool)arg1 forPublicReason:(id)arg2;
- (void)_scheduleUnblockTimer;
- (void)_setAuthState:(long long)arg1;
- (void)_setModel:(id)arg1;
- (void)_setPolicy:(id)arg1;
- (void)_setupPolicy:(id)arg1;
- (void)_setup_runLoopObserverIfNecessary;
- (bool)_shouldRevokeAuthenticationNow;
- (double)_timeUntilUnblockedSinceReferenceDate;
- (void)_unblockTimerFired;
- (void)_uncachePasscodeIfNecessary;
- (void)_updateAuthenticationStateAndDateForLockState:(id)arg1;
- (void)_updateAuthenticationStateForPublicReason:(id)arg1;
- (void)_updateAuthenticationStateImmediately:(bool)arg1 forPublicReason:(id)arg2;
- (void)_updateSecureModeIfNecessaryForNewAuthState;
- (void)addAsFirstResponder:(id)arg1;
- (id)createGracePeriodAssertionWithReason:(id)arg1;
- (id)createKeybagUnlockAssertionWithReason:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)deviceLockModelRequestsDeviceWipe:(id)arg1;
- (void)deviceLockStateMayHaveChangedForModel:(id)arg1;
- (bool)hasAuthenticatedAtLeastOnceSinceBoot;
- (bool)hasPasscodeSet;
- (bool)inSecureDisplayMode;
- (id)initWithAssertionManager:(id)arg1 policy:(id)arg2;
- (id)initWithAssertionManager:(id)arg1 policy:(id)arg2 keybag:(id)arg3 model:(id)arg4;
- (bool)isAuthenticated;
- (bool)isAuthenticatedCached;
- (void)keybag:(id)arg1 extendedStateDidChange:(id)arg2;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (id)lastRevokedAuthenticationDate;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)processAuthenticationRequest:(id)arg1;
- (void)processAuthenticationRequest:(id)arg1 responder:(id)arg2;
- (id)publicDescription;
- (void)removeResponder:(id)arg1;
- (void)revokeAuthenticationIfNecessaryForPublicReason:(id)arg1;
- (void)revokeAuthenticationImmediatelyForPublicReason:(id)arg1;
- (void)revokeAuthenticationImmediatelyIfNecessaryForPublicReason:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
