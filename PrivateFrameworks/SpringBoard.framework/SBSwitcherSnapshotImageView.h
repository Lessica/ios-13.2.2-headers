/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSwitcherSnapshotImageView : UIView {
    double  _cornerRadius;
    bool  _hasOpaqueContents;
    UIImageView * _imageView;
    unsigned long long  _maskedCorners;
    long long  _orientationForClassicLayout;
    UIView * _scalingView;
    bool  _usesNonuniformScaling;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) bool hasOpaqueContents;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) long long orientationForClassicLayout;
@property (nonatomic) bool usesNonuniformScaling;

- (void).cxx_destruct;
- (bool)_isUsingExternalClassicLayout;
- (double)_transformHorizontalScale;
- (double)_transformScale;
- (double)_transformVerticalScale;
- (void)_updateCornerRadius;
- (double)cornerRadius;
- (bool)hasOpaqueContents;
- (id)image;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (unsigned long long)maskedCorners;
- (long long)orientationForClassicLayout;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })scalingTransform;
- (void)setCornerRadius:(double)arg1;
- (void)setHasOpaqueContents:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (void)setOrientationForClassicLayout:(long long)arg1;
- (void)setUsesNonuniformScaling:(bool)arg1;
- (bool)usesNonuniformScaling;

@end
