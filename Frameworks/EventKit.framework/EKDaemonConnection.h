/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDaemonConnection : NSObject <CADClientInterface> {
    NSMutableDictionary * _cancellableOperations;
    NSObject<OS_dispatch_queue> * _connectionLock;
    <EKDaemonConnectionDelegate> * _delegate;
    bool  _hasEverConnected;
    CADDatabaseInitializationOptions * _initializationOptions;
    unsigned int  _nextCancellationToken;
    bool  _registeredForStartNote;
    <CADInterface> * _remoteOperationProxy;
    NSObject<OS_dispatch_queue> * _replyHandlerLock;
    <CADInterface> * _syncRemoteOperationProxy;
    bool  _wasAbortedDueToExcessiveConnctions;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly, retain) <CADInterface> *CADOperationProxy;
@property (nonatomic, readonly, retain) <CADInterface> *CADOperationProxySync;
@property <EKDaemonConnectionDelegate> *delegate;
@property (nonatomic) bool hasEverConnected;
@property (nonatomic, retain) CADDatabaseInitializationOptions *initializationOptions;
@property (nonatomic, readonly, retain) NSXPCConnection *xpcConnection;

+ (bool)_tryRegisterNewConnection;
+ (void)_unregisterConnection;
+ (unsigned long long)maxNumberOfOpenConnections;

- (void).cxx_destruct;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(bool)arg3;
- (id)CADOperationProxy;
- (id)CADOperationProxySync;
- (bool)_connectToServer;
- (void)_createConnectionAndOperationProxyIfNeeded;
- (void)_daemonRestarted;
- (void)_finishAllRepliesOnServerDeath;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)cancelRemoteOperation:(unsigned int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (bool)hasEverConnected;
- (id)init;
- (id)initializationOptions;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasEverConnected:(bool)arg1;
- (void)setInitializationOptions:(id)arg1;
- (id)xpcConnection;

@end
