/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIIndexBarView : UIControl <UIAccessibilityHUDGestureDelegate> {
    UIAccessibilityHUDGestureManager * _axHUDGestureManager;
    double  _cachedDisplayHighlightedIndex;
    double  _deflection;
    <UIIndexBarViewDelegate> * _delegate;
    NSArray * _displayEntries;
    NSArray * _entries;
    long long  _highlightStyle;
    double  _highlightedIndex;
    UIColor * _indexColor;
    UIColor * _nonTrackingBackgroundColor;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
    UIColor * _trackingBackgroundColor;
    <UIIndexBarVisualStyle> * _visualStyle;
}

@property (nonatomic, retain) UIAccessibilityHUDGestureManager *axHUDGestureManager;
@property (nonatomic) double cachedDisplayHighlightedIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double deflection;
@property (nonatomic) <UIIndexBarViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayEntries;
@property (nonatomic, readonly) double displayHighlightedIndex;
@property (nonatomic, copy) NSArray *entries;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long highlightStyle;
@property (nonatomic) double highlightedIndex;
@property (nonatomic, copy) UIColor *indexColor;
@property (nonatomic, copy) UIColor *nonTrackingBackgroundColor;
@property (nonatomic, retain) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *trackingBackgroundColor;
@property (nonatomic, retain) <UIIndexBarVisualStyle> *visualStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg1;
- (bool)_canDrawContent;
- (bool)_defaultCanBecomeFocused;
- (bool)_didSelectEntry:(id)arg1 atIndex:(long long)arg2;
- (bool)_selectEntry:(id)arg1 atIndex:(long long)arg2;
- (void)_setupAXHUDGestureIfNecessary;
- (void)_updateBackgroundColor;
- (void)_updateDisplayEntries;
- (void)_userInteractionStarted;
- (void)_userInteractionStopped;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)axHUDGestureManager;
- (id)backgroundColor;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)cachedDisplayHighlightedIndex;
- (bool)canBecomeFocused;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)deflection;
- (id)delegate;
- (void)didMoveToWindow;
- (id)displayEntries;
- (double)displayHighlightedIndex;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)entries;
- (long long)highlightStyle;
- (double)highlightedIndex;
- (id)indexColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nonTrackingBackgroundColor;
- (void)resetDeflection:(bool)arg1;
- (id)selectionFeedbackGenerator;
- (void)setAxHUDGestureManager:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCachedDisplayHighlightedIndex:(double)arg1;
- (void)setDeflection:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayEntries:(id)arg1;
- (void)setEntries:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightStyle:(long long)arg1;
- (void)setHighlightedIndex:(double)arg1;
- (void)setIndexColor:(id)arg1;
- (void)setNonTrackingBackgroundColor:(id)arg1;
- (void)setSelectionFeedbackGenerator:(id)arg1;
- (void)setTrackingBackgroundColor:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)trackingBackgroundColor;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visualStyle;

@end