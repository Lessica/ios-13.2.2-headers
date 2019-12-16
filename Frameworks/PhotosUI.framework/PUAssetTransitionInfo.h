/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetTransitionInfo : NSObject {
    <PUDisplayAsset> * _asset;
    NSArray * _badgeTransitionInfos;
    PUPhotoViewContentHelper * _contentHelper;
    double  _cornerRadius;
    NSArray * _filters;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    UIImage * _image;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekTime;
    UIView * _snapshotView;
}

@property (nonatomic, retain) <PUDisplayAsset> *asset;
@property (nonatomic, copy) NSArray *badgeTransitionInfos;
@property (nonatomic, retain) PUPhotoViewContentHelper *contentHelper;
@property (nonatomic) double cornerRadius;
@property (setter=_setFilters:, nonatomic, copy) NSArray *filters;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (setter=_setImage:, nonatomic, retain) UIImage *image;
@property (setter=_setSeekTime:, nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } seekTime;
@property (setter=_setSnapshotView:, nonatomic, retain) UIView *snapshotView;

+ (id)assetTransitionInfoWithImage:(id)arg1;
+ (id)assetTransitionInfoWithImage:(id)arg1 andSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
+ (id)assetTransitionInfoWithImage:(id)arg1 filters:(id)arg2;
+ (id)assetTransitionInfoWithImage:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)assetTransitionInfoWithSnapshotView:(id)arg1;

- (void).cxx_destruct;
- (void)_setFilters:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setSeekTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setSnapshotView:(id)arg1;
- (id)asset;
- (id)badgeTransitionInfos;
- (id)contentHelper;
- (double)cornerRadius;
- (id)filters;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)image;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekTime;
- (void)setAsset:(id)arg1;
- (void)setBadgeTransitionInfos:(id)arg1;
- (void)setContentHelper:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snapshotView;

@end
