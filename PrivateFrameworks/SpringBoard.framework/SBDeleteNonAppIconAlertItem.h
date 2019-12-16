/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeleteNonAppIconAlertItem : SBAlertItem {
    SBIcon * _icon;
    NSString * _iconLocation;
}

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)didActivate;
- (bool)dismissOnLock;
- (id)icon;
- (id)initWithIcon:(id)arg1 location:(id)arg2;
- (bool)shouldShowInLockScreen;

@end
