/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKImageProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accessibilityLabel;
    bool  _finalized;
    UIImage * _foregroundAccentImage;
    UIColor * _foregroundAccentImageColor;
    bool  _foregroundAccentImageTinted;
    id /* block */  _imageViewCreationHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    UIImage * _onePieceImage;
    UIColor * _tintColor;
    UIImage * _twoPieceImageBackground;
    UIImage * _twoPieceImageForeground;
}

@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic, retain) UIImage *foregroundAccentImage;
@property (nonatomic, retain) UIColor *foregroundAccentImageColor;
@property (getter=isForegroundAccentImageTinted, nonatomic) bool foregroundAccentImageTinted;
@property (nonatomic, copy) id /* block */ imageViewCreationHandler;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, retain) UIImage *onePieceImage;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UIImage *twoPieceImageBackground;
@property (nonatomic, retain) UIImage *twoPieceImageForeground;

+ (id)imageProviderWithImageViewCreationHandler:(id /* block */)arg1;
+ (id)imageProviderWithOnePieceImage:(id)arg1;
+ (id)imageProviderWithOnePieceImage:(id)arg1 twoPieceImageBackground:(id)arg2 twoPieceImageForeground:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_resizeImagesIfNecessaryAndMaskToCircle:(bool)arg1;
- (void)_resizeImagesIfNecessaryWithCornerRadius:(double)arg1;
- (id)accessibilityLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeWithMaxSize:(struct CGSize { double x1; double x2; })arg1 cornerRadius:(double)arg2;
- (void)finalizeWithMaxSize:(struct CGSize { double x1; double x2; })arg1 maskToCircle:(bool)arg2;
- (id)foregroundAccentImage;
- (id)foregroundAccentImageColor;
- (unsigned long long)hash;
- (id /* block */)imageViewCreationHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isForegroundAccentImageTinted;
- (struct CGSize { double x1; double x2; })maxSize;
- (id)onePieceImage;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setForegroundAccentImage:(id)arg1;
- (void)setForegroundAccentImageColor:(id)arg1;
- (void)setForegroundAccentImageTinted:(bool)arg1;
- (void)setImageViewCreationHandler:(id /* block */)arg1;
- (void)setOnePieceImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTwoPieceImageBackground:(id)arg1;
- (void)setTwoPieceImageForeground:(id)arg1;
- (id)tintColor;
- (id)twoPieceImageBackground;
- (id)twoPieceImageForeground;
- (void)validate;

@end
