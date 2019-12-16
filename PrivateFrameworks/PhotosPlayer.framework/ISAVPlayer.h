/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISAVPlayer : AVPlayer {
    ISRateCurveRequest * _currentRequest;
}

- (void).cxx_destruct;
- (void)_cancelRateCurveRequest;
- (void)_setRate:(float)arg1;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (void)playToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(id /* block */)arg4;
- (void)setRate:(float)arg1;

@end
