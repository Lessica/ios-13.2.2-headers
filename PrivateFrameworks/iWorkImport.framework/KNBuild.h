/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuild : TSPObject <KNInspectableAnimation, NSCopying, TSKModel, TSKTransformableObject> {
    KNBuildAttributes * _attributes;
    NSMutableDictionary * _buildChunkIDMap;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _cachedActiveChunkRange;
    bool  _cachedActiveChunkRangeIsValid;
    NSArray * _cachedChunks;
    int  _chunkIDSeed;
    NSString * _delivery;
    TSDDrawableInfo * _drawable;
    NSUUID * _drawableId;
    KNAbstractSlide * _slide;
}

@property (nonatomic, readonly) unsigned long long actionAcceleration;
@property (nonatomic, readonly) TSDEditableBezierPathSource *actionMotionPathSource;
@property (nonatomic, readonly) double actionOpacity;
@property (nonatomic, readonly) double actionRotationAngle;
@property (nonatomic, readonly) unsigned long long actionRotationDirection;
@property (nonatomic, readonly) double actionScale;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } activeChunkRange;
@property (nonatomic, readonly) NSString *animationFilter;
@property (nonatomic, readonly) KNAnimationInfo *animationInfo;
@property (nonatomic, readonly) long long animationType;
@property (nonatomic, copy) KNBuildAttributes *attributes;
@property (nonatomic, readonly) bool canEditAnimations;
@property (nonatomic, readonly) unsigned long long chunkCount;
@property (nonatomic, readonly) NSArray *chunks;
@property (nonatomic, readonly) TSUColor *color;
@property (nonatomic, readonly) float custom3DChartRotation;
@property (nonatomic, readonly) long long customAccelerationOption;
@property (nonatomic, readonly) bool customBounce;
@property (nonatomic, readonly) bool customDecay;
@property (nonatomic, readonly) unsigned long long customDeliveryOption;
@property (nonatomic, readonly) double customDetail;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve1;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve2;
@property (nonatomic, readonly) TSDBezierPathSource *customEffectTimingCurve3;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName1;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName2;
@property (nonatomic, readonly) NSString *customEffectTimingCurveThemeName3;
@property (nonatomic, readonly) bool customIncludeEndpoints;
@property (nonatomic, readonly) unsigned long long customJiggleIntensity;
@property (nonatomic, readonly) bool customMotionBlur;
@property (nonatomic, readonly) unsigned long long customRepeatCount;
@property (nonatomic, readonly) unsigned long long customScale;
@property (nonatomic, readonly) double customScaleAmount;
@property (nonatomic, readonly) bool customShine;
@property (nonatomic, readonly) long long customTextDelivery;
@property (nonatomic, readonly) double customTravelDistance;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *delivery;
@property (nonatomic, readonly) unsigned long long deliveryStyle;
@property (nonatomic, readonly) NSString *deliveryWithoutDowngrading;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly) KNAnimationPluginMenu *directionMenu;
@property (nonatomic, readonly) unsigned long long directionType;
@property (nonatomic, readonly) bool downgradesDelivery;
@property (nonatomic, retain) TSDDrawableInfo *drawable;
@property (nonatomic, readonly) double durationDefaultForInitialChunk;
@property (nonatomic, readonly) NSString *effect;
@property (nonatomic, readonly) unsigned long long endOffset;
@property (nonatomic, readonly) unsigned long long expectedChunkCount;
@property (nonatomic, readonly) unsigned long long firstActiveChunkIndexInBuild;
@property (nonatomic, readonly) KNBuildChunk *firstChunk;
@property (nonatomic, readonly) unsigned long long firstChunkIndexOnSlide;
@property (nonatomic, readonly) bool hasComplement;
@property (nonatomic, readonly) bool hasInactiveChunks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int i_chunkIDSeed;
@property (nonatomic, readonly) TSDDrawableInfo *i_drawable;
@property (nonatomic, readonly) NSUUID *i_drawableId;
@property (nonatomic, readonly) bool i_isFullyFormedBuild;
@property (nonatomic, readonly) NSSet *inspectableAttributes;
@property (nonatomic, readonly) bool isActionBuild;
@property (nonatomic, readonly) bool isActionMotionBuild;
@property (nonatomic, readonly) bool isContentBuild;
@property (nonatomic, readonly) bool isEmphasisBuild;
@property (nonatomic, readonly) bool isOnSlide;
@property (nonatomic, readonly) unsigned long long lastActiveChunkIndexInBuild;
@property (nonatomic, readonly) unsigned long long lastChunkIndexOnSlide;
@property (nonatomic, readonly) NSString *localizedEffect;
@property (nonatomic, readonly) long long randomNumberSeed;
@property (nonatomic) KNAbstractSlide *slide;
@property (nonatomic, readonly) unsigned long long startOffset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supports3DChartRotationAngle;
@property (nonatomic, readonly) bool supportsActionRotationAngle;
@property (nonatomic, readonly) bool supportsActionRotationDirection;
@property (nonatomic, readonly) bool supportsActionScale;
@property (nonatomic, readonly) bool supportsBounce;
@property (nonatomic, readonly) bool supportsCustomDetail;
@property (nonatomic, readonly) bool supportsCustomEffectTimingCurve1;
@property (nonatomic, readonly) bool supportsCustomEffectTimingCurve2;
@property (nonatomic, readonly) bool supportsCustomEffectTimingCurve3;
@property (nonatomic, readonly) bool supportsCustomRepeats;
@property (nonatomic, readonly) bool supportsCustomScale;
@property (nonatomic, readonly) bool supportsCustomTextDelivery;
@property (nonatomic, readonly) bool supportsDecay;
@property (nonatomic, readonly) bool supportsDelivery;
@property (nonatomic, readonly) bool supportsDirection;
@property (nonatomic, readonly) bool supportsDuration;
@property (nonatomic, readonly) bool supportsIncludeEndpoints;
@property (nonatomic, readonly) bool supportsJiggleIntensity;
@property (nonatomic, readonly) bool supportsOpacity;
@property (nonatomic, readonly) bool supportsRandomNumberSeedInspection;
@property (nonatomic, readonly) bool supportsScaleAmount;
@property (nonatomic, readonly) bool supportsShine;
@property (nonatomic, readonly) bool supportsTravelDistance;
@property (nonatomic, readonly) NSString *title;

+ (id)buildWithEffect:(id)arg1 animationType:(long long)arg2 drawable:(id)arg3 slide:(id)arg4;
+ (void)i_repairBuildToDrawableReferencesFromUUIDsForBuilds:(id)arg1 drawables:(id)arg2;
+ (id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(long long)arg2;
+ (bool)needsObjectUUID;
+ (id)p_drawableFromInfo:(id)arg1;
+ (bool)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2;
+ (id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)actionAcceleration;
- (id)actionMotionPathSource;
- (double)actionOpacity;
- (double)actionRotationAngle;
- (unsigned long long)actionRotationDirection;
- (double)actionScale;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })activeChunkRange;
- (id)animationFilter;
- (id)animationInfo;
- (long long)animationType;
- (id)attributes;
- (bool)canEditAnimations;
- (unsigned long long)chunkCount;
- (id)chunkForIdentifier:(id)arg1;
- (id)chunks;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)custom3DChartRotation;
- (long long)customAccelerationOption;
- (bool)customBounce;
- (bool)customDecay;
- (unsigned long long)customDeliveryOption;
- (double)customDetail;
- (id)customEffectTimingCurve1;
- (id)customEffectTimingCurve2;
- (id)customEffectTimingCurve3;
- (id)customEffectTimingCurveThemeName1;
- (id)customEffectTimingCurveThemeName2;
- (id)customEffectTimingCurveThemeName3;
- (bool)customIncludeEndpoints;
- (unsigned long long)customJiggleIntensity;
- (bool)customMotionBlur;
- (unsigned long long)customRepeatCount;
- (unsigned long long)customScale;
- (double)customScaleAmount;
- (bool)customShine;
- (long long)customTextDelivery;
- (double)customTravelDistance;
- (id)deliveriesLocalized:(bool)arg1;
- (id)delivery;
- (unsigned long long)deliveryStyle;
- (id)deliveryWithoutDowngrading;
- (id)description;
- (void)didInitFromSOS;
- (unsigned long long)direction;
- (id)directionMenu;
- (unsigned long long)directionType;
- (bool)downgradesDelivery;
- (id)drawable;
- (double)durationDefaultForInitialChunk;
- (id)effect;
- (unsigned long long)endChunkIndexFromEndOffset:(unsigned long long)arg1;
- (unsigned long long)endOffset;
- (unsigned long long)expectedChunkCount;
- (unsigned long long)firstActiveChunkIndexInBuild;
- (id)firstChunk;
- (unsigned long long)firstChunkIndexOnSlide;
- (bool)hasComplement;
- (bool)hasInactiveChunks;
- (id)i_buildChunkForChunkIdentifier:(id)arg1;
- (int)i_chunkIDSeed;
- (void)i_deregisterBuildChunkWithChunkIdentifier:(id)arg1;
- (id)i_drawable;
- (id)i_drawableForArchiving:(bool)arg1;
- (id)i_drawableId;
- (id)i_drawableOnSlide:(id)arg1;
- (void)i_generateAndApplyNewChunkIdentifierToChunk:(id)arg1;
- (void)i_invalidateChunkCache;
- (bool)i_isFullyFormedBuild;
- (void)i_registerBuildChunkIdentifierForChunk:(id)arg1;
- (void)i_resetChunkIDSeed;
- (void)i_rollbackChunkIDSeedForChunk:(id)arg1;
- (id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(long long)arg3 context:(id)arg4;
- (id)inspectableAttributes;
- (bool)isActionBuild;
- (bool)isActionMotionBuild;
- (bool)isComplementOfBuild:(id)arg1;
- (bool)isContentBuild;
- (bool)isEmphasisBuild;
- (bool)isOnSlide;
- (unsigned long long)lastActiveChunkIndexInBuild;
- (unsigned long long)lastChunkIndexOnSlide;
- (void)loadFromArchive:(const struct BuildArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct Reference {} *x6; struct BuildAttributesArchive {} *x7; double x8; int x9; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)localizedEffect;
- (id)p_buildChunkIDMap;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_calculateActiveChunkRange;
- (id)p_chunkAtIndex:(unsigned long long)arg1;
- (id)p_chunkTitleByTruncatingTitle:(id)arg1 toLength:(unsigned long long)arg2;
- (bool)p_hasComplementInBuilds:(id)arg1;
- (bool)p_isDeliveryLocalized:(id)arg1 forNonNilDrawable:(id)arg2;
- (bool)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1;
- (bool)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1;
- (long long)randomNumberSeed;
- (void)saveToArchive:(struct BuildArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct Reference {} *x6; struct BuildAttributesArchive {} *x7; double x8; int x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setDelivery:(id)arg1;
- (void)setDrawable:(id)arg1;
- (void)setSlide:(id)arg1;
- (id)slide;
- (unsigned long long)startOffset;
- (bool)supports3DChartRotationAngle;
- (bool)supportsAcceleration;
- (bool)supportsActionRotationAngle;
- (bool)supportsActionRotationDirection;
- (bool)supportsActionScale;
- (bool)supportsBounce;
- (bool)supportsCustomDetail;
- (bool)supportsCustomEffectTimingCurve1;
- (bool)supportsCustomEffectTimingCurve2;
- (bool)supportsCustomEffectTimingCurve3;
- (bool)supportsCustomRepeats;
- (bool)supportsCustomScale;
- (bool)supportsCustomTextDelivery;
- (bool)supportsDecay;
- (bool)supportsDelivery;
- (bool)supportsDirection;
- (bool)supportsDuration;
- (bool)supportsIncludeEndpoints;
- (bool)supportsJiggleIntensity;
- (bool)supportsOpacity;
- (bool)supportsRandomNumberSeedInspection;
- (bool)supportsScaleAmount;
- (bool)supportsShine;
- (bool)supportsTravelDistance;
- (id)title;

@end
