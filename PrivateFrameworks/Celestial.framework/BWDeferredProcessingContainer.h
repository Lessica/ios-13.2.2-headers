/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeferredProcessingContainer : BWDeferredContainerBase {
    unsigned int  _ageSeconds;
    bool  _isRemote;
    BWPhotoManifest * _photoManifest;
    unsigned long long  _sizeBytes;
}

@property (nonatomic, readonly) unsigned int ageSeconds;
@property (nonatomic, readonly) bool isRemote;
@property (nonatomic, readonly) BWPhotoManifest *photoManifest;
@property (nonatomic, readonly) unsigned long long sizeBytes;

+ (int)verifyManifestURLSize:(id)arg1;
+ (int)verifyPhotos:(id)arg1;

- (struct __CVBuffer { }*)_bufferForURL:(id)arg1 attributesIndex:(unsigned int)arg2 err:(int*)arg3;
- (int)_buildFolderStatistics;
- (int)_buildRemoteStatistics;
- (int)_createCVPixelBufferFromAttributes:(id)arg1 pixelBuffer:(struct __CVBuffer {}**)arg2;
- (id)_intermediateForTag:(id)arg1 type:(int)arg2 classes:(id)arg3 err:(int*)arg4;
- (unsigned int)ageSeconds;
- (id)arrayForTag:(id)arg1 classes:(id)arg2 err:(int*)arg3;
- (id)bufferAttributesForType:(unsigned long long)arg1 portType:(id)arg2 err:(int*)arg3;
- (struct __CVBuffer { }*)bufferForTag:(id)arg1 err:(int*)arg2;
- (struct __CVBuffer { }*)bufferForType:(unsigned long long)arg1 portType:(id)arg2 metadata:(id*)arg3 err:(int*)arg4;
- (unsigned long long)bufferTypeForTag:(id)arg1 err:(int*)arg2;
- (void)dealloc;
- (id)dictionaryForTag:(id)arg1 err:(int*)arg2;
- (bool)hasBufferForType:(unsigned long long)arg1 portType:(id)arg2;
- (id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolder:(id)arg3 err:(int*)arg4;
- (id)initWithXPCEncoding:(id)arg1 applicationID:(id)arg2 captureRequestIdentifier:(id)arg3 baseFolder:(id)arg4 err:(int*)arg5;
- (bool)isRemote;
- (id)metadataForBufferTag:(id)arg1 err:(int*)arg2;
- (id)metadataForTag:(id)arg1 err:(int*)arg2;
- (id)photoManifest;
- (unsigned long long)sizeBytes;

@end