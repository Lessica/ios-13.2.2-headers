/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLivePhotoTrimScrubberLoupeView : UIView {
    AVAsset * _asset;
    CAShapeLayer * _borderLayer;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest * _currentImageRequest;
    bool  _imageIsValid;
    UIImageView * _imageView;
    double  _innerCornerRadius;
    double  _outerCornerRadius;
    UIView * _playerView;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sourceTime;
    AVVideoComposition * _videoComposition;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, copy) AVAsset *asset;
@property (nonatomic) double innerCornerRadius;
@property (nonatomic) double outerCornerRadius;
@property (nonatomic, retain) UIView *playerView;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sourceTime;
@property (nonatomic, copy) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
- (void)_extractImageFromImageRequest:(id)arg1;
- (void)_invalidateImage;
- (void)_presentImage:(id)arg1 forSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_updateBorderLayerPath;
- (void)_updateImageIfNeeded;
- (id)asset;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)innerCornerRadius;
- (void)layoutSubviews;
- (double)outerCornerRadius;
- (id)playerView;
- (void)reloadImage;
- (void)setAsset:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInnerCornerRadius:(double)arg1;
- (void)setOuterCornerRadius:(double)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoComposition:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sourceTime;
- (id)videoComposition;

@end
