/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationModuleView : NTKModuleView <NTKComplicationDisplay> {
    bool  _isXL;
    bool  canUseCurvedText;
    <NTKComplicationDisplayObserver> * displayObserver;
}

@property (nonatomic) bool canUseCurvedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) bool isXL;
@property (nonatomic) bool shouldUseTemplateColors;
@property (readonly) Class superclass;

+ (id)_extraLargeAlarmImageProvider;
+ (id)_extraLargeStopwatchImageProvider;
+ (id)_extraLargeTimerImageProvider;
+ (id)_modularSmallAlarmImageProvider;
+ (id)_modularSmallStopwatchImageProvider;
+ (id)_modularSmallTimerImageProvider;
+ (id)largeModuleViewForComplicationType:(unsigned long long)arg1;
+ (id)smallModuleViewForComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_attributedStringWithText:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3;
- (id)_newImageViewSubview;
- (id)_newLabelSubview;
- (id)_newLabelSubviewWithFont:(id)arg1;
- (void)_setTypographicTracking:(double)arg1 andFont:(id)arg2 onAttributedString:(id*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (bool)canUseCurvedText;
- (id)displayObserver;
- (bool)isXL;
- (void)setCanUseCurvedText:(bool)arg1;
- (void)setDisplayObserver:(id)arg1;
- (void)setIsXL:(bool)arg1;

@end
