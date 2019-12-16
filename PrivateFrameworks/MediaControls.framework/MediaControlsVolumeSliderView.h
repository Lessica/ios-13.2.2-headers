/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsVolumeSliderView : CCUIContinuousSliderView {
    bool  _didAcknowledgeThreshold;
    bool  _didHitThreshold;
    bool  _didTakeActionToAcknowledge;
    bool  _euDevice;
    float  _euVolumeLimit;
    bool  _euVolumeLimitEnforced;
    UIImpactFeedbackGenerator * _impactFeedbackGenerator;
    UIView * _materialView;
    UIView * _orangeValueView;
}

- (void).cxx_destruct;
- (void)_EUVolumeEnforcementChanged:(id)arg1;
- (void)_EUVolumeLimitChanged:(id)arg1;
- (void)_initializeEUVolumeLimits;
- (void)_registerForAVSystemControllerNotifications;
- (void)_serverConnectionDied:(id)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (float)_valueByApplyingEULimitsToValue:(float)arg1;
- (float)filteredValueForValue:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetThresholdAcknowledgment;
- (void)setContinuousSliderCornerRadius:(double)arg1;

@end
