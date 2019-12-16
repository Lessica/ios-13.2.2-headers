/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCIssueReadingHistory : FCPrivateDataController <FCClearableReadingHistory, FCIssueReadingHistoryType> {
    NSMutableDictionary * _itemsByID;
    FCMTWriterLock * _itemsLock;
}

@property (nonatomic, readonly) NSArray *allEngagedIssueIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *itemsByID;
@property (nonatomic, readonly) FCMTWriterLock *itemsLock;
@property (nonatomic, readonly) NSString *mostRecentlyVisitedIssueID;
@property (nonatomic, readonly) NSArray *recentlyEngagedIssueIDs;
@property (nonatomic, readonly) NSArray *recentlyVisitedIssueIDs;
@property (readonly) Class superclass;

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (void)populateLocalStoreClassRegistry:(id)arg1;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)_addHistoryItems:(id)arg1;
- (id)_allHistoryItems;
- (void)_didChangeForIssueIDs:(id)arg1;
- (id)_historyItemForID:(id)arg1;
- (id)_historyItemForIssueID:(id)arg1;
- (void)_modifyHistoryForIssueID:(id)arg1 withBlock:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (id)allEngagedIssueIDs;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg1;
- (id)bookmarkForLastVisitToIssueWithID:(id)arg1;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (void)clearHistory;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordNames:(id)arg2;
- (bool)hasIssueWithIDBeenBadged:(id)arg1;
- (bool)hasIssueWithIDBeenEngaged:(id)arg1;
- (bool)hasIssueWithIDBeenVisited:(id)arg1;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3;
- (id)itemsByID;
- (id)itemsLock;
- (id)lastEngagedDateForIssueWithID:(id)arg1;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)arg1;
- (id)lastVisitedDateForIssueWithID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (void)markIssueAsBadgedWithID:(id)arg1;
- (void)markIssueAsEngagedWithID:(id)arg1;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)arg1;
- (void)markIssueWithID:(id)arg1 asVisitedWithBookmark:(id)arg2;
- (id)mostRecentlyVisitedIssueID;
- (id)recentlyEngagedIssueIDs;
- (id)recentlyVisitedIssueIDs;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setItemsByID:(id)arg1;

@end
