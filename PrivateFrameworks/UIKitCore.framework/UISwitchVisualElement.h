/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwitchVisualElement : UIView {
    bool  _enabled;
    double  _enabledAlpha;
    UIImpactFeedbackGenerator * _impactFeedbackGenerator;
    <UISwitchControl> * _switchControl;
}

@property (nonatomic) bool enabled;
@property (nonatomic) double enabledAlpha;
@property (nonatomic, retain) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic) <UISwitchControl> *switchControl;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (struct CGSize { double x1; double x2; })preferredContentSize;

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (bool)enabled;
- (double)enabledAlpha;
- (id)impactFeedbackGenerator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setEnabled:(bool)arg1;
- (void)setEnabledAlpha:(double)arg1;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (void)setOffImage:(id)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setOnImage:(id)arg1;
- (void)setOnTintColor:(id)arg1;
- (void)setShowsOnOffLabel:(bool)arg1;
- (void)setSwitchControl:(id)arg1;
- (void)setThumbTintColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)switchControl;
- (void)tintColorDidChange;

@end
