/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

@interface HMBLocalSQLContext : HMBSQLContext {
    NSMapTable * _queryContextsByClass;
    NSMutableDictionary * _queryContextsByModelType;
    NSDictionary * _queryTables;
    HMBSQLQueryStatement * _selectAllRecordRows;
    HMBSQLQueryStatement * _selectAllRecordTypeRows;
    struct sqlite3_stmt { } * deleteBlock;
    struct sqlite3_stmt { } * deleteBlocksStore;
    struct sqlite3_stmt { } * deleteIndexSentinels;
    struct sqlite3_stmt { } * deleteIndexSentinelsStore;
    struct sqlite3_stmt { } * deleteItem;
    struct sqlite3_stmt { } * deleteItemStoreExternal;
    struct sqlite3_stmt { } * deleteItemsBlock;
    struct sqlite3_stmt { } * deleteItemsStore;
    struct sqlite3_stmt { } * deleteNullBlocks;
    struct sqlite3_stmt { } * deleteNullItems;
    struct sqlite3_stmt { } * deleteNullItemsType;
    struct sqlite3_stmt { } * deleteRecord;
    struct sqlite3_stmt { } * deleteRecordBlock;
    struct sqlite3_stmt { } * deleteRecordExternal;
    struct sqlite3_stmt { } * deleteRecordUUID;
    struct sqlite3_stmt { } * deleteRecordsStore;
    struct sqlite3_stmt { } * deleteStore;
    struct sqlite3_stmt { } * deleteZombieRecords;
    struct sqlite3_stmt { } * insertBlock;
    struct sqlite3_stmt { } * insertDeletionItemsForRecordWithUUID;
    struct sqlite3_stmt { } * insertDeletionItemsForRecordsOfType;
    struct sqlite3_stmt { } * insertDeletionItemsForRecordsWithParentUUID;
    struct sqlite3_stmt { } * insertIndexSentinel;
    struct sqlite3_stmt { } * insertItem;
    struct sqlite3_stmt { } * insertRecord;
    struct sqlite3_stmt { } * insertStore;
    struct sqlite3_stmt { } * selectBlock;
    struct sqlite3_stmt { } * selectIndexSentinel;
    struct sqlite3_stmt { } * selectItemBlockExteral;
    struct sqlite3_stmt { } * selectItemsBlock;
    struct sqlite3_stmt { } * selectItemsBlockLimit;
    struct sqlite3_stmt { } * selectReadyBlocks;
    struct sqlite3_stmt { } * selectReadyInputBlocks;
    struct sqlite3_stmt { } * selectRecord;
    struct sqlite3_stmt { } * selectRecordExternal;
    struct sqlite3_stmt { } * selectRecordUUID;
    struct sqlite3_stmt { } * selectRecordUUIDExternal;
    struct sqlite3_stmt { } * selectRecords;
    struct sqlite3_stmt { } * selectRecordsOfType;
    struct sqlite3_stmt { } * selectRecordsParentUUID;
    struct sqlite3_stmt { } * selectRecordsParentUUIDType;
    struct sqlite3_stmt { } * selectRecordsPushBlock;
    struct sqlite3_stmt { } * selectStore;
    struct sqlite3_stmt { } * selectStores;
    struct sqlite3_stmt { } * updateBlock;
    struct sqlite3_stmt { } * updateItem;
    struct sqlite3_stmt { } * updateRecord;
    struct sqlite3_stmt { } * updateRecordClearPushExpected;
    struct sqlite3_stmt { } * updateRecordExternal;
    struct sqlite3_stmt { } * updateRecordExternalExternal;
    struct sqlite3_stmt { } * updateRecordExternalUUID;
    struct sqlite3_stmt { } * updateRecordPush;
    struct sqlite3_stmt { } * updateRecordPushUUID;
    struct sqlite3_stmt { } * updateRecordType;
    struct sqlite3_stmt { } * updateRecordsClearPush;
    struct sqlite3_stmt { } * updateStoreReplicationData;
}

@property (retain) NSMapTable *queryContextsByClass;
@property (retain) NSMutableDictionary *queryContextsByModelType;
@property (retain) NSDictionary *queryTables;
@property (nonatomic, retain) HMBSQLQueryStatement *selectAllRecordRows;
@property (nonatomic, retain) HMBSQLQueryStatement *selectAllRecordTypeRows;

+ (id)logCategory;
+ (id)openWithURL:(id)arg1 readOnly:(bool)arg2 error:(id*)arg3;
+ (void)unlinkDatastoreAt:(id)arg1 everything:(bool)arg2;

- (void).cxx_destruct;
- (unsigned long long)_clearPushForRecordRow:(unsigned long long)arg1 expectedOutputBlockRow:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_deleteBlockWithRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteIndexSentinelsWithModelType:(id)arg1 error:(id*)arg2;
- (bool)_deleteIndexSentinelsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteItemWithRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteItemWithZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteItemWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 externalID:(id)arg3 error:(id*)arg4;
- (bool)_deleteItemsWithBlockRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteNullBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteNullItemsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteNullItemsWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_deleteRecordWithRow:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned long long)_deleteRecordWithRow:(unsigned long long)arg1 expectedOutputBlockRow:(unsigned long long)arg2 error:(id*)arg3;
- (bool)_deleteRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 error:(id*)arg3;
- (bool)_deleteRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 error:(id*)arg3;
- (bool)_deleteRecordsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteZombieRecordsWithZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_deleteZoneWithRow:(unsigned long long)arg1 error:(id*)arg2;
- (id)_fetchAllZones:(id*)arg1;
- (unsigned long long)_insertBlockWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)_insertBlockWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3 items:(id)arg4 error:(id*)arg5;
- (unsigned long long)_insertDeletionItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelID:(id)arg4 error:(id*)arg5;
- (unsigned long long)_insertDeletionItemsWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelType:(id)arg4 error:(id*)arg5;
- (unsigned long long)_insertDeletionItemsWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 parentModelID:(id)arg4 error:(id*)arg5;
- (bool)_insertIndexSentinelWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 error:(id*)arg3;
- (unsigned long long)_insertItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 externalID:(id)arg4 externalData:(id)arg5 modelEncoding:(unsigned long long)arg6 modelData:(id)arg7 error:(id*)arg8;
- (unsigned long long)_insertItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 modelType:(id)arg4 error:(id*)arg5;
- (unsigned long long)_insertRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelID:(id)arg4 parentModelID:(id)arg5 modelType:(id)arg6 modelEncoding:(unsigned long long)arg7 modelData:(id)arg8 modelSchema:(id)arg9 pushEncoding:(unsigned long long)arg10 pushData:(id)arg11 pushBlockRow:(unsigned long long)arg12 error:(id*)arg13;
- (unsigned long long)_insertZoneWithIdentification:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (bool)_resetOutputForRecordsWithBlockRow:(unsigned long long)arg1 error:(id*)arg2;
- (id)_selectBlockWithRow:(unsigned long long)arg1 error:(id*)arg2;
- (id)_selectIndexSentinelForZoneRow:(unsigned long long)arg1 modelType:(id)arg2 error:(id*)arg3;
- (id)_selectItemWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 externalID:(id)arg3 returning:(unsigned long long)arg4 error:(id*)arg5;
- (id)_selectItemsWithBlockRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3;
- (id)_selectItemsWithBlockRow:(unsigned long long)arg1 rowGreaterThan:(unsigned long long)arg2 limit:(unsigned long long)arg3 returning:(unsigned long long)arg4 error:(id*)arg5;
- (id)_selectReadyBlocksWithZoneRow:(unsigned long long)arg1 error:(id*)arg2;
- (id)_selectReadyBlocksWithZoneRow:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(id*)arg3;
- (id)_selectRecordModelIDWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 error:(id*)arg3;
- (id)_selectRecordWithRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3;
- (id)_selectRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4;
- (id)_selectRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4;
- (id)_selectRecordWithZoneRow:(unsigned long long)arg1 parentModelID:(id)arg2 modelType:(id)arg3 returning:(unsigned long long)arg4 error:(id*)arg5;
- (id)_selectRecordWithZoneRow:(unsigned long long)arg1 parentModelID:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4;
- (id)_selectRecordsWithBlockRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3;
- (id)_selectRecordsWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4;
- (bool)_selectRecordsWithZoneRow:(unsigned long long)arg1 modelType:(id)arg2 returning:(unsigned long long)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (id)_selectRecordsWithZoneRow:(unsigned long long)arg1 returning:(unsigned long long)arg2 error:(id*)arg3;
- (id)_selectZoneWithRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_updateBlockWithRow:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)_updateItemWithZoneRow:(unsigned long long)arg1 blockRow:(unsigned long long)arg2 type:(unsigned long long)arg3 externalID:(id)arg4 externalData:(id)arg5 modelEncoding:(unsigned long long)arg6 modelData:(id)arg7 error:(id*)arg8;
- (bool)_updateRecordWithRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 error:(id*)arg4;
- (bool)_updateRecordWithRow:(unsigned long long)arg1 modelEncoding:(unsigned long long)arg2 modelData:(id)arg3 modelSchema:(id)arg4 error:(id*)arg5;
- (bool)_updateRecordWithRow:(unsigned long long)arg1 modelType:(id)arg2 modelSchema:(id)arg3 error:(id*)arg4;
- (bool)_updateRecordWithRow:(unsigned long long)arg1 pushBlockRow:(unsigned long long)arg2 pushData:(id)arg3 pushEncoding:(unsigned long long)arg4 error:(id*)arg5;
- (bool)_updateRecordWithZoneRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 error:(id*)arg4;
- (bool)_updateRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 externalData:(id)arg3 error:(id*)arg4;
- (bool)_updateRecordWithZoneRow:(unsigned long long)arg1 modelID:(id)arg2 pushEncoding:(unsigned long long)arg3 pushData:(id)arg4 pushBlockRow:(unsigned long long)arg5 error:(id*)arg6;
- (bool)_updateRecordsClearPushWithPushBlockRow:(unsigned long long)arg1 error:(id*)arg2;
- (bool)_updateZoneWithRow:(unsigned long long)arg1 replication:(id)arg2 error:(id*)arg3;
- (void)finalize;
- (id)flush:(bool)arg1;
- (id)initWithURL:(id)arg1 readOnly:(bool)arg2;
- (id)initialize;
- (long long)migrateFromSchemaVersion:(long long)arg1 error:(id*)arg2;
- (long long)migrateToSchema01WithError:(id*)arg1;
- (id)prepare;
- (void)prepareTables;
- (id)queryContextsByClass;
- (id)queryContextsByModelType;
- (id)queryTables;
- (void)reloadSQLQueryMetadata;
- (id)selectAllRecordRows;
- (id)selectAllRecordTypeRows;
- (id)selectAllRecordsWithZoneRow:(unsigned long long)arg1 returning:(unsigned long long)arg2;
- (void)setQueryContextsByClass:(id)arg1;
- (void)setQueryContextsByModelType:(id)arg1;
- (void)setQueryTables:(id)arg1;
- (void)setSelectAllRecordRows:(id)arg1;
- (void)setSelectAllRecordTypeRows:(id)arg1;
- (id)sqlBlockWithActivity:(id)arg1 block:(id /* block */)arg2;
- (bool)sqlBlockWithActivity:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)sqlTransactionWithActivity:(id)arg1 block:(id /* block */)arg2;
- (bool)sqlTransactionWithActivity:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (long long)verifyTables;

@end
