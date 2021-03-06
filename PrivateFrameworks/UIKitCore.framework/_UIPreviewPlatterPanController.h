/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewPlatterPanController : NSObject <UIGestureRecognizerDelegate> {
    NSArray * _accessoryViews;
    UIBezierPath * _actionScrubPath;
    UIView * _actionsView;
    bool  _actionsViewIsVisible;
    UIViewSpringAnimationBehavior * _animationBehavior;
    UIView * _containerView;
    unsigned long long  _currentDetentIndex;
    double  _currentDistanceToActionScrubPath;
    <_UIPreviewPlatterPanControllerDelegate> * _delegate;
    NSArray * _detents;
    bool  _enabled;
    unsigned long long  _initialDetentIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocationInsidePreview;
    double  _initialYTranslation;
    struct { 
        unsigned long long attachment; 
        unsigned long long alignment; 
    }  _menuAnchor;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalActionsCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalPlatterCenter;
    UIPanGestureRecognizer * _panGestureRecognizer;
    UIView * _platterView;
    unsigned long long  _rubberbandingEdges;
    _UIVelocityIntegrator * _velocityIntegrator;
}

@property (nonatomic, retain) NSArray *accessoryViews;
@property (nonatomic) UIView *actionsView;
@property (nonatomic, readonly) UIViewSpringAnimationBehavior *animationBehavior;
@property (nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPreviewPlatterPanControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *detents;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initialDetentIndex;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } menuAnchor;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalActionsCenter;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalPlatterCenter;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) UIView *platterView;
@property (nonatomic) unsigned long long rubberbandingEdges;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIVelocityIntegrator *velocityIntegrator;

- (void).cxx_destruct;
- (id)_actionScrubPathWithInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_animationsForActionsStyleWithLocation:(struct CGPoint { double x1; double x2; })arg1 ended:(bool)arg2;
- (void)_animationsForAnyAttachedAccessoryViews;
- (void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CGPoint { double x1; double x2; })arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_canBeginDraggingWithTranslation:(struct CGPoint { double x1; double x2; })arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_canSwipeDownToDismiss;
- (struct CGVector { double x1; double x2; })_currentPlatterVelocity;
- (double)_dragTearOffThreshold;
- (void)_handlePanGesture:(id)arg1;
- (bool)_initialPointInPlatterIsValid;
- (int)_nearestDetentWithTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_rangeOfMotion;
- (struct CGPoint { double x1; double x2; })_rubberBandedTranslationForGestureTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_tearOffSpeedMultiplier;
- (void)_updatePlatterGestureDebugUIWithGesture:(id)arg1;
- (void)_updateViewPositionsWithTranslation:(struct CGPoint { double x1; double x2; })arg1 location:(struct CGPoint { double x1; double x2; })arg2 ended:(bool)arg3 withVelocity:(bool)arg4;
- (id)accessoryViews;
- (id)actionsView;
- (id)animationBehavior;
- (id)containerView;
- (id)delegate;
- (id)detents;
- (bool)enabled;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 actionsView:(id)arg3;
- (unsigned long long)initialDetentIndex;
- (struct { unsigned long long x1; unsigned long long x2; })menuAnchor;
- (struct CGPoint { double x1; double x2; })originalActionsCenter;
- (struct CGPoint { double x1; double x2; })originalPlatterCenter;
- (id)panGestureRecognizer;
- (id)platterView;
- (unsigned long long)rubberbandingEdges;
- (void)setAccessoryViews:(id)arg1;
- (void)setActionsView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetents:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInitialDetentIndex:(unsigned long long)arg1;
- (void)setMenuAnchor:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setOriginalActionsCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalPlatterCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setPlatterView:(id)arg1;
- (void)setRubberbandingEdges:(unsigned long long)arg1;
- (void)setVelocityIntegrator:(id)arg1;
- (id)velocityIntegrator;

@end
