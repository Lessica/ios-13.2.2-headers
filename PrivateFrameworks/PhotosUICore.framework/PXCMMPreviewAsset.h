/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPreviewAsset : NSObject <PXDisplayAsset> {
    UIImage * _cachedImage;
    PHMomentShare * _momentShare;
    PHAsset * _underlyingAsset;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) unsigned long long burstSelectionTypes;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) bool favorite;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float hdrGain;
@property (nonatomic, readonly) NSDate *importDate;
@property (nonatomic, readonly) bool isEligibleForAutoPlayback;
@property (nonatomic, readonly) bool isInCloud;
@property (nonatomic, readonly) bool isPreviewImageDataAvailable;
@property (nonatomic, readonly) NSDate *localCreationDate;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) unsigned long long mediaSubtypes;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) long long playbackStyle;
@property (nonatomic, readonly) long long playbackVariation;
@property (nonatomic, readonly) UIImage *previewImage;
@property (nonatomic, readonly) NSData *previewImageData;
@property (nonatomic, readonly) bool representsBurst;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long thumbnailIndex;
@property (nonatomic, readonly) unsigned long long thumbnailVersion;
@property (nonatomic, readonly) PHAsset *underlyingAsset;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (double)aspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (Class)defaultImageProviderClass;
- (id)init;
- (id)initWithMomentShare:(id)arg1 underlyingAsset:(id)arg2;
- (long long)isContentEqualTo:(id)arg1;
- (bool)isEligibleForAutoPlayback;
- (bool)isFavorite;
- (bool)isInCloud;
- (bool)isPreviewImageDataAvailable;
- (id)localCreationDate;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)momentShare;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (long long)playbackVariation;
- (id)previewImage;
- (id)previewImageData;
- (bool)representsBurst;
- (struct CGSize { double x1; double x2; })size;
- (unsigned long long)thumbnailIndex;
- (id)underlyingAsset;

@end
