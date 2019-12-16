/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSingleControlViewController : HUQuickControlViewController <HUQuickControlInteractionCoordinatorDelegate, HUQuickControlTouchContinuing> {
    bool  _hasSetControlSize;
    bool  _hasWrittenAnyNewValues;
    double  _horizontalControlCompressionFactor;
    unsigned long long  _inFlightWriteCount;
    HUQuickControlInteractionCoordinator * _interactionCoordinator;
    id  _modelValue;
    NAValueThrottler * _valueWriteThrottler;
    double  _verticalDirectionalControlStretchFactor;
    HUQuickControlViewProfile * _viewProfile;
    bool  _writesInProgressOrPossible;
}

@property (nonatomic, readonly) HFControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSetControlSize;
@property (nonatomic) bool hasWrittenAnyNewValues;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalControlCompressionFactor;
@property (nonatomic) unsigned long long inFlightWriteCount;
@property (nonatomic, retain) HUQuickControlInteractionCoordinator *interactionCoordinator;
@property (nonatomic, readonly) id modelValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NAValueThrottler *valueWriteThrottler;
@property (nonatomic) double verticalDirectionalControlStretchFactor;
@property (nonatomic, retain) _HUQuickControlSingleControlHostView *view;
@property (nonatomic, retain) HUQuickControlViewProfile *viewProfile;
@property (getter=areWritesInProgressOrPossible, nonatomic) bool writesInProgressOrPossible;

+ (Class)controlItemClass;
+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (void)_setModelValue:(id)arg1 writeValue:(bool)arg2;
- (void)_updateControlTransform;
- (void)_updateControlViewReachabilityState;
- (void)_updateTitle;
- (void)_updateValueFromControlItem;
- (void)_updateViewProfileForCurrentItemState;
- (void)_updateWriteState;
- (void)_writeModelControlValue:(id)arg1;
- (bool)areWritesInProgressOrPossible;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)controlItem;
- (id)controlToViewValueTransformer;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (bool)hasModelValueChangedForInteractionCoordinator:(id)arg1;
- (bool)hasSetControlSize;
- (bool)hasWrittenAnyNewValues;
- (void)hideAuxiliaryViewForInteractionCoordinator:(id)arg1;
- (double)horizontalControlCompressionFactor;
- (unsigned long long)inFlightWriteCount;
- (id)initWithControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)interactionCoordinator;
- (void)interactionCoordinator:(id)arg1 interactionStateDidChange:(bool)arg2;
- (void)interactionCoordinator:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)interactionCoordinator:(id)arg1 updateControlHorizontalCompressionFactor:(double)arg2;
- (void)interactionCoordinator:(id)arg1 updateControlVerticalStretchFactor:(double)arg2;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (void)interactionCoordinatorWantsDismissal:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)invalidateViewProfile;
- (bool)isUserInteractionEnabled;
- (void)loadView;
- (id)modelValue;
- (void)modelValueDidChange;
- (id)overrideSecondaryStatusText;
- (id)overrideStatusText;
- (id)overrideValueForCharacteristic:(id)arg1;
- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (void)setControlOrientation:(unsigned long long)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setHasSetControlSize:(bool)arg1;
- (void)setHasWrittenAnyNewValues:(bool)arg1;
- (void)setHorizontalControlCompressionFactor:(double)arg1;
- (void)setInFlightWriteCount:(unsigned long long)arg1;
- (void)setInteractionCoordinator:(id)arg1;
- (void)setPreferredControl:(unsigned long long)arg1;
- (void)setPreferredFrameLayoutGuide:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setVerticalDirectionalControlStretchFactor:(double)arg1;
- (void)setViewProfile:(id)arg1;
- (void)setWritesInProgressOrPossible:(bool)arg1;
- (id)valueWriteThrottler;
- (double)verticalDirectionalControlStretchFactor;
- (id)viewControllerForTouchContinuation;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewForTouchContinuation;
- (id)viewProfile;
- (void)viewWillAppear:(bool)arg1;

@end
