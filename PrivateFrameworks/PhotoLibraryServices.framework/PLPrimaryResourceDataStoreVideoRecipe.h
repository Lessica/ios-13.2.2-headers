/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe {
    unsigned int  _recipeID;
}

@property (nonatomic) unsigned int recipeID;

- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned int)arg2 conversionClient:(id)arg3 isHighPriority:(bool)arg4 progress:(id*)arg5 completion:(id /* block */)arg6;
- (id)_localAvailabileResourceForAsset:(id)arg1 cplType:(unsigned long long)arg2;
- (id)_mediaConversionServiceOptionsForAsset:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(bool)arg4;
- (id)chooseIngredientsFrom:(id)arg1 version:(unsigned int)arg2;
- (id)codecInContext:(id)arg1;
- (id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2;
- (id)description;
- (id)expectedFileURLForVersion:(unsigned int)arg1 asset:(id)arg2;
- (void)generateAndStoreForAsset:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 progress:(id*)arg5 completion:(id /* block */)arg6;
- (void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned int)arg2 imageConversionClient:(id)arg3 videoConversionClient:(id)arg4 isHighPriority:(bool)arg5 progress:(id*)arg6 completion:(id /* block */)arg7;
- (id)initWithRecipeID:(unsigned int)arg1;
- (bool)isMarkedFullSize;
- (unsigned int)recipeID;
- (void)setRecipeID:(unsigned int)arg1;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)utiInContext:(id)arg1;

@end
