/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSCoreTelephonyClientCache : NSObject {
    CoreTelephonyClient * _client;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bootstrapPlanTransferUsingMessageSession:(id)arg1;
- (bool)getTransferCapability:(unsigned long long)arg1;
- (id)init;
- (void)installPendingPlan:(id)arg1 completion:(id /* block */)arg2;
- (void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)pendingInstallItemsWithCompletion:(id /* block */)arg1;
- (void)setDataFallbackEnabled:(bool)arg1 forIccid:(id)arg2;
- (void)transferPlanListWithCompletion:(id /* block */)arg1;
- (void)transferPlanWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)transferPlansWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(id /* block */)arg3;

@end