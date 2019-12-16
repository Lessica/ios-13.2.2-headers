/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDExtension : FPDProvider <FPDPushMessageDelegate> {
    NSExtension * _extension;
    NSObject<OS_dispatch_queue> * _presentersQueue;
    NSObject<OS_dispatch_queue> * _sharedSessionQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *presentersQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sharedSessionQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)instanceWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3;

- (void).cxx_destruct;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)arg1;
- (id)asAppExtensionBackedProvider;
- (void)currentMaterializedSetSyncAnchorForDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)customPushTopics;
- (void)didReceiveMessage:(id)arg1;
- (void)enumerateMaterializedSetForDomain:(id)arg1 syncAnchor:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)extension;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 server:(id)arg3;
- (bool)isAppExtensionReachable;
- (bool)isEqual:(id)arg1;
- (id)presentersQueue;
- (void)reindexAllSearchableItemsForRequest:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)removeTrashedItemsOlderThanDate:(id)arg1 request:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setExtension:(id)arg1;
- (id)sharedSessionQueue;
- (id)uuid;
- (void)writeCheckReportTo:(id)arg1 limitNumberOfItems:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
