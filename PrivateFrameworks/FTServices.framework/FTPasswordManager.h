/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTPasswordManager : NSObject <FTPasswordManager> {
    ACAccountStore * _accountStore;
    NSMutableSet * _runningQueries;
    IMUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(bool)arg3 showForgetPassword:(bool)arg4 shouldRememberPassword:(bool)arg5;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_accountBasedOnProfileID:(id)arg1 orUsername:(id)arg2 inStore:(id)arg3;
- (id)_accountOptionsDictForRenewCredentialsForService:(id)arg1 username:(id)arg2 shouldFailIfNotSilent:(bool)arg3;
- (id)_accountWithProfileID:(id)arg1 username:(id)arg2 inStore:(id)arg3;
- (id)_accountWithProfileIDMatchingUser:(id)arg1 inStore:(id)arg2;
- (id)_accountWithUsername:(id)arg1 inStore:(id)arg2;
- (id)_accountWithUsernameAlias:(id)arg1 inStore:(id)arg2;
- (id)_findIDSAccountInStore:(id)arg1 withCriteria:(id /* block */)arg2;
- (id)_findIDSAccountsInStore:(id)arg1 withCriteria:(id /* block */)arg2;
- (id)_keychainAuthTokenForUsername:(id)arg1 service:(id)arg2;
- (id)_keychainPasswordForUsername:(id)arg1 service:(id)arg2;
- (id)_profileIDForUsername:(id)arg1 inStore:(id)arg2;
- (void)_renewCredentialsIfPossibleForAccount:(id)arg1 username:(id)arg2 inServiceIdentifier:(id)arg3 originalInServiceIdentifier:(id)arg4 serviceName:(id)arg5 failIfNotSilent:(bool)arg6 renewHandler:(id /* block */)arg7 shortCircuitCompletionBlock:(id /* block */)arg8;
- (void)_setKeychainAuthToken:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (void)_setKeychainPassword:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (bool)_shouldForceSilentOnlyAuthForUsername:(id)arg1 serviceIdentifier:(id)arg2;
- (void)_updateStatus:(id)arg1 onAccount:(id)arg2;
- (bool)_usernameHasCorrespondingIdMSAccount:(id)arg1;
- (id)acAccountWithProfileID:(id)arg1 username:(id)arg2 accountStore:(id)arg3;
- (double)authTokenGracePeriod;
- (void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2;
- (void)cleanUpAccountsBasedOnInUseUsernames:(id)arg1 profileIDs:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)cleanUpAccountsWithUsername:(id)arg1 orProfileID:(id)arg2 basedOnInUseUsernames:(id)arg3 profileIDs:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (id)initWithUserNotificationCenter:(id)arg1;
- (bool)isAuthTokenReceiptTime:(double)arg1 withinGracePeriod:(double)arg2;
- (void)performCleanUpWithCompletion:(id /* block */)arg1;
- (id)profileIDForACAccount:(id)arg1;
- (void)removeAuthTokenAllowingGracePeriodForProfileID:(id)arg1 username:(id)arg2;
- (void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(bool)arg4 showForgotPassword:(bool)arg5 failIfNotSilent:(bool)arg6 outRequestID:(id*)arg7 completionBlock:(id /* block */)arg8;
- (void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(bool)arg4 showForgotPassword:(bool)arg5 outRequestID:(id*)arg6 completionBlock:(id /* block */)arg7;
- (void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 shouldRememberPassword:(bool)arg5 outRequestID:(id*)arg6 completionBlock:(id /* block */)arg7;
- (void)setAccountStatus:(id)arg1 forProfileID:(id)arg2 username:(id)arg3 service:(id)arg4;
- (void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 accountStatus:(id)arg6 outRequestID:(id*)arg7 completionBlock:(id /* block */)arg8;
- (void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(id /* block */)arg7;
- (void)setHandlesForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 handles:(id)arg4;
- (void)setPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 password:(id)arg4 outRequestID:(id*)arg5 completionBlock:(id /* block */)arg6;
- (bool)supportsAuthTokenRequests;
- (void)updatePreviousUsername:(id)arg1 toNewUsername:(id)arg2;

@end
