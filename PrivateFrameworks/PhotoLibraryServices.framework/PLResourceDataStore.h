/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLResourceDataStore : NSObject <PLResourceDataStore> {
    unsigned long long  _nextLocalAvailabilityRequestID;
    PLPhotoLibraryPathManager * _pathManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) Class superclass;

+ (bool)isMasterThumbRecipeID:(unsigned int)arg1;
+ (bool)keyDataIsValid:(id)arg1;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)storeClassID;
+ (id)supportedRecipes;

- (void).cxx_destruct;
- (bool)canStoreExternalResource:(id)arg1;
- (bool)canStreamResource:(id)arg1;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)guessUTIForExternalResource:(id)arg1 forAssetKind:(short)arg2 managedObjectContext:(id)arg3;
- (id)initWithPathManager:(id)arg1;
- (id)keyFromKeyStruct:(const void*)arg1;
- (id)name;
- (unsigned long long)nextLocalAvailabilityRequestID;
- (id)pathManager;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(id /* block */)arg6;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(id /* block */)arg5;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id*)arg5 resultingResource:(id*)arg6;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (bool)verifyAndFixLocalAvailabilityForResource:(id)arg1 asset:(id)arg2 managedObjectContext:(id)arg3;
- (bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;

@end
