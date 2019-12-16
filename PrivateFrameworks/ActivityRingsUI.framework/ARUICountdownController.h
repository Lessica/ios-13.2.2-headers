/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@interface ARUICountdownController : ARUIRingGroupController {
    unsigned long long  _countdownOrigin;
}

@property (nonatomic) unsigned long long countdownOrigin;
@property (nonatomic) double countdownPercent;

+ (id)animationTimingFunction;

- (double)_zRotationFromCountdownOrigin:(unsigned long long)arg1;
- (unsigned long long)countdownOrigin;
- (double)countdownPercent;
- (id)init;
- (void)setCountdownOrigin:(unsigned long long)arg1;
- (void)setCountdownOrigin:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setCountdownPercent:(double)arg1;
- (void)setCountdownPercent:(double)arg1 animated:(bool)arg2;
- (void)setCountdownPercent:(double)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setCountdownPercent:(double)arg1 animated:(bool)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)setFloatValue:(double)arg1 forRingGroupPropertyType:(unsigned long long)arg2 animated:(bool)arg3 duration:(double)arg4 completion:(id /* block */)arg5;
- (void)setRingDiameter:(double)arg1 animated:(bool)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)setRingThickness:(double)arg1 animated:(bool)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2;
- (void)setTrackOpacity:(double)arg1 animated:(bool)arg2 duration:(double)arg3 completion:(id /* block */)arg4;

@end
