/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBUndoInteractionHUD : UIView {
    UIKBUndoControl * _aCopyButtonView;
    UIKBUndoControl * _aCutButtonView;
    UIKBUndoControl * _aPasteButtonView;
    <UIInteractiveUndoHUDActionDelegate> * _actionDelegate;
    UIVisualEffectView * _backgroundEffectView;
    UIView * _centerView;
    UIView * _containerView;
    long long  _currentCheckpointCovered;
    long long  _currentUndoElementIndex;
    UIDelayedAction * _dismissGrabberTimer;
    UIView * _grabber;
    NSLayoutConstraint * _grabberPositionConstraint;
    double  _grabberStartXLocation;
    UIKBUndoControl * _leftButtonView;
    long long  _mode;
    double  _optimizedHUDWidth;
    UIKBUndoControl * _rightButtonView;
    UIVisualEffectView * _shadowView;
    UIKBUndoStyling * _style;
    UIStackView * _undoItems;
}

@property (nonatomic, retain) UIKBUndoControl *aCopyButtonView;
@property (nonatomic, retain) UIKBUndoControl *aCutButtonView;
@property (nonatomic, retain) UIKBUndoControl *aPasteButtonView;
@property (nonatomic) <UIInteractiveUndoHUDActionDelegate> *actionDelegate;
@property (nonatomic, retain) UIVisualEffectView *backgroundEffectView;
@property (nonatomic, retain) UIView *centerView;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) long long currentCheckpointCovered;
@property (nonatomic) long long currentUndoElementIndex;
@property (nonatomic, retain) UIDelayedAction *dismissGrabberTimer;
@property (nonatomic, retain) UIView *grabber;
@property (nonatomic, retain) NSLayoutConstraint *grabberPositionConstraint;
@property (nonatomic) double grabberStartXLocation;
@property (nonatomic, retain) UIKBUndoControl *leftButtonView;
@property (nonatomic) long long mode;
@property (nonatomic) double optimizedHUDWidth;
@property (nonatomic, retain) UIKBUndoControl *rightButtonView;
@property (nonatomic, retain) UIVisualEffectView *shadowView;
@property (nonatomic, retain) UIKBUndoStyling *style;
@property (nonatomic, retain) UIStackView *undoItems;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)aCopyButtonView;
- (id)aCutButtonView;
- (id)aPasteButtonView;
- (id)actionDelegate;
- (bool)availableOfControl:(id)arg1;
- (id)backgroundEffectView;
- (id)centerView;
- (id)containerView;
- (void)controlActionDown:(id)arg1;
- (void)controlActionUpInside:(id)arg1;
- (void)controlActionUpOutside:(id)arg1;
- (id)createSeparatorView;
- (long long)currentCheckpointCovered;
- (long long)currentUndoElementIndex;
- (id)dismissGrabberTimer;
- (id)grabber;
- (id)grabberPositionConstraint;
- (double)grabberStartXLocation;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(bool)arg2 mode:(long long)arg3 sceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)layoutSubviews;
- (id)leftButtonView;
- (long long)mode;
- (double)optimizedHUDWidth;
- (void)performDelegateRedoAndUpdateHUDIfNeeded;
- (void)performDelegateUndoAndUpdateHUDIfNeeded;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)rightButtonView;
- (void)setACopyButtonView:(id)arg1;
- (void)setACutButtonView:(id)arg1;
- (void)setAPasteButtonView:(id)arg1;
- (void)setActionDelegate:(id)arg1;
- (void)setBackgroundEffectView:(id)arg1;
- (void)setCenterView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCurrentCheckpointCovered:(long long)arg1;
- (void)setCurrentUndoElementIndex:(long long)arg1;
- (void)setDismissGrabberTimer:(id)arg1;
- (void)setGrabber:(id)arg1;
- (void)setGrabberPositionConstraint:(id)arg1;
- (void)setGrabberStartXLocation:(double)arg1;
- (void)setLeftButtonView:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setOptimizedHUDWidth:(double)arg1;
- (void)setRightButtonView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setUndoItems:(id)arg1;
- (id)shadowView;
- (id)style;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoItems;
- (void)updateControlWithDirection:(long long)arg1 travelProgress:(double)arg2 isRTL:(bool)arg3;
- (void)updateHUDControlState;

@end
