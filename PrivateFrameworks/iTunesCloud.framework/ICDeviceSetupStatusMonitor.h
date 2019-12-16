/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDeviceSetupStatusMonitor : NSObject <ICNanoPairedDeviceStatusObserver> {
    NSMutableArray * _pendingBuddyCompleteBlocks;
    NSMutableArray * _pendingSetupCompleteBlocks;
    NSObject<OS_dispatch_queue> * _queue;
    int  _setupAssistantFinishedNotifyToken;
    int  _setupAssistantLaunchedNotifyToken;
    bool  _setupAssistantRunning;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceSetupComplete, nonatomic, readonly) bool deviceSetupComplete;
@property (readonly) unsigned long long hash;
@property (getter=isSetupAssistantRunning, nonatomic, readonly) bool setupAssistantRunning;
@property (readonly) Class superclass;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)_init;
- (void)_runAllPendingBlocksOfType:(long long)arg1;
- (void)dealloc;
- (bool)isDeviceSetupComplete;
- (bool)isSetupAssistantRunning;
- (void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2;
- (void)performBlockAfterBuddySetup:(id /* block */)arg1;
- (void)performBlockAfterDeviceSetup:(id /* block */)arg1;

@end
