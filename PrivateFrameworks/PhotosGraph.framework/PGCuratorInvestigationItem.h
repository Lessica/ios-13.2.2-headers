/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGCuratorInvestigationItem : NSObject <CLSInvestigationItem> {
    NSNumber * _clsAestheticScore;
    NSNumber * _clsAutoplaySuggestionScore;
    NSNumber * _clsAvoidIfPossibleForKeyItem;
    NSNumber * _clsContentScore;
    NSData * _clsDistanceIdentity;
    NSNumber * _clsDuration;
    NSNumber * _clsExposureScore;
    NSNumber * _clsFaceScore;
    NSNumber * _clsHasCustomPlaybackVariation;
    NSNumber * _clsHasInterestingAudioClassification;
    NSNumber * _clsHasInterestingScenes;
    NSNumber * _clsHasPoorResolution;
    NSNumber * _clsHighlightVisibilityScore;
    NSString * _clsIdentifier;
    NSNumber * _clsInteractionScore;
    NSNumber * _clsIsAestheticallyPrettyGood;
    NSNumber * _clsIsInhabited;
    NSNumber * _clsIsInterestingHDR;
    NSNumber * _clsIsInterestingLivePhoto;
    NSNumber * _clsIsInterestingPanorama;
    NSNumber * _clsIsInterestingReframe;
    NSNumber * _clsIsInterestingSDOF;
    NSNumber * _clsIsInterestingVideo;
    NSNumber * _clsIsLongExposure;
    NSNumber * _clsIsLoopOrBounce;
    NSNumber * _clsIsNonMemorable;
    NSNumber * _clsLikabilityScore;
    CLLocation * _clsLocation;
    NSArray * _clsPeopleNames;
    NSNumber * _clsPlayCount;
    NSSet * _clsSceneClassifications;
    VNSceneprint * _clsSceneprint;
    NSNumber * _clsShareCount;
    NSNumber * _clsSharpnessScore;
    NSArray * _clsUnprefetchedPeopleNames;
    NSNumber * _clsViewCount;
    NSDate * _cls_localDate;
    NSDate * _cls_universalDate;
    NSArray * _faceInfos;
    NSNumber * _isBlurry;
    NSNumber * _isFavorite;
    NSNumber * _isRegularGem;
    NSNumber * _isScreenshotOrScreenRecording;
    NSNumber * _isShinyGem;
    NSNumber * _isUtility;
    NSNumber * _isVideo;
}

@property (nonatomic, readonly) double clsAestheticScore;
@property (nonatomic, readonly) double clsAutoplaySuggestionScore;
@property (readonly) bool clsAvoidIfPossibleForKeyItem;
@property (nonatomic, readonly) double clsContentScore;
@property (readonly) NSData *clsDistanceIdentity;
@property (nonatomic, readonly) double clsDuration;
@property (nonatomic, readonly) double clsExposureScore;
@property (nonatomic, readonly) double clsFaceScore;
@property (nonatomic, readonly) bool clsHasCustomPlaybackVariation;
@property (nonatomic, readonly) bool clsHasInterestingAudioClassification;
@property (readonly) bool clsHasInterestingScenes;
@property (readonly) bool clsHasPoorResolution;
@property (nonatomic, readonly) double clsHighlightVisibilityScore;
@property (readonly) NSString *clsIdentifier;
@property (nonatomic, readonly) bool clsIsAestheticallyPrettyGood;
@property (readonly) bool clsIsInhabited;
@property (nonatomic, readonly) bool clsIsInterestingHDR;
@property (nonatomic, readonly) bool clsIsInterestingLivePhoto;
@property (nonatomic, readonly) bool clsIsInterestingPanorama;
@property (nonatomic, readonly) bool clsIsInterestingReframe;
@property (nonatomic, readonly) bool clsIsInterestingSDOF;
@property (nonatomic, readonly) bool clsIsInterestingVideo;
@property (nonatomic, readonly) bool clsIsLongExposure;
@property (nonatomic, readonly) bool clsIsLoopOrBounce;
@property (nonatomic, readonly) bool clsIsNonMemorable;
@property (nonatomic, readonly) CLLocation *clsLocation;
@property (nonatomic, readonly) unsigned long long clsPeopleCount;
@property (nonatomic, readonly) NSArray *clsPeopleNames;
@property (nonatomic, readonly) long long clsPlayCount;
@property (nonatomic, readonly, copy) NSSet *clsSceneClassifications;
@property (readonly) VNSceneprint *clsSceneprint;
@property (nonatomic, readonly) long long clsShareCount;
@property (nonatomic, readonly) double clsSharpnessScore;
@property (nonatomic, readonly) NSArray *clsUnprefetchedPeopleNames;
@property (nonatomic, readonly) long long clsViewCount;
@property (nonatomic, readonly) NSDate *cls_localDate;
@property (nonatomic, readonly) NSDateComponents *cls_localDateComponents;
@property (readonly) NSDate *cls_universalDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *faceInfos;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBlurry;
@property (nonatomic, readonly) bool isFavorite;
@property (nonatomic, readonly) bool isScreenshotOrScreenRecording;
@property (nonatomic, readonly) bool isUtility;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSArray *peopleNames;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_date;
@property (readonly) Class superclass;

+ (id)contextForItems:(id)arg1;
+ (id)itemWithUUID:(id)arg1 itemInfo:(id)arg2;

- (void).cxx_destruct;
- (double)clsAestheticScore;
- (double)clsAutoplaySuggestionScore;
- (bool)clsAvoidIfPossibleForKeyItem;
- (double)clsContentScore;
- (id)clsDistanceIdentity;
- (double)clsDuration;
- (double)clsExposureScore;
- (double)clsFaceScore;
- (bool)clsHasCustomPlaybackVariation;
- (bool)clsHasInterestingAudioClassification;
- (bool)clsHasInterestingScenes;
- (bool)clsHasPoorResolution;
- (double)clsHighlightVisibilityScore;
- (id)clsIdentifier;
- (double)clsInteractionScore;
- (bool)clsIsAestheticallyPrettyGood;
- (bool)clsIsInhabited;
- (bool)clsIsInterestingHDR;
- (bool)clsIsInterestingLivePhoto;
- (bool)clsIsInterestingPanorama;
- (bool)clsIsInterestingReframe;
- (bool)clsIsInterestingSDOF;
- (bool)clsIsInterestingVideo;
- (bool)clsIsLongExposure;
- (bool)clsIsLoopOrBounce;
- (bool)clsIsNonMemorable;
- (double)clsLikabilityScore;
- (id)clsLocation;
- (unsigned long long)clsPeopleCount;
- (id)clsPeopleNames;
- (long long)clsPlayCount;
- (id)clsSceneClassifications;
- (id)clsSceneprint;
- (long long)clsShareCount;
- (double)clsSharpnessScore;
- (id)clsUnprefetchedPeopleNames;
- (long long)clsViewCount;
- (id)cls_localDate;
- (id)cls_localDateComponents;
- (id)cls_universalDate;
- (struct CGImage { }*)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(bool)arg2 networkAllowed:(bool)arg3;
- (id)date;
- (id)description;
- (id)faceInfos;
- (id)init;
- (id)initWithUUID:(id)arg1 itemInfo:(id)arg2;
- (bool)isBlurry;
- (bool)isFavorite;
- (bool)isRegularGem;
- (bool)isScreenshotOrScreenRecording;
- (bool)isShinyGem;
- (bool)isUtility;
- (bool)isVideo;
- (id)location;
- (id)peopleNames;
- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (id)pl_date;
- (double)scoreWithContext:(id)arg1;

@end
