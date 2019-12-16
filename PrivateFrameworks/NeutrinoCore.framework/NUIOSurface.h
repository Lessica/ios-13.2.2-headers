/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUIOSurface : NSObject {
    struct __IOSurface { } * _IOSurfaceRef;
    NUPixelFormat * _format;
    NUPixelFormat * _internalFormat;
    struct { 
        long long width; 
        long long height; 
    }  _size;
}

@property (nonatomic, readonly) IOSurface *IOSurface;
@property (nonatomic, readonly) struct __IOSurface { }*IOSurfaceRef;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (nonatomic, readonly) NUPixelFormat *internalFormat;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) long long rowBytes;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (nonatomic, readonly) long long sizeInBytes;

+ (id)_internalFormatForPixelFormat:(id)arg1;

- (void).cxx_destruct;
- (id)IOSurface;
- (struct __IOSurface { }*)IOSurfaceRef;
- (void)_allocateSurface;
- (int)_fetchPurgeState:(unsigned int*)arg1;
- (unsigned int)_purgeLevelToOSValue:(long long)arg1;
- (id)_purgeStateDescription;
- (void)dealloc;
- (id)description;
- (id)format;
- (id)init;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (id)internalFormat;
- (bool)isPurged;
- (bool)makeNonPurgeable;
- (void)makePurgeable:(long long)arg1;
- (id)name;
- (id)newRenderDestination;
- (bool)read:(id /* block */)arg1;
- (long long)rowBytes;
- (void)setName:(id)arg1;
- (struct { long long x1; long long x2; })size;
- (long long)sizeInBytes;
- (bool)write:(id /* block */)arg1;

@end
