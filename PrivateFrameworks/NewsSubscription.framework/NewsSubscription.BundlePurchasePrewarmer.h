/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
 */

@interface NewsSubscription.BundlePurchasePrewarmer : NSObject <FCBundleSubscriptionChangeObserver, FCNetworkReachabilityObserving> {
    void accessLock;
    void bundleSubscriptionManager;
    void cachedPurchaseModel;
    void configurationManager;
    void networkReachability;
    void purchaseManager;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (id)init;
- (void)networkReachabilityDidChange:(id)arg1;

@end
