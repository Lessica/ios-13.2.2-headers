/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIImageCGImageContent : _UIImageContent {
    /* Warning: Unrecognized filer type: '^' using 'void*' */ void* _imageRef;
}

- (struct CGImage { }*)CGImage;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (id)contentWithCGImage:(struct CGImage { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)hasCGImage;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (bool)isCGImage;
- (bool)isEqual:(id)arg1;
- (id)renditionApplyingEffect:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeInPixels;

@end
