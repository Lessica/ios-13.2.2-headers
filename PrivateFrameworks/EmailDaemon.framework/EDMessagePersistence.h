/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMessagePersistence : NSObject <EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter, EFLoggable> {
    NSNumber * _cachedMetadataEstimatedRowCount;
    NSObject<OS_dispatch_queue> * _cachedMetadataIsolation;
    int  _cachedMetadataUpdatesSinceLastCheck;
    EDPersistenceDatabase * _database;
    EDMailboxPersistence * _mailboxPersistence;
}

@property (nonatomic, retain) NSNumber *cachedMetadataEstimatedRowCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cachedMetadataIsolation;
@property (nonatomic) int cachedMetadataUpdatesSinceLastCheck;
@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDMailboxPersistence *mailboxPersistence;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon

+ (id)_cachedMetadataTableSchema;
+ (id)_messageReferencesTableSchema;
+ (id)addressesTableName;
+ (id)addressesTableSchema;
+ (id)attachmentsTableName;
+ (id)attachmentsTableSchemaAndForeignKeysToResolve:(id*)arg1;
+ (id)bitExpressionForAttachments;
+ (id)bitExpressionForConversationFlag:(unsigned long long)arg1;
+ (id)log;
+ (id)messagesTableName;
+ (id)objectPropertyMapperForSchema:(id)arg1 protectedSchema:(id)arg2;
+ (id)partialMessagesTableSchemaAndAssociationsToResolve:(id*)arg1;
+ (id)protectedMessageDataTableSchema;
+ (id)protectedTablesAndForeignKeysToResolve:(id*)arg1;
+ (id)recipientsTableSchemaAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;
+ (id)subjectsTableSchema;
+ (id)summariesTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (id)_cachedMetadataJSONForKey:(id)arg1 messageIDHash:(id)arg2;
- (void)_checkCachedMetadataRowLimitWithConnection:(id)arg1;
- (id)_databaseIDsDictionaryForMessageIDHashes:(id)arg1 mailboxScope:(id)arg2;
- (id)_groupMessageObjectIDsByMailboxScope:(id)arg1;
- (void)_setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageIDHash:(id)arg3;
- (id)_threadQueryForThreadObjectID:(id)arg1;
- (id)cachedMetadataEstimatedRowCount;
- (id)cachedMetadataIsolation;
- (id)cachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2;
- (int)cachedMetadataUpdatesSinceLastCheck;
- (long long)countOfMessagesMatchingQuery:(id)arg1;
- (long long)countOfMessagesWithMessageIDHeaderHash:(id)arg1 matchingQuery:(id)arg2;
- (id)database;
- (id)databaseIDsDictionaryForMessageObjectIDs:(id)arg1;
- (id)enabledAccountMailboxesExpression;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (id)initWithMailboxPersistence:(id)arg1 database:(id)arg2;
- (void)iterateMessagesMatchingQuery:(id)arg1 batchSize:(long long)arg2 firstBatchSize:(long long)arg3 limit:(long long)arg4 cancelationToken:(id)arg5 handler:(id /* block */)arg6;
- (void)iteratePersistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3 handler:(id /* block */)arg4;
- (id)mailboxPersistence;
- (id)messageObjectIDCriterionExpressionForPredicateValue:(id)arg1;
- (id)messagesForMessageObjectIDs:(id)arg1 missedMessageObjectIDs:(id*)arg2;
- (id)messagesForPersistedMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)messagesMatchingQuery:(id)arg1;
- (id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2;
- (id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2 cancelationToken:(id)arg3;
- (void)performDatabaseReadBlock:(id /* block */)arg1;
- (void)performDatabaseWorkInBlockWithHighPriority:(id /* block */)arg1;
- (id)persistedMessageForOutgoingMessage:(id)arg1 isDraft:(bool)arg2;
- (id)persistedMessagesForDatabaseIDs:(id)arg1 requireProtectedData:(bool)arg2 temporarilyUnavailableDatabaseIDs:(id*)arg3;
- (id)persistedMessagesForMessageObjectIDs:(id)arg1 requireProtectedData:(bool)arg2 temporarilyUnavailableMessageObjectIDs:(id*)arg3;
- (id)persistedMessagesForObjectIDs:(id)arg1 requireProtectedData:(bool)arg2;
- (id)persistedMessagesMatchingQuery:(id)arg1 limit:(long long)arg2;
- (id)queryWithExpandedMailboxesFromQuery:(id)arg1;
- (void)reconcileJournalWithCompletionBlock:(id /* block */)arg1;
- (id)requestContentForMessageObjectID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)requestSummaryForMessageObjectID:(id)arg1;
- (void)setCachedMetadataEstimatedRowCount:(id)arg1;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (void)setCachedMetadataUpdatesSinceLastCheck:(int)arg1;
- (id)validMailboxesForPrediction;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (bool)isMessageKnownToHaveNoMailDropAttachment:(id)arg1;
- (void)setIsMailDropAttachmentPresent:(bool)arg1 forMessage:(id)arg2;

@end
