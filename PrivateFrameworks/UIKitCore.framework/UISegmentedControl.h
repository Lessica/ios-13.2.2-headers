/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISegmentedControl : UIControl <DebugHierarchyObject_Fallback, NSCoding, UIPopoverPresentationControllerDelegate, _UIBasicAnimationFactory, _UIHostedFocusSystemDelegate> {
    id  _appearanceStorage;
    UILongPressGestureRecognizer * _axLongPressGestureRecognizer;
    UIColor * _backgroundTintColor;
    long long  _barStyle;
    double  _enabledAlpha;
    UISegment * _focusedSegment;
    long long  _highlightedSegment;
    _UIHostedFocusSystem * _internalFocusSystem;
    UIView * _removedSegment;
    struct { 
        unsigned int size : 2; 
        unsigned int delegateAlwaysNotifiesDelegateOfSegmentClicks : 1; 
        unsigned int momentaryClick : 1; 
        unsigned int tracking : 1; 
        unsigned int autosizeToFitSegments : 1; 
        unsigned int isSizingToFit : 1; 
        unsigned int autosizeText : 1; 
        unsigned int transparentBackground : 1; 
        unsigned int useProportionalWidthSegments : 1; 
        unsigned int translucentBackground : 1; 
        unsigned int appearanceNeedsUpdate : 1; 
        unsigned int selectionIndicatorDragged : 1; 
    }  _segmentedControlFlags;
    NSMutableArray * _segments;
    long long  _selectedSegment;
    UIColor * _selectedSegmentTintColor;
    UIImageView * _selectionImageView;
    long long  _selectionIndicatorSegment;
}

@property (nonatomic) bool apportionsSegmentWidthsByContent;
@property (nonatomic, retain) UILongPressGestureRecognizer *axLongPressGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_internalFocusSystem, nonatomic, readonly) _UIHostedFocusSystem *internalFocusSystem;
@property (getter=isMomentary, nonatomic) bool momentary;
@property (nonatomic, readonly) unsigned long long numberOfSegments;
@property (setter=px_setMinimumSegmentWidth:, nonatomic) double px_minimumSegmentWidth;
@property (nonatomic, retain) UIView *removedSegment;
@property (nonatomic) long long segmentedControlStyle;
@property (nonatomic) long long selectedSegmentIndex;
@property (nonatomic, retain) UIColor *selectedSegmentTintColor;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (struct CGColor { }*)_backgroundPrimaryColorSelected:(bool)arg1 highlighted:(bool)arg2 traitCollection:(id)arg3 tintColor:(id)arg4;
+ (double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2;
+ (struct CGColor { }*)_dividerPrimaryColorBackground:(bool)arg1 traitCollection:(id)arg2 tintColor:(id)arg3;
+ (double)_dividerWidthForTraitCollection:(id)arg1 size:(int)arg2;
+ (id)_fontForTraitCollection:(id)arg1 size:(int)arg2 selected:(bool)arg3;
+ (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_hiddenSelectionTransform;
+ (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_highlightSelectionTransform;
+ (double)_lineWidthForTraitCollection:(id)arg1 size:(int)arg2;
+ (id)_modernBackgroundSelected:(bool)arg1 disableShadow:(bool)arg2 highlighted:(bool)arg3 traitCollection:(id)arg4 tintColor:(id)arg5 size:(int)arg6;
+ (id)_modernDividerImageBackground:(bool)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 size:(int)arg4;
+ (double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2;
+ (double)_sectionIndicatorOverflowForTraitCollection:(id)arg1 size:(int)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(int)arg2 traitCollection:(id)arg3 accessibilityView:(bool)arg4;
+ (id)_selectionOpacityAnimationFromValue:(float)arg1 toValue:(float)arg2;
+ (id)_selectionPopAnimationForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)_tvDefaultTextColorDisabledSelected;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorFocused;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorSelected;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (double)defaultHeight;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 size:(int)arg2;

- (void).cxx_destruct;
- (id)__scalarStatisticsForUserValueChangedEvent;
- (void)_animateContentChangeWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_attributedTitleForSegmentAtIndex:(unsigned long long)arg1;
- (void)_axLongPressHandler:(id)arg1;
- (id)_backgroundTintColor;
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)_badgeValueForSegmentAtIndex:(unsigned long long)arg1;
- (double)_barHeight;
- (struct { double x1; double x2; })_baselineOffsetsAtSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_cancelDelayedFocusAction;
- (void)_clearSelectedSegment;
- (int)_closestSegmentIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_commonSegmentedControlInit;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_createAndAddSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (id)_createSegmentAtIndex:(int)arg1 position:(unsigned int)arg2 withInfo:(id)arg3;
- (void)_diagnoseFocusabilityForReport:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_disableSlidingControl;
- (void)_emitValueChanged;
- (id)_focusMapContainerForFocusSystem:(id)arg1;
- (bool)_focusSystem:(id)arg1 containsChildOfHostEnvironment:(id)arg2;
- (void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
- (bool)_hasEnabledSegment;
- (void)_insertSegment:(int)arg1 withInfo:(id)arg2 animated:(bool)arg3;
- (void)_insertSegmentWithAttributedTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_insertSelectionViewForSegment:(id)arg1;
- (id)_internalFocusSystem;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
- (void)_resetForAppearanceChange;
- (id)_segmentAtIndex:(int)arg1;
- (long long)_segmentIndexToHighlight:(bool*)arg1;
- (void)_selectFocusedSegment;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_setAppearanceIsTiled:(bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)_setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setAutosizeText:(bool)arg1;
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)_setBackgroundTintColor:(id)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setBadgeValue:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)_setControlSize:(int)arg1 andInvalidate:(bool)arg2;
- (void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)_setEnabled:(bool)arg1 forcePropagateToSegments:(bool)arg2;
- (void)_setHighlightedSegmentHighlighted:(bool)arg1;
- (void)_setNeedsAppearanceUpdate;
- (void)_setNeedsBackgroundAndContentViewUpdate;
- (void)_setSegmentedControlAppearance:(struct { id x1; double x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; unsigned char x_3_1_4; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_3_1_5; unsigned short x_3_1_6; int x_3_1_7; void*x_3_1_8; void*x_3_1_9; void*x_3_1_10; double x_3_1_11; double x_3_1_12; } x3; }*)arg1;
- (void)_setSelected:(bool)arg1 forSegmentAtIndex:(int)arg2 forceInfoDisplay:(bool)arg3;
- (void)_setSelected:(bool)arg1 highlighted:(bool)arg2 forSegmentAtIndex:(int)arg3 forceInfoDisplay:(bool)arg4;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(bool)arg2;
- (void)_setSelectedSegmentIndex:(long long)arg1 notify:(bool)arg2 animate:(bool)arg3;
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setUsesNewAnimations:(bool)arg1;
- (bool)_shouldConsumeEventWithPresses:(id)arg1;
- (bool)_shouldSelectSegmentAtIndex:(long long)arg1;
- (void)_tapSegmentAtPoint:(struct CGPoint { double x1; double x2; })arg1 touchDown:(bool)arg2;
- (id)_tintColorArchivingKey;
- (id)_uiktest_labelsWithState:(unsigned long long)arg1;
- (id)_uiktest_segmentAtIndex:(unsigned long long)arg1;
- (void)_updateAxLongPressGestureRecognizer;
- (void)_updateDividerImageForSegmentAtIndex:(unsigned long long)arg1;
- (void)_updateSelectionIndicator;
- (void)_updateSelectionToSegment:(id)arg1 highlight:(bool)arg2 shouldAnimate:(bool)arg3 sameSegment:(bool)arg4;
- (bool)_usesNewAnimations;
- (id)_viewForLoweringBaselineLayoutAttribute:(int)arg1;
- (void)dealloc;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

+ (id)fallback_debugHierarchyPropertyDescriptions;
+ (id)fallback_debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;

- (struct CGSize { double x1; double x2; })__dbg_contentOffsetForSelectedSegment;
- (bool)__dbg_hasValidSelectedSegmentIndex;
- (bool)__dbg_isEnabledForSelectedSegment;
- (id)__dbg_titleForSelectedSegment;
- (double)__dbg_widthForSelectedSegment;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)addSegmentWithTitle:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)apportionsSegmentWidthsByContent;
- (id)axLongPressGestureRecognizer;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (long long)barStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)canBecomeFocused;
- (struct CGSize { double x1; double x2; })contentOffsetForSegment:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })contentOffsetForSegmentAtIndex:(unsigned long long)arg1;
- (struct UIOffset { double x1; double x2; })contentPositionAdjustmentForSegmentType:(long long)arg1 barMetrics:(long long)arg2;
- (int)controlSize;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)highlightSegment:(int)arg1;
- (id)imageForSegment:(unsigned long long)arg1;
- (id)imageForSegmentAtIndex:(unsigned long long)arg1;
- (id)infoViewForSegment:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withStyle:(long long)arg2 withItems:(id)arg3;
- (id)initWithItems:(id)arg1;
- (void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(bool)arg3;
- (void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(bool)arg3;
- (void)insertSegmentWithImage:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)isEnabledForSegment:(unsigned long long)arg1;
- (bool)isEnabledForSegmentAtIndex:(unsigned long long)arg1;
- (bool)isMomentary;
- (bool)isSpringLoaded;
- (void)layoutSubviews;
- (unsigned long long)numberOfSegments;
- (bool)pointMostlyInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeAllSegments;
- (void)removeSegment:(unsigned long long)arg1 animated:(bool)arg2;
- (void)removeSegmentAtIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (id)removedSegment;
- (long long)segmentControlStyle;
- (long long)segmentedControlStyle;
- (void)selectSegment:(int)arg1;
- (long long)selectedSegment;
- (long long)selectedSegmentIndex;
- (id)selectedSegmentTintColor;
- (void)setAlpha:(double)arg1;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(bool)arg1;
- (void)setApportionsSegmentWidthsByContent:(bool)arg1;
- (void)setAxLongPressGestureRecognizer:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBarStyle:(long long)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGSize { double x1; double x2; })arg1 forSegment:(unsigned long long)arg2;
- (void)setContentOffset:(struct CGSize { double x1; double x2; })arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setContentPositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forSegmentType:(long long)arg2 barMetrics:(long long)arg3;
- (void)setControlSize:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 barMetrics:(long long)arg4;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 forSegment:(unsigned long long)arg2;
- (void)setEnabled:(bool)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setImagePadding:(struct CGSize { double x1; double x2; })arg1 forSegment:(unsigned long long)arg2;
- (void)setMomentary:(bool)arg1;
- (void)setRemovedSegment:(id)arg1;
- (void)setSegmentControlStyle:(long long)arg1;
- (void)setSegmentedControlStyle:(long long)arg1;
- (void)setSelectedSegment:(long long)arg1;
- (void)setSelectedSegmentIndex:(long long)arg1;
- (void)setSelectedSegmentTintColor:(id)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTransparentBackground:(bool)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned long long)arg2;
- (void)setWidth:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (bool)shouldTrack;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (id)titleForSegment:(unsigned long long)arg1;
- (id)titleForSegmentAtIndex:(unsigned long long)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)transparentBackground;
- (void)updateForMiniBarState:(bool)arg1;
- (bool)useBlockyMagnificationInClassic;
- (id)viewForLastBaselineLayout;
- (float)widthForSegment:(unsigned long long)arg1;
- (double)widthForSegmentAtIndex:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (long long)_mapkit_numberOfSegments;
- (void)_mapkit_removeAllSegments;
- (long long)_mapkit_selectedSegmentIndex;
- (void)_mapkit_setSelectedSegmentIndex:(long long)arg1;
- (void)_mapkit_setTitle:(id)arg1 forSegmentAtIndex:(long long)arg2 insertIfNeeded:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (struct { double x1; double x2; })_nui_additionalInsetsForBaselines;
- (long long)_nui_baselineViewType;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (double)px_defaultMinimumSegmentWidth;

- (struct CGSize { double x1; double x2; })_pxswizzled_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)px_minimumSegmentWidth;
- (void)px_setMinimumSegmentWidth:(double)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)sizeToFitWithMinimumSegmentWidth:(double)arg1 maximumTotalWidth:(double)arg2;

@end
