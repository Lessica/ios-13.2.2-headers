/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBElasticVolumeViewController : UIViewController <PTSettingsKeyObserver, SBHUDViewControlling, UIGestureRecognizerDelegate> {
    int  _anyCallActive;
    unsigned long long  _audioRouteCount;
    CCUICAPackageDescription * _audioRoutePackage;
    NSString * _audioRouteString;
    long long  _audioRouteType;
    int  _axis;
    <SBElasticAudioDataSource> * _dataSource;
    UILabel * _debugAutoDismissLabel;
    UISwitch * _debugAutoDismissalSwitch;
    NSArray * _debugAutolayoutConstraints;
    UIView * _debugContainerView;
    UIButton * _debugDumpButton;
    UISlider * _debugHeightSlider;
    UILabel * _debugLabel;
    UILabel * _debugLockStateLabel;
    UISwitch * _debugLockStateSwitch;
    UIButton * _debugNextAudioRouteButton;
    unsigned long long  _debugOverrideAudioRouteCount;
    long long  _debugOverrideAudioRouteType;
    UISlider * _debugPortraitYOriginSlider;
    UIButton * _debugResetAudioRouteButton;
    UISegmentedControl * _debugStateSegmentedControl;
    UISlider * _debugWidthSlider;
    <SBElasticAudioVolumeViewControllerDelegate> * _delegate;
    UIView * _dimmingView;
    NSTimer * _dismissalTimer;
    _UIEdgeFeedbackGenerator * _edgeFeedbackGenerator;
    _UIFeedback * _edgeVolumeFeedback;
    _UIFeedbackEngine * _edgeVolumeFeedbackEngine;
    NSString * _highVolumeString;
    bool  _initialTransitionCompleted;
    bool  _isDebugging;
    bool  _isDeflating;
    bool  _isRotating;
    SBFTouchPassThroughView * _labelContainerView;
    _UILegibilityLabel * _leadingLabel;
    bool  _lockState;
    SBUIViewFloatSpringProperty * _minMaxScaleXSpring;
    SBUIViewFloatSpringProperty * _minMaxScaleYSpring;
    SBUIViewFloatSpringProperty * _positionXSpring;
    SBUIViewFloatSpringProperty * _positionYSpring;
    long long  _previousState;
    bool  _reduceMotionEnabled;
    NSMutableArray * _runningListOfVolumesUpdates;
    SBUIViewFloatSpringProperty * _scaleSpring;
    SBVolumeHUDSettings * _settings;
    UILongPressGestureRecognizer * _shortLongPressGestureRecognizer;
    NSMutableOrderedSet * _sliderApplyValueQueue;
    NSTimer * _sliderApplyValueTimer;
    SBFTouchPassThroughView * _sliderContainerView;
    unsigned long long  _sliderTrackingCount;
    SBElasticSliderView * _sliderView;
    UIPanGestureRecognizer * _sliderViewPanGestureRecognizer;
    SBElasticSliderMaterialWrapperView * _sliderWrapperView;
    bool  _startingDismissal;
    double  _startingValue;
    long long  _state;
    unsigned long long  _tickFeedbackIntervalCycleCounter;
    _UIFeedback * _tickVolumeFeedback;
    _UIFeedbackEngine * _tickVolumeFeedbackEngine;
    UIView * _touchTrackingView;
    _UILegibilityLabel * _trailingLabel;
    bool  _volumeDownButtonIsDown;
    NSDate * _volumeDownLastHitDate;
    NSString * _volumeString;
    bool  _volumeUpButtonIsDown;
    NSDate * _volumeUpLastHitDate;
}

@property (nonatomic, readonly) int axis;
@property (nonatomic) <SBElasticAudioDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBElasticAudioVolumeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSliderTracking;
@property (nonatomic, readonly) SBVolumeHUDSettings *settings;
@property (nonatomic, readonly) SBElasticSliderView *sliderView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool volumeDownButtonIsDown;
@property (nonatomic, readonly) bool volumeUpButtonIsDown;

- (void).cxx_destruct;
- (void)_activeCallStatusStateChanged:(id)arg1;
- (void)_actuallyDismiss;
- (void)_animateFromState:(long long)arg1 toState:(long long)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)_anyCallActive;
- (void)_beginDeflatorDismissalSpringAnimation;
- (void)_beginTrackingWithGestureRecognizer:(id)arg1;
- (bool)_canShowWhileLocked;
- (bool)_changeVolumeLevel:(double)arg1;
- (void)_clearLastHitDates;
- (void)_completeDeflatorDismissalSpringAnimation;
- (bool)_computeCachedAudioRouteDisplayInformation;
- (void)_continueTrackingWithGestureRecognizer:(id)arg1;
- (void)_createHapticFeedbackEngines;
- (void)_createSprings;
- (void)_debugAutoDismissalSwitchValueChanged:(id)arg1;
- (void)_debugChangingStateFromSegmentedControl:(id)arg1;
- (void)_debugDimensionSliderValueDidChange:(id)arg1;
- (void)_debugDump:(id)arg1;
- (void)_debugLockStateSwitchValueChanged:(id)arg1;
- (void)_debugNextAudioRoute:(id)arg1;
- (void)_debugResetAudioRoute:(id)arg1;
- (void)_destroySprings;
- (void)_dismissalTimerFired:(id)arg1;
- (void)_endTrackingWithGestureRecognizer:(id)arg1;
- (void)_forciblyResetMinMaxSprings;
- (void)_handleShortLongPressGestureRecognizer:(id)arg1;
- (void)_handleSliderViewPanGestureRecognizer:(id)arg1;
- (void)_invalidateDismissalTimerForReason:(id)arg1;
- (bool)_isStateChangeAllowedFrom:(long long)arg1 toState:(long long)arg2;
- (void)_markVolumeUpdateInRunningListOfVolumesUpdates:(double)arg1;
- (void)_modifySpringsFromState:(long long)arg1 toState:(long long)arg2;
- (void)_noteSliderViewDidBeginTracking;
- (void)_noteSliderViewDidEndTracking;
- (void)_playMaximumVolumeHaptic;
- (void)_playMinimumVolumeHaptic;
- (void)_playTickHapticForSteppedVolume:(double)arg1;
- (void)_reduceMotionStatusDidChange;
- (void)_refreshDebugUI:(bool)arg1;
- (void)_reloadData;
- (void)_resetInputForMajorAxisSpring;
- (void)_scheduleDismissal:(id)arg1;
- (void)_setScaleSpringActiveForVolumeButtonUpdateIfNeeded;
- (void)_stretchVolumeSliderForMaximumVolumeUpdateIfNeeded;
- (void)_stretchVolumeSliderForMinimumVolumeUpdateIfNeeded;
- (bool)_updateAnyCallActive;
- (void)_updateDebugString:(id)arg1;
- (void)_updateDebugUIPositions;
- (void)_updateDimmingVisible:(bool)arg1;
- (void)_updateEdgeFeedbackParametersForMaxVolume:(bool)arg1;
- (void)_updateForAxisChange:(int)arg1;
- (void)_updateGlyphStateIfNecessaryForVolumeLevel:(float*)arg1;
- (void)_updateLabelsForAxis:(int)arg1 containerViewSize:(struct CGSize { double x1; double x2; })arg2 state:(long long)arg3 animated:(bool)arg4;
- (void)_updateSliderTracking;
- (void)_updateSliderViewMetricsForState:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 integralized:(bool)arg3 useSizeSpringData:(bool)arg4 useCenterSpringData:(bool)arg5;
- (void)_updateSliderViewMetricsForState:(long long)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 integralized:(bool)arg3 useSpringData:(bool)arg4;
- (void)_updateSliderViewToCenter:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 integralized:(bool)arg3 continuousCornerRadius:(double*)arg4;
- (void)_updateTouchTrackingView;
- (void)_updateViewsWithSpringData;
- (unsigned long long)_updateVolumeLevelSlider:(float)arg1 animated:(bool)arg2;
- (bool)_volumeUpdateIsMaximumOfPotentialVolumeUpdates;
- (bool)_volumeUpdateIsMinimumOfPotentialVolumeUpdates;
- (id)activeAudioCategory;
- (id)activeAudioRouteTypes;
- (int)axis;
- (struct CGPoint { double x1; double x2; })centerForState:(long long)arg1 containerViewSize:(struct CGSize { double x1; double x2; })arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 useSpringData:(bool)arg4;
- (void)changeVolumeLevel:(double)arg1 animated:(bool)arg2;
- (double)cornerRadiusForState:(long long)arg1 useSpringData:(bool)arg2;
- (float)currentVolume;
- (id)dataSource;
- (void)dealloc;
- (bool)definesAnimatedDismissal;
- (id)delegate;
- (void)dismissAnimatedWithCompletion:(id /* block */)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)glyphScaleForState:(long long)arg1;
- (long long)hudPresentationOrientation;
- (id)init;
- (bool)isSliderTracking;
- (void)loadView;
- (struct CGSize { double x1; double x2; })maximumSizeForSlider;
- (void)noteVolumeDownWasHit:(bool)arg1;
- (void)noteVolumeUpWasHit:(bool)arg1;
- (void)noteVolumeWillDeltaStepToVolume:(double)arg1;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setVolumeDownButtonIsDown:(bool)arg1;
- (void)setVolumeUpButtonIsDown:(bool)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)setupFailureRelationshipForGestureRecognizer:(id)arg1;
- (bool)shouldShowHighVolumeWarningForCurrentVolume;
- (struct CGSize { double x1; double x2; })sizeForState:(long long)arg1 useSpringData:(bool)arg2;
- (id)sliderView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)transitionStateContextuallyForVolumeChangeEvent;
- (void)transitionToState:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)updateVolumeLevel:(float)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)volumeDownButtonIsDown;
- (bool)volumeUpButtonIsDown;

@end
