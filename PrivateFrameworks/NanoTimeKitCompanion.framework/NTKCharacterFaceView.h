/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterFaceView : NTKFaceView <NTKUtilityComplicationFactoryDelegate, UIGestureRecognizerDelegate> {
    NTKCharacterTimeView * _characterTimeView;
    UIView * _circleView;
    NTKUtilityComplicationFactory * _complicationFactory;
    UIView * _handsView;
    unsigned int  _isContentLoaded;
    unsigned long long  _optionCharacter;
    UIColor * _optionClothingColor;
    double  _optionClothingDesaturation;
    long long  _prevDataMode;
    UITapGestureRecognizer * _timeTapRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_prewarmForDevice:(id)arg1;
+ (id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyDataModeFromOldDataMode:(long long)arg1;
- (void)_applyForegroundAlphaForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowsCanonicalContent;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_curvedComplicationCircleRadius:(double*)arg1 centerAngle:(double*)arg2 maxAngularWidth:(double*)arg3 circleCenter:(struct CGPoint { double x1; double x2; }*)arg4 interior:(bool*)arg5 forSlot:(id)arg6;
- (void)_endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_enumerateQuadViewsWithBlock:(id /* block */)arg1;
- (void)_faceTapped:(id)arg1;
- (bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (bool)_isAnalog;
- (double)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_legacyOutputTime:(id)arg1;
- (void)_loadContentViews;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (bool)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_outputTime:(id)arg1;
- (void)_performWristRaiseAnimation;
- (id)_pickerMaskForSlot:(id)arg1;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_prepareWristRaiseAnimation;
- (void)_renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (void)_scrubToDate:(id)arg1 animated:(bool)arg2;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (id)_slotForUtilitySlot:(long long)arg1;
- (bool)_slotSupportsCurvedText:(id)arg1;
- (void)_startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_stopOutputtingTime;
- (bool)_supportsTimeScrubbing;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_tapToSpeakRect;
- (void)_unloadContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_updateComplicationViewsAlphasWithAnimation:(bool)arg1;
- (bool)_usesCustomZoom;
- (long long)_utilitySlotForSlot:(id)arg1;
- (double)_verticalPaddingForStatusBar;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (bool)slotUsesCurvedText:(long long)arg1;
- (id)utilityDateComplicationFontForDateStyle:(unsigned long long)arg1;

@end
