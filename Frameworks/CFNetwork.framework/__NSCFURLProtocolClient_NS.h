/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient> {
    struct URLProtocolClient { int (**x1)(); } * _cf;
    struct _CFURLAuthChallenge { } * _cfChallenge;
    NSURLAuthenticationChallenge * _challenge;
    struct URLProtocol { int (**x1)(); int (**x2)(); int (**x3)(); struct CoreSchedulingSet {} *x4; double x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; long long x13; long long x14; struct Throttler {} *x15; bool x16; id x17; struct URLProtocolClient {} *x18; struct _CFCachedURLResponse {} *x19; } * _prot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (struct _CFURLAuthChallenge { }*)cfChallenge;
- (id)challenge;
- (void)dealloc;
- (id)initWithCFClient:(struct URLProtocolClient { int (**x1)(); }*)arg1 prot:(struct URLProtocol { int (**x1)(); int (**x2)(); int (**x3)(); struct CoreSchedulingSet {} *x4; double x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; long long x13; long long x14; struct Throttler {} *x15; bool x16; id x17; struct URLProtocolClient {} *x18; struct _CFCachedURLResponse {} *x19; }*)arg2;
- (void)teardown;
- (void)withCustomProtocolScheduling:(id /* block */)arg1;

@end
