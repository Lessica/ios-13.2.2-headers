/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDMessageQueryHelper : NSObject <EDMessageChangeHookResponder, EDMessageQueryHelperMessageSource, EDRemoteSearchDelegate, EFCancelable, EFLoggable> {
    EFCancelationToken * _cancelationToken;
    <EDMessageQueryHelperDelegate> * _delegate;
    struct atomic_flag { 
        bool _Value; 
    }  _didStart;
    EDPersistenceHookRegistry * _hookRegistry;
    EDMessagePersistence * _messagePersistence;
    NSMutableSet * _noLongerMatchingMessages;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _noLongerMatchingMessagesLock;
    NSString * _pendingConversationIDChangesKey;
    NSString * _pendingFlagChangesKey;
    NSString * _pendingJournaledMessageAddsKey;
    EFQuery * _query;
    EDMessageQueryEvaluator * _queryEvaluator;
    <EDRemoteSearchProvider> * _remoteSearchProvider;
    <EFScheduler> * _scheduler;
    bool  _shouldReconcileJournal;
}

@property (nonatomic, retain) EFCancelationToken *cancelationToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EDMessageQueryHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (readonly) NSString *pendingConversationIDChangesKey;
@property (readonly) NSString *pendingFlagChangesKey;
@property (readonly) NSString *pendingJournaledMessageAddsKey;
@property (nonatomic, readonly) EFQuery *query;
@property (nonatomic, retain) EDMessageQueryEvaluator *queryEvaluator;
@property (nonatomic, readonly) <EDRemoteSearchProvider> *remoteSearchProvider;
@property (nonatomic, readonly) <EFScheduler> *scheduler;
@property (nonatomic) bool shouldReconcileJournal;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_foundMessages:(id)arg1;
- (void)_getInitialResults;
- (void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(bool)arg2;
- (id)_transformAndFilterMessages:(id)arg1 includeDeleted:(bool)arg2;
- (void)cancel;
- (id)cancelationToken;
- (void)dealloc;
- (id)delegate;
- (id)hookRegistry;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 scheduler:(id)arg5 delegate:(id)arg6 shouldReconcileJournal:(bool)arg7;
- (id)messagePersistence;
- (id)messagesWithAdditionalPredicates:(id)arg1 limit:(long long)arg2;
- (id)pendingConversationIDChangesKey;
- (id)pendingFlagChangesKey;
- (id)pendingJournaledMessageAddsKey;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidReconcileJournaledMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsAddingMessages:(id)arg1 journaled:(bool)arg2 generationWindow:(id)arg3;
- (void)persistenceIsChangingConversationID:(long long)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceWillChangeConversationID:(long long)arg1 messages:(id)arg2;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (id)query;
- (id)queryEvaluator;
- (void)remoteSearchDidFindMessages:(id)arg1;
- (void)remoteSearchDidFinish;
- (id)remoteSearchProvider;
- (id)scheduler;
- (void)setCancelationToken:(id)arg1;
- (void)setQueryEvaluator:(id)arg1;
- (void)setShouldReconcileJournal:(bool)arg1;
- (bool)shouldReconcileJournal;
- (void)start;

@end
