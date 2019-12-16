/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITableViewCellSelectedBackground : UIView {
    bool  _multiselect;
    UIColor * _multiselectBackgroundColor;
    UIColor * _noneStyleBackgroundColor;
    UIVisualEffectView * _selectionEffectsView;
    long long  _selectionStyle;
    UIColor * _selectionTintColor;
}

@property (getter=isMultiselect, nonatomic) bool multiselect;
@property (nonatomic, retain) UIColor *multiselectBackgroundColor;
@property (nonatomic, retain) UIColor *noneStyleBackgroundColor;
@property (nonatomic, copy) NSArray *selectionEffects;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, retain) UIColor *selectionTintColor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_canDrawContent;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isMultiselect;
- (void)layoutSubviews;
- (id)multiselectBackgroundColor;
- (id)noneStyleBackgroundColor;
- (id)selectionEffects;
- (long long)selectionStyle;
- (id)selectionTintColor;
- (void)setMultiselect:(bool)arg1;
- (void)setMultiselectBackgroundColor:(id)arg1;
- (void)setNoneStyleBackgroundColor:(id)arg1;
- (void)setSelectionEffects:(id)arg1;
- (void)setSelectionStyle:(long long)arg1;
- (void)setSelectionTintColor:(id)arg1;

@end
