/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFInfiniteImpulseResponseFilter : NSObject {
    unsigned long long  _count;
    double * _fbC;
    double * _ffC;
    double * _inputHistory;
    double * _outputHistory;
    double  _zeroGradientThreshold;
}

@property (nonatomic) double zeroGradientThreshold;

+ (id)lowpassFilterWithCoefficient:(double)arg1;
+ (id)lowpassInertiaFilterWithCoefficient:(double)arg1;

- (void)dealloc;
- (double)filterWithInput:(double)arg1;
- (id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3;
- (double)output;
- (double)outputGradient;
- (void)resetToValue:(double)arg1;
- (void)setLowpassInertiaFilterCoefficient:(double)arg1;
- (void)setZeroGradientThreshold:(double)arg1;
- (bool)zeroGradient;
- (double)zeroGradientThreshold;

@end
