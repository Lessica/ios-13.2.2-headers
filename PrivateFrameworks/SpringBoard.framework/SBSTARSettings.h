/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBSTARSettings : PTSettings {
    float  _enterTransitionBacklightFadeInDuration;
    float  _enterTransitionBacklightFadeOutDuration;
    float  _exitTransitionBacklightFadeInDuration;
    float  _exitTransitionBacklightFadeOutDuration;
}

@property (nonatomic) float enterTransitionBacklightFadeInDuration;
@property (nonatomic) float enterTransitionBacklightFadeOutDuration;
@property (nonatomic) float exitTransitionBacklightFadeInDuration;
@property (nonatomic) float exitTransitionBacklightFadeOutDuration;

+ (id)settingsControllerModule;

- (float)enterTransitionBacklightFadeInDuration;
- (float)enterTransitionBacklightFadeOutDuration;
- (float)exitTransitionBacklightFadeInDuration;
- (float)exitTransitionBacklightFadeOutDuration;
- (void)setDefaultValues;
- (void)setEnterTransitionBacklightFadeInDuration:(float)arg1;
- (void)setEnterTransitionBacklightFadeOutDuration:(float)arg1;
- (void)setExitTransitionBacklightFadeInDuration:(float)arg1;
- (void)setExitTransitionBacklightFadeOutDuration:(float)arg1;

@end
