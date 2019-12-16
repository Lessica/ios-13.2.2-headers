/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLBag : NSObject {
    SSXPCConnection * _connection;
    SSURLBagContext * _context;
    NSDictionary * _dictionary;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _expirationTime;
    bool  _ignoreCacheForNextLookup;
    NSMutableArray * _pendingLookups;
    NSString * _storeFrontIdentifier;
}

@property (readonly) SSURLBagContext *URLBagContext;
@property (readonly) NSDictionary *existingBagDictionary;
@property (readonly) NSString *storeFrontIdentifier;

+ (id)URLBagForContext:(id)arg1;
+ (void)setURLBag:(id)arg1 forContext:(id)arg2;

- (id)URLBagContext;
- (id)_connection;
- (void)_drainPendingLookupsWithError:(id)arg1;
- (void)_loadURLBag;
- (void)_loadWithCompletionBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchSync:(id /* block */)arg1;
- (id)existingBagDictionary;
- (void)getTrustForURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithURLBagContext:(id)arg1;
- (void)invalidate;
- (void)loadValueForKey:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadWithCompletionBlock:(id /* block */)arg1;
- (id)storeFrontIdentifier;
- (id)valueForKey:(id)arg1 error:(id*)arg2;

@end
