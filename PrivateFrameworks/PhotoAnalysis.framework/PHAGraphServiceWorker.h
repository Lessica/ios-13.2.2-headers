/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAGraphServiceWorker : PHAWorker <PGGraphDataModelEnrichmentManagerDelegate, PHAGraphRegistration, PLPhotoAnalysisGraphServiceProtocol> {
    NSObject<OS_dispatch_queue> * _backgroundTaskQueue;
    NSProgress * _currentGraphRebuildProgress;
    <PGGraphHealthRecording> * _graphHealthRecorder;
    PGManager * _graphManager;
    NSObject<OS_os_transaction> * _graphWorkerWarmedUpTransaction;
    unsigned long long  _inq_state;
    NSDate * _lastLibraryChangeGraphUpdateJobCompletionDate;
    NSDate * _lastTodayWidgetMemoryCreationDate;
    NSMutableDictionary * _pendingGraphReadyCallbacks;
    unsigned long long  _pendingGraphRequests;
    long long  _pendingRequestReferenceCount;
    NSHashTable * _pendingRequestReferences;
    PHAPredicateValidator * _relatedRequestPredicateValidator;
    bool  _serviceEnabled;
    NSDictionary * _snapshotFilenameLookup;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *backgroundTaskQueue;
@property (nonatomic, retain) NSProgress *currentGraphRebuildProgress;
@property (nonatomic, readonly) NSDate *dateOfLastGraphRebuild;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PGManager *graphManager;
@property (nonatomic, retain) NSObject<OS_os_transaction> *graphWorkerWarmedUpTransaction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastLibraryChangeGraphUpdateJobCompletionDate;
@property (nonatomic, retain) NSMutableDictionary *pendingGraphReadyCallbacks;
@property (nonatomic) long long pendingRequestReferenceCount;
@property (nonatomic, retain) NSHashTable *pendingRequestReferences;
@property (nonatomic, retain) PHAPredicateValidator *relatedRequestPredicateValidator;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (long long)applicationDataFolderIdentifier;
+ (void)configureXPCConnection:(id)arg1;
+ (void)initialize;
+ (id)stringFromGraphServiceState:(unsigned long long)arg1;
+ (short)workerType;

- (void).cxx_destruct;
- (id)_PHMemoryBlacklistableFeatureTypeValueToDataAggregationKeyLookup;
- (id)_PHMemoryBlacklistedFeatureTypeValueToDataAggregationKeyLookup;
- (id)_PHMemoryCategoryValueToDataAggregationKeyLookup;
- (id)_aggregatedStatsForMiroMoodCountVector:(id)arg1;
- (id)_aggregatedStatsForMoodKeywordCountedSet:(id)arg1;
- (id)_aggregatedStatsForPossibleMoodCountVector:(id)arg1;
- (id)_aggregatedStatsForSuggestedMoodCountVector:(id)arg1;
- (id)_assetCollectionForLocalIdentifier:(id)arg1;
- (id)_assetCollectionForRelatedIdentifier:(id)arg1;
- (id)_basicPropertiesFromMemory:(id)arg1;
- (id)_collectionListForLocalIdentifier:(id)arg1;
- (id)_dataAggregationKeyForCategory:(unsigned long long)arg1 subCategory:(unsigned long long)arg2 lookupTable:(id)arg3;
- (id)_diagnosticsLogsRootFolderPath;
- (id)_featureVectorWithMemory:(id)arg1;
- (bool)_graphShouldBeConnected;
- (id)_infoForGraphCollectionBasedMemory:(id)arg1;
- (id)_infoForMemory:(id)arg1 representativeAssetCount:(unsigned long long)arg2 isTransientMemory:(bool)arg3;
- (id)_infoForMomentsBackingMemory:(id)arg1;
- (id)_infoForNotificationQualityOfMemory:(id)arg1;
- (void)_logAggregatedStatistics:(id)arg1;
- (void)_markEnrichmentNeededFollowingBackgroundRebuild:(bool)arg1;
- (id)_memoryInfoFromMemory:(id)arg1 options:(id)arg2;
- (unsigned long long)_memoryMoodForMiroMood:(long long)arg1;
- (id)_minimalLegacyFeatureVectorWithMemory:(id)arg1;
- (long long)_miroMoodForMemoryMood:(unsigned long long)arg1;
- (long long)_phTitleCategoryForPGTitleCategory:(long long)arg1;
- (void)_processMoodForMemory:(id)arg1 withMoodHistory:(id)arg2;
- (id)_propertiesFromMemory:(id)arg1;
- (bool)_shouldAggregateDataForReporting:(unsigned long long)arg1;
- (long long)_titleTupleFormatForPhotoAnalysisTitleFormat:(long long)arg1;
- (unsigned long long)_validatedMemoryNotificationState:(int)arg1;
- (id)assetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2;
- (id)backgroundMemoryGenerationJobWithScenario:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)backgroundTaskQueue;
- (void)callAndClearPendingReadyCallbacksWithResult:(bool)arg1 error:(id)arg2;
- (bool)canRunWhenGraphIsLoaded;
- (bool)canServiceGraphCurationRequestsInCurrentStateLoadingGraphIfNeeded;
- (bool)canServiceGraphRequestsInCurrentStateLoadingGraphIfNeeded;
- (bool)canServiceGraphStatusRequestsInCurrentStateLoadingGraphIfNeeded;
- (bool)checkForWritablePersistentStorageDirectoryURL;
- (void)cooldown;
- (id)currentGraphRebuildProgress;
- (id)currentlyUnavailableError;
- (id)dataModelEnrichmentJobWithScenario:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)dateOfLastGraphRebuild;
- (void)didCompleteRebuildOrDiffSuccessfully;
- (bool)didExceedtimeInterval:(double)arg1 forBackgroundJobUserDefaultsKey:(id)arg2;
- (void)enrichDataModelWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)enrichDataModelWithOptions:(id)arg1 isBackgroundEnrichmentJob:(bool)arg2 context:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)enrichmentManager:(id)arg1 didCancelProcessor:(id)arg2;
- (void)enrichmentManager:(id)arg1 didRunProcessor:(id)arg2;
- (bool)enrichmentManager:(id)arg1 shouldRunProcessor:(id)arg2;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)generateMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)graphManager;
- (id)graphProcessHistoricalChangeJobWithScenario:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)graphRebuildJobWithScenario:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateMadeProgress:(double)arg1;
- (id)graphWorkerWarmedUpTransaction;
- (void)handleOperation:(id)arg1;
- (bool)hasAdditionalJobForBackgroundMemoryGenerationInScenario:(unsigned long long)arg1;
- (bool)hasAdditionalJobForDataModelEnrichmentInScenario:(unsigned long long)arg1;
- (bool)hasAdditionalJobForGraphConsistencyUpdateInScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (bool)hasAdditionalJobForGraphRebuildInScenario:(unsigned long long)arg1;
- (bool)hasAdditionalJobForMetricsReportingInScenario:(unsigned long long)arg1;
- (bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)informationDictionaryForAsset:(id)arg1;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (void)invalidateGraphWithContext:(id)arg1 reply:(id /* block */)arg2;
- (bool)isEnabled;
- (bool)isQuiescent;
- (id)lastLibraryChangeGraphUpdateJobCompletionDate;
- (id)libraryTemporarilyUnavailableError;
- (void)markLastBackgroundGraphConsistencyUpdateJobDate;
- (void)markLastBackgroundGraphRebuildJobDate;
- (id)metricReportingJobWithScenario:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)pendingGraphReadyCallbacks;
- (long long)pendingRequestReferenceCount;
- (void)pendingRequestReferenceDidDeallocateForAddress:(void*)arg1;
- (id)pendingRequestReferenceForLabel:(id)arg1;
- (id)pendingRequestReferences;
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 isRequestedRebuild:(bool)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)rebuildGraphWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)relatedRequestPredicateValidator;
- (void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)reportMetricsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAllSocialGroupsForPersonIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetCollectionsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAssetRevGeocodingWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestAssetsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestAvailableSuggestionTypeInfosWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestCurationDebugInformationForAsset:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestDefaultsObjectForKey:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestExportGraphServiceForPurpose:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestGraphServicePerformsQueryWithContext:(id)arg1 query:(id)arg2 reply:(id /* block */)arg3;
- (void)requestGraphServiceStatisticsWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestGraphServiceStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestHighlightEnrichmentWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestHighlightEstimatesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestM5CompatibleMemoriesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestMemoryInfosWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestMemoryTreeDebugInformationWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestMetadataSnapshotFolderCreationWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestPeopleSuggestionLearningWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(id /* block */)arg7;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(id)arg6 reply:(id /* block */)arg7;
- (void)requestRelatedMomentsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSharingSuggestionsFromMessageStrings:(id)arg1 participantPHIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(id)arg5 reply:(id /* block */)arg6;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 context:(id)arg6 reply:(id /* block */)arg7;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSocialGroupsForPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSortedArrayOfPersonIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(id /* block */)arg5;
- (void)requestSuggestionInfosWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestTextFeaturesForMomentLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestTitleForMemoryWithLocalIdentifier:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (void)requestTransientMemoryPropertiesWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)requestUtilityAssetInformationWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 context:(id)arg3 reply:(id /* block */)arg4;
- (bool)retryStartup;
- (void)setBackgroundTaskQueue:(id)arg1;
- (void)setCurrentGraphRebuildProgress:(id)arg1;
- (void)setGraphManager:(id)arg1;
- (void)setGraphWorkerWarmedUpTransaction:(id)arg1;
- (void)setLastLibraryChangeGraphUpdateJobCompletionDate:(id)arg1;
- (void)setPendingGraphReadyCallbacks:(id)arg1;
- (void)setPendingRequestReferenceCount:(long long)arg1;
- (void)setPendingRequestReferences:(id)arg1;
- (void)setRelatedRequestPredicateValidator:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setupGraphManagerWithProgressBlock:(id /* block */)arg1;
- (void)setupPredicateValidator;
- (bool)shouldAllowBackgroundActivityWithDescription:(id)arg1;
- (bool)shouldStopOperationInProgress;
- (void)shutdown;
- (void)shutdownAndWaitForGraphManager;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (bool)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)startProcessingGraphUpdateJob:(id)arg1;
- (void)startup;
- (unsigned long long)state;
- (id)statusAsDictionary;
- (bool)stopAnalysisJob:(id)arg1 error:(id*)arg2;
- (void)stopProcessingGraphUpdateJob:(id)arg1;
- (unsigned long long)synchronousOffQueueState;
- (long long)unavailableErrorCodeForCurrentState;
- (bool)wantsGraphUpdateNotifications;
- (bool)wantsLiveGraphUpdates;
- (void)warmupWithProgressBlock:(id /* block */)arg1;

@end
