/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSyncEngineMetadata : NSObject <NSSecureCoding> {
    NSMutableOrderedSet * _fakeRecordIDsToDeleteForSerializationTests;
    NSMutableOrderedSet * _fakeRecordIDsToSaveForSerializationTests;
    NSMutableOrderedSet * _inFlightModificationsSet;
    unsigned long long  _internalChangeCount;
    bool  _needsToFetchDatabaseChanges;
    bool  _needsToSaveDatabaseSubscription;
    NSMutableOrderedSet * _pendingModificationsSet;
    NSObject<OS_dispatch_queue> * _queue;
    CKServerChangeToken * _serverChangeTokenForDatabase;
    NSMutableDictionary * _serverChangeTokensByZoneID;
    NSMutableSet * _zoneIDsNeedingToFetchChangesSet;
    NSMutableOrderedSet * _zoneIDsToDeleteSet;
    NSMutableDictionary * _zonesToSaveDictionary;
}

@property (nonatomic, readonly) unsigned long long changeCount;
@property (nonatomic, retain) NSMutableOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (nonatomic, retain) NSMutableOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (nonatomic, retain) NSMutableOrderedSet *inFlightModificationsSet;
@property (nonatomic, readonly) NSArray *inFlightRecordModifications;
@property (nonatomic) unsigned long long internalChangeCount;
@property (nonatomic) bool needsToFetchDatabaseChanges;
@property (nonatomic) bool needsToSaveDatabaseSubscription;
@property (nonatomic, retain) NSMutableOrderedSet *pendingModificationsSet;
@property (nonatomic, readonly) NSArray *pendingRecordModifications;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CKServerChangeToken *serverChangeTokenForDatabase;
@property (nonatomic, retain) NSMutableDictionary *serverChangeTokensByZoneID;
@property (nonatomic, readonly) NSArray *zoneIDsNeedingToFetchChanges;
@property (nonatomic, retain) NSMutableSet *zoneIDsNeedingToFetchChangesSet;
@property (nonatomic, readonly) NSArray *zoneIDsToDelete;
@property (nonatomic, retain) NSMutableOrderedSet *zoneIDsToDeleteSet;
@property (nonatomic, readonly) NSArray *zonesToSave;
@property (nonatomic, retain) NSMutableDictionary *zonesToSaveDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (void)addPendingRecordModifications:(id)arg1;
- (unsigned long long)changeCount;
- (void)commonInit;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fakeRecordIDsToDeleteForSerializationTests;
- (id)fakeRecordIDsToSaveForSerializationTests;
- (void)getDataRepresentation:(id /* block */)arg1;
- (id)inFlightModificationsSet;
- (id)inFlightRecordModifications;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (unsigned long long)internalChangeCount;
- (void)markRecordModifications:(id)arg1 inFlight:(bool)arg2;
- (bool)needsToDeleteZoneID:(id)arg1;
- (bool)needsToFetchChangesForZoneID:(id)arg1;
- (bool)needsToFetchDatabaseChanges;
- (bool)needsToSaveDatabaseSubscription;
- (bool)needsToSaveZone:(id)arg1;
- (id)pendingModificationsSet;
- (id)pendingRecordIDsWithModificationType:(long long)arg1;
- (id)pendingRecordModifications;
- (id)queue;
- (id)recordIDsToDelete;
- (id)recordIDsToSave;
- (void)removeInFlightRecordModifications:(id)arg1;
- (void)removePendingRecordModifications:(id)arg1;
- (id)serverChangeTokenForDatabase;
- (id)serverChangeTokenForRecordZoneID:(id)arg1;
- (id)serverChangeTokensByZoneID;
- (void)setFakeRecordIDsToDeleteForSerializationTests:(id)arg1;
- (void)setFakeRecordIDsToSaveForSerializationTests:(id)arg1;
- (void)setInFlightModificationsSet:(id)arg1;
- (void)setInternalChangeCount:(unsigned long long)arg1;
- (void)setNeedsToDelete:(bool)arg1 zoneIDs:(id)arg2;
- (void)setNeedsToFetchChanges:(bool)arg1 forRecordZoneID:(id)arg2;
- (void)setNeedsToFetchDatabaseChanges:(bool)arg1;
- (void)setNeedsToSave:(bool)arg1 zones:(id)arg2;
- (void)setNeedsToSaveDatabaseSubscription:(bool)arg1;
- (void)setPendingModificationsSet:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (void)setServerChangeTokenForDatabase:(id)arg1;
- (void)setServerChangeTokensByZoneID:(id)arg1;
- (void)setZoneIDsNeedingToFetchChangesSet:(id)arg1;
- (void)setZoneIDsToDeleteSet:(id)arg1;
- (void)setZonesToSaveDictionary:(id)arg1;
- (id)zoneIDsNeedingToFetchChanges;
- (id)zoneIDsNeedingToFetchChangesSet;
- (id)zoneIDsToDelete;
- (id)zoneIDsToDeleteSet;
- (id)zonesToSave;
- (id)zonesToSaveDictionary;

@end
