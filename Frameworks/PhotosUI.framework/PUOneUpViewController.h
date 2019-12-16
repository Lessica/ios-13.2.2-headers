/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpViewController : UIViewController <PHAirPlayControllerContentProvider, PUAccessoryTileViewControllerDelegate, PUAccessoryVisibilityInteractionControllerDelegate, PUAssetActionPerformerDelegate, PUAssetDisplayDescriptorNavigator, PUBarsControllerDelegate, PUBrowsingViewModelChangeObserver, PUDoubleTapZoomControllerDelegate, PUInteractiveDismissalControllerDelegate, PUIrisImageTileViewControllerDelegate, PULivePhotoVideoOverlayTileViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate, PUOneUpAssetTransitionViewController, PUOneUpBarsControllerDelegate, PUOneUpGestureRecognizerCoordinatorDelegate, PUOneUpSuggestionsControllerDelegate, PUOneUpTilingLayoutDelegate, PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionViewController, PUPlayButtonTileViewControllerDelegate, PUPreviewActionControllerDelegate, PUTilingViewControllerTransitionEndPoint, PUTilingViewScrollDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate, PUUserTransformTileViewControllerDelegate, PUViewControllerSpecChangeObserver, PXContextualNotificationDelegate, PXDiagnosticsEnvironment, PXForcedDismissableViewController, PXGestureProviderDelegate, PXPurgeableController, PXSettingsKeyObserver, UIScrollViewDelegate> {
    PUOneUpAccessoryViewControllersManager * __accessoryViewControllersManager;
    PUAccessoryVisibilityInteractionController * __accessoryVisibilityInteractionController;
    PUBrowsingBackgroundTileViewController * __backgroundTileViewController;
    PUOneUpBarsController * __barsController;
    NSTimer * __chromeAutoHideTimer;
    PUAssetDisplayDescriptorNavigationRequest * __currentNavigationRequest;
    bool  __didPlayCurrentLivePhoto;
    PUDoubleTapZoomController * __doubleTapZoomController;
    PUOneUpGestureRecognizerCoordinator * __gestureRecognizerCoordinator;
    NSArray * __hiddenTilesController;
    unsigned long long  __initialActivity;
    PUInteractivePinchDismissalController * __interactivePinchDismissalController;
    PUInteractiveSwipeDismissalController * __interactiveSwipeDismissalController;
    bool  __isIrisPlaying;
    bool  __isPresentedForSecondScreen;
    struct CGSize { 
        double width; 
        double height; 
    }  __layoutReferenceSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __layoutSafeAreaInsets;
    PUOneUpViewController * __mainOneUpForSecondScreenBrowser;
    bool  __needsUpdateAudioState;
    bool  __needsUpdateBarsController;
    bool  __needsUpdateEditMode;
    bool  __needsUpdateLayout;
    bool  __needsUpdatePreferredContentSize;
    bool  __needsUpdatePreloadInsets;
    bool  __needsUpdateSpec;
    bool  __needsUpdateVideoPlayer;
    unsigned long long  __options;
    PUOverOneUpPresentationSession * __overOneUpPresentationSession;
    PUParallaxComputer * __parallaxComputer;
    struct CGSize { 
        double width; 
        double height; 
    }  __pendingViewTransitionSize;
    bool  __prefersCompactLayoutForSplitScreen;
    bool  __prefersHomeIndicatorHidden;
    double  __preloadInsetsBasedOffViewWidth;
    PUReviewScreenBarsModel * __reviewScreenBarsModel;
    PUReviewScreenControlBarTileViewController * __reviewScreenControlBarTileViewController;
    PUReviewScreenScrubberBarTileViewController * __reviewScreenScrubberBarTileViewController;
    PUReviewScreenTopBarTileViewController * __reviewScreenTopBarTileViewController;
    PUOneUpViewController * __secondScreenBrowser;
    bool  __shouldDisableTransitionsUntilAppeared;
    bool  __shouldShowAccessoryAfterUnlock;
    PUOneUpViewControllerSpec * __spec;
    bool  __suppressColorSettings;
    NSArray * __tileKindsToHide;
    PUTilingView * __tilingView;
    long long  __windowInterfaceOrientation;
    PUAggregateDictionaryTracer * _aggregateDictionaryTracer;
    bool  _allowsPreviewActions;
    int  _appearState;
    bool  _appearanceTransitionAnimationsDisabled;
    PUBrowsingOneUpVisibilityHelper * _browsingOneUpVisibilityHelper;
    PUBrowsingSession * _browsingSession;
    bool  _isPresentedForPreview;
    PULoadingIndicatorController * _loadingIndicatorController;
    struct { 
        bool suggestionController; 
    }  _needsUpdateFlags;
    CEKBadgeTextView * _originalBadgeView;
    PUPreviewActionController * _previewActionController;
    NSString * _scrubbingIdentifier;
    NSUserActivity * _siriActionActivity;
    PUOneUpSuggestionsController * _suggestionController;
    id /* block */  _unlockDeviceHandler;
    id /* block */  _unlockDeviceStatus;
    PXUserEventTracker * _userEventTracker;
}

@property (nonatomic, readonly) PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager;
@property (nonatomic, readonly) PUAccessoryVisibilityInteractionController *_accessoryVisibilityInteractionController;
@property (setter=_setBackgroundTileViewController:, nonatomic, retain) PUBrowsingBackgroundTileViewController *_backgroundTileViewController;
@property (nonatomic, readonly) PUOneUpBarsController *_barsController;
@property (setter=_setChromeAutoHideTimer:, nonatomic, retain) NSTimer *_chromeAutoHideTimer;
@property (setter=_setCurrentNavigationRequest:, nonatomic, retain) PUAssetDisplayDescriptorNavigationRequest *_currentNavigationRequest;
@property (setter=_setDidPlayCurrentLivePhoto:, nonatomic) bool _didPlayCurrentLivePhoto;
@property (nonatomic, readonly) PUDoubleTapZoomController *_doubleTapZoomController;
@property (nonatomic, readonly) PUOneUpGestureRecognizerCoordinator *_gestureRecognizerCoordinator;
@property (setter=_setHiddenTilesController:, nonatomic, retain) NSArray *_hiddenTilesController;
@property (setter=_setInitialActivity:, nonatomic) unsigned long long _initialActivity;
@property (nonatomic, readonly) PUInteractivePinchDismissalController *_interactivePinchDismissalController;
@property (nonatomic, readonly) PUInteractiveSwipeDismissalController *_interactiveSwipeDismissalController;
@property (setter=_setIrisPlaying:, nonatomic) bool _isIrisPlaying;
@property (nonatomic, readonly) bool _isPresentedForSecondScreen;
@property (setter=_setLayoutReferenceSize:, nonatomic) struct CGSize { double x1; double x2; } _layoutReferenceSize;
@property (setter=_setLayoutSafeAreaInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _layoutSafeAreaInsets;
@property (setter=_setMainOneUpForSecondScreenBrowser:, nonatomic) PUOneUpViewController *_mainOneUpForSecondScreenBrowser;
@property (setter=_setNeedsUpdateAudioState:, nonatomic) bool _needsUpdateAudioState;
@property (setter=_setNeedsUpdateBarsController:, nonatomic) bool _needsUpdateBarsController;
@property (setter=_setNeedsUpdateEditMode:, nonatomic) bool _needsUpdateEditMode;
@property (setter=_setNeedsUpdateLayout:, nonatomic) bool _needsUpdateLayout;
@property (setter=_setNeedsUpdatePreferredContentSize:, nonatomic) bool _needsUpdatePreferredContentSize;
@property (setter=_setNeedsUpdatePreloadInsets:, nonatomic) bool _needsUpdatePreloadInsets;
@property (setter=_setNeedsUpdateSpec:, nonatomic) bool _needsUpdateSpec;
@property (setter=_setNeedsUpdateVideoPlayer:, nonatomic) bool _needsUpdateVideoPlayer;
@property (nonatomic, readonly) unsigned long long _options;
@property (setter=_setOverOneUpPresentationSession:, nonatomic, retain) PUOverOneUpPresentationSession *_overOneUpPresentationSession;
@property (nonatomic, readonly) PUParallaxComputer *_parallaxComputer;
@property (setter=_setPendingViewTransitionSize:, nonatomic) struct CGSize { double x1; double x2; } _pendingViewTransitionSize;
@property (nonatomic, readonly) bool _prefersCompactLayoutForSplitScreen;
@property (setter=_setPrefersHomeIndicatorHidden:, nonatomic) bool _prefersHomeIndicatorHidden;
@property (setter=_setPreloadInsetsBasedOffViewWidth:, nonatomic) double _preloadInsetsBasedOffViewWidth;
@property (setter=_setReviewScreenBarsModel:, nonatomic, retain) PUReviewScreenBarsModel *_reviewScreenBarsModel;
@property (setter=_setReviewScreenControlBarTileViewController:, nonatomic, retain) PUReviewScreenControlBarTileViewController *_reviewScreenControlBarTileViewController;
@property (setter=_setReviewScreenScrubberBarTileViewController:, nonatomic, retain) PUReviewScreenScrubberBarTileViewController *_reviewScreenScrubberBarTileViewController;
@property (setter=_setReviewScreenTopBarTileViewController:, nonatomic, retain) PUReviewScreenTopBarTileViewController *_reviewScreenTopBarTileViewController;
@property (setter=_setSecondScreenBrowser:, nonatomic, retain) PUOneUpViewController *_secondScreenBrowser;
@property (setter=_setShouldDisableTransitionsUntilAppeared:, nonatomic) bool _shouldDisableTransitionsUntilAppeared;
@property (setter=_setShouldShowAccessoryAfterUnlock:, nonatomic) bool _shouldShowAccessoryAfterUnlock;
@property (nonatomic, readonly) PUOneUpViewControllerSpec *_spec;
@property (setter=_setSuppressBackdropColorSettings:, nonatomic) bool _suppressColorSettings;
@property (setter=_setTileKindsToHide:, nonatomic, retain) NSArray *_tileKindsToHide;
@property (setter=_setTilingView:, nonatomic, retain) PUTilingView *_tilingView;
@property (setter=_setWindowInterfaceOrientation:, nonatomic) long long _windowInterfaceOrientation;
@property (nonatomic, readonly) PUAggregateDictionaryTracer *aggregateDictionaryTracer;
@property (setter=setAllowsPreviewActions:, nonatomic) bool allowsPreviewActions;
@property (nonatomic) int appearState;
@property (nonatomic) bool appearanceTransitionAnimationsDisabled;
@property (nonatomic, retain) PUBrowsingOneUpVisibilityHelper *browsingOneUpVisibilityHelper;
@property (nonatomic, readonly) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setPresentedForPreview:, nonatomic) bool isPresentedForPreview;
@property (nonatomic, readonly) PULoadingIndicatorController *loadingIndicatorController;
@property (nonatomic, retain) CEKBadgeTextView *originalBadgeView;
@property (nonatomic, readonly) PUOneUpBarsController *ppt_barsController;
@property (nonatomic, readonly) UIViewController *ppt_currentAccessoryViewController;
@property (nonatomic, readonly) UIScrollView *ppt_mainScrollView;
@property (nonatomic, readonly) PUOverOneUpPresentationSession *ppt_overOneUpPresentationSession;
@property (nonatomic, readonly) PUPreviewActionController *previewActionController;
@property (nonatomic, retain) NSUserActivity *siriActionActivity;
@property (nonatomic, readonly) PUOneUpSuggestionsController *suggestionController;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unlockDeviceHandler;
@property (nonatomic, copy) id /* block */ unlockDeviceStatus;
@property (nonatomic, readonly) PXUserEventTracker *userEventTracker;

- (void).cxx_destruct;
- (void)_abandonTileController:(id)arg1;
- (long long)_accessoryContentKindForCurrentAsset;
- (id)_accessoryViewControllersManager;
- (id)_accessoryVisibilityInteractionController;
- (void)_arrowKey:(id)arg1;
- (id)_assetReferenceAtIndexPath:(id)arg1 layout:(id)arg2;
- (id)_assetViewModelAtIndexPath:(id)arg1 layout:(id)arg2;
- (id)_backgroundTileViewController;
- (id)_barsController;
- (void)_beginShowingOriginal;
- (void)_browsingVideoPlayerDidPlayToEndTime:(id)arg1;
- (bool)_canAdvertiseKeyCommands;
- (bool)_canAttemptNavigationToAssetDisplayDescriptor:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_cancelTimedChromeAutoHide;
- (id)_chromeAutoHideTimer;
- (void)_chromeAutoHideTimerFired:(id)arg1;
- (void)_configureAdoptedTileController:(id)arg1;
- (id)_contentTileControllerForAssetReference:(id)arg1;
- (id)_currentAccessoryViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_currentAssetRect;
- (id)_currentAssetViewModel;
- (id)_currentContentTileController;
- (id)_currentNavigationRequest;
- (id)_currentPlaceholderSnapshotViewForTileController:(id)arg1;
- (void)_didEndTransition;
- (bool)_didPlayCurrentLivePhoto;
- (id)_doubleTapZoomController;
- (void)_endShowingOriginal;
- (void)_fixAssetViewModelTileTransformIfNecessary:(id)arg1;
- (id)_gestureRecognizerCoordinator;
- (void)_handleTouchGesture:(id)arg1;
- (id)_hiddenTilesController;
- (void)_hideChromeOnPlayButtonTapWithItemIsNowPlaying:(bool)arg1 buttonIsOverlayed:(bool)arg2;
- (void)_hideOverlays;
- (unsigned long long)_initialActivity;
- (id)_interactivePinchDismissalController;
- (id)_interactiveSwipeDismissalController;
- (void)_invalidateAudioState;
- (void)_invalidateBarsControllers;
- (void)_invalidateEditMode;
- (void)_invalidateLayout;
- (void)_invalidatePreferredContentSize;
- (void)_invalidatePreloadInsets;
- (void)_invalidateSpec;
- (void)_invalidateSuggestionController;
- (void)_invalidateVideoPlayer;
- (bool)_isAccessoryVisible;
- (bool)_isDrivingScrubbing;
- (bool)_isIrisPlaying;
- (bool)_isLayoutAffectedBySpecChange:(id)arg1;
- (bool)_isLocationFromProviderInAccessoryArea:(id)arg1;
- (bool)_isLocationFromProviderOverControl:(id)arg1;
- (bool)_isPresentedForSecondScreen;
- (bool)_isSecondScreenBrowserVisible;
- (struct CGSize { double x1; double x2; })_layoutReferenceSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_layoutSafeAreaInsets;
- (id)_leadingContentTileController;
- (id)_mainOneUpForSecondScreenBrowser;
- (bool)_needsUpdate;
- (bool)_needsUpdateAudioState;
- (bool)_needsUpdateBarsController;
- (bool)_needsUpdateEditMode;
- (bool)_needsUpdateLayout;
- (bool)_needsUpdatePreferredContentSize;
- (bool)_needsUpdatePreloadInsets;
- (bool)_needsUpdateSpec;
- (bool)_needsUpdateVideoPlayer;
- (id)_newOneUpLayout;
- (void)_notifyTileIsReadyWithTimeOut:(double)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)_options;
- (id)_overOneUpPresentationSession;
- (id)_parallaxComputer;
- (struct CGSize { double x1; double x2; })_pendingViewTransitionSize;
- (void)_performNavigationToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_prefersCompactLayoutForSplitScreen;
- (bool)_prefersHomeIndicatorHidden;
- (double)_preloadInsetsBasedOffViewWidth;
- (void)_presentAlertForUnplayableAssetReference:(id)arg1;
- (void)_presentDetailsIndicator;
- (bool)_requireUnlockedDeviceForAccessoryView;
- (id)_reviewScreenBarsModel;
- (id)_reviewScreenControlBarTileViewController;
- (id)_reviewScreenScrubberBarTileViewController;
- (id)_reviewScreenTopBarTileViewController;
- (void)_scheduleTimedChromeAutoHide;
- (id)_secondScreenBrowser;
- (void)_setAccessoryVisible:(bool)arg1;
- (void)_setBackgroundTileViewController:(id)arg1;
- (void)_setChromeAutoHideTimer:(id)arg1;
- (void)_setCurrentNavigationRequest:(id)arg1;
- (void)_setDidPlayCurrentLivePhoto:(bool)arg1;
- (void)_setHiddenTilesController:(id)arg1;
- (void)_setInitialActivity:(unsigned long long)arg1;
- (void)_setIrisPlaying:(bool)arg1;
- (void)_setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setLayoutSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setMainOneUpForSecondScreenBrowser:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateAudioState:(bool)arg1;
- (void)_setNeedsUpdateBarsController:(bool)arg1;
- (void)_setNeedsUpdateEditMode:(bool)arg1;
- (void)_setNeedsUpdateLayout:(bool)arg1;
- (void)_setNeedsUpdatePreferredContentSize:(bool)arg1;
- (void)_setNeedsUpdatePreloadInsets:(bool)arg1;
- (void)_setNeedsUpdateSpec:(bool)arg1;
- (void)_setNeedsUpdateVideoPlayer:(bool)arg1;
- (void)_setOverOneUpPresentationSession:(id)arg1;
- (void)_setPendingViewTransitionSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setPrefersHomeIndicatorHidden:(bool)arg1;
- (void)_setPreloadInsetsBasedOffViewWidth:(double)arg1;
- (void)_setReviewScreenBarsModel:(id)arg1;
- (void)_setReviewScreenControlBarTileViewController:(id)arg1;
- (void)_setReviewScreenScrubberBarTileViewController:(id)arg1;
- (void)_setReviewScreenTopBarTileViewController:(id)arg1;
- (void)_setSecondScreenBrowser:(id)arg1;
- (void)_setShouldDisableTransitionsUntilAppeared:(bool)arg1;
- (void)_setShouldShowAccessoryAfterUnlock:(bool)arg1;
- (void)_setSuppressBackdropColorSettings:(bool)arg1;
- (void)_setTileKindsToHide:(id)arg1;
- (void)_setTilingView:(id)arg1;
- (void)_setWindowInterfaceOrientation:(long long)arg1;
- (bool)_shouldDisableTransitionsUntilAppeared;
- (bool)_shouldMakeChromeVisibleWhenVideoPlayerPlaysToEndTime:(id)arg1;
- (bool)_shouldShowAccessoryAfterUnlock;
- (bool)_shouldUseGlobalAccessoryViewVisibility;
- (id)_spec;
- (bool)_suppressColorSettings;
- (id)_tileKindsToHide;
- (id)_tilingView;
- (void)_toggleAccessoryVisibility;
- (void)_toggleCommentsVisibility;
- (void)_toggleDetailsVisibility;
- (id)_trailingContentTileController;
- (void)_unhideOverlays;
- (void)_updateAudioStateIfNeeded;
- (void)_updateBackgroundTileViewController;
- (void)_updateBarsControllerIfNeeded;
- (void)_updateEditModeIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayout:(id)arg1;
- (void)_updateLayoutIfNeeded;
- (void)_updateLayoutReferenceSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)_updatePrefersHomeIndicatorHidden;
- (void)_updatePreloadInsetsIfNeeded;
- (void)_updateReviewScreenBars;
- (void)_updateSpecIfNeeded;
- (void)_updateSuggestionControllerIfNeeded;
- (void)_updateVideoPlayerIfNeeded;
- (void)_updateViewModelWithCurrentScrollPosition;
- (void)_updateWindowInterfaceOrientation;
- (id)_videoPlayerAtIndexPath:(id)arg1 layout:(id)arg2;
- (void)_willBeginTransition;
- (long long)_windowInterfaceOrientation;
- (id)accessoryTileViewControllerAccessoryViewController:(id)arg1;
- (id)accessoryTileViewControllerHostViewController:(id)arg1;
- (id)accessoryTileViewControllerViewHostingGestureRecognizers:(id)arg1;
- (bool)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(id)arg1;
- (bool)accessoryVisibilityInteractionController:(id)arg1 canBeginAtLocationFromProvider:(id)arg2;
- (bool)accessoryVisibilityInteractionController:(id)arg1 isLocationFromProviderInAccessoryContent:(id)arg2;
- (void)accessoryVisibilityInteractionController:(id)arg1 setAccessoryVisible:(bool)arg2 changeReason:(long long)arg3;
- (void)accessoryVisibilityInteractionControllerDidEnd:(id)arg1;
- (id)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(id)arg1;
- (id)aggregateDictionaryTracer;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (bool)allowsPreviewActions;
- (double)alphaForReviewScreenBarsInLayout:(id)arg1;
- (int)appearState;
- (bool)appearanceTransitionAnimationsDisabled;
- (bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)barsController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (void)barsControllerContentGuideInsetsDidChange:(id)arg1;
- (id)barsControllerViewController:(id)arg1;
- (id)barsControllerViewHostingGestureRecognizers:(id)arg1;
- (id)browsingOneUpVisibilityHelper;
- (id)browsingSession;
- (bool)canBecomeFirstResponder;
- (id)contentScrollView;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2;
- (bool)contextualNotification:(id)arg1 shouldPassthroughPoint:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (void)contextualNotificationWasTapped:(id)arg1;
- (id)createAssetTransitionInfo;
- (void)createPreviewActionControllerForManagerIfNeeded:(id)arg1 withPresentingViewController:(id)arg2;
- (void)dealloc;
- (bool)doubleTapZoomController:(id)arg1 canDoubleTapBeginAtLocationFromProvider:(id)arg2;
- (id)doubleTapZoomController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)doubleTapZoomControllerTilingView:(id)arg1;
- (id)doubleTapZoomControllerViewHostingGestureRecognizers:(id)arg1;
- (void)gestureProvider:(id)arg1 didTriggerEvent:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gestureProviderCurrentAssetRect:(id)arg1;
- (id)initWithBrowsingSession:(id)arg1;
- (id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2 initialActivity:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)interactiveDismissalController:(id)arg1 canBeginDismissalAtLocationFromProvider:(id)arg2;
- (id)interactiveDismissalControllerDesignatedTileController:(id)arg1;
- (id)interactiveDismissalControllerTilingView:(id)arg1;
- (id)interactiveDismissalControllerViewController:(id)arg1;
- (id)interactiveDismissalControllerViewHostingGestureRecognizers:(id)arg1;
- (id)irisImageTileViewController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (void)irisImageTileViewControllerDidBeginHinting:(id)arg1;
- (void)irisImageTileViewControllerDidBeginPlaying:(id)arg1;
- (void)irisImageTileViewControllerDidEndPlaying:(id)arg1;
- (void)irisImageTileViewControllerDidEndVitality:(id)arg1;
- (id)irisImageTileViewControllerViewHostingGestureRecognizers:(id)arg1;
- (bool)isPresentedForPreview;
- (id)keyCommands;
- (struct CGPoint { double x1; double x2; })layout:(id)arg1 accessoryOffsetForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 badgeSizeForItemAtIndexPath:(id)arg2 contentWidth:(double)arg3;
- (struct CGPoint { double x1; double x2; })layout:(id)arg1 contentOffsetForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 disableInitialZoomToFillForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 loadingIndicatorSizeForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 minimumVisibleContentHeightForItemAtIndexPath:(id)arg2;
- (id)layout:(id)arg1 modelTileTransformForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldMoveProgressIndicatorForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldScaleToFitSafeInsetsForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowAccessoryForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowPlayButtonForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(id)arg2;
- (bool)layoutShouldShowReviewScreenScrubberBar:(id)arg1;
- (bool)livePhotoVideoPlaybackTileViewControllerCanBeginPlaying:(id)arg1;
- (id)livePhotoVideoPlaybackTileViewControllerCurrentImage:(id)arg1;
- (void)livePhotoVideoPlaybackTileViewControllerDidEndPlaying:(id)arg1;
- (id)livePhotoVideoPlaybackTileViewControllerDisplayTileTransform:(id)arg1;
- (void)livePhotoVideoPlaybackTileViewControllerWillBeginPlaying:(id)arg1;
- (void)loadView;
- (id)loadingIndicatorController;
- (void)navigateToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)oneUpAccessoryViewControllersManager:(id)arg1 preventRevealInMomentActionForAssetReference:(id)arg2;
- (bool)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2 options:(unsigned long long)arg3;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (bool)oneUpBarsController:(id)arg1 canShowCommentsForAsset:(id)arg2;
- (bool)oneUpBarsController:(id)arg1 canShowOriginalForAsset:(id)arg2;
- (bool)oneUpBarsController:(id)arg1 canViewInLibraryForAsset:(id)arg2;
- (void)oneUpBarsController:(id)arg1 didTapPlayPauseButton:(bool)arg2;
- (bool)oneUpBarsController:(id)arg1 isAccessoryAvailableForAssetReference:(id)arg2;
- (bool)oneUpBarsController:(id)arg1 shouldEnableShowOriginalForAsset:(id)arg2;
- (bool)oneUpBarsController:(id)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)arg2;
- (bool)oneUpBarsController:(id)arg1 shouldTapBeginAtLocationFromProvider:(id)arg2;
- (void)oneUpBarsController:(id)arg1 willExecuteActionPerformer:(id)arg2;
- (void)oneUpBarsControllerDidBeginShowingOriginal:(id)arg1;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)arg1;
- (void)oneUpBarsControllerDidEndShowingOriginal:(id)arg1;
- (void)oneUpBarsControllerDidTapTitle:(id)arg1;
- (void)oneUpBarsControllerToggleCommentsVisibility:(id)arg1;
- (void)oneUpBarsControllerToggleDetailsVisibility:(id)arg1;
- (bool)oneUpGestureRecgonizerCoordinator:(id)arg1 shouldAllowIrisGestureAtLocationFromProvider:(id)arg2;
- (id)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(id)arg1;
- (bool)oneUpSuggestionsController:(id)arg1 canShowSuggestion:(id)arg2 forAssetReference:(id)arg3;
- (void)oneUpSuggestionsController:(id)arg1 didSelectSuggestion:(id)arg2 forAssetReference:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oneUpSuggestionsController:(id)arg1 frameForAssetReference:(id)arg2 inCoordinateSpace:(id)arg3;
- (id)originalBadgeView;
- (void)overOneUpPresentationSession:(id)arg1 didPresent:(id)arg2;
- (id)overOneUpPresentationSessionBrowserViewModel:(id)arg1;
- (id)overOneUpPresentationSessionCreateIfNeeded:(bool)arg1;
- (id)overOneUpPresentationSessionCurrentTileController:(id)arg1;
- (void)overOneUpPresentationSessionDidFinish:(id)arg1;
- (bool)overOneUpPresentationSessionPresentingViewControllerIsReady:(id)arg1;
- (id)overOneUpPresentationSessionTilingView:(id)arg1;
- (id)overOneUpPresentationSessionViewController:(id)arg1;
- (double)playButtonTileViewController:(id)arg1 delayForButtonAnimation:(bool)arg2;
- (void)playButtonTileViewControllerDidTapButton:(id)arg1;
- (bool)playButtonTileViewControllerShouldShowPauseButton:(id)arg1;
- (id)ppt_barsController;
- (id)ppt_currentAccessoryViewController;
- (id)ppt_mainScrollView;
- (void)ppt_notifyWhenFullQualityIsDisplayedWithTimeout:(double)arg1 handler:(id /* block */)arg2;
- (id)ppt_overOneUpPresentationSession;
- (void)ppt_playCurrentLivePhotoWithCompletionHandler:(id /* block */)arg1;
- (void)ppt_toggleAccessoryView;
- (long long)preferredAnimationForContextualNotification:(id)arg1;
- (id)preferredContainerViewForContextualNotification:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersHomeIndicatorAutoHidden;
- (bool)prefersStatusBarHidden;
- (bool)prepareForDismissingForced:(bool)arg1;
- (id)previewActionController;
- (bool)previewActionControllerPreventRevealInMomentAction:(id)arg1;
- (id)pu_debugCurrentAsset;
- (id)pu_debugCurrentViewModel;
- (long long)pu_preferredBarStyle;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)purgeIfPossible;
- (double)px_HDRFocus;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (double)px_imageModulationIntensity;
- (bool)px_isSnapBackDestination;
- (id)px_snapBackHistorySubtitle;
- (id)px_snapBackHistoryTitle;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAllowsPreviewActions:(bool)arg1;
- (void)setAppearState:(int)arg1;
- (void)setAppearanceTransitionAnimationsDisabled:(bool)arg1;
- (void)setBrowsingOneUpVisibilityHelper:(id)arg1;
- (void)setOriginalBadgeView:(id)arg1;
- (void)setPresentedForPreview:(bool)arg1;
- (void)setSiriActionActivity:(id)arg1;
- (void)setUnlockDeviceHandler:(id /* block */)arg1;
- (void)setUnlockDeviceStatus:(id /* block */)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)siriActionActivity;
- (id)suggestionController;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (struct CGPoint { double x1; double x2; })tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2;
- (id)tilingView:(id)arg1 scrollInfoWithLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg2 withLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (bool)tilingViewCanBypass20069585Check:(id)arg1;
- (void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
- (void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(bool)arg4 animationSetupCompletionHandler:(id /* block */)arg5;
- (id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id /* block */)unlockDeviceHandler;
- (id /* block */)unlockDeviceStatus;
- (id)userEventTracker;
- (void)userTransformTileViewController:(id)arg1 didChangeIsUserInteracting:(bool)arg2;
- (void)userTransformTileViewController:(id)arg1 didChangeModelTileTransform:(id)arg2;
- (bool)userTransformTileViewController:(id)arg1 shouldReceiveTouchAtLocationFromProvider:(id)arg2;
- (id)viewControllerForOneUpSuggestionsController:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg1;

@end
