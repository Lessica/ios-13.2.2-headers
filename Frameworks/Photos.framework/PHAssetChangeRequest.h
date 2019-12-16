/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetChangeRequest : PHChangeRequest <PHUpdateChangeRequest> {
    float  _activityScore;
    bool  _allowUnsafeSetProcessed;
    NSDate * _alternateImportImageDate;
    NSMutableDictionary * _analysisStatesByWorkerType;
    NSString * _assetDescription;
    short  _audioClassification;
    float  _autoplaySuggestionScore;
    NSData * _bestKeyFrameJPEGData;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _bestKeyFrameTime;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _bestVideoTimeRange;
    float  _blurrinessScore;
    NSString * _clientBundleID;
    bool  _clientEntitled;
    int  _clientProcessIdentifier;
    NSMutableDictionary * _computedAttributeMutations;
    PHContentEditingOutput * _contentEditingOutput;
    bool  _didChangeAdjustments;
    bool  _didExpungeAllSpatialOverCaptureResources;
    bool  _didExpungeTrashedSpatialOverCaptureResources;
    bool  _didModifyComputedAttributes;
    bool  _didRemoveFromPhotoStream;
    bool  _didRevertLocationToOriginal;
    bool  _didSetActivityScore;
    bool  _didSetAudioClassification;
    bool  _didSetAutoplaySuggestionScore;
    bool  _didSetBlurrinessScore;
    bool  _didSetExposureScore;
    bool  _didSetFaceCount;
    bool  _didSetKeywordTitles;
    bool  _didSetMediaAnalysisTimeStamp;
    bool  _didSetMediaAnalysisVersion;
    bool  _didSetOriginalResourceChoice;
    bool  _didSetPackedAcceptableCropRect;
    bool  _didSetPackedBestPlaybackRect;
    bool  _didSetPackedPreferredCropRect;
    bool  _didSetReframeVariation;
    bool  _didSetReverseLocationData;
    bool  _didSetReverseLocationDataIsValid;
    bool  _didSetSceneClassifications;
    bool  _didSetSceneprintData;
    bool  _didSetShiftedLocation;
    bool  _didSetTimeZone;
    bool  _didSetTitle;
    bool  _didSetVariationSuggestionStates;
    bool  _didSetVideoScore;
    bool  _didSetVisibilityState;
    bool  _didTrashAllSpatialOverCaptureResources;
    bool  _didUnsetBestKeyFrameTime;
    bool  _didUntrashAllSpatialOverCaptureResources;
    NSData * _distanceIdentity;
    bool  _duplicateAllowsPrivateMetadata;
    NSString * _editorBundleID;
    NSURL * _editorBundleURL;
    float  _exposureScore;
    unsigned long long  _faceCount;
    PHRelationshipChangeRequestHelper * _facesHelper;
    bool  _hideNonPrimaryAssetsInAssetGroup;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _imageDisplayTime;
    bool  _incrementPlayCount;
    bool  _incrementShareCount;
    bool  _incrementViewCount;
    NSSet * _keywordTitles;
    PHRelationshipChangeRequestHelper * _keywordsHelper;
    NSDate * _lastSharedDate;
    NSDate * _mediaAnalysisTimeStamp;
    unsigned long long  _mediaAnalysisVersion;
    PHAsset * _originalAsset;
    unsigned long long  _originalResourceChoice;
    long long  _packedAcceptableCropRect;
    long long  _packedBestPlaybackRect;
    long long  _packedPreferredCropRect;
    NSString * _pairingIdentifier;
    bool  _performReframe;
    unsigned short  _photoIrisVisibilityState;
    unsigned long long  _reframeVariation;
    bool  _revealNonPrimaryAssetsInAssetGroup;
    NSData * _reverseLocationData;
    bool  _reverseLocationDataIsValid;
    NSDate * _sceneAnalysisTimestamp;
    short  _sceneAnalysisVersion;
    NSSet * _sceneClassifications;
    NSData * _sceneprintData;
    CLLocation * _shiftedLocation;
    NSIndexSet * _supportedEditOperations;
    float  _testScore;
    NSString * _timeZoneName;
    long long  _timeZoneOffsetValue;
    NSString * _title;
    bool  _toRetryUpload;
    CLLocation * _updatedLocation;
    unsigned long long  _variationSuggestionStates;
    unsigned long long  _variationSuggestionStatesMask;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
    float  _videoScore;
    NSURL * _videoURLForUpdate;
}

@property (nonatomic) float activityScore;
@property (nonatomic, retain) NSDate *alternateImportImageDate;
@property (nonatomic, retain) NSString *assetDescription;
@property (nonatomic) short audioClassification;
@property (nonatomic) float autoplaySuggestionScore;
@property (nonatomic) float behavioralScore;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } bestVideoTimeRange;
@property (nonatomic) float blurrinessScore;
@property (nonatomic, readonly, copy) NSString *clientBundleID;
@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, retain) PHContentEditingOutput *contentEditingOutput;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) double curationScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didChangeAdjustments;
@property (nonatomic, readonly) bool duplicateAllowsPrivateMetadata;
@property (nonatomic, readonly, copy) NSString *editorBundleID;
@property (nonatomic) float exposureScore;
@property (nonatomic, retain) id faceAdjustmentVersion;
@property (nonatomic) unsigned long long faceCount;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *facesHelper;
@property (nonatomic) float failureScore;
@property (getter=isFavorite, nonatomic) bool favorite;
@property (nonatomic) float harmoniousColorScore;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) double highlightPromotionScore;
@property (nonatomic) double highlightVisibilityScore;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } imageDisplayTime;
@property (nonatomic) float immersivenessScore;
@property (nonatomic) float interactionScore;
@property (nonatomic) float interestingSubjectScore;
@property (nonatomic) float intrusiveObjectPresenceScore;
@property (nonatomic, copy) NSSet *keywordTitles;
@property (nonatomic) float livelyColorScore;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) float lowLight;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, retain) NSDate *mediaAnalysisTimeStamp;
@property (nonatomic) unsigned long long mediaAnalysisVersion;
@property (nonatomic, retain) NSDate *modificationDate;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic) float noiseScore;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic) unsigned long long originalResourceChoice;
@property (nonatomic) float overallAestheticScore;
@property (nonatomic, retain) NSString *pairingIdentifier;
@property (nonatomic) unsigned short photoIrisVisibilityState;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedAsset;
@property (nonatomic) float pleasantCameraTiltScore;
@property (nonatomic) float pleasantCompositionScore;
@property (nonatomic) float pleasantLightingScore;
@property (nonatomic) float pleasantPatternScore;
@property (nonatomic) float pleasantPerspectiveScore;
@property (nonatomic) float pleasantPostProcessingScore;
@property (nonatomic) float pleasantReflectionsScore;
@property (nonatomic) float pleasantSymmetryScore;
@property (nonatomic) unsigned long long reframeVariation;
@property (nonatomic, retain) NSData *reverseLocationData;
@property (nonatomic) bool reverseLocationDataIsValid;
@property (nonatomic, retain) NSData *sceneprintData;
@property (nonatomic) float sharplyFocusedSubjectScore;
@property (nonatomic, retain) CLLocation *shiftedLocation;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSIndexSet *supportedEditOperations;
@property (nonatomic) float tastefullyBlurredScore;
@property (nonatomic) float testScore;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } videoDuration;
@property (nonatomic) float videoScore;
@property (nonatomic, retain) NSURL *videoURLForUpdate;
@property (nonatomic) float wellChosenSubjectScore;
@property (nonatomic) float wellFramedSubjectScore;
@property (nonatomic) float wellTimedShotScore;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_allAssetEditOperations;
+ (void)_deleteAssets:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;
+ (id)changeRequestForAsset:(id)arg1;
+ (id)changeRequestForAssetFromVideoFileURL:(id)arg1 imageAsset:(id)arg2 displayTime:(double)arg3;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (void)deleteAssets:(id)arg1;
+ (void)expungeAssets:(id)arg1;
+ (void)undeleteAssets:(id)arg1;

- (void).cxx_destruct;
- (id)_existentKeywordObjectIDs;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (id)_mutableKeywordObjectIDsAndUUIDs;
- (void)_prepareFaceIDsIfNeeded;
- (void)_prepareFacesHelperWithFetchResult:(id)arg1;
- (void)_setOriginalAsset:(id)arg1;
- (bool)_validateAndGenerateStillImageForLoopingLivePhotoWithContentEditingOutput:(id)arg1 error:(id*)arg2;
- (bool)_validateAsyncContentEditingOutputPreviewRenderURLs:(id)arg1 error:(id*)arg2;
- (bool)_validateImageURLForAssetMutation:(id)arg1 error:(id*)arg2;
- (float)activityScore;
- (void)addFaces:(id)arg1;
- (void)addKeywords:(id)arg1;
- (id)alternateImportImageDate;
- (bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (id)assetDescription;
- (short)audioClassification;
- (float)autoplaySuggestionScore;
- (float)behavioralScore;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })bestVideoTimeRange;
- (float)blurrinessScore;
- (id)clientBundleID;
- (id)contentEditingOutput;
- (id)creationDate;
- (double)curationScore;
- (bool)didChangeAdjustments;
- (bool)duplicateAllowsPrivateMetadata;
- (id)editorBundleID;
- (void)encodeToXPCDict:(id)arg1;
- (float)exposureScore;
- (void)expungeAllSpatialOverCaptureResources;
- (void)expungeTrashedSpatialOverCaptureResources;
- (id)faceAdjustmentVersion;
- (unsigned long long)faceCount;
- (id)facesHelper;
- (float)failureScore;
- (id)getMediaAnalysisAttributesForAsset:(id)arg1;
- (float)harmoniousColorScore;
- (void)hideNonPrimaryAssetsInAssetGroup;
- (double)highlightPromotionScore;
- (double)highlightVisibilityScore;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })imageDisplayTime;
- (float)immersivenessScore;
- (void)incrementPlayCount;
- (void)incrementShareCount;
- (void)incrementViewCount;
- (id)init;
- (id)initWithHelper:(id)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (float)interactionScore;
- (float)interestingSubjectScore;
- (float)intrusiveObjectPresenceScore;
- (bool)isFavorite;
- (bool)isHidden;
- (bool)isHiding;
- (bool)isRevertingContentToOriginal;
- (id)keywordTitles;
- (float)livelyColorScore;
- (id)location;
- (float)lowLight;
- (id)managedEntityName;
- (void)markDidChangeAdjustments;
- (id)mediaAnalysisTimeStamp;
- (unsigned long long)mediaAnalysisVersion;
- (id)modificationDate;
- (float)noiseScore;
- (unsigned long long)originalResourceChoice;
- (float)overallAestheticScore;
- (id)pairingIdentifier;
- (void)performReframe;
- (unsigned short)photoIrisVisibilityState;
- (id)placeholderForCreatedAsset;
- (float)pleasantCameraTiltScore;
- (float)pleasantCompositionScore;
- (float)pleasantLightingScore;
- (float)pleasantPatternScore;
- (float)pleasantPerspectiveScore;
- (float)pleasantPostProcessingScore;
- (float)pleasantReflectionsScore;
- (float)pleasantSymmetryScore;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (unsigned long long)reframeVariation;
- (void)removeFaces:(id)arg1;
- (void)removeFromMyPhotoStream;
- (void)removeKeywords:(id)arg1;
- (void)retryUpload;
- (void)revealNonPrimaryAssetsInAssetGroup;
- (id)reverseLocationData;
- (bool)reverseLocationDataIsValid;
- (void)revertAssetContentToOriginal;
- (void)revertLocationToOriginal;
- (id)sceneprintData;
- (void)setAcceptableCropRectWithNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setActivityScore:(float)arg1;
- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(bool)arg5 fullSizeRenderSize:(struct CGSize { double x1; double x2; })arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8;
- (void)setAdjustmentData:(id)arg1 withRenderedJPEGData:(id)arg2 orRenderedContentURL:(id)arg3 penultimateRenderedJPEGData:(id)arg4 isSubstandardRender:(bool)arg5 fullSizeRenderSize:(struct CGSize { double x1; double x2; })arg6 renderedVideoComplementURL:(id)arg7 penultimateRenderedVideoComplementURL:(id)arg8 optionalOriginalResourceChoice:(id)arg9;
- (void)setAlternateImportImageDate:(id)arg1;
- (void)setAnalysisState:(int)arg1 lastIgnoredDate:(id)arg2 ignoreUntilDate:(id)arg3 forWorkerType:(short)arg4;
- (void)setAnalysisState:(int)arg1 lastIgnoredDate:(id)arg2 ignoreUntilDate:(id)arg3 forWorkerType:(short)arg4 allowUnsafeSetProcessed:(bool)arg5;
- (void)setAssetDescription:(id)arg1;
- (void)setAudioClassification:(short)arg1;
- (void)setAutoplaySuggestionScore:(float)arg1;
- (void)setBehavioralScore:(float)arg1;
- (void)setBestKeyFrame:(struct CGImage { }*)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setBestPlaybackRectWithNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBestVideoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setBlurrinessScore:(float)arg1;
- (void)setContentEditingOutput:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCurationScore:(double)arg1;
- (void)setExposureScore:(float)arg1;
- (void)setFaceAdjustmentVersion:(id)arg1;
- (void)setFaceCount:(unsigned long long)arg1;
- (void)setFailureScore:(float)arg1;
- (void)setFavorite:(bool)arg1;
- (void)setHarmoniousColorScore:(float)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHighlightPromotionScore:(double)arg1;
- (void)setHighlightVisibilityScore:(double)arg1;
- (void)setImageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setImmersivenessScore:(float)arg1;
- (void)setInteractionScore:(float)arg1;
- (void)setInterestingSubjectScore:(float)arg1;
- (void)setIntrusiveObjectPresenceScore:(float)arg1;
- (void)setKeywordTitles:(id)arg1;
- (void)setLivelyColorScore:(float)arg1;
- (void)setLocation:(id)arg1;
- (void)setLowLight:(float)arg1;
- (void)setMediaAnalysisTimeStamp:(id)arg1;
- (void)setMediaAnalysisVersion:(unsigned long long)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNoiseScore:(float)arg1;
- (void)setOriginalResourceChoice:(unsigned long long)arg1;
- (void)setOverallAestheticScore:(float)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setPhotoIrisVisibilityState:(unsigned short)arg1;
- (void)setPleasantCameraTiltScore:(float)arg1;
- (void)setPleasantCompositionScore:(float)arg1;
- (void)setPleasantLightingScore:(float)arg1;
- (void)setPleasantPatternScore:(float)arg1;
- (void)setPleasantPerspectiveScore:(float)arg1;
- (void)setPleasantPostProcessingScore:(float)arg1;
- (void)setPleasantReflectionsScore:(float)arg1;
- (void)setPleasantSymmetryScore:(float)arg1;
- (void)setPreferredCropRectWithNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRectWithNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPackedRect:(long long*)arg2 forSetFlag:(bool*)arg3;
- (void)setReframeVariation:(unsigned long long)arg1;
- (void)setReverseLocationData:(id)arg1;
- (void)setReverseLocationDataIsValid:(bool)arg1;
- (void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 adjustmentVersion:(id)arg3;
- (void)setSceneClassifications:(id)arg1 algorithmVersion:(long long)arg2 distanceIdentity:(id)arg3 adjustmentVersion:(id)arg4;
- (void)setSceneprintData:(id)arg1;
- (void)setSharplyFocusedSubjectScore:(float)arg1;
- (void)setShiftedLocation:(id)arg1;
- (void)setSupportedEditOperations:(id)arg1;
- (void)setTastefullyBlurredScore:(float)arg1;
- (void)setTestScore:(float)arg1;
- (void)setTimeZone:(id)arg1 withDate:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setVariationSuggestionStates:(unsigned long long)arg1 forVariationType:(unsigned long long)arg2;
- (void)setVideoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoScore:(float)arg1;
- (void)setVideoURLForUpdate:(id)arg1;
- (void)setWellChosenSubjectScore:(float)arg1;
- (void)setWellFramedSubjectScore:(float)arg1;
- (void)setWellTimedShotScore:(float)arg1;
- (float)sharplyFocusedSubjectScore;
- (id)shiftedLocation;
- (id)supportedEditOperations;
- (float)tastefullyBlurredScore;
- (float)testScore;
- (id)title;
- (void)trashAllSpatialOverCaptureResources;
- (void)untrashAllSpatialOverCaptureResources;
- (bool)validateAdjustmentDataForAssetMutation:(id)arg1 error:(id*)arg2;
- (bool)validateAssetDescription:(id)arg1 error:(id*)arg2;
- (bool)validateContentEditingOutput:(id)arg1 error:(id*)arg2;
- (bool)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2;
- (bool)validateReadAccessForContentURL:(id)arg1 assetResource:(id)arg2 error:(id*)arg3;
- (bool)validateVideoURLForAssetMutation:(id)arg1 error:(id*)arg2;
- (bool)validateWriteAccessForContentURL:(id)arg1 error:(id*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;
- (float)videoScore;
- (id)videoURLForUpdate;
- (float)wellChosenSubjectScore;
- (float)wellFramedSubjectScore;
- (float)wellTimedShotScore;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_changeRequestForSettingRecommendationSeen:(bool)arg1 variationType:(long long)arg2 asset:(id)arg3;

@end
