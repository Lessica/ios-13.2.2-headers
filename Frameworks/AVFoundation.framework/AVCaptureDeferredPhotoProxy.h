/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeferredPhotoProxy : AVCapturePhoto {
    NSString * _captureRequestIdentifier;
    NSString * _photoIdentifier;
}

@property (readonly) NSString *deferredPhotoIdentifier;
@property (readonly, copy) NSString *persistentStorageUUID;

- (id)captureRequestIdentifier;
- (void)dealloc;
- (id)debugDescription;
- (id)deferredPhotoIdentifier;
- (id)description;
- (id)initWithDeferredPhotoIdentifier:(id)arg1;
- (id)initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 captureRequestIdentifier:(id)arg2 photoIdentifier:(id)arg3 expectedPhotoProcessingFlags:(unsigned int)arg4;
- (id)initWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 proxySurface:(struct __IOSurface { }*)arg2 proxySurfaceSize:(unsigned long long)arg3 proxyFileType:(id)arg4 previewPhotoSurface:(struct __IOSurface { }*)arg5 metadata:(id)arg6 captureRequest:(id)arg7 sequenceCount:(unsigned long long)arg8 photoCount:(unsigned long long)arg9 captureRequestIdentifier:(id)arg10 photoIdentifier:(id)arg11 expectedPhotoProcessingFlags:(unsigned int)arg12 sourceDeviceType:(id)arg13;
- (bool)isEqual:(id)arg1;
- (id)persistentStorageUUID;

@end
