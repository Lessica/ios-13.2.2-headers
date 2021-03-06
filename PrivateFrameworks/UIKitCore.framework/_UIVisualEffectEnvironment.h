/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIVisualEffectEnvironment : NSObject <NSCopying> {
    bool  _allowsBlurring;
    bool  _allowsDithering;
    UIVisualEffectView * _effectView;
    bool  _reducedTransperancy;
    UIView * _superview;
    UITraitCollection * _traitCollection;
    bool  _useSimpleVibrancy;
    UIWindow * _window;
}

@property (nonatomic) bool allowsBlurring;
@property (nonatomic) bool allowsDithering;
@property (nonatomic, readonly) UIVisualEffectView *effectView;
@property (nonatomic) bool reducedTransperancy;
@property (nonatomic) UIView *superview;
@property (nonatomic, copy) UITraitCollection *traitCollection;
@property (nonatomic) bool useSimpleVibrancy;
@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (bool)allowsBlurring;
- (bool)allowsDithering;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectView;
- (id)initWithHost:(id)arg1;
- (bool)reducedTransperancy;
- (void)setAllowsBlurring:(bool)arg1;
- (void)setAllowsDithering:(bool)arg1;
- (void)setReducedTransperancy:(bool)arg1;
- (void)setSuperview:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setUseSimpleVibrancy:(bool)arg1;
- (void)setWindow:(id)arg1;
- (id)superview;
- (id)traitCollection;
- (bool)useSimpleVibrancy;
- (id)window;

@end
