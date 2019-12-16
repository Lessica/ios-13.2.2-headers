/* Generated by RuntimeBrowser.
 */

@protocol HMDAccessoryBrowserInjectedSettings

@required

- (HMDAuthServer *)createAuthServerWithDelegate:(id <HMDAuthServerDelegate>)arg1;
- (HAPAccessoryServerBrowserBTLE *)createBtleAccessoryBrowser;
- (HAPAccessoryServerBrowserIP *)createIpAccessoryBrowser;
- (HAPAccessoryServerBrowserRelay *)createRelayAccessoryBrowser;
- (NSObject<OS_dispatch_queue> *)workQueue;

@end
