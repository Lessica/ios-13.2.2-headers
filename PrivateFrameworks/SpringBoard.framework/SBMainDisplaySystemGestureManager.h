/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager {
    SBHomeGestureParticipant * _accessibilityHomeGestureParticipant;
    SBGestureDefaults * _gestureDefaults;
    bool  _multitaskingGesturesEnabled;
}

@property (nonatomic, retain) SBHomeGestureParticipant *accessibilityHomeGestureParticipant;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_evaluateEnablement;
- (id)_init;
- (id)_initWithDisplayIdentity:(id)arg1;
- (bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;
- (bool)_isTouchGestureWithType:(unsigned long long)arg1;
- (bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;
- (void)_updateUserPreferences;
- (id)accessibilityHomeGestureParticipant;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setAccessibilityHomeGestureParticipant:(id)arg1;
- (void)setSystemGesturesDisabledForAccessibility:(bool)arg1;
- (bool)shouldSystemGestureReceiveTouchWithLocation:(struct CGPoint { double x1; double x2; })arg1;

@end
