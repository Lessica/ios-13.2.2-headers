/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistorySQLiteStore : NSObject <WBSHistoryLoader, WBSHistoryStore> {
    long long  _cachedNumberOfDevicesInSyncCircle;
    bool  _checkpointWriteAheadLogOnNextWrite;
    NSMutableDictionary * _clientVersions;
    bool  _commitGenerationValuesOnNextWrite;
    WBSHistoryCrypto * _crypto;
    long long  _currentGeneration;
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
    <WBSHistoryStoreDelegate> * _delegate;
    NSArray * _discardedItems;
    NSData * _fetchThrottlerData;
    double  _historyAgeLimit;
    Class  _historyItemClass;
    bool  _isClosed;
    unsigned long long  _itemCountLimit;
    NSMutableDictionary * _itemsByDatabaseID;
    NSDate * _lastMaintenanceDate;
    long long  _lastSyncedGeneration;
    bool  _loadInProgress;
    NSDate * _loadStartTime;
    NSArray * _loadedItems;
    NSCountedSet * _loadedStringsForUserTypedDomainExpansion;
    WBSPeriodicActivityScheduler * _maintenanceScheduler;
    NSMutableSet * _pendingAddsOrUpdates;
    NSMutableSet * _pendingDeletes;
    NSMutableSet * _pendingTombstones;
    NSMutableSet * _pendingVisitDeletes;
    bool  _pushNotificationsAreInitialized;
    NSData * _pushThrottlerData;
    WBSSQLiteStatementCache * _statements;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
        struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler> > { 
            struct SuddenTerminationDisabler {} *__value_; 
        } __ptr_; 
    }  _suddenTerminationDisabler;
    NSData * _syncCircleSizeRetrievalThrottlerData;
    bool  _syncsWithManateeContainer;
    WBSHistoryTagDatabaseController * _tagController;
    NSMapTable * _weakVisitsByDatabaseID;
    bool  _writeLastMaintenanceDateOnNextWrite;
    NSTimer * _writeTimer;
}

@property (nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property (nonatomic, readonly) WBSHistoryCrypto *crypto;
@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSHistoryStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *fetchThrottlerData;
@property (readonly) unsigned long long hash;
@property (nonatomic) double historyAgeLimit;
@property (nonatomic, readonly) bool isUsingInMemoryDatabase;
@property (nonatomic, copy) NSData *longLivedSaveOperationData;
@property (nonatomic) bool pushNotificationsAreInitialized;
@property (nonatomic, copy) NSData *pushThrottlerData;
@property (nonatomic, readonly) NSData *salt;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *syncCircleSizeRetrievalThrottlerData;
@property (nonatomic) bool syncsWithManateeContainer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_ageLimitSinceReferenceDate;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircleOnDatabaseQueue;
- (bool)_checkDatabaseIntegrity;
- (void)_checkpointWriteAheadLog;
- (Class)_classForHistoryTagType:(unsigned long long)arg1;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 addingTombstone:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_clearHistoryVisitsMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 addingTombstone:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_clearHistoryVisitsMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 addingTombstone:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1;
- (id)_createHistoryTagsWithIdentifiers:(id)arg1 titles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id*)arg5;
- (long long)_currentGeneration;
- (id)_deletionPlanForDeletionOfVisits:(id)arg1;
- (void)_enforceAgeAndItemCountLimits:(id /* block */)arg1;
- (void)_expireOldVisits;
- (id)_fetchHistoryTagsWithPredicate:(id)arg1 error:(id*)arg2;
- (void)_finishLoadingOnMainThread;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (void)_incrementCurrentGeneration;
- (void)_insertItem:(id)arg1;
- (void)_insertTombstone:(id)arg1;
- (void)_insertVisit:(id)arg1;
- (id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(unsigned long long)arg1;
- (long long)_lastSyncedGeneration;
- (void)_loadClientVersions;
- (void)_loadFromDatabase;
- (void)_loadHistory;
- (void)_loadRedirectVisitsForLoadedItems:(id)arg1;
- (id)_metadataDataValueForKey:(id)arg1;
- (long long)_metadataInt64ValueForKey:(id)arg1;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (void)_openDatabase:(id)arg1 andCheckIntegrity:(bool)arg2;
- (void)_performMaintenance:(id /* block */)arg1;
- (bool)_populateHistoryItemsInHistoryTopicTag:(id)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 error:(id*)arg4;
- (void)_processPendingDeletes;
- (void)_processPendingVisitDeletes;
- (void)_processPendingWrites;
- (void)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1;
- (void)_recomputeDerivedVisitCountScores;
- (void)_registerHistoryTagFrecencyScoringFunction;
- (void)_removeVisitsProvidedByBlockInvokedOnDatabaseQueue:(id /* block */)arg1 addingTombstone:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_scheduleMaintenance;
- (void)_scheduleWrite;
- (void)_setLastSyncedGeneration:(unsigned long long)arg1;
- (void)_setMetadataDataValue:(id)arg1 forKey:(id)arg2;
- (void)_setMetadataInt64Value:(long long)arg1 forKey:(id)arg2;
- (int)_setOrigin:(long long)arg1 forVisitsFromOrigin:(long long)arg2;
- (bool)_shouldEmitLegacyTombstones;
- (bool)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1;
- (id)_tagsWithIdentifiers:(id)arg1 titles:(id)arg2 ofType:(unsigned long long)arg3 level:(long long)arg4 creatingIfNeeded:(bool)arg5 createdTags:(id*)arg6 error:(id*)arg7;
- (id)_tombstonesNeedingSync;
- (void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 convertTombstonesToSecureFormat:(bool)arg2;
- (void)_updateGenerationForVisits:(id)arg1;
- (void)_updateItem:(id)arg1;
- (void)_updateVisit:(id)arg1;
- (void)_updateVisitRedirectRelationships:(id)arg1;
- (id)_visitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (id)_visitsCreatedMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4;
- (id)_visitsCreatedMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3;
- (id)_visitsFromRows:(id)arg1 predicate:(id /* block */)arg2;
- (id)_visitsNeedingSyncWithVisitSyncWindow:(double)arg1;
- (id)_visitsWithOrigins:(id)arg1;
- (void)_writeTimerFired;
- (void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
- (id)allVisitsForItemsOnDatabaseQueue:(id)arg1;
- (void)assignHistoryItem:(id)arg1 toTopicTags:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)cachedNumberOfDevicesInSyncCircle;
- (void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)clearHistoryWithCompletionHandler:(id /* block */)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (id)crypto;
- (id)database;
- (void)dealloc;
- (id)delegate;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(id /* block */)arg3;
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(id /* block */)arg3;
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(id /* block */)arg3;
- (id)existingItemFromVisitRow:(id)arg1;
- (id)fetchThrottlerData;
- (void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)getAllTombstonesWithCompletion:(id /* block */)arg1;
- (void)getServerChangeTokenDataWithCompletion:(id /* block */)arg1;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(id /* block */)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)historyAgeLimit;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (bool)isUsingInMemoryDatabase;
- (void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
- (void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(bool)arg2;
- (void)itemsWereModified:(id)arg1 byUserInitiatedAction:(bool)arg2;
- (id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (id)longLivedSaveOperationData;
- (void)performMaintenance:(id /* block */)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (bool)pushNotificationsAreInitialized;
- (id)pushThrottlerData;
- (void)removeItemsOnDatabaseQueue:(id)arg1;
- (void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeVisitsOnDatabaseQueue:(id)arg1;
- (void)replayAndAddTombstones:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetCloudHistoryDataWithCompletionHandler:(id /* block */)arg1;
- (id)salt;
- (void)setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchThrottlerData:(id)arg1;
- (void)setHistoryAgeLimit:(double)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (void)setLongLivedSaveOperationData:(id)arg1;
- (void)setPushNotificationsAreInitialized:(bool)arg1;
- (void)setPushThrottlerData:(id)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setSyncCircleSizeRetrievalThrottlerData:(id)arg1;
- (void)setSyncsWithManateeContainer:(bool)arg1;
- (void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startLoading;
- (id)syncCircleSizeRetrievalThrottlerData;
- (bool)syncsWithManateeContainer;
- (void)tagsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(bool)arg4 withTitles:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(id /* block */)arg2;
- (void)vacuumHistoryWithCompletionHandler:(id /* block */)arg1;
- (id)visitForItem:(id)arg1 row:(id)arg2;
- (id)visitForRow:(id)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(bool)arg2 completion:(id /* block */)arg3;
- (void)visitTitleWasUpdated:(id)arg1;
- (void)visitsWereAdded:(id)arg1;
- (void)visitsWereModified:(id)arg1;
- (void)waitForLoadingToComplete;

@end
