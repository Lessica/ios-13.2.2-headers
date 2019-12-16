/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioPlaybackHistoryStore : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSURL * _containerURL;
    NSOperationQueue * _identityResolutionQueue;
    ICUserIdentityStore * _identityStore;
}

@property (nonatomic, readonly, copy) NSURL *containerDirectoryURL;
@property (nonatomic, readonly) ICUserIdentityStore *userIdentityStore;

+ (id)_defaultContainerURL;

- (void).cxx_destruct;
- (id)_fileURLForStationWithIdentifier:(id)arg1 identityKey:(id)arg2;
- (void)_getCacheKeyForUserIdentity:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_playbackHistoryOfClass:(Class)arg1 forStationWithIdentifier:(id)arg2 identityKey:(id)arg3 error:(id*)arg4;
- (id)containerDirectoryURL;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithContainerDirectoryURL:(id)arg1;
- (id)initWithContainerDirectoryURL:(id)arg1 identityStore:(id)arg2;
- (id)initWithIdentityStore:(id)arg1;
- (void)removeHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)updateHistoryForStationWithIdentifier:(id)arg1 userIdentity:(id)arg2 usingBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)userIdentityStore;

@end
