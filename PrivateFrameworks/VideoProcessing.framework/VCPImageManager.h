/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageManager : NSObject {
    NSObject<OS_dispatch_queue> * _decodeQueue;
    struct FigPhotoDecompressionSession { } * _decodeSession;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
}

+ (bool)canDecodeAcceleratedUniformTypeIdentifier:(id)arg1;
+ (bool)loggingEnabled;
+ (id)sharedImageManager;

- (void).cxx_destruct;
- (int)acceleratedDecodeImageData:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4 flushCache:(bool)arg5;
- (int)convertPixelBuffer:(struct __CVBuffer {}**)arg1 toPixelFormat:(int)arg2;
- (int)createPixelBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(int)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (id)dataForResource:(id)arg1;
- (void)dealloc;
- (int)decodeImageSource:(struct CGImageSource { }*)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (int)drawImage:(struct CGImage { }*)arg1 withOrientation:(unsigned int)arg2 maxDimension:(unsigned long long)arg3 pixelBuffer:(struct __CVBuffer {}**)arg4;
- (void)flushCache;
- (struct __CVBuffer { }*)imageForResource:(id)arg1 pixelFormat:(int)arg2;
- (struct __CVBuffer { }*)imageForResource:(id)arg1 pixelFormat:(int)arg2 maxDimension:(unsigned long long)arg3;
- (id)init;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromData:(id)arg3 withUniformTypeIdentifier:(id)arg4 flushCache:(bool)arg5;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 andMaxDimension:(unsigned long long)arg2 fromImageURL:(id)arg3;
- (struct __CVBuffer { }*)pixelBufferWithFormat:(int)arg1 fromImageURL:(id)arg2 flushCache:(bool)arg3;

@end
