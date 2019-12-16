/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface> {
    NSDate * _anchorDate;
    bool  _hasReceivedInitialResults;
    id /* block */  _initialResultsHandler;
    NSDateComponents * _intervalComponents;
    NSNumber * _lastAnchor;
    unsigned long long  _mergeStrategy;
    unsigned long long  _options;
    bool  _requireQuantityType;
    NSMutableArray * _results;
    HKStatisticsCollection * _statisticsCollection;
    id /* block */  _statisticsUpdateHandler;
}

@property (readonly) NSDate *anchorDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ initialResultsHandler;
@property (readonly, copy) NSDateComponents *intervalComponents;
@property (retain) NSNumber *lastAnchor;
@property (nonatomic) unsigned long long mergeStrategy;
@property (readonly) unsigned long long options;
@property (retain) HKStatisticsCollection *statisticsCollection;
@property (nonatomic, copy) id /* block */ statisticsUpdateHandler;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3;
- (void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (id)anchorDate;
- (void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(bool)arg2 isFinal:(bool)arg3 anchor:(id)arg4 query:(id)arg5;
- (void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (id /* block */)initialResultsHandler;
- (id)intervalComponents;
- (id)lastAnchor;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setInitialResultsHandler:(id /* block */)arg1;
- (void)setLastAnchor:(id)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setStatisticsCollection:(id)arg1;
- (void)setStatisticsUpdateHandler:(id /* block */)arg1;
- (id)statisticsCollection;
- (id /* block */)statisticsUpdateHandler;

@end
