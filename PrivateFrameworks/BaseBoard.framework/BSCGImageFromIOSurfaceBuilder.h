/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSCGImageFromIOSurfaceBuilder : NSObject {
    struct CGImage { } * _image;
    bool  _isDirty;
    bool  _isOpaque;
    IOSurface * _surface;
}

@property (getter=isOpaque, nonatomic, readonly) bool opaque;

- (void).cxx_destruct;
- (struct CGImage { }*)_buildImage;
- (id)_surface;
- (struct CGImage { }*)buildCGImage;
- (void)dealloc;
- (id)initWithIOSurface:(id)arg1;
- (bool)isOpaque;
- (id)setOpaque:(bool)arg1;

@end
