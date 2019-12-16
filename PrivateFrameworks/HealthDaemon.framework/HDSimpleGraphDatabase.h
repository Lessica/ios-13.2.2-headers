/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSimpleGraphDatabase : NSObject {
    HDSQLiteDatabase * _database;
    NSString * _databasePath;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) HDSQLiteDatabase *database;
@property (nonatomic, readonly, copy) NSString *databasePath;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)graphDatabaseWithBackingStore:(id)arg1 error:(id*)arg2;
+ (id)indexCreateSQL;
+ (id)indexDropSQL;
+ (id)tableCreateSQL;

- (void).cxx_destruct;
- (bool)_openDatabaseError:(id*)arg1;
- (bool)_performWork:(id /* block */)arg1 usingTransaction:(bool)arg2 error:(id*)arg3;
- (bool)_work_addAttributeToNodeWithID:(long long)arg1 key:(id)arg2 value:(id)arg3 valueType:(id)arg4 error:(id*)arg5;
- (bool)_work_addAttributeToNodeWithID:(long long)arg1 keyID:(long long)arg2 value:(id)arg3 valueType:(id)arg4 error:(id*)arg5;
- (void)_work_attemptDeleteWithCompletion:(id /* block */)arg1;
- (void)_work_beginTransaction;
- (void)_work_close;
- (long long)_work_countOfObjectsInTable:(id)arg1;
- (bool)_work_createGraphDatabaseIfNeededWithError:(id*)arg1;
- (bool)_work_deleteObjectsFromTable:(id)arg1 withIDs:(id)arg2 error:(id*)arg3;
- (bool)_work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 toNodeNamed:(id)arg3 error:(id*)arg4;
- (bool)_work_deleteRelationships:(id)arg1 toNodeWithName:(id)arg2 error:(id*)arg3;
- (bool)_work_doesNamedRowExist:(id)arg1 inTable:(id)arg2;
- (void)_work_endTransaction:(bool)arg1;
- (id)_work_nodesWithRelationship:(id)arg1 toNodeWithID:(id)arg2 reversed:(bool)arg3 error:(id*)arg4;
- (bool)_work_openDatabaseAtURL:(id)arg1 error:(id*)arg2;
- (bool)attemptDelete;
- (void)attemptDeleteWithCompletion:(id /* block */)arg1;
- (void)close;
- (id)database;
- (id)databasePath;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (void)performWork:(id /* block */)arg1 usingTransaction:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)performWork:(id /* block */)arg1 usingTransaction:(bool)arg2 error:(id*)arg3;
- (id)queue;
- (void)setDatabase:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)work_addNodeWithName:(id)arg1 error:(id*)arg2;
- (id)work_addNodesWithNames:(id)arg1 error:(id*)arg2;
- (bool)work_addRelationshipNamed:(id)arg1 fromNodeNamed:(id)arg2 toNodeNamed:(id)arg3 error:(id*)arg4;
- (bool)work_addRelationshipNamed:(id)arg1 fromNodeWithID:(long long)arg2 toNodeWithID:(long long)arg3 error:(id*)arg4;
- (id)work_allNodesWithFromRelationshipID:(long long)arg1 error:(id*)arg2;
- (id)work_attributesForNodeWithID:(long long)arg1 error:(id*)arg2;
- (id)work_attributesForNodeWithID:(long long)arg1 matchingKey:(id)arg2 error:(id*)arg3;
- (bool)work_changeRelationshipWithNameID:(long long)arg1 subjectID:(long long)arg2 toSampleWithUUID:(id)arg3 withNewNameID:(long long)arg4 error:(id*)arg5;
- (long long)work_countOfNodes;
- (long long)work_countOfNodesWithRelationship:(long long)arg1 error:(id*)arg2;
- (long long)work_countOfRelationshipOfType:(long long)arg1 fromNodeWithID:(long long)arg2 error:(id*)arg3;
- (long long)work_countOfRelationships;
- (bool)work_createIndicesIfNeededwithError:(id*)arg1;
- (bool)work_createTablesIfNeededWithError:(id*)arg1;
- (bool)work_deleteAllAttributesFromNodeNamed:(id)arg1 error:(id*)arg2;
- (bool)work_deleteAllRelationshipsOfTypes:(id)arg1 error:(id*)arg2;
- (bool)work_deleteAllRelationshipsWithName:(id)arg1 withError:(id*)arg2;
- (bool)work_deleteAttributesFromNodeNamed:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)work_deleteNodeWithID:(long long)arg1 error:(id*)arg2;
- (bool)work_deleteNodesWithIDs:(id)arg1 error:(id*)arg2;
- (bool)work_deleteRelationship:(id)arg1 fromNodeWithID:(long long)arg2 error:(id*)arg3;
- (bool)work_deleteRelationshipWithID:(long long)arg1 error:(id*)arg2;
- (bool)work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 error:(id*)arg3;
- (bool)work_deleteRelationships:(id)arg1 fromNodeWithID:(long long)arg2 toNodeNamed:(id)arg3 error:(id*)arg4;
- (bool)work_deleteRelationshipsWithIDs:(id)arg1 error:(id*)arg2;
- (bool)work_doesKeyExist:(id)arg1;
- (bool)work_doesNodeExist:(id)arg1;
- (bool)work_doesNodeExistWithTwoMatchingAttributesFirstKey:(long long)arg1 firstValue:(id)arg2 secondKey:(long long)arg3 secondValue:(id)arg4 exists:(bool*)arg5 error:(id*)arg6;
- (bool)work_doesRelationshipNameExist:(id)arg1;
- (bool)work_doesValueTypeExist:(id)arg1;
- (bool)work_dropIndicesWithError:(id*)arg1;
- (long long)work_firstRowIDForNodeNamed:(id)arg1 error:(id*)arg2;
- (long long)work_getIDForKeyName:(id)arg1 error:(id*)arg2;
- (long long)work_getIDForRelationshipName:(id)arg1 error:(id*)arg2;
- (id)work_getRelationshipsForNodeWithID:(long long)arg1 relationships:(id)arg2 fetchType:(long long)arg3 error:(id*)arg4;
- (bool)work_insertNewKeyIfNeeded:(id)arg1 error:(id*)arg2;
- (bool)work_insertNewRelationshipIfNeededNamed:(id)arg1;
- (bool)work_insertNewValueTypeIfNeeded:(id)arg1 error:(id*)arg2;
- (id)work_makeNodeWithName:(id)arg1 error:(id*)arg2;
- (id)work_metadataValueForKey:(id)arg1;
- (id)work_nodeForID:(long long)arg1 error:(id*)arg2;
- (id)work_nodeForName:(id)arg1;
- (id)work_nodeNameForAttributeWithKeyID:(long long)arg1 value:(id)arg2 error:(id*)arg3;
- (id)work_nodesContainingAttribute:(id)arg1 withValue:(id)arg2 error:(id*)arg3;
- (id)work_nodesContainingAttributeWithID:(long long)arg1 limit:(long long)arg2 withValue:(id)arg3 error:(id*)arg4;
- (id)work_nodesForIDs:(id)arg1 error:(id*)arg2;
- (id)work_nodesForNames:(id)arg1 error:(id*)arg2;
- (id)work_nodesWithRelationship:(id)arg1 fromNodeWithID:(id)arg2 error:(id*)arg3;
- (id)work_nodesWithRelationship:(id)arg1 toNodeWithID:(id)arg2 error:(id*)arg3;
- (id)work_nodesWithRelationshipOfType:(long long)arg1 toNodeWithID:(long long)arg2 error:(id*)arg3;
- (long long)work_rowIDForValueType:(id)arg1 error:(id*)arg2;
- (bool)work_setMetadataValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (long long)work_uniquedNodeWithName:(id)arg1 error:(id*)arg2;
- (id)work_userVersionWithError:(id*)arg1;
- (void)work_validateExistingDatabaseVersion;

@end
