/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMUserManager : NSObject <UMUserManagement, UMUserPersonaAttributesList, UMUserPersonaLoginSessionManagement, UMUserPersonaManagement, UMUserSwitchManagement> {
    NSArray * _allUsers;
    bool  _switchIsOccurring;
    <UMUserListUpdateObserver> * _userListUpdateObserver;
    <UMUserPersonaUpdateObserver> * _userPersonaUpdateObserver;
}

@property (nonatomic, readonly, copy) UMUserPersona *currentPersona;
@property (nonatomic, readonly, copy) UMUser *currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLoginSession;
@property (nonatomic, readonly) bool isMultiUser;
@property (nonatomic, readonly, copy) UMUser *loginUser;
@property (nonatomic, readonly) unsigned long long maxNumberOfUsers;
@property (readonly) Class superclass;
@property (nonatomic) bool switchIsOccurring;
@property (nonatomic) <UMUserListUpdateObserver> *userListUpdateObserver;
@property (nonatomic) <UMUserPersonaUpdateObserver> *userPersonaUpdateObserver;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_allUsersDidChange;
- (id)allUsers;
- (bool)canAccessUserProperties;
- (void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createUserPersona:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)currentPersona;
- (id)currentUser;
- (id)currentUserSwitchContext;
- (void)currentUserSwitchContextHasBeenUsed;
- (void)deleteUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteUserPersonaWithIDString:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteUserPersonaWithPersonaUniqueString:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteUserPersonaWithProfileInfo:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteUserPersonaWithType:(int)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)disableUser:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)disableUserPersonaWithProfileInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchAllPersonasForAllUsersWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAllPersonasWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAsidMapOfAllUsersWithCompletionHandler:(id /* block */)arg1;
- (void)fetchBundleIdentifierForPersonaWithIDString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchBundleIdentifierForPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchBundleIdentifierForType:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchMultiPersonaBundleIdentifierWithcompletionHandler:(id /* block */)arg1;
- (void)fetchPersonaWithIDString:(id)arg1 CompletionHandler:(id /* block */)arg2;
- (void)fetchPersonaWithPersonaUniqueString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchPersonaWithType:(int)arg1 CompletionHandler:(id /* block */)arg2;
- (bool)haveValidPersonaContextForIDString:(id)arg1;
- (bool)haveValidPersonaContextForPersonaUniqueString:(id)arg1;
- (id)init;
- (bool)isLoginSession;
- (bool)isMultiUser;
- (id)listAllPersonaWithAttributes;
- (void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loginUICheckInWithCompletionHandler:(id /* block */)arg1;
- (id)loginUser;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)maxNumberOfUsers;
- (bool)personaLoginWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 WithError:(id*)arg3;
- (bool)personaLogoutWithUserODuuid:(id)arg1 withUid:(unsigned int)arg2 WithError:(id*)arg3;
- (void)registerCriticalUserSwitchStakeHolder:(id)arg1;
- (void)registerPersonaListUpdateObserver:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerPersonaListUpdateObserver:(id)arg1 withMachService:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)registerUserListUpdateObserver:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1;
- (void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
- (void)resumeQuotas;
- (void)resumeSync;
- (void)setBundlesIdentifiers:(id)arg1 forPersonaWithPersonaUniqueString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersonaType:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)setBundlesIdentifiers:(id)arg1 forUniquePersonaWithIDString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setMultiPersonaBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setSwitchIsOccurring:(bool)arg1;
- (void)setUserListUpdateObserver:(id)arg1;
- (void)setUserPersonaUpdateObserver:(id)arg1;
- (void)suspendQuotasWithCompletionHandler:(id /* block */)arg1;
- (bool)switchIsOccurring;
- (void)switchToLoginUserWithCompletionHandler:(id /* block */)arg1;
- (void)switchToLoginUserWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)terminateSyncWithCompletionHandler:(id /* block */)arg1;
- (void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
- (bool)userExists:(id)arg1;
- (void)userInteractionIsEnabled;
- (void)userListDidUpdate;
- (id)userListUpdateObserver;
- (id)userPersonaUpdateObserver;

@end
