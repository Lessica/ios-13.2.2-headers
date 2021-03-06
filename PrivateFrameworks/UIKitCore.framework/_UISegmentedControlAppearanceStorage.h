/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISegmentedControlAppearanceStorage : NSObject {
    NSMutableDictionary * _backgroundImages;
    NSMutableDictionary * _backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary * _contentPositionOffsets;
    NSMutableDictionary * _dividerImages;
    bool  _isTiled;
    unsigned long long  _leftCapWidth;
    bool  _legacyDontHighlight;
    bool  _legacySuppressOptionsBackground;
    NSMutableDictionary * _miniBackgroundImages;
    NSMutableDictionary * _miniContentPositionOffsets;
    NSMutableDictionary * _miniDividerImages;
    unsigned long long  _rightCapWidth;
    NSMutableDictionary * _textAttributesForState;
}

- (void).cxx_destruct;
- (id)anyDividerImage;
- (id)anyDividerImageForMini:(bool)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2 withFallback:(bool)arg3;
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(bool)arg2;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(bool)arg2 noFallback:(bool)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(bool)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(bool)arg3 withFallback:(bool)arg4;
- (id)init;
- (bool)legacySuppressOptionsBackground;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(bool)arg3;
- (void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(bool)arg3;
- (void)setDetail:(struct { id x1; double x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; unsigned char x_3_1_4; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_3_1_5; unsigned short x_3_1_6; int x_3_1_7; void*x_3_1_8; void*x_3_1_9; void*x_3_1_10; double x_3_1_11; double x_3_1_12; } x3; }*)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(bool)arg4;
- (void)setIsTiled:(bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)takeTextAttributesFrom:(struct { id x1; id x2; id x3; unsigned char x4; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x5; unsigned short x6; int x7; void*x8; void*x9; void*x10; double x11; double x12; })arg1 forState:(unsigned long long)arg2;
- (id)textAttributesForState:(unsigned long long)arg1;
- (bool)wantsTrackingSuppressed;

@end
