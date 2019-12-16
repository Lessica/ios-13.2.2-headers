/* Generated by RuntimeBrowser.
 */

@protocol ACRemoteAccountStoreProtocol <NSObject>

@required

- (void)accessKeysForAccountType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)accountExistsWithDescription:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)accountIdentifiersEnabledForDataclass:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)accountIdentifiersEnabledForDataclasses:(void *)arg1 withAccountTypeIdentifiers:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)accountIdentifiersEnabledToSyncDataclass:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)accountTypeWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccountType *, NSError *, void*
- (void)accountTypesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)accountWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccount *, NSError *, void*
- (void)accountsOnPairedDeviceWithAccountType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)accountsWithAccountType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)accountsWithAccountType:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACAccountType *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)accountsWithAccountTypeIdentifiers:(void *)arg1 preloadedProperties:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)accountsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)addClientToken:(void *)arg1 forAccountIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)appPermissionsForAccountType:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)canSaveAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)childAccountsForAccountWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)childAccountsWithAccountTypeIdentifier:(void *)arg1 parentAccountIdentifier:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)clearAllPermissionsGrantedForAccountType:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 11: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)clearGrantedPermissionsForAccountType:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 7: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clientTokenForAccountIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)credentialForAccount:(void *)arg1 serviceID:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: ACAccount *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccountCredential *, NSError *, void*
- (void)credentialForAccountWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccountCredential *, NSError *, void*
- (void)credentialItemForAccount:(void *)arg1 serviceName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACAccount *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACCredentialItem *, NSError *, void*
- (void)credentialItemsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)dataclassActionsForAccountDeletion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)dataclassActionsForAccountSave:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)dataclassesWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)discoverPropertiesForAccount:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACAccount *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccount *, NSError *, void*
- (void)displayAccountTypeForAccountWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccountType *, NSError *, void*
- (void)enabledDataclassesForAccountWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)grantedPermissionsForAccountType:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)handleURL:(NSURL *)arg1;
- (void)insertAccountType:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccountType *, NSError *, void*
- (void)insertCredentialItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACCredentialItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACCredentialItem *, NSError *, void*
- (void)isPerformingDataclassActionsForAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isPushSupportedForAccount:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isTetheredSyncingEnabledForDataclass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)kerberosAccountsForDomainFromURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)notifyRemoteDevicesOfModifiedAccount:(ACAccount *)arg1 withChangeType:(NSString *)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(void *)arg1 withChangeType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACAccount *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openAuthenticationURL:(void *)arg1 forAccount:(void *)arg2 shouldConfirm:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSURL *, ACAccount *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openAuthenticationURLForAccount:(void *)arg1 withDelegateClassName:(void *)arg2 fromBundleAtPath:(void *)arg3 shouldConfirm:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: ACAccount *, NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (void)parentAccountForAccountWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccount *, NSError *, void*
- (void)permissionForAccountType:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)preloadDataclassOwnersWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)provisionedDataclassesForAccountWithIdentifier:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)removeAccount:(void *)arg1 withDataclassActions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACAccount *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeAccountType:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)removeAccountsFromPairedDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeCredentialItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACCredentialItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)renewCredentialsForAccount:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACAccount *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)reportTelemetryForLandmarkEvent:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestAccessForAccountTypeWithIdentifier:(void *)arg1 options:(void *)arg2 withHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)saveAccount:(void *)arg1 toPairedDeviceWithOptions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACAccount *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)saveAccount:(void *)arg1 verify:(void *)arg2 dataclassActions:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ACAccount *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)saveAccount:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: ACAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)saveCredentialItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ACCredentialItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)scheduleBackupIfNonexistent:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setClientBundleID:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCredential:(void *)arg1 forAccount:(void *)arg2 serviceID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: ACAccountCredential *, ACAccount *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setPermissionGranted:(void *)arg1 forBundleID:(void *)arg2 onAccountType:(void *)arg3 withHandler:(void *)arg4; // needs 4 arg types, found 13: NSNumber *, NSString *, ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)supportedDataclassesForAccountType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)syncableDataclassesForAccountType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: ACAccountType *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)tetheredSyncSourceTypeForDataclass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)triggerKeychainMigrationIfNecessary:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)typeIdentifierForDomain:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(void *)arg1 withHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)verifyCredentialsForAccount:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: ACAccount *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ACAccount *, NSError *, void*
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end