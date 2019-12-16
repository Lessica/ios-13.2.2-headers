/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwipeActionPullView : UIView {
    NSArray * _actions;
    bool  _autosizesButtons;
    UIColor * _backgroundPullColor;
    NSMutableArray * _buttons;
    bool  _buttonsUnderlapSwipedView;
    unsigned long long  _cellEdge;
    double  _confirmationThreshold;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _currentExtraOffset;
    double  _currentOffset;
    <UISwipeActionPullViewDelegate> * _delegate;
    bool  _isCollapsed;
    double  _minimumOffset;
    double  _openThreshold;
    UISwipeActionButton * _pressedButton;
    unsigned long long  _state;
    unsigned long long  _style;
    bool  _swipeActionsDidChange;
}

@property (nonatomic) bool autosizesButtons;
@property (nonatomic, copy) UIColor *backgroundPullColor;
@property (nonatomic) bool buttonsUnderlapSwipedView;
@property (nonatomic, readonly) unsigned long long cellEdge;
@property (nonatomic, readonly) double confirmationThreshold;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) double currentOffset;
@property (nonatomic) <UISwipeActionPullViewDelegate> *delegate;
@property (nonatomic, readonly) bool hasActions;
@property (nonatomic, readonly) double openThreshold;
@property (nonatomic, readonly) UIColor *primaryActionColor;
@property (nonatomic, readonly) bool primaryActionIsDestructive;
@property (nonatomic, readonly) UIContextualAction *primarySwipeAction;
@property (nonatomic) unsigned long long state;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (Class)_buttonClass;
- (double)_directionalMultiplier;
- (id)_inferredAccessibilityIdentifierTemplate;
- (void)_performAction:(id)arg1 offset:(double)arg2 extraOffset:(double)arg3;
- (void)_pressedButton:(id)arg1;
- (void)_rebuildButtons;
- (unsigned long long)_swipeActionCount;
- (void)_tappedButton:(id)arg1;
- (void)_unpressedButton:(id)arg1;
- (id)description;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (bool)autosizesButtons;
- (id)backgroundPullColor;
- (bool)buttonsUnderlapSwipedView;
- (unsigned long long)cellEdge;
- (void)configureWithSwipeActions:(id)arg1;
- (double)confirmationThreshold;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)currentOffset;
- (id)delegate;
- (void)freeze;
- (bool)hasActions;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cellEdge:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)moveToOffset:(double)arg1 extraOffset:(double)arg2 animator:(id)arg3 usingSpringWithStiffness:(double)arg4 initialVelocity:(double)arg5;
- (double)openThreshold;
- (id)primaryActionColor;
- (bool)primaryActionIsDestructive;
- (id)primarySwipeAction;
- (void)resetView;
- (void)setAutosizesButtons:(bool)arg1;
- (void)setBackgroundPullColor:(id)arg1;
- (void)setButtonsUnderlapSwipedView:(bool)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)sourceViewForAction:(id)arg1;
- (unsigned long long)state;

@end