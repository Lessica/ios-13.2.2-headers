/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationUtils : NSObject

+ (id)CAAccelerationFromSFXActionAcceleration:(unsigned long long)arg1;
+ (id)customAttributesArrayWithDeliveryOptions:(id)arg1;
+ (id)customAttributesArrayWithJiggleIntensityOptions:(id)arg1;
+ (id)customAttributesArrayWithTextDeliveryOptions:(id)arg1;
+ (unsigned long long)directionFromCustomAttributesDeliveryOption:(unsigned long long)arg1;
+ (void)getRecommendedPosition:(struct CGPoint { double x1; double x2; }*)arg1 andTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; }*)arg2 toFitLayer:(id)arg3 inContainerWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 contentsScale:(double)arg5;
+ (void)hitPreviewButtonIfExists;
+ (void)initialize;
+ (bool)isAnimationTestingEnabled;
+ (bool)isCustomEffectTimingCurveEditingEnabled;
+ (bool)isDiscreteGPUAquisitionDisabled;
+ (bool)isDiscreteGPUNeededInShow:(id)arg1;
+ (bool)isDisplayLoggingEnabled;
+ (bool)isFPSLoggingEnabled;
+ (bool)isFPSLoggingTimerDisabled;
+ (bool)isGLStateValidationEnabled;
+ (bool)isMaxConcurrentTexturePrecachingEnabled;
+ (bool)isMetalDisabled;
+ (bool)isMotionBlurBlacklistedWithCapabilities:(id)arg1;
+ (bool)isMotionBlurCapableWithAnimationContext:(id)arg1;
+ (bool)isRandomNumberSeedInspectionEnabled;
+ (bool)isRenderingLocal;
+ (bool)isResponsivenessLoggingEnabled;
+ (bool)isSOATSImageExportTestEnabled;
+ (bool)isTexturePrecachingDisabled;
+ (unsigned long long)randomBasicDirection;
+ (unsigned long long)randomDirection;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })recommendedLayerBoundsForNaturalPlaybackSize:(struct CGSize { double x1; double x2; })arg1 inContainerWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 contentsScale:(double)arg3 isExternalDisplay:(bool)arg4;
+ (bool)shouldBadgeMetalRendering;
+ (bool)shouldForceDisplayPreferredMode;
+ (id)timingsArrayWithDirection:(unsigned long long)arg1 duration:(double)arg2 count:(unsigned long long)arg3 chunkDuration:(double)arg4 randomness:(double)arg5 randomGenerator:(id)arg6;
+ (void)updateDefaultsValues;

@end
