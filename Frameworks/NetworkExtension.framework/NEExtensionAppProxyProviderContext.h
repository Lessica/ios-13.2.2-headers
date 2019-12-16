/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderHostProtocol, NEExtensionAppProxyProviderProtocol> {
    unsigned int  _delegateInterfaceIndex;
    struct _NEFlowDirector { } * _director;
    NSObject<OS_dispatch_queue> * _flowQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property unsigned int delegateInterfaceIndex;
@property (readonly, copy) NSString *description;
@property struct _NEFlowDirector { }*director;
@property (retain) NSObject<OS_dispatch_queue> *flowQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)cancelWithError:(id)arg1;
- (unsigned int)delegateInterfaceIndex;
- (struct _NEFlowDirector { }*)director;
- (id)extensionPoint;
- (void)flowDivertMatchAppRulesWithFlow:(unsigned int)arg1 auditToken:(struct __CFData { }*)arg2 signingIdentifier:(struct __CFString { }*)arg3;
- (void)flowDivertNewFlow:(struct _NEFlow { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)flowDivertOpenControlSocket;
- (id)flowQueue;
- (void)openFlowDivertControlSocketWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegateInterface:(unsigned int)arg1;
- (void)setDelegateInterfaceIndex:(unsigned int)arg1;
- (void)setDirector:(struct _NEFlowDirector { }*)arg1;
- (void)setFlowQueue:(id)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1;
- (void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(bool)arg2;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1;

@end
