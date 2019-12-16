/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUIOSurfaceStorage : _NUAbstractBufferStorage <NUPurgeableStorage, NUSurfaceStorage> {
    long long  _purgeLevel;
    bool  _purgeable;
    NUIOSurface * _surface;
    NUGLTexture * _texture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct { long long x1; long long x2; } size;
@property (readonly) long long sizeInBytes;
@property (readonly) Class superclass;
@property (readonly) NURegion *validRegion;

- (void).cxx_destruct;
- (void)_allocateSurface;
- (id)_texture;
- (void)adjustPurgeLevel:(long long)arg1;
- (long long)copyFromStorage:(id)arg1 region:(id)arg2;
- (id)description;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (id)initWithSurface:(id)arg1;
- (bool)isPurgeable;
- (bool)isPurged;
- (bool)makeNonPurgeable;
- (void)makePurgeable;
- (long long)purgeLevel;
- (long long)readBufferInRegion:(id)arg1 block:(id /* block */)arg2;
- (long long)readSurfaceInRegion:(id)arg1 block:(id /* block */)arg2;
- (long long)readTextureInRegion:(id)arg1 block:(id /* block */)arg2;
- (long long)rowBytes;
- (long long)sizeInBytes;
- (long long)useAsCIImageWithOptions:(id)arg1 renderer:(id)arg2 block:(id /* block */)arg3;
- (long long)useAsCIRenderDestinationWithRenderer:(id)arg1 block:(id /* block */)arg2;
- (long long)writeBufferInRegion:(id)arg1 block:(id /* block */)arg2;
- (long long)writeSurfaceInRegion:(id)arg1 block:(id /* block */)arg2;
- (long long)writeTextureInRegion:(id)arg1 block:(id /* block */)arg2;

@end
