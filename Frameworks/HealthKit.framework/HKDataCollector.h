/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDataCollector : NSObject <HKDataCollectorClientInterface, _HKXPCExportable> {
    NSString * _bundleIdentifier;
    HKDataCollectorCollectionConfiguration * _collectionConfiguration;
    HKDevice * _device;
    id /* block */  _finishCompletion;
    NSMutableArray * _flushRequests;
    HKHealthStore * _healthStore;
    NSUUID * _identifier;
    bool  _invalidated;
    NSMutableArray * _pendingBatches;
    HKTaskServerProxyProvider * _proxyProvider;
    HKQuantityType * _quantityType;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _reconsiderationSource;
    NSUUID * _registrationUUID;
    bool  _requiresRegistration;
    HKRetryableOperation * _retryableOperation;
    bool  _shouldFlushAll;
    long long  _state;
    NSMutableDictionary * _unconfirmedBatchesByUUID;
    double  _unitTest_maxDatumAgeOverride;
    id /* block */  _unitTest_registrationCompleteHandler;
    NSMutableDictionary * _unpersistedBatchesByUUID;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HKQuantityType *quantityType;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id /* block */)_combineCompletion:(id /* block */)arg1 withCompletion:(id /* block */)arg2;
- (bool)_datumsInDateOrder:(id)arg1 secondDatum:(id)arg2;
- (void)_queue_considerCompletingFlushRequests;
- (void)_queue_considerSendingBatches;
- (void)_queue_insertBatchForDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_requestRegistration;
- (void)_queue_sendBatch:(id)arg1;
- (void)_queue_taskServer_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 completion:(id /* block */)arg5;
- (void)_queue_updateReconsiderationTimer;
- (void)_requestRegistration;
- (bool)_validateDatums:(id)arg1 error:(out id*)arg2;
- (id)bundleIdentifier;
- (void)clientRemote_beginCollectionWithConfiguration:(id)arg1 lastPersistedDatum:(id)arg2 registrationUUID:(id)arg3;
- (void)clientRemote_collectThroughDate:(id)arg1 completion:(id /* block */)arg2;
- (void)clientRemote_collectionConfigurationDidChange:(id)arg1;
- (void)clientRemote_finishedPersistenceForBatch:(id)arg1 error:(id)arg2;
- (void)clientRemote_receivedBatch:(id)arg1 error:(id)arg2;
- (void)clientRemote_synchronizeWithCompletion:(id /* block */)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)description;
- (id)device;
- (id)exportedInterface;
- (void)finishWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1 bundleIdentifier:(id)arg2 quantityType:(id)arg3;
- (void)insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 completion:(id /* block */)arg4;
- (id)quantityType;
- (id)remoteInterface;
- (id)unitTest_pendingBatches;
- (void)unitTest_setMaxDatumAgeOverride:(double)arg1;
- (void)unitTest_setRegistrationCompleteHandler:(id /* block */)arg1;
- (id)unitTest_unconfirmedBatches;
- (id)unitTest_unpersistedBatches;

@end
