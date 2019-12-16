/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate> {
    NSDictionary * _readOnlyUserInfo;
    FCTagSettings * _tagSettings;
    bool  _useParsecResults;
    FCMTWriterLock * _userInfoLock;
}

@property (nonatomic, copy) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property (nonatomic, copy) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property (nonatomic, copy) NSString *canonicalLanguage;
@property (nonatomic, copy) NSDate *dateLastOpened;
@property (nonatomic, readonly) NSDate *dateLastViewedSaved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *editorialArticleVersion;
@property (nonatomic, copy) NSString *feldsparID;
@property (nonatomic) bool hasShownProgressivePersonalizationWelcomeBrick;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastAppLaunchUpsellInstanceID;
@property (nonatomic) bool marketingNotificationsEnabled;
@property (nonatomic, readonly) bool mightNeedToUpdateOnboardingVersion;
@property (nonatomic, copy) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property (nonatomic, copy) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property (nonatomic) bool newIssueNotificationsEnabled;
@property (nonatomic, readonly, copy) NSString *notificationsUserID;
@property (nonatomic, copy) NSNumber *onboardingVersionNumber;
@property (nonatomic, readonly) unsigned long long progressivePersonalization;
@property (nonatomic, retain) NSDictionary *readOnlyUserInfo;
@property (nonatomic, readonly) bool shouldShowDefaultForYou;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCTagSettings *tagSettings;
@property (nonatomic, copy) NSNumber *upsellAppLaunchCount;
@property (nonatomic, readonly) bool useParsecResults;
@property (nonatomic) bool userHasCompletedFavoritesSetup;
@property (nonatomic, retain) FCMTWriterLock *userInfoLock;
@property (nonatomic, copy) NSDate *userStartDate;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)iCloudDataKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)overrideFeldsparID;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;
+ (id)userInfoCKRecordFromUserInfoDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_modifyUserInfoWithBlock:(id /* block */)arg1;
- (void)_persistNotificationsUserID:(id)arg1;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)_userInfoValueForKey:(id)arg1;
- (id)aLaCarteSubscriptionMeteredCountLastResetDate;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(bool)arg2;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (id)asCKRecord;
- (id)bundleSubscriptionMeteredCountLastResetDate;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)canonicalLanguage;
- (id)dateLastOpened;
- (id)dateLastViewedSaved;
- (id)editorialArticleVersion;
- (id)feldsparID;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (void)handleSyncWithDeletedUserInfoRecord;
- (void)handleSyncWithUserInfoRecord:(id)arg1;
- (bool)hasShownProgressivePersonalizationWelcomeBrick;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (id)lastAppLaunchUpsellInstanceID;
- (void)loadLocalCachesFromStore;
- (void)markSavedAsViewed;
- (bool)marketingNotificationsEnabled;
- (void)maybeUpdateOnboardingVersion:(id /* block */)arg1;
- (bool)mightNeedToUpdateOnboardingVersion;
- (id)monthlyALaCarteSubscriptionMeteredCount;
- (id)monthlyBundleSubscriptionMeteredCount;
- (bool)newIssueNotificationsEnabled;
- (id)notificationsUserID;
- (id)onboardingVersionNumber;
- (void)prepareForUse;
- (unsigned long long)progressivePersonalization;
- (id)readOnlyUserInfo;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)refreshOnboardingVersion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setALaCarteSubscriptionMeteredCountLastResetDate:(id)arg1;
- (void)setBundleSubscriptionMeteredCountLastResetDate:(id)arg1;
- (void)setCanonicalLanguage:(id)arg1;
- (void)setDateLastOpened:(id)arg1;
- (void)setEditorialArticleVersion:(id)arg1;
- (void)setFeldsparID:(id)arg1;
- (void)setHasShownProgressivePersonalizationWelcomeBrick:(bool)arg1;
- (void)setLastAppLaunchUpsellInstanceID:(id)arg1;
- (void)setMarketingNotificationsEnabled:(bool)arg1;
- (void)setMonthlyALaCarteSubscriptionMeteredCount:(id)arg1;
- (void)setMonthlyBundleSubscriptionMeteredCount:(id)arg1;
- (void)setNewIssueNotificationsEnabled:(bool)arg1;
- (void)setOnboardingVersionNumber:(id)arg1;
- (void)setReadOnlyUserInfo:(id)arg1;
- (void)setTagSettings:(id)arg1;
- (void)setUpsellAppLaunchCount:(id)arg1;
- (void)setUserHasCompletedFavoritesSetup:(bool)arg1;
- (void)setUserInfoLock:(id)arg1;
- (void)setUserStartDate:(id)arg1;
- (bool)shouldShowDefaultForYou;
- (void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2;
- (void)syncWithCompletion:(id /* block */)arg1;
- (id)tagSettings;
- (void)updateOnboardingVersion;
- (id)upsellAppLaunchCount;
- (bool)useParsecResults;
- (bool)userHasCompletedFavoritesSetup;
- (id)userInfoLock;
- (id)userStartDate;

// Image: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore

- (id)stocks_generateFeldsparIDIfNeeded;
- (id)stocks_resetFeldsparID;

@end