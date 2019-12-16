/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLEditSource : NSObject {
    long long  _mediaType;
    NUResolvedSource * _resolvedSource;
}

@property (nonatomic, readonly) bool isRAWSource;
@property (nonatomic, readonly) long long mediaType;
@property (nonatomic, readonly) NUResolvedSource *resolvedSource;
@property (nonatomic, readonly, retain) NUSource *source;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (void).cxx_destruct;
- (id)description;
- (id)initWithResolvedSource:(id)arg1 mediaType:(long long)arg2;
- (bool)isRAWSource;
- (long long)mediaType;
- (id)resolvedSource;
- (void)setIdentifier:(id)arg1;
- (id)source;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)editSourceForContentEditingInput:(id)arg1 useEmbeddedPreview:(bool)arg2;
+ (id)editSourceForContentEditingInput:(id)arg1 useEmbeddedPreview:(bool)arg2 sourceKind:(unsigned long long)arg3;
+ (id)overcaptureEditSourceForContentEditingInput:(id)arg1;

@end
