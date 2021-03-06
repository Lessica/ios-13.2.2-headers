/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNCreateSceneprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (nonatomic) bool returnAllResults;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedImageSizeSet;
@property (nonatomic) bool useCenterTileOnly;

+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;
+ (bool)supportsPrivateRevision:(unsigned long long)arg1;

- (id)_applicableDetectorAndReturnError:(id*)arg1;
- (id)_applicableDetectorForRequestRevision:(unsigned long long)arg1 applicableDetectorOptions:(id*)arg2 error:(id*)arg3;
- (id)_detectorTypeForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)description;
- (bool)hasCancellationHook;
- (unsigned long long)imageCropAndScaleOption;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1;
- (bool)returnAllResults;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (void)setReturnAllResults:(bool)arg1;
- (void)setUseCenterTileOnly:(bool)arg1;
- (id)supportedImageSizeSet;
- (bool)useCenterTileOnly;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

@end
