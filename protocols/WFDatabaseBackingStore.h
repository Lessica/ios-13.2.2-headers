/* Generated by RuntimeBrowser.
 */

@protocol WFDatabaseBackingStore <NSObject>

@required

- (NSArray *)accessResourceStatesForReference:(WFWorkflowReference *)arg1;
- (void)accessStorageForDescriptor:(void *)arg1 usingBlock:(void *)arg2 withError:(void *)arg3; // needs 3 arg types, found 8: WFDatabaseObjectDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WFRecordStorage> *, id*, id*
- (WFDatabaseResult *)allConfiguredTriggers;
- (void)clearTombstonesAndSyncState;
- (WFWorkflowReference *)conflictingReferenceForReference:(WFWorkflowReference *)arg1;
- (WFConfiguredTrigger *)createTriggerWithRecord:(WFConfiguredTriggerRecord *)arg1 workflow:(WFWorkflowReference *)arg2 error:(id*)arg3;
- (WFWorkflowReference *)createWorkflowWithOptions:(WFWorkflowCreationOptions *)arg1 error:(id*)arg2;
- (NSData *)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(NSString *)arg1 forReference:(WFWorkflowReference *)arg2;
- (void)deleteAllAccessResourceStateDataForReference:(WFWorkflowReference *)arg1;
- (bool)deleteReference:(WFDatabaseObjectDescriptor *)arg1 tombstone:(bool)arg2 error:(id*)arg3;
- (WFDatabaseResult *)deletedWorkflows;
- (NSArray *)descriptorsForResult:(WFDatabaseResult *)arg1 error:(id*)arg2;
- (WFWorkflowReference *)duplicateReference:(WFWorkflowReference *)arg1 newName:(NSString *)arg2 error:(id*)arg3;
- (NSURL *)fileURL;
- (bool)isReference:(WFWorkflowReference *)arg1 allowedToRunOnDomain:(NSString *)arg2;
- (WFWorkflowRunEvent *)latestRunEvent;
- (WFWorkflowRunEvent *)logRunOfWorkflow:(WFWorkflowReference *)arg1 withSource:(NSString *)arg2 triggerID:(NSString *)arg3;
- (void)moveReferenceFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)performTransactionWithBlock:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id*, id*
- (NSArray *)referencesForWorkflowName:(NSString *)arg1;
- (void)refresh;
- (void)setConflictingReference:(WFWorkflowReference *)arg1 forReference:(WFWorkflowReference *)arg2;
- (void)setOutcome:(long long)arg1 forRunEvent:(WFWorkflowRunEvent *)arg2;
- (void)setPerWorkflowStateData:(NSData *)arg1 forAccessResourceWithIdentifier:(NSString *)arg2 forReference:(WFWorkflowReference *)arg3;
- (void)setSyncToken:(WFCloudKitSyncToken *)arg1;
- (void)setTrustedToRunScripts:(bool)arg1 forReference:(WFWorkflowReference *)arg2 onDomain:(NSString *)arg3;
- (void)setWorkflowOrdering:(NSOrderedSet *)arg1;
- (NSArray *)sortedRunEventsForTriggerID:(NSString *)arg1;
- (NSArray *)sortedRunEventsWithSource:(NSString *)arg1;
- (WFDatabaseResult *)sortedVisibleWorkflows;
- (WFDatabaseResult *)sortedVisibleWorkflowsByName;
- (WFDatabaseResult *)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(NSString *)arg1;
- (WFDatabaseResult *)sortedVisibleWorkflowsWithType:(NSString *)arg1;
- (WFDatabaseResult *)sortedWorkflowsIncludingTombstonesAndConflicts;
- (bool)startObservingChangesForResult:(WFDatabaseResult *)arg1;
- (WFCloudKitSyncToken *)syncToken;
- (WFWorkflowReference *)workflowReferenceWithName:(NSString *)arg1;

@end