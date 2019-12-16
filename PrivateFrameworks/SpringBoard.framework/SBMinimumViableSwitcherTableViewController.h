/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBMinimumViableSwitcherTableViewController : UITableViewController <SBSwitcherContentViewControlling> {
    SBBestAppSuggestion * _bestAppSuggestion;
    long long  _contentOrientation;
    <SBSwitcherContentViewControllerDataSource> * _dataSource;
    <SBSwitcherContentViewControllerDelegate> * _delegate;
    bool  _liveContentRasterizationDisabled;
    SBApplicationSceneView * _temporaryAppView;
    SBApplicationSceneView * _temporarySideAppView;
}

@property (nonatomic, retain) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic, readonly) bool canInterruptActiveTransition;
@property (nonatomic) long long contentOrientation;
@property (nonatomic) <SBSwitcherContentViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) BSAnimationSettings *defaultTransitionAnimationSettings;
@property (nonatomic) <SBSwitcherContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLiveContentRasterizationDisabled, nonatomic) bool liveContentRasterizationDisabled;
@property (getter=isShowingModifierTimeline, nonatomic) bool showModifierTimeline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appLayouts;
- (void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (id)bestAppSuggestion;
- (bool)canInterruptActiveTransition;
- (long long)contentOrientation;
- (id)dataSource;
- (id)defaultTransitionAnimationSettings;
- (id)delegate;
- (id)dispatchAndReturnTetheredInsertionEventWithID:(id)arg1 phase:(unsigned long long)arg2;
- (id)dispatchAndReturnTetheredRemovalEventWithID:(id)arg1 phase:(unsigned long long)arg2;
- (id)enterAppExposeForBundleID:(id)arg1;
- (void)failMultitaskingGesturesForReason:(id)arg1;
- (id)handleGestureDidBegin:(id)arg1;
- (id)handleGestureDidEnd:(id)arg1;
- (id)handleGestureDidUpdate:(id)arg1;
- (void)handleModifierAction:(id)arg1;
- (bool)isLiveContentRasterizationDisabled;
- (bool)isShowingModifierTimeline;
- (bool)isStatusBarHiddenForAppLayout:(id)arg1;
- (bool)isUserInteractionEnabled;
- (bool)isWindowVisible;
- (double)minimumHomeScreenScale;
- (void)noteAppLayoutsDidChange;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(bool)arg3;
- (id)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(bool)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(id /* block */)arg3;
- (void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(id /* block */)arg3;
- (void)performTransitionWithContext:(id)arg1 animated:(bool)arg2 alongsideAnimationHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (id)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (void)relinquishTransientOverlayViewController:(id)arg1;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(bool)arg1;
- (void)setBestAppSuggestion:(id)arg1;
- (void)setContentOrientation:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLiveContentRasterizationDisabled:(bool)arg1;
- (void)setShowModifierTimeline:(bool)arg1;
- (bool)shouldAcceleratedHomeButtonPressBegin;
- (bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(bool)arg3;
- (bool)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (bool)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (bool)shouldRubberbandHomeGrabberView;
- (double)snapshotScaleForSceneHandle:(id)arg1;
- (double)switcherCardScale;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
