/* Generated by RuntimeBrowser.
 */

@protocol SBSwitcherLiveContentOverlayCoordinating <SBLayoutStateTransitionObserver>

@required

- (SBUIAnimationController *)animationControllerForTransitionRequest:(SBMainWorkspaceTransitionRequest *)arg1;
- (bool)areLiveContentOverlayUpdatesSuspended;
- (long long)containerOrientation;
- (<SBSwitcherLiveContentOverlayCoordinatorDelegate> *)delegate;
- (void)noteKeyboardFocusDidChangeToSceneID:(NSString *)arg1;
- (void)setContainerOrientation:(long long)arg1;
- (void)setDelegate:(id <SBSwitcherLiveContentOverlayCoordinatorDelegate>)arg1;
- (void)setLiveContentOverlayUpdatesSuspended:(bool)arg1;

@end
