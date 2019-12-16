/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineLibrary : NSObject <CPLAbstractObject, CPLStatusDelegate> {
    NSHashTable * _attachedObjects;
    NSDate * _cachedLastQuarantineCountReportDate;
    NSURL * _clientLibraryBaseURL;
    bool  _closed;
    NSObject<OS_dispatch_queue> * _closingQueue;
    NSURL * _cloudLibraryResourceStorageURL;
    NSURL * _cloudLibraryStateStorageURL;
    NSArray * _components;
    CPLConfiguration * _configuration;
    NSString * _currentClosingComponentName;
    CPLEngineFeedbackManager * _feedback;
    NSString * _libraryIdentifier;
    bool  _libraryIsCorrupted;
    unsigned long long  _libraryOptions;
    NSError * _openingError;
    <CPLEngineLibraryOwner> * _owner;
    CPLPlatformObject * _platformObject;
    NSObject<OS_dispatch_queue> * _queue;
    CPLEngineScheduler * _scheduler;
    CPLStatus * _status;
    CPLEngineStore * _store;
    CPLEngineSyncManager * _syncManager;
    CPLEngineSystemMonitor * _systemMonitor;
    unsigned long long  _totalAssetCount;
    bool  _totalAssetCountHasBeenCalculated;
    CPLEngineTransport * _transport;
}

@property (nonatomic, readonly, copy) NSURL *clientLibraryBaseURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryResourceStorageURL;
@property (nonatomic, readonly, copy) NSURL *cloudLibraryStateStorageURL;
@property (nonatomic, readonly) CPLConfiguration *configuration;
@property (readonly) NSString *currentClosingComponentName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *exitDeleteTime;
@property (nonatomic, readonly) CPLEngineFeedbackManager *feedback;
@property (nonatomic) bool hasChangesToProcess;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iCloudLibraryClientVersionTooOld;
@property (nonatomic) bool iCloudLibraryExists;
@property (nonatomic) bool iCloudLibraryHasBeenWiped;
@property (nonatomic, readonly) NSDate *initialSyncDate;
@property (nonatomic) bool isExceedingQuota;
@property (nonatomic, readonly, copy) NSString *libraryIdentifier;
@property (nonatomic, readonly) bool libraryIsCorrupted;
@property (nonatomic, readonly) unsigned long long libraryOptions;
@property (nonatomic) <CPLEngineLibraryOwner> *owner;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic, readonly) CPLEngineScheduler *scheduler;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CPLEngineSyncManager *syncManager;
@property (nonatomic, readonly) CPLEngineSystemMonitor *systemMonitor;
@property (nonatomic, readonly) CPLEngineTransport *transport;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (void)_closeNextComponent:(id)arg1 deactivate:(bool)arg2 lastError:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fillStatus:(id)arg1 forComponents:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_fillStatusArray:(id)arg1 forComponents:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_openNextComponent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_performBlockOnLibrary:(id /* block */)arg1;
- (void)_performBlockWithLibrary:(bool)arg1 enumerateAttachedObjects:(id /* block */)arg2;
- (void)_reportQuarantineCountIfNecessaryWithLastReportDate:(id)arg1;
- (void)_setCurrentClosingComponentName:(id)arg1;
- (void)_updateTotalAssetCountWithAssetCounts:(id)arg1;
- (void)attachObject:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)clientLibraryBaseURL;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)cloudLibraryResourceStorageURL;
- (id)cloudLibraryStateStorageURL;
- (id)componentName;
- (id)configuration;
- (id)corruptionInfo;
- (id)currentClosingComponentName;
- (id)description;
- (void)detachObject:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)exitDeleteTime;
- (id)feedback;
- (void)forceFetchAccountFlags;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasAccountFlagsData;
- (bool)hasAssetCountOnServer;
- (bool)hasChangesToProcess;
- (bool)iCloudLibraryClientVersionTooOld;
- (bool)iCloudLibraryExists;
- (bool)iCloudLibraryHasBeenWiped;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5;
- (id)initialSyncDate;
- (bool)isExceedingQuota;
- (id)libraryIdentifier;
- (bool)libraryIsCorrupted;
- (unsigned long long)libraryOptions;
- (void)notifyAttachedObjectsHasStatusChanges;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)owner;
- (id)platformObject;
- (void)provideCloudResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideLibraryInfoForScopeWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportLibraryCorrupted;
- (void)reportQuarantineCountIfNecessary;
- (void)reportRadar:(unsigned long long)arg1;
- (void)reportUnsuccessfulSync;
- (void)requestAttachedLibrary;
- (id)scheduler;
- (void)setConnectedToNetwork:(bool)arg1;
- (void)setExitDeleteTime:(id)arg1;
- (void)setHasCellularBudget:(bool)arg1 hasBatteryBudget:(bool)arg2 isConstrainedNetwork:(bool)arg3 isBudgetValid:(bool)arg4;
- (void)setHasChangesToProcess:(bool)arg1;
- (void)setICloudLibraryClientVersionTooOld:(bool)arg1;
- (void)setICloudLibraryExists:(bool)arg1;
- (void)setICloudLibraryHasBeenWiped:(bool)arg1;
- (void)setIsExceedingQuota:(bool)arg1;
- (void)setLowDiskSpace:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)startSyncSession;
- (void)statusDidChange:(id)arg1;
- (id)store;
- (id)syncManager;
- (id)systemMonitor;
- (unsigned long long)totalAssetCountOnServer;
- (id)transport;
- (void)updateAccountFlagsData:(id)arg1;
- (void)updateAssetCountsFromServer:(id)arg1;
- (void)updateDisabledFeatures:(id)arg1;
- (void)updateInitialSyncDate:(id)arg1;
- (void)updateLastSuccessfullSyncDate:(id)arg1;

@end
