/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurchaseManager : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (id)adopt:(id)arg1;
- (id)adoptableBundleIdentifiers;
- (void)checkAutomaticDownloadQueue;
- (void)checkPendingQueue;
- (void)checkPreflightForItemIdentifier:(id)arg1 atURL:(id)arg2 withReplyHandler:(id /* block */)arg3;
- (id)init;
- (void)processPurchase:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)startPurchase:(id)arg1 withResultHandler:(id /* block */)arg2;

@end
