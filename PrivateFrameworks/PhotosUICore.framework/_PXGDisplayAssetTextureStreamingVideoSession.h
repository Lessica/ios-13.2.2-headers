/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXGDisplayAssetTextureStreamingVideoSession : NSObject {
    <PXGDisplayAssetPixelBufferSource> * _pixelBufferSource;
    NSMutableIndexSet * _textureRequestIDs;
}

@property (nonatomic, readonly) <PXGDisplayAssetPixelBufferSource> *pixelBufferSource;
@property (nonatomic, readonly, copy) NSIndexSet *textureRequestIDs;

- (void).cxx_destruct;
- (void)addTextureRequestID:(int)arg1;
- (id)initWithPixelBufferSource:(id)arg1;
- (id)pixelBufferSource;
- (void)removeTextureRequestID:(int)arg1;
- (void)removeTextureRequestIDs:(id)arg1;
- (id)textureRequestIDs;

@end
