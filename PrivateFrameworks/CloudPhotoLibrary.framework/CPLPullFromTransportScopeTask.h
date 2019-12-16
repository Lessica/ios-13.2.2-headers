/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask {
    CPLLibraryInfo * _currentLibraryInfo;
    Class  _currentQueryClass;
    bool  _didNotifySchedulerPullQueueIsFullOnce;
    <CPLEngineTransportDownloadBatchTask> * _downloadTask;
    <CPLEngineTransportGetCurrentSyncAnchorTask> * _fetchInitialSyncAnchorTask;
    bool  _hasCachedTotalAssetCountForScope;
    bool  _hasFetchedInitialSyncAnchor;
    bool  _ignoreNewBatches;
    CPLLibraryInfo * _initialLibraryInfo;
    CPLLibraryState * _initialLibraryState;
    struct NSData { Class x1; } * _initialSyncAnchor;
    bool  _needsToNotifySchedulerPullQueueIsFull;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSString * _phaseDescription;
    <CPLEngineTransportQueryTask> * _queryTask;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _rewindFeatureVersion;
    struct NSData { Class x1; } * _rewindSyncAnchor;
    bool  _shouldStoreInitialSyncAnchor;
    long long  _taskItem;
    unsigned long long  _totalAssetCountForScope;
    CPLEngineTransport * _transport;
    <CPLEngineTransportGroup> * _transportGroup;
    bool  _useCourtesyMingling;
    CPLFeatureVersionHistory * _versionHistory;
}

@property (copy) NSString *phaseDescription;

- (void).cxx_destruct;
- (void)_cancelAllTasks;
- (void)_checkServerFeatureVersionWithCompletionHandler:(id /* block */)arg1;
- (void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2;
- (void)_fetchInitialSyncAnchor;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(struct NSData { Class x1; }*)arg2 inTransaction:(id)arg3;
- (void)_handleNewBatchFromChanges:(id)arg1 updatedLibraryInfo:(id)arg2 updatedLibraryState:(id)arg3 newSyncAnchor:(struct NSData { Class x1; }*)arg4;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3;
- (void)_launch;
- (void)_launchFetchChangesFromSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (void)_launchNextQueryTask;
- (void)_launchPullTasksAndDisableQueries:(bool)arg1;
- (void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2;
- (void)_notifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)arg1;
- (unsigned long long)_totalAssetCountForScope;
- (void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(struct NSData { Class x1; }*)arg1;
- (void)cancel;
- (bool)checkScopeIsValidInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)launch;
- (id)phaseDescription;
- (void)setPhaseDescription:(id)arg1;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
