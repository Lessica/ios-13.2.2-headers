/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTimeballRoutingProvider : NSObject {
    MNTimeballCache * _cache;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    MNTimeballNetworkRequester * _networkRequester;
}

- (void).cxx_destruct;
- (void)_checkCacheForOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 fromOrigin:(id)arg4 callbackBlock:(id /* block */)arg5 callbackQueue:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_gotoNetworkForOptions:(long long)arg1 forDestinations:(id)arg2 fromOrigin:(id)arg3 auditToken:(id)arg4 callbackBlock:(id /* block */)arg5 callbackQueue:(id)arg6;
- (id)initWithCache:(id)arg1;
- (void)requestRoutingOptions:(long long)arg1 forDestinations:(id)arg2 freshness:(id)arg3 fromOrigin:(id)arg4 auditToken:(id)arg5 callbackBlock:(id /* block */)arg6 callbackQueue:(id)arg7;
- (void)setNetworkRequester:(id)arg1;

@end
