/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICPasswordUtilities : ICSharedPasswordUtilities {
    bool  _authenticationInProgress;
    UIAlertController * _displayedAlertController;
    NSString * _divergedAccountPassword;
}

@property (nonatomic) bool authenticationInProgress;
@property (nonatomic) UIAlertController *displayedAlertController;
@property (nonatomic, retain) NSString *divergedAccountPassword;

+ (bool)authenticateDevicePasscodeIfNecessaryWithReason:(id)arg1;
+ (void)authenticateForMovingNotes:(id)arg1 toNoteContainer:(id)arg2 displayWindow:(id)arg3 authenticateFailureHandler:(id /* block */)arg4 movingBlock:(id /* block */)arg5;
+ (void)authenticateiCloudPasswordFromRootViewController:(id)arg1 account:(id)arg2 confirmButtonTitle:(id)arg3 reason:(id)arg4 completionHandler:(id /* block */)arg5;
+ (bool)biometricIDEnabledForSharedPassword;
+ (bool)biometricIDHardwareIsAvailable;
+ (bool)biometricIDIsEnrolled;
+ (bool)deviceHasPasscode;
+ (bool)deviceSupportsFaceID;
+ (bool)deviceSupportsTouchID;
+ (unsigned long long)faceIDAccess;
+ (bool)faceIDAccessAllowedViaTCC;
+ (bool)faceIDEnabledForSharedPassword;
+ (id)faceIDFailurePrompt;
+ (bool)faceIDIsEnrolled;
+ (struct UIImage { Class x1; }*)imageForCurrentDecryptedStatusForNote:(id)arg1;
+ (void)requestAllowFaceIDIfRequired:(id /* block */)arg1;
+ (void)setFaceIDEnabledForSharedPassword:(bool)arg1;
+ (void)setTouchIDEnabledForSharedPassword:(bool)arg1;
+ (id)sharedInstance;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1;
+ (bool)touchIDEnabledForSharedPassword;
+ (bool)touchIDIsEnrolled;
+ (void)warnUserCannotPasswordProtectDueToManagedAppleIDInViewController:(id)arg1;
+ (void)warnUserCannotPasswordProtectNoteDueToSharedNoteInViewController:(id)arg1;
+ (void)warnUserCannotPasswordProtectNoteDueToUnsupportedAttachmentsInViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_authenticatePasswordForDeletingNotes:(id)arg1 incorrectAttempts:(long long)arg2 displayWindow:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 incorrectAttempts:(long long)arg3 passwordDiverged:(bool)arg4 wrongAccountName:(id)arg5 displayWindow:(id)arg6 failedAttemptHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
- (bool)_keychainContainsValidItemForSyncingObject:(id)arg1;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (void)addTitleAndMessageToAlert:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 incorrectAttempts:(long long)arg4 passwordDiverged:(bool)arg5 wrongAccountName:(id)arg6;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithBiometricIDForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)authenticateWithBiometricIDWithReason:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 displayWindow:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)authenticationInProgress;
- (void)dealloc;
- (id)displayedAlertController;
- (id)divergedAccountPassword;
- (id)init;
- (bool)keychainContainsValidItemForAccount:(id)arg1;
- (bool)keychainContainsValidItemForNote:(id)arg1;
- (void)setAuthenticationInProgress:(bool)arg1;
- (void)setDisplayedAlertController:(id)arg1;
- (void)setDivergedAccountPassword:(id)arg1;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)arg1 account:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showUpdateDivergedPasswordForAccountPassword:(id)arg1 oldPassword:(id)arg2 account:(id)arg3 displayWindow:(id)arg4;

@end
