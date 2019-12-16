/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDNetworkRouterFirewallRuleManager : HMFObject <HMDNetworkRouterFirewallRuleManager, HMDNetworkRouterFirewallRuleManagerDebug, HMFLogging> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> * _coordinator;
    <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> * _coordinatorFactory;
    NSCountedSet * _interestedAccessoriesSet;
    NSNotificationCenter * _notificationCenter;
    unsigned long long  _operationsInProgressCount;
    HMFUnfairLock * _propertyLock;
    NSMutableArray * _shutdownCompletions;
    NSMutableArray * _startupCompletions;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator> *coordinator;
@property (nonatomic, readonly) <HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinatorFactory> *coordinatorFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *interestedAccessories;
@property (nonatomic, readonly) NSCountedSet *interestedAccessoriesSet;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic) unsigned long long operationsInProgressCount;
@property (nonatomic, readonly) HMFUnfairLock *propertyLock;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, retain) NSMutableArray *shutdownCompletions;
@property (nonatomic, retain) NSMutableArray *startupCompletions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (double)_intervalPreferenceForKey:(id)arg1 defaultValue:(double)arg2;
+ (double)defaultCloudFetchInterval;
+ (double)defaultCloudFetchRetryInterval;
+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)__beginOperationWithBlock:(id /* block */)arg1;
- (void)__dispatchCompletionsWithError:(id)arg1 isStartup:(bool)arg2;
- (void)__dispatchShutdownCompletionsWithError:(id)arg1;
- (void)__dispatchStartupCompletionsWithError:(id)arg1;
- (void)__finishOperationWithCallbackBlock:(id /* block */)arg1;
- (void)__operationFinished;
- (void)__operationStarted;
- (void)__shutdown;
- (void)__startup;
- (void)_addOverridesWithData:(id)arg1 replace:(bool)arg2 completion:(id /* block */)arg3;
- (void)_dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(bool)arg3 listOnly:(bool)arg4 completion:(id /* block */)arg5;
- (void)_dumpLocalRuleConfigurationsForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 completion:(id /* block */)arg6;
- (void)_fetchCloudChangesIgnoringLastFetchedAccessories:(bool)arg1 forceChangeNotifications:(bool)arg2 completion:(id /* block */)arg3;
- (void)_fetchRulesForAccessories:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)_shutdownWithCompletion:(id /* block */)arg1;
- (void)_startupWithCompletion:(id /* block */)arg1;
- (void)addInterestedAccessories:(id)arg1;
- (void)addOverrides:(id)arg1 completion:(id /* block */)arg2;
- (id)callbackQueue;
- (id)coordinator;
- (id)coordinatorFactory;
- (void)dealloc;
- (void)dumpAllLocalRulesIgnoringOverrides:(bool)arg1 rawOutput:(bool)arg2 completion:(id /* block */)arg3;
- (void)dumpCloudRecordsForProductGroup:(id)arg1 productNumber:(id)arg2 rawOutput:(bool)arg3 completion:(id /* block */)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 ignoreOverrides:(bool)arg2 rawOutput:(bool)arg3 completion:(id /* block */)arg4;
- (void)dumpLocalRulesForProductGroup:(id)arg1 productNumber:(id)arg2 firmwareVersion:(id)arg3 ignoreOverrides:(bool)arg4 rawOutput:(bool)arg5 completion:(id /* block */)arg6;
- (void)fetchCloudChangesWithCompletion:(id /* block */)arg1;
- (void)fetchRulesForAccessories:(id)arg1 completion:(id /* block */)arg2;
- (void)forceFetchCloudChangesAndForceChangeNotifications:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1 workQueue:(id)arg2 coordinatorFactory:(id)arg3;
- (id)interestedAccessories;
- (id)interestedAccessoriesSet;
- (bool)isRunning;
- (void)listCloudRecordsForProductGroup:(id)arg1 rawOutput:(bool)arg2 completion:(id /* block */)arg3;
- (id)notificationCenter;
- (unsigned long long)operationsInProgressCount;
- (id)propertyLock;
- (void)removeAllLocalRulesWithCompletion:(id /* block */)arg1;
- (void)removeAllOverridesWithCompletion:(id /* block */)arg1;
- (void)removeInterestedAccessories:(id)arg1;
- (void)removeOverridesForProductGroup:(id)arg1 productNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)setCoordinator:(id)arg1;
- (void)setOperationsInProgressCount:(unsigned long long)arg1;
- (void)setOverrides:(id)arg1 completion:(id /* block */)arg2;
- (void)setShutdownCompletions:(id)arg1;
- (void)setStartupCompletions:(id)arg1;
- (id)shutdownCompletions;
- (void)shutdownWithCompletion:(id /* block */)arg1;
- (id)startupCompletions;
- (void)startupWithCompletion:(id /* block */)arg1;
- (id)workQueue;

@end
