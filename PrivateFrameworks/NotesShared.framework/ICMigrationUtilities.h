/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICMigrationUtilities : NSObject

+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)arg1;
+ (void)deleteMigratedHTMLAccounts;
+ (void)fetchAndSetMigrationStateForAccountID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)fetchMigrationStateForAccountID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)saveDidChooseToMigrate:(bool)arg1 didFinishMigration:(bool)arg2 didMigrateOnMac:(bool)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(id /* block */)arg6;
+ (void)updateAllLegacyAccountMigrationStates;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)arg1;

@end
