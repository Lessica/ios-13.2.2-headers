/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDIDSServiceManager : HMFObject {
    _HMDIDSProxyLinkPreferenceAssertion * _proxyLinkPreferenceAssertion;
    IDSService * _proxyService;
    IDSService * _service;
    IDSService * _streamService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property _HMDIDSProxyLinkPreferenceAssertion *proxyLinkPreferenceAssertion;
@property (readonly) IDSService *proxyService;
@property (readonly) IDSService *service;
@property (readonly) IDSService *streamService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)proxyLinkPreferenceAssertion;
- (id)proxyService;
- (id)service;
- (void)setProxyLinkPreferenceAssertion:(id)arg1;
- (void)setProxyServiceLinkPreferences:(id)arg1;
- (id)streamService;
- (id)workQueue;

@end