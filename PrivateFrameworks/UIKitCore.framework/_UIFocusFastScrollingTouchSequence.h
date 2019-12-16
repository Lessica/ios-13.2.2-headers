/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusFastScrollingTouchSequence : NSObject {
    struct CGVector { 
        double dx; 
        double dy; 
    }  _axisLockedDistanceAccumulator;
    bool  _didReceiveProgrammaticFocusUpdate;
    bool  _didReceiveSpatialFocusUpdate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endLocation;
    double  _peakSpeed;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousLocation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startLocation;
}

@property (nonatomic) struct CGVector { double x1; double x2; } axisLockedDistanceAccumulator;
@property (nonatomic) bool didReceiveProgrammaticFocusUpdate;
@property (nonatomic) bool didReceiveSpatialFocusUpdate;
@property (nonatomic) struct CGPoint { double x1; double x2; } endLocation;
@property (nonatomic) double peakSpeed;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousLocation;
@property (nonatomic) struct CGPoint { double x1; double x2; } startLocation;

- (struct CGVector { double x1; double x2; })axisLockedDistanceAccumulator;
- (bool)didReceiveProgrammaticFocusUpdate;
- (bool)didReceiveSpatialFocusUpdate;
- (struct CGPoint { double x1; double x2; })endLocation;
- (double)peakSpeed;
- (struct CGPoint { double x1; double x2; })previousLocation;
- (void)setAxisLockedDistanceAccumulator:(struct CGVector { double x1; double x2; })arg1;
- (void)setDidReceiveProgrammaticFocusUpdate:(bool)arg1;
- (void)setDidReceiveSpatialFocusUpdate:(bool)arg1;
- (void)setEndLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPeakSpeed:(double)arg1;
- (void)setPreviousLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setStartLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startLocation;

@end
