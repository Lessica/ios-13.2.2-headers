/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBInteractiveScreenshotScreenEdgePanGestureRecognizer : SBScreenEdgePanGestureRecognizer {
    SBInteractiveScreenshotSettings * _settings;
    long long  _touchInterfaceOrientationWhenGestureBegan;
}

+ (bool)_shouldSupportStylusTouches;
+ (id)interactiveScreenshotScreenEdgePanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;

- (void).cxx_destruct;
- (bool)_isOrientedLocation:(struct CGPoint { double x1; double x2; })arg1 inCorner:(unsigned long long)arg2 forOrientedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 withEdgeOffsets:(struct UIOffset { double x1; double x2; })arg4;
- (long long)_touchInterfaceOrientation;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (void)reset;
- (void)setState:(long long)arg1;
- (bool)shouldReceiveTouch:(id)arg1;

@end
