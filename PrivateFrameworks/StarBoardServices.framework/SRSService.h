/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StarBoardServices.framework/StarBoardServices
 */

@interface SRSService : NSObject <BSServiceConnectionListenerDelegate, NSLocking> {
    NSHashTable * _connections;
    bool  _invalidated;
    BSServiceConnectionListener * _listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <SRSServiceOwner> * _owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) <SRSServiceOwner> *owner;
@property (readonly) Class superclass;

+ (Class)_serviceSpecification;
+ (id)new;

- (void).cxx_destruct;
- (void)_activeConnectionsDidChange;
- (void)_addConnection:(id)arg1;
- (void)_enumerateRemoteTargetsUsingBlock:(id /* block */)arg1;
- (bool)_hasActiveConnections;
- (void)_removeConnection:(id)arg1;
- (id)_requiredBooleanEntitlements;
- (bool)_shouldAcceptConnection:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (bool)hasActiveConnections;
- (id)init;
- (id)initWithOwner:(id)arg1;
- (id)initWithOwner:(id)arg1 domain:(id)arg2;
- (void)invalidate;
- (bool)isInvalidated;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)lock;
- (id)owner;
- (id)processHandleForCurrentContext;
- (void)unlock;

@end
