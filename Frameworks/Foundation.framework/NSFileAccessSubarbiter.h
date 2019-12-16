/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileAccessSubarbiter : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    NSFileAccessArbiter * _realSubarbiter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (oneway void)cancelAccessClaimForID:(id)arg1;
- (void)dealloc;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(bool)arg2;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (id)initWithQueue:(id)arg1 listener:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)stopArbitrating;
- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;

@end
