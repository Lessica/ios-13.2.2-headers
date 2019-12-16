/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXPCAutomaticErrorProxy : NSObject <FPXPCAutomaticErrorProxy> {
    NSError * _error;
    bool  _isSynchronous;
    NSString * _name;
    int  _pid;
    Protocol * _protocol;
    id /* block */  _requestWillBeginBlock;
    unsigned long long  _retainCounter;
    id  _retainSelfWhileMessageIsPending;
    NSObject<NSXPCProxyCreating> * _target;
}

@property (nonatomic) int requestEffectivePid;

+ (bool)sanitizeErrors;

- (void).cxx_destruct;
- (void)_requestDidFinish:(id)arg1 requestDidFinishBlock:(id /* block */)arg2;
- (id /* block */)_requestWillBegin:(SEL)arg1 requestID:(id)arg2;
- (bool)conformsToProtocol:(id)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* block */)arg6;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* block */)arg6 requestDidFinish:(id /* block */)arg7;
- (id)initWithRemoteObjectProxy:(id)arg1 protocol:(id)arg2 orError:(id)arg3 name:(id)arg4 requestPid:(int)arg5 requestWillBegin:(id /* block */)arg6;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (int)requestEffectivePid;
- (void)setRequestEffectivePid:(int)arg1;
- (id)synchronousRemoteObjectProxy;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
