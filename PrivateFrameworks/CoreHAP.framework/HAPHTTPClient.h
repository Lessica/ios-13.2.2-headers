/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPHTTPClient : HMFObject <HAPHTTPClientDebugDelegate, HMFLogging> {
    <HAPHTTPClientDebugDelegate> * _debugDelegate;
    NSObject<OS_dispatch_queue> * _debugDelegateQueue;
    <HAPHTTPClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSString * _dnsName;
    struct HTTPClientPrivate { } * _httpClient;
    bool  _invalidateRequested;
    bool  _invalidated;
    long long  _port;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <HAPHTTPClientDebugDelegate> *debugDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *debugDelegateQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAPHTTPClientDelegate> *delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dnsName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidateRequested;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly) HMFNetAddress *peerAddress;
@property (nonatomic, readonly) NSString *peerEndpointDescription;
@property (nonatomic, readonly) long long port;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)_debugDelegateRespondsToSelector:(SEL)arg1;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (id)_deserializeUAPJSONData:(id)arg1 error:(id*)arg2;
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct HTTPMessagePrivate {} *x2; struct { BOOL x_3_1_1[8192]; unsigned long long x_3_1_2; char *x_3_1_3; unsigned long long x_3_1_4; char *x_3_1_5; unsigned long long x_3_1_6; int x_3_1_7; char *x_3_1_8; unsigned long long x_3_1_9; struct { char *x_10_2_1; unsigned long long x_10_2_2; char *x_10_2_3; unsigned long long x_10_2_4; char *x_10_2_5; unsigned long long x_10_2_6; char *x_10_2_7; unsigned long long x_10_2_8; char *x_10_2_9; unsigned long long x_10_2_10; char *x_10_2_11; unsigned long long x_10_2_12; char *x_10_2_13; unsigned long long x_10_2_14; char *x_10_2_15; char *x_10_2_16; char *x_10_2_17; unsigned long long x_10_2_18; char *x_10_2_19; unsigned long long x_10_2_20; } x_3_1_10; char *x_3_1_11; unsigned long long x_3_1_12; int x_3_1_13; char *x_3_1_14; unsigned long long x_3_1_15; unsigned char x_3_1_16; unsigned long long x_3_1_17; unsigned char x_3_1_18; int x_3_1_19; } x3; unsigned char x4; int x5; unsigned char x6; }*)arg1 completionHandler:(id /* block */)arg2;
- (int)_initializeCoreUtilsHTTPClientWithPort:(long long)arg1 withEventsEnabled:(bool)arg2;
- (void)_sendHTTPRequestToURL:(id)arg1 withMethod:(int)arg2 requestObject:(id)arg3 serializationType:(unsigned long long)arg4 timeout:(double)arg5 activity:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)_serializeUAPJSONObject:(id)arg1 error:(id*)arg2;
- (id)debugDelegate;
- (id)debugDelegateQueue;
- (id)delegate;
- (id)delegateQueue;
- (id)dnsName;
- (bool)enableUAPSessionSecurityWithReadKey:(unsigned char)arg1 writeKey:(unsigned char)arg2 error:(id*)arg3;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (id)initWithDNSName:(id)arg1 port:(long long)arg2 eventsEnabled:(bool)arg3 queue:(id)arg4;
- (id)initWithDNSName:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (bool)invalidateRequested;
- (bool)isInvalidated;
- (id)logIdentifier;
- (id)peerAddress;
- (id)peerEndpointDescription;
- (long long)port;
- (id)queue;
- (void)sendDELETERequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)sendPOSTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)sendPUTRequestToURL:(id)arg1 withRequestObject:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)setDebugDelegate:(id)arg1;
- (void)setDebugDelegate:(id)arg1 queue:(id)arg2;
- (void)setDebugDelegateQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDnsName:(id)arg1;
- (void)setInvalidateRequested:(bool)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
