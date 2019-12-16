/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserSwitcherViewController : UIViewController <CKAppGrabberViewDelegate, CKBrowserSwitcherScrollPreventerDelegate, CKBrowserTransitionCoordinatorDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, _UIBackdropViewGraphicsQualityChangeDelegate> {
    bool  _allowFooterLabelUpdates;
    bool  _allowPluginLaunchNotifications;
    IMBalloonPlugin * _balloonPlugin;
    bool  _browserIsCollapsingFromFullscreen;
    bool  _browserIsLoadingCompact;
    bool  _browserViewReadyForUserInteraction;
    id  _cancelTouchesToken;
    UICollectionView * _collectionView;
    UIView * _contentView;
    UIViewController<CKBrowserViewControllerProtocol> * _currentViewController;
    IMBalloonPlugin * _currentVisiblePlugin;
    <CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate> * _delegate;
    bool  _dragging;
    bool  _expandGestureStartedOnGrabber;
    CKImmediatePanGestureRecognizer * _expandGestureTracker;
    double  _expandGestureTranslationOffset;
    bool  _expandInteractionDidMove;
    UIViewPropertyAnimator * _expandPropertyAnimator;
    UICollectionViewFlowLayout * _flowLayout;
    CKBrowserSwitcherFooterView * _footerView;
    CKAppGrabberView * _grabberView;
    NSArray * _gutterDividerViews;
    bool  _inDragAndDrop;
    bool  _inManualContentOffsetChange;
    bool  _insertedViaCollapse;
    bool  _interactiveExpandStarted;
    bool  _isDoingExpandInteraction;
    NSMutableDictionary * _livePluginIdentifierToTimestampMap;
    id /* block */  _performAfterFirstLayoutBlock;
    CKBrowserSwitcherScrollPreventer * _scrollPreventer;
    IMScheduledUpdater * _scrollUpdater;
    UIView * _shadowView;
    NSDate * _timeOfLastScrollingDecelerationEnded;
    UILongPressGestureRecognizer * _touchTracker;
    CKBrowserTransitionCoordinator * _transitionCoordinator;
    bool  _transitioningExpandedState;
    bool  _transitioningFromSnapshotToLiveView;
    bool  _viewHasLaidOutSubviews;
}

@property (nonatomic) bool allowFooterLabelUpdates;
@property (nonatomic) bool allowPluginLaunchNotifications;
@property (nonatomic, retain) IMBalloonPlugin *balloonPlugin;
@property (nonatomic) bool browserIsCollapsingFromFullscreen;
@property (nonatomic) bool browserIsLoadingCompact;
@property (getter=isBrowserReadyForUserInteraction, nonatomic) bool browserViewReadyForUserInteraction;
@property (nonatomic, retain) id cancelTouchesToken;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) UIViewController<CKBrowserViewControllerProtocol> *currentViewController;
@property (nonatomic, retain) IMBalloonPlugin *currentVisiblePlugin;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDragging, nonatomic) bool dragging;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic, readonly) CKBrowserSwitcherFooterView *footerView;
@property (nonatomic, retain) CKAppGrabberView *grabberView;
@property (nonatomic, retain) NSArray *gutterDividerViews;
@property (readonly) unsigned long long hash;
@property (getter=isInDragAndDrop, nonatomic) bool inDragAndDrop;
@property (nonatomic) bool inManualContentOffsetChange;
@property (nonatomic) bool insertedViaCollapse;
@property (nonatomic) bool interactiveExpandStarted;
@property (nonatomic, retain) NSMutableDictionary *livePluginIdentifierToTimestampMap;
@property (nonatomic, copy) id /* block */ performAfterFirstLayoutBlock;
@property (nonatomic, retain) CKBrowserSwitcherScrollPreventer *scrollPreventer;
@property (nonatomic, retain) IMScheduledUpdater *scrollUpdater;
@property (nonatomic, retain) UIView *shadowView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *timeOfLastScrollingDecelerationEnded;
@property (nonatomic, retain) UILongPressGestureRecognizer *touchTracker;
@property (nonatomic, retain) CKBrowserTransitionCoordinator *transitionCoordinator;
@property (getter=isTransitioningExpandedState, nonatomic) bool transitioningExpandedState;
@property (getter=isTransitioningFromSnapshotToLiveView, nonatomic) bool transitioningFromSnapshotToLiveView;
@property (nonatomic) bool viewHasLaidOutSubviews;

- (void).cxx_destruct;
- (void)_beginHoldingScrollUpdatesForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })_browserSize;
- (void)_cleanupOffscreenChildViewControllers;
- (void)_cleanupOffscreenChildViewControllersWithDelay;
- (bool)_currentPluginIsJellyfish;
- (void)_deferredUpdateVisibleBrowserView;
- (double)_delayWhenScrollingBeforeLoadingNewBrowser;
- (void)_endHoldingScrollUpdatesForKey:(id)arg1;
- (void)_handleRemoteViewControllerConnectionInterrupted:(id)arg1;
- (void)_handleVisibleSwitcherPluginsChanged:(id)arg1;
- (bool)_hasLandscapeGutters;
- (double)_horizontalOffsetForVisibleSwitcherPluginIndex:(unsigned long long)arg1;
- (void)_insertCurrentBrowserAndRemoveOldBrowsersIfNeeded;
- (void)_loadBrowserForBalloonPlugin:(id)arg1 datasource:(id)arg2;
- (void)_moveLiveBrowserViewsToUpdatedVisibleIndices;
- (void)_performAfterFirstLayout:(id /* block */)arg1;
- (bool)_pluginHasLiveBrowserViewInSwitcher:(id)arg1;
- (void)_removeBrowserFromViewHierarchy:(id)arg1;
- (void)_removeBrowserWithPluginIdentifierFromViewHierarchy:(id)arg1;
- (double)_rubberBandOffsetWithoutDecorationForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(bool*)arg5;
- (bool)_scrollToVisiblePluginWithIdentifier:(id)arg1;
- (void)_scrollUpdaterFired;
- (void)_snapshotCurrentViewController;
- (void)_transitionSnapshotViewToBrowserView;
- (void)_transitionSnapshotViewToBrowserViewAfterViewDidPrepareForDisplay:(id)arg1;
- (void)_updateActiveBrowserAlphaStateOnInsertForCurrentController:(id)arg1 currentView:(id)arg2;
- (void)_updateActiveBrowserTimestampForCurrentBalloonPlugin;
- (void)_updateAppNameAndPageForOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateBrowserViewPositionForPluginAndInsertIfNecessary:(id)arg1;
- (void)_updateCurrentBrowserSnapshotIfPossible;
- (void)_updateForBeginScrolling;
- (void)_updateForEndScrolling;
- (void)_updateGutterDividerViewsForCurrentVisibleBrowser;
- (void)_updatePluginFromScrollPosition;
- (void)_updateVisibleBrowserView;
- (bool)_usesHorizontalSwipeToSwitchApps;
- (unsigned long long)_visibleSwitcherPluginIndexForHorizontalOffset:(double)arg1;
- (id)activeBrowserView;
- (bool)allowFooterLabelUpdates;
- (bool)allowPluginLaunchNotifications;
- (void)animateInCompactWithCompletion:(id /* block */)arg1;
- (void)animateOutCompactWithCompletion:(id /* block */)arg1;
- (id)appGrabberForBrowserTransitionCoordinator:(id)arg1;
- (void)appGrabberViewCloseButtonTapped:(id)arg1;
- (id)appIconOverride;
- (id)appTitleOverride;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (id)balloonPlugin;
- (bool)browserIsCollapsingFromFullscreen;
- (bool)browserIsLoadingCompact;
- (void)browserTransitionCoordinator:(id)arg1 browserWillBecomeInactive:(id)arg2;
- (void)browserTransitionCoordinator:(id)arg1 didSwitchToPlugin:(id)arg2;
- (void)browserTransitionCoordinator:(id)arg1 didTransitionFromOrientation:(long long)arg2 toOrientation:(long long)arg3;
- (void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(bool)arg2 withReason:(long long)arg3;
- (void)browserTransitionCoordinator:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (struct CGSize { double x1; double x2; })browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2;
- (double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (bool)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppManager:(id)arg1;
- (void)browserTransitionCoordinatorWantsPresentationOfAppStore:(id)arg1;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedCompactFrameInWindowCoordsForBrowserTransitionCoordinator:(id)arg1;
- (id)cancelTouchesToken;
- (void)cleanupExpandAnimatorState;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)contentView;
- (id)currentSwitcherCell;
- (id)currentViewController;
- (id)currentVisiblePlugin;
- (void)dealloc;
- (id)delegate;
- (void)dismissBrowserFullscreenAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)dragManagerDidStartDrag:(id)arg1;
- (void)dragManagerWillStartDrag:(id)arg1;
- (void)expandGestureTouchMoved:(id)arg1;
- (id)flowLayout;
- (id)footerView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)grabberView;
- (id)gutterDividerViews;
- (void)handleExpandButton:(id)arg1;
- (bool)inManualContentOffsetChange;
- (id)initWithConversation:(id)arg1 sendDelegate:(id)arg2 presentingViewController:(id)arg3;
- (bool)insertedViaCollapse;
- (bool)interactiveExpandStarted;
- (bool)isBrowserReadyForUserInteraction;
- (bool)isBrowserSwitcherFirstLaunch;
- (bool)isDragging;
- (bool)isInDragAndDrop;
- (bool)isTransitioningExpandedState;
- (bool)isTransitioningFromSnapshotToLiveView;
- (void)layoutMarginsDidChange;
- (id)livePluginIdentifierToTimestampMap;
- (void)loadView;
- (id /* block */)performAfterFirstLayoutBlock;
- (void)reinsertAppGrabberViewForBrowserTransitionCoordinator:(id)arg1;
- (double)restingCollectionViewOriginY;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restingGrabberFrame;
- (void)reverseAndCleanupExpandAnimator;
- (void)saveSnapshotForCurrentBrowserViewControllerIfPossible;
- (void)scrollCollectionViewToPlugin:(id)arg1;
- (id)scrollPreventer;
- (void)scrollPreventer:(id)arg1 didReceiveTouchAtDate:(id)arg2;
- (void)scrollPreventer:(id)arg1 scrolledToOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollPreventerDidEndDecelerating:(id)arg1;
- (void)scrollPreventerDidLayoutSubviews:(id)arg1;
- (void)scrollPreventerWillBeginDragging:(id)arg1;
- (id)scrollUpdater;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAllowFooterLabelUpdates:(bool)arg1;
- (void)setAllowPluginLaunchNotifications:(bool)arg1;
- (void)setBalloonPlugin:(id)arg1;
- (void)setBrowserIsCollapsingFromFullscreen:(bool)arg1;
- (void)setBrowserIsLoadingCompact:(bool)arg1;
- (void)setBrowserViewReadyForUserInteraction:(bool)arg1;
- (void)setCancelTouchesToken:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)setCurrentVisiblePlugin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragging:(bool)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setGrabberView:(id)arg1;
- (void)setGutterDividerViews:(id)arg1;
- (void)setInDragAndDrop:(bool)arg1;
- (void)setInManualContentOffsetChange:(bool)arg1;
- (void)setInsertedViaCollapse:(bool)arg1;
- (void)setInteractiveExpandStarted:(bool)arg1;
- (void)setLivePluginIdentifierToTimestampMap:(id)arg1;
- (void)setPerformAfterFirstLayoutBlock:(id /* block */)arg1;
- (void)setScrollPreventer:(id)arg1;
- (void)setScrollUpdater:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTimeOfLastScrollingDecelerationEnded:(id)arg1;
- (void)setTouchTracker:(id)arg1;
- (void)setTransitionCoordinator:(id)arg1;
- (void)setTransitioningExpandedState:(bool)arg1;
- (void)setTransitioningFromSnapshotToLiveView:(bool)arg1;
- (void)setViewHasLaidOutSubviews:(bool)arg1;
- (void)setupPausedExpandAnimatorIfNeeded;
- (id)shadowView;
- (bool)shouldAlwaysShowAppTitle;
- (bool)shouldAutorotate;
- (void)showBrowserFullscreenForPlugin:(id)arg1 datasource:(id)arg2;
- (void)showBrowserFullscreenModalForPlugin:(id)arg1 datasource:(id)arg2;
- (void)showBrowserInSwitcherForPlugin:(id)arg1 datasource:(id)arg2 reloadData:(bool)arg3;
- (void)stopExpandAnimatorAndCleanupState;
- (unsigned long long)supportedInterfaceOrientations;
- (id)timeOfLastScrollingDecelerationEnded;
- (id)touchTracker;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transitionCoordinator;
- (void)transitionToCollapsed;
- (void)transitionToFullscreen;
- (id)transitionsPresentationViewController;
- (void)unloadRemoteViewControllers;
- (void)updateGrabberTitleAndIconForPlugin:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewHasLaidOutSubviews;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
