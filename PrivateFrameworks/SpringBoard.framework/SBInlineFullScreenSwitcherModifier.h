/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBInlineFullScreenSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _fullScreenAppLayout;
}

- (void).cxx_destruct;
- (bool)_isActiveAppLayoutAtIndex:(unsigned long long)arg1;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (id)appLayoutToScrollToBeforeTransitioning;
- (id)appLayoutsForInsertionOrRemoval;
- (double)backdropBlurProgress;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })cardCornerRadiiForIndex:(unsigned long long)arg1;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)containerStatusBarAnimationDuration;
- (double)contentViewScale;
- (id)cornerRadiusSettingsForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)dimmingAlpha;
- (bool)dimmingViewBlocksTouches;
- (double)dockProgress;
- (long long)dockUpdateMode;
- (double)dockWindowLevel;
- (unsigned long long)dockWindowLevelPriority;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fullSizeSnapshotsRange;
- (double)homeScreenAlpha;
- (double)homeScreenScale;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (id)initWithActiveAppLayout:(id)arg1;
- (unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1;
- (bool)isContainerStatusBarVisible;
- (bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (bool)isHomeGrabberVisible;
- (bool)isHomeScreenContentRequired;
- (bool)isIndexKillable:(unsigned long long)arg1;
- (bool)isIndexVisible:(unsigned long long)arg1;
- (bool)isScrollEnabled;
- (bool)isSwitcherWindowUserInteractionEnabled;
- (bool)isSwitcherWindowVisible;
- (bool)isTetheredScrollingEnabled;
- (bool)isWallpaperRequiredForSwitcher;
- (bool)itemContainersAllowContentViewTouches;
- (bool)itemContainersUseBrightMaterial;
- (long long)keyboardSuppressionMode;
- (id)layoutSettings;
- (id)layoutSettingsForIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)opacitySettings;
- (double)plusButtonAlpha;
- (long long)plusButtonStyle;
- (id)positionSettingsForIndex:(unsigned long long)arg1;
- (long long)preferredSnapshotOrientation;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (long long)sceneDeactivationReason;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (bool)shouldAcceleratedHomeButtonPressBegin;
- (bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (bool)shouldConfigureInAppDockHiddenAssertion;
- (bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (bool)shouldPerformCrossfadeForReduceMotion;
- (bool)shouldPerformRotationAnimationForOrientationChange;
- (bool)shouldRubberbandHomeGrabberView;
- (bool)shouldTetherTransitionCompletion;
- (bool)shouldTruncateAnimationsUponTransitionCompletion;
- (bool)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (long long)wallpaperStyle;
- (bool)wantsAsynchronousSurfaceRetentionAssertion;
- (bool)wantsDockBehaviorAssertion;
- (bool)wantsDockWindowLevelAssertion;
- (bool)wantsMinificationFilter;
- (bool)wantsResignActiveAssertion;

@end
