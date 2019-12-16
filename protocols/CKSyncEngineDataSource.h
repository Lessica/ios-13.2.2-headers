/* Generated by RuntimeBrowser.
 */

@protocol CKSyncEngineDataSource <NSObject>

@required

- (void)syncEngine:(CKSyncEngine *)arg1 didDeleteRecordWithID:(CKRecordID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didFetchRecord:(CKRecord *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didSaveRecord:(CKRecord *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didUpdateMetadata:(NSData *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToDeleteRecordWithID:(CKRecordID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToSaveRecord:(CKRecord *)arg2 error:(NSError *)arg3;
- (CKRecord *)syncEngine:(CKSyncEngine *)arg1 recordToSaveForRecordID:(CKRecordID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 recordWithIDWasDeleted:(CKRecordID *)arg2 recordType:(NSString *)arg3;

@optional

- (void)syncEngine:(CKSyncEngine *)arg1 didCompleteModifyRecordsBatch:(CKSyncEngineBatch *)arg2 withSavedRecords:(NSArray *)arg3 deletedRecordIDs:(NSArray *)arg4 error:(NSError *)arg5;
- (void)syncEngine:(CKSyncEngine *)arg1 didDeleteRecordZoneWithID:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didSaveRecordZone:(CKRecordZone *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToDeleteRecordZoneWithID:(CKRecordZoneID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToSaveRecordZone:(CKRecordZone *)arg2 error:(NSError *)arg3;
- (CKSyncEngineBatch *)syncEngine:(CKSyncEngine *)arg1 nextBatchOfRecordsToModifyWithRecordIDsPendingSave:(NSArray *)arg2 recordIDsPendingDelete:(NSArray *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDChanged:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDWasDeleted:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDWasPurged:(CKRecordZoneID *)arg2;

@end
