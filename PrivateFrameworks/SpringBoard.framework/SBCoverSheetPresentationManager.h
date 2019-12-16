/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBCoverSheetPresentationManager : NSObject <CSCoverSheetViewControllerObserver, CSExternalAppearanceProviding, CSExternalBehaviorProviding, PTSettingsKeyObserver, SBAssistantObserver, SBCoverSheetGrabberDelegate, SBCoverSheetSecureAppEnvironmentViewControllerDelegate, SBCoverSheetSlidingViewControllerDelegate, SBFIdleTimerBehaviorProviding, SBHomeGestureParticipantDelegate, SBPearlMatchingStateProviderDelegate, SBSecureAppObserver, SBSecureAppViewControllerDelegate, SBWallpaperOrientationProvider> {
    SBDisableActiveInterfaceOrientationChangeAssertion * _activeInterfaceOrientationChangeAssertion;
    bool  _activeInterfaceOrientationLocked;
    bool  _animateIconsOnPresentationToo;
    SBAsynchronousRenderingAssertion * _asynchronousRenderingAssertion;
    bool  _centerFollowsFinger;
    SBCoverSheetSlidingViewController * _coverSheetSlidingViewController;
    SBWindow * _coverSheetWindow;
    NSMutableSet * _coverSheetWindowVisibleReasons;
    <BSInvalidatable> * _deferOrientationUpdatesAssertion;
    <SBCoverSheetPresentationDelegate> * _delegate;
    bool  _dismissingCoverSheet;
    CSCoverSheetFlyInSettings * _flyInSettings;
    bool  _hasBeenDismissedSinceBoot;
    bool  _hasBeenDismissedSinceKeybagLock;
    SBHomeGestureParticipant * _homeGestureParticipant;
    SBCoverSheetIconFlyInAnimator * _iconAnimator;
    id /* block */  _iconAnimatorCompletionBlock;
    NSObject<OS_dispatch_group> * _iconAnimatorCompletionGroup;
    bool  _iconAnimatorNeedsAnimating;
    double  _iconFlyInFriction;
    double  _iconFlyInInteractiveDampingRatioMax;
    double  _iconFlyInInteractiveDampingRatioMin;
    double  _iconFlyInInteractiveResponseMax;
    double  _iconFlyInInteractiveResponseMin;
    double  _iconFlyInTension;
    bool  _isCoverSheetHostingUnlockedEnvironmentWindows;
    <SBLockScreenEnvironment> * _lockScreenEnvironment;
    CSLockScreenSettings * _lockScreenSettings;
    BSEventQueue * _lockUnlockQueue;
    SBMainWorkspace * _mainWorkspace;
    bool  _needsFakeStatusBarUpdate;
    long long  _participantState;
    <SBPearlMatchingStateProvider> * _pearlMatchingStateProvider;
    id /* block */  _ppt_transitionBeginsCallback;
    id /* block */  _ppt_transitionEndsCallback;
    <BSInvalidatable> * _requireWallpaperAssertion;
    UIImpactFeedbackGenerator * _rubberBandFeedbackGenerator;
    SBCoverSheetSceneManager * _sceneManager;
    long long  _scrollingStrategy;
    id /* block */  _secureAppCleanupHandler;
    SBCoverSheetSecureAppEnvironmentViewController * _secureAppEnvironmentViewController;
    SBCoverSheetSlidingViewController * _secureAppSlidingViewController;
    SBDashBoardHostedAppViewController * _secureAppViewController;
    SBWindow * _secureAppWindow;
    NSMutableSet * _secureAppWindowVisibleReasons;
    bool  _shouldDisplayFakeStatusBar;
    <BSInvalidatable> * _suspendWallpaperAnimationAssertion;
    unsigned long long  _transitionOverrideOptions;
    CSCoverSheetTransitionSettings * _transitionSettings;
    unsigned long long  _transitionType;
    <SBUILockStateProvider> * _uiLockStateProvider;
}

@property (nonatomic, retain) SBDisableActiveInterfaceOrientationChangeAssertion *activeInterfaceOrientationChangeAssertion;
@property (getter=activeInterfaceOrientationLocked, nonatomic) bool activeInterfaceOrientationLocked;
@property (nonatomic) bool animateIconsOnPresentationToo;
@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, retain) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic) bool centerFollowsFinger;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *coverSheetHostedAppSceneHandle;
@property (getter=isCoverSheetHostingAnApp, nonatomic, readonly) bool coverSheetHostingAnApp;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (nonatomic, retain) SBCoverSheetSlidingViewController *coverSheetSlidingViewController;
@property (nonatomic, retain) SBWindow *coverSheetWindow;
@property (nonatomic, retain) NSMutableSet *coverSheetWindowVisibleReasons;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <BSInvalidatable> *deferOrientationUpdatesAssertion;
@property (nonatomic) <SBCoverSheetPresentationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissingCoverSheet;
@property (nonatomic, retain) CSCoverSheetFlyInSettings *flyInSettings;
@property (nonatomic) bool hasBeenDismissedSinceBoot;
@property (nonatomic) bool hasBeenDismissedSinceKeybagLock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureParticipant *homeGestureParticipant;
@property (nonatomic, retain) SBCoverSheetIconFlyInAnimator *iconAnimator;
@property (nonatomic, copy) id /* block */ iconAnimatorCompletionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *iconAnimatorCompletionGroup;
@property (nonatomic) bool iconAnimatorNeedsAnimating;
@property (nonatomic) double iconFlyInFriction;
@property (nonatomic) double iconFlyInInteractiveDampingRatioMax;
@property (nonatomic) double iconFlyInInteractiveDampingRatioMin;
@property (nonatomic) double iconFlyInInteractiveResponseMax;
@property (nonatomic) double iconFlyInInteractiveResponseMin;
@property (nonatomic) double iconFlyInTension;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) bool isCoverSheetHostingUnlockedEnvironmentWindows;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) <SBLockScreenEnvironment> *lockScreenEnvironment;
@property (nonatomic, retain) CSLockScreenSettings *lockScreenSettings;
@property (nonatomic, retain) BSEventQueue *lockUnlockQueue;
@property (nonatomic, retain) SBMainWorkspace *mainWorkspace;
@property (nonatomic) bool needsFakeStatusBarUpdate;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic) long long participantState;
@property (nonatomic) <SBPearlMatchingStateProvider> *pearlMatchingStateProvider;
@property (nonatomic, copy) id /* block */ ppt_transitionBeginsCallback;
@property (nonatomic, copy) id /* block */ ppt_transitionEndsCallback;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, retain) <BSInvalidatable> *requireWallpaperAssertion;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, retain) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator;
@property (nonatomic, retain) SBCoverSheetSceneManager *sceneManager;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, copy) id /* block */ secureAppCleanupHandler;
@property (nonatomic, retain) SBCoverSheetSecureAppEnvironmentViewController *secureAppEnvironmentViewController;
@property (nonatomic, retain) SBCoverSheetSlidingViewController *secureAppSlidingViewController;
@property (nonatomic, retain) SBDashBoardHostedAppViewController *secureAppViewController;
@property (nonatomic, retain) SBWindow *secureAppWindow;
@property (nonatomic, retain) NSMutableSet *secureAppWindowVisibleReasons;
@property (nonatomic) bool shouldDisplayFakeStatusBar;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSInvalidatable> *suspendWallpaperAnimationAssertion;
@property (nonatomic) unsigned long long transitionOverrideOptions;
@property (nonatomic) CSCoverSheetTransitionSettings *transitionSettings;
@property (nonatomic) unsigned long long transitionType;
@property (setter=setUILockStateProvider:, nonatomic, retain) <SBUILockStateProvider> *uiLockStateProvider;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_acquireAsynchronousRenderingAssertion;
- (void)_animateForProgress:(double)arg1;
- (void)_authenticationChanged:(id)arg1;
- (void)_cleanupARubberBandTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupATransition;
- (void)_cleanupDismissalTransition;
- (void)_cleanupIconAnimator;
- (void)_cleanupInterstitialTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupPresentationTransition;
- (void)_cleanupRubberBandDismissalTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupRubberBandPresentationTransitionForSlidingViewController:(id)arg1;
- (void)_clearSecureAppViewControllersIncludingWindow:(bool)arg1;
- (void)_enqueueBlock:(id /* block */)arg1 withName:(id)arg2;
- (bool)_isEffectivelyLocked;
- (void)_noteEffectiveLockStatusMayHaveChangedForUserNotification:(bool)arg1 canDismiss:(bool)arg2;
- (void)_notifyDelegateDidDismiss;
- (void)_notifyDelegateDidPresent;
- (void)_notifyDelegateRequestsUnlock;
- (void)_notifyDelegateWillDismiss;
- (void)_notifyDelegateWillPresent;
- (void)_performAfterSecureAppCleanup:(id /* block */)arg1;
- (void)_prepareCoverSheetWindowForDisplay;
- (void)_prepareForARubberBandTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForATransition;
- (void)_prepareForDismissalTransition;
- (void)_prepareForPresentationTransitionForUserGesture:(bool)arg1;
- (void)_prepareForRubberBandDismissalTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForRubberBandPresentationTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForTransitionToSecureApp;
- (void)_prepareIconAnimatorForPresenting:(bool)arg1;
- (void)_prepareInterstitialTransitionForSlidingViewController:(id)arg1;
- (void)_prepareSecureAppViewController;
- (void)_prepareSecureAppWindowForDisplay;
- (void)_relinquishAsynchronousRenderingAssertion;
- (void)_relinquishHomeGesture;
- (void)_requestHomeGestureOwnership;
- (void)_setCoverSheet:(bool)arg1 windowVisible:(bool)arg2 forReason:(id)arg3;
- (void)_setCoverSheetWindowVisible:(bool)arg1 forReason:(id)arg2;
- (void)_setOrientationUpdatesDeferred:(bool)arg1;
- (void)_setSecureAppWindowVisible:(bool)arg1 forReason:(id)arg2;
- (void)_setTransitionProgress:(double)arg1 animated:(bool)arg2 gestureActive:(bool)arg3 coverSheetProgress:(double)arg4 completion:(id /* block */)arg5;
- (void)_tellDashBoardOurAppearanceAndBehaviorChanged;
- (void)_tellDashBoardOurAppearanceChanged;
- (void)_tellDashBoardOurBehaviorChanged;
- (void)_transitionFromSecureAppToFullAppAndDismiss:(bool)arg1 preservingBanners:(bool)arg2;
- (void)_updateIconsFlyInWithSettings:(id)arg1;
- (void)_updateInterstitialTransitionForSlidingViewController:(id)arg1 withProgress:(double)arg2;
- (void)_updateProximitySensorState;
- (void)_updateVisibilityOfWindow:(id)arg1 forReasons:(id)arg2;
- (id)activeInterfaceOrientationChangeAssertion;
- (bool)activeInterfaceOrientationLocked;
- (bool)animateIconsOnPresentationToo;
- (id)appearanceIdentifier;
- (void)assistantDidDisappear:(id)arg1;
- (id)asynchronousRenderingAssertion;
- (void)authenticationStateMayHaveChangedFromSource:(int)arg1;
- (id)backgroundColor;
- (long long)backgroundStyle;
- (bool)centerFollowsFinger;
- (id)components;
- (id)coverSheetHostedAppSceneHandle;
- (id)coverSheetIdentifier;
- (id)coverSheetSlidingViewController;
- (void)coverSheetSlidingViewController:(id)arg1 animateForGestureActive:(bool)arg2 withProgress:(double)arg3 beginBlock:(id /* block */)arg4 endBlock:(id /* block */)arg5;
- (void)coverSheetSlidingViewController:(id)arg1 animationTickedWithProgress:(double)arg2 coverSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 gestureActive:(bool)arg4 forPresentationValue:(bool)arg5;
- (void)coverSheetSlidingViewController:(id)arg1 committingToEndPresented:(bool)arg2;
- (void)coverSheetSlidingViewController:(id)arg1 dismissGestureChangedWithProgress:(double)arg2;
- (void)coverSheetSlidingViewController:(id)arg1 prepareForDismissalTransitionForReversingTransition:(bool)arg2 forUserGesture:(bool)arg3;
- (void)coverSheetSlidingViewController:(id)arg1 prepareForPresentationTransitionForUserGesture:(bool)arg2;
- (void)coverSheetSlidingViewControllerCleanupDismissalTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(id)arg1;
- (bool)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(id)arg1;
- (void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(id)arg1;
- (id)coverSheetSlidingViewControllerIfLoaded;
- (void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerUserPresentGestureBegan:(id)arg1;
- (id)coverSheetViewController;
- (void)coverSheetViewControllerExternalLockProviderStateDidChange:(id)arg1;
- (id)coverSheetWindow;
- (id)coverSheetWindowVisibleReasons;
- (id)deferOrientationUpdatesAssertion;
- (id)delegate;
- (bool)dismissingCoverSheet;
- (id)flyInSettings;
- (bool)hasBeenDismissedSinceBoot;
- (bool)hasBeenDismissedSinceKeybagLock;
- (bool)hasContentUnderCoverSheetSlidingViewController:(id)arg1;
- (bool)hasFirstSwipeShowGrabberOverride;
- (id)homeGestureParticipant;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)iconAnimator;
- (id /* block */)iconAnimatorCompletionBlock;
- (id)iconAnimatorCompletionGroup;
- (bool)iconAnimatorNeedsAnimating;
- (double)iconFlyInFriction;
- (double)iconFlyInInteractiveDampingRatioMax;
- (double)iconFlyInInteractiveDampingRatioMin;
- (double)iconFlyInInteractiveResponseMax;
- (double)iconFlyInInteractiveResponseMin;
- (double)iconFlyInTension;
- (long long)idleTimerDuration;
- (long long)idleTimerMode;
- (long long)idleWarnMode;
- (id)init;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (bool)isActiveInterfaceOrientationLocked;
- (bool)isAnyGestureActivelyRecognized;
- (bool)isCoverSheetHostingAnApp;
- (bool)isCoverSheetHostingUnlockedEnvironmentWindows;
- (bool)isDismissGestureActive;
- (bool)isInSecureApp;
- (bool)isPresented;
- (bool)isTransitioning;
- (bool)isVisible;
- (id)legibilitySettings;
- (void)loadViewsIfNeeded;
- (id)lockScreenEnvironment;
- (id)lockScreenSettings;
- (id)lockUnlockQueue;
- (id)mainWorkspace;
- (bool)needsFakeStatusBarUpdate;
- (void)noteDeviceDidLock;
- (void)noteScreenDidTurnOff;
- (long long)notificationBehavior;
- (long long)participantState;
- (id)pearlMatchingStateProvider;
- (void)pearlMatchingStateProviderStateChangedForMatchFailure:(id)arg1;
- (id /* block */)ppt_transitionBeginsCallback;
- (id /* block */)ppt_transitionEndsCallback;
- (long long)proximityDetectionMode;
- (id)requireWallpaperAssertion;
- (unsigned long long)restrictedCapabilities;
- (id)rubberBandFeedbackGenerator;
- (id)sceneManager;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (long long)scrollingStrategy;
- (id /* block */)secureAppCleanupHandler;
- (id)secureAppEnvironmentViewController;
- (void)secureAppEnvironmentViewControllerOwnsHomeGestureDidChange;
- (void)secureAppOfTypeDidBegin:(unsigned long long)arg1;
- (void)secureAppOfTypeDidEnd:(unsigned long long)arg1;
- (id)secureAppSlidingViewController;
- (id)secureAppSlidingViewControllerIfLoaded;
- (id)secureAppViewController;
- (void)secureAppViewControllerDidAuthenticate:(id)arg1;
- (id)secureAppWindow;
- (id)secureAppWindowVisibleReasons;
- (void)setActiveInterfaceOrientationChangeAssertion:(id)arg1;
- (void)setActiveInterfaceOrientationLocked:(bool)arg1;
- (void)setAnimateIconsOnPresentationToo:(bool)arg1;
- (void)setAsynchronousRenderingAssertion:(id)arg1;
- (void)setCenterFollowsFinger:(bool)arg1;
- (void)setCoverSheetPresented:(bool)arg1 animated:(bool)arg2 options:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (void)setCoverSheetPresented:(bool)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)setCoverSheetSlidingViewController:(id)arg1;
- (void)setCoverSheetWindow:(id)arg1;
- (void)setCoverSheetWindowVisibleReasons:(id)arg1;
- (void)setDeferOrientationUpdatesAssertion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissingCoverSheet:(bool)arg1;
- (void)setFlyInSettings:(id)arg1;
- (void)setHasBeenDismissedSinceBoot:(bool)arg1;
- (void)setHasBeenDismissedSinceKeybagLock:(bool)arg1;
- (void)setHomeGestureParticipant:(id)arg1;
- (void)setIconAnimator:(id)arg1;
- (void)setIconAnimatorCompletionBlock:(id /* block */)arg1;
- (void)setIconAnimatorCompletionGroup:(id)arg1;
- (void)setIconAnimatorNeedsAnimating:(bool)arg1;
- (void)setIconFlyInFriction:(double)arg1;
- (void)setIconFlyInInteractiveDampingRatioMax:(double)arg1;
- (void)setIconFlyInInteractiveDampingRatioMin:(double)arg1;
- (void)setIconFlyInInteractiveResponseMax:(double)arg1;
- (void)setIconFlyInInteractiveResponseMin:(double)arg1;
- (void)setIconFlyInTension:(double)arg1;
- (void)setLockScreenEnvironment:(id)arg1;
- (void)setLockScreenSettings:(id)arg1;
- (void)setLockUnlockQueue:(id)arg1;
- (void)setMainWorkspace:(id)arg1;
- (void)setNeedsFakeStatusBarUpdate:(bool)arg1;
- (void)setParticipantState:(long long)arg1;
- (void)setPearlMatchingStateProvider:(id)arg1;
- (void)setPpt_transitionBeginsCallback:(id /* block */)arg1;
- (void)setPpt_transitionEndsCallback:(id /* block */)arg1;
- (void)setRequireWallpaperAssertion:(id)arg1;
- (void)setRubberBandFeedbackGenerator:(id)arg1;
- (void)setSceneManager:(id)arg1;
- (void)setSecureAppCleanupHandler:(id /* block */)arg1;
- (void)setSecureAppEnvironmentViewController:(id)arg1;
- (void)setSecureAppSlidingViewController:(id)arg1;
- (void)setSecureAppViewController:(id)arg1;
- (void)setSecureAppWindow:(id)arg1;
- (void)setSecureAppWindowVisibleReasons:(id)arg1;
- (void)setShouldDisplayFakeStatusBar:(bool)arg1;
- (void)setSuspendWallpaperAnimationAssertion:(id)arg1;
- (void)setTransitionOverrideOptions:(unsigned long long)arg1;
- (void)setTransitionSettings:(id)arg1;
- (void)setTransitionType:(unsigned long long)arg1;
- (void)setUILockStateProvider:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (bool)shouldDisplayFakeStatusBar;
- (id)suspendWallpaperAnimationAssertion;
- (unsigned long long)transitionOverrideOptions;
- (id)transitionSettings;
- (unsigned long long)transitionType;
- (id)uiLockStateProvider;
- (void)updateBecauseSecureAppChanged;
- (void)updateInterfaceOrientationToMatchOrientation:(long long)arg1;
- (void)updateVisibilityForGrabberVisible:(bool)arg1;
- (void)willUIUnlockWithPendingUnlockRequest:(bool)arg1;

@end
