/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate> {
    _DKThrottledActivity * _activityThrottler;
    bool  _available;
    bool  _cloudSyncAvailablityObserverRegistered;
    APSConnection * _connection;
    CKContainer * _container;
    bool  _databaseChangesExist;
    <_DKSyncRemoteKnowledgeStorageFetchDelegate> * _delegate;
    CKServerChangeToken * _fetchDatabaseChangesServerChangeToken;
    bool  _isPrewarmed;
    <_DKKeyValueStore> * _keyValueStore;
    NSHashTable * _outstandingOperations;
    NSOperation * _previousDependentOperation;
    NSMutableDictionary * _recordZonesByZoneID;
    bool  _started;
    _DKSyncPeerStatusTracker * _tracker;
    double  _updateSourceDeviceIdentifiersBackoffTimeInterval;
    _CDPeriodicSchedulerJob * _updateSourceDeviceIdentifiersPeriodicJob;
    NSMutableDictionary * _zoneIDsBySourceDeviceID;
    NSMutableSet * _zoneIDsWithAdditionChanges;
    NSMutableSet * _zoneIDsWithDeletionChanges;
    NSMutableSet * _zoneIDsWithUnrecoverableDecryptionErrors;
}

@property (getter=isAvailable) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <_DKSyncRemoteKnowledgeStorageFetchDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deviceIDFromZoneID:(id)arg1;
+ (id)mySyncZoneID;
+ (void)setMySyncZoneID:(id)arg1;
+ (id)sharedInstance;
+ (id)zoneIDWithDeviceID:(id)arg1;

- (void).cxx_destruct;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_createPushConnection;
- (void)_createZoneWithZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)_deleteZoneWithZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)_destroyPushConnection;
- (id)_handleAnySpecialnessWithOperationError:(id)arg1;
- (void)_performThrottledUpdateSourceDeviceIdentifiersWithCompletion:(id /* block */)arg1;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (bool)_queueOperationForPrivateCloudDatabase:(id)arg1 dependent:(bool)arg2 policy:(id)arg3 error:(id*)arg4;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_registerDatabaseChangesSubscription;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (void)_storeZoneIDFromRecords:(id)arg1 orError:(id)arg2;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)addSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)cancelOutstandingOperations;
- (void)clearPrewarmedFlag;
- (void)commitFetchDatabaseChangesServerChangeToken;
- (void)configureCloudPseudoPeerWithMySyncZoneID:(id)arg1;
- (void)configurePeerWithSourceDeviceID:(id)arg1 zoneID:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)executionCriteriaForUpdateSourceDeviceIdentifiersPeriodicJob;
- (void)fastForwardPastDeletionsInNewZone:(id)arg1 sourceDeviceID:(id)arg2;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchChangedZonesWithCompletion:(id /* block */)arg1;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(bool)arg5 completion:(id /* block */)arg6;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(bool)arg6 completion:(id /* block */)arg7;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(bool)arg2 completion:(id /* block */)arg3;
- (void)finishStartBecauseCloudIsAvailable;
- (void)finishStartOrError:(id)arg1;
- (void)finishUpdatingSourceDeviceIdentifiersWithZoneIDsBySourceDeviceID:(id)arg1 orError:(id)arg2 completion:(id /* block */)arg3;
- (bool)hasAdditionsFlagForPeer:(id)arg1;
- (bool)hasDeletionsFlagForPeer:(id)arg1;
- (bool)hasZoneAdditionChangesForZone:(id)arg1;
- (bool)hasZoneDeletionChangesForZone:(id)arg1;
- (id)init;
- (bool)isAvailable;
- (id)name;
- (void)performUpdateSourceDeviceIdentifiersWithCompletion:(id /* block */)arg1;
- (void)populateLastSeenDateIfNeededByPeer:(id)arg1;
- (void)prewarmFetchWithCompletion:(id /* block */)arg1;
- (void)registerUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(id /* block */)arg1;
- (void)removeSourceDeviceIdentifierWithRecordZoneID:(id)arg1;
- (void)runUpdateSourceDeviceIdentifiersPeriodicJobWithCompletion:(id /* block */)arg1;
- (void)scheduleRetryUpdateSourceDeviceIdentifiers;
- (void)setAvailable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchDelegate:(id)arg1;
- (void)setHasAdditionsFlag:(bool)arg1 forPeer:(id)arg2;
- (void)setHasDeletionsFlag:(bool)arg1 forPeer:(id)arg2;
- (void)setHasZoneAdditionChanges:(bool)arg1 forZone:(id)arg2;
- (void)setHasZoneDeletionChanges:(bool)arg1 forZone:(id)arg2;
- (void)setPrewarmedFlag;
- (void)setZoneIDsBySourceDeviceID:(id)arg1;
- (void)start;
- (bool)startShouldUpdateSourceDeviceIdentifiers;
- (void)syncDownAdditionsFromCloudWithZoneID:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 completion:(id /* block */)arg6;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)syncDownDeletionsFromCloudWithZoneID:(id)arg1 deletedRecordIDsAndTypes:(id)arg2 attempt:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)syncUpToCloudWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 completion:(id /* block */)arg3;
- (long long)transportType;
- (void)unregisterUpdateSourceDeviceIdentifiersPeriodicJob;
- (void)updateSourceDeviceIdentifiersWithRecordZonesByZoneID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(bool)arg3 completion:(id /* block */)arg4;

@end
