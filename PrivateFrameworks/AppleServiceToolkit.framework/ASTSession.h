/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTSession : NSObject <ASTConnectionManagerDelegate> {
    unsigned long long  _allowCellularSizeThreshold;
    long long  _backoffCounter;
    NSObject<OS_dispatch_semaphore> * _backoffTimer;
    NSError * _clientStatusLoopError;
    NSObject<OS_dispatch_queue> * _clientStatusQueue;
    <ASTConnectionManager> * _connectionManager;
    ASTContext * _context;
    <ASTSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    id /* block */  _fileSigner;
    id /* block */  _payloadSigner;
    ASTAuthInfoResult * _pendingAuthInfoResult;
    NSObject<OS_dispatch_semaphore> * _pendingAuthInfoSemaphore;
    ASTProfileResult * _pendingProfileResult;
    NSObject<OS_dispatch_semaphore> * _pendingProfileSemaphore;
    ASTRequest * _pendingPropertiesResult;
    NSObject<OS_dispatch_semaphore> * _pendingPropertiesSemaphore;
    NSMutableDictionary * _pendingTestResults;
    long long  _phase;
    long long  _retryCounter;
    NSMutableDictionary * _runningTests;
    NSString * _sessionId;
    id /* block */  _sessionTeardownCompletion;
    bool  _shouldAbort;
    bool  _shouldContinueRequestLoop;
    bool  _shouldUnenroll;
}

@property (nonatomic) unsigned long long allowCellularSizeThreshold;
@property (nonatomic) long long backoffCounter;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *backoffTimer;
@property (nonatomic, retain) NSError *clientStatusLoopError;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientStatusQueue;
@property (nonatomic, retain) <ASTConnectionManager> *connectionManager;
@property (nonatomic, readonly, copy) ASTContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTSessionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ fileSigner;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id /* block */ payloadSigner;
@property (nonatomic, retain) ASTAuthInfoResult *pendingAuthInfoResult;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *pendingAuthInfoSemaphore;
@property (nonatomic, retain) ASTProfileResult *pendingProfileResult;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *pendingProfileSemaphore;
@property (nonatomic, retain) ASTRequest *pendingPropertiesResult;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *pendingPropertiesSemaphore;
@property (nonatomic, retain) NSMutableDictionary *pendingTestResults;
@property (nonatomic) long long phase;
@property (nonatomic) long long retryCounter;
@property (nonatomic, retain) NSMutableDictionary *runningTests;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic, copy) id /* block */ sessionTeardownCompletion;
@property (nonatomic) bool shouldAbort;
@property (nonatomic) bool shouldContinueRequestLoop;
@property (nonatomic) bool shouldUnenroll;
@property (readonly) Class superclass;

+ (id)_destinationAssetDirectoryForSessionId:(id)arg1;
+ (id)_destinationURLForAsset:(id)arg1 sessionId:(id)arg2;
+ (void)_downloadAsset:(id)arg1 sessionId:(id)arg2 fileHandle:(id)arg3 completion:(id /* block */)arg4;
+ (void)_fetchAsset:(id)arg1 sessionId:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)_readContentsOfFileHandle:(id)arg1 error:(id*)arg2;
+ (bool)auditToken:(struct { unsigned int x1[8]; }*)arg1 hasEntitlement:(id)arg2;
+ (bool)currentProcessHasEntitlement;
+ (void)requestAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)sessionExistsForIdentities:(id)arg1 ticketNumber:(id)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
+ (void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)sessionExistsForSerialNumbers:(id)arg1 ticketNumber:(id)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
+ (id)sessionWithContext:(id)arg1;
+ (id)sessionWithIdentity:(id)arg1;
+ (id)sessionWithSerialNumber:(id)arg1;
+ (bool)shouldEvictCachedAssetForName:(id)arg1;

- (void).cxx_destruct;
- (id)_abort;
- (void)_abortRunningProcedures;
- (void)_archive;
- (bool)_authInfoIfNecessary;
- (void)_backoff;
- (void)_cancelControlExecution;
- (void)_cancelRunningTests;
- (void)_cancelSendingTestResults;
- (id)_clientAbort;
- (id)_continueWithLastRequest:(id)arg1;
- (void)_endAndUnenrollIfNecessary:(bool)arg1;
- (id)_idle;
- (bool)_profile;
- (void)_protocolError;
- (void)_removeDownloadedAssets;
- (id)_retryRequest;
- (id)_sendPropertiesWithData:(id)arg1;
- (id)_sendRequest:(id)arg1;
- (id)_sendTestResults:(id)arg1;
- (void)_setup;
- (bool)_shouldAllowCellularForSealedSealablePayload:(id)arg1;
- (bool)_shouldAllowCellularForSealedTestResult:(id)arg1;
- (id)_signFile:(id)arg1 error:(id*)arg2;
- (id)_signPayload:(id)arg1 error:(id*)arg2;
- (void)_startClientStatusLoop;
- (id)_startNewTest:(id)arg1 data:(id)arg2;
- (void)_teardown;
- (void)_updateProgress:(id)arg1;
- (id)_updateSessionSettingsWithData:(id)arg1;
- (id)_updateUIWithData:(id)arg1;
- (bool)_validateCommand:(long long)arg1 clientStatus:(long long)arg2;
- (unsigned long long)allowCellularSizeThreshold;
- (long long)backoffCounter;
- (id)backoffTimer;
- (id)clientStatusLoopError;
- (id)clientStatusQueue;
- (id)connectionManager;
- (void)connectionManager:(id)arg1 pausedSendingResultForTest:(id)arg2 reason:(long long)arg3;
- (void)connectionManager:(id)arg1 resumedSendingResultForTest:(id)arg2;
- (void)connectionManagerRequestPaused:(id)arg1;
- (void)connectionManagerRequestResumed:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)end;
- (id /* block */)fileSigner;
- (void)idle;
- (id)initWithContext:(id)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)initWithSerialNumber:(id)arg1;
- (void)invalidate;
- (id /* block */)payloadSigner;
- (id)pendingAuthInfoResult;
- (id)pendingAuthInfoSemaphore;
- (id)pendingProfileResult;
- (id)pendingProfileSemaphore;
- (id)pendingPropertiesResult;
- (id)pendingPropertiesSemaphore;
- (id)pendingTestResults;
- (long long)phase;
- (void)requestAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)retryCounter;
- (id)runningTests;
- (bool)sendAuthInfoResult:(id)arg1 error:(id*)arg2;
- (bool)sendProfileResult:(id)arg1 error:(id*)arg2;
- (bool)sendTestResult:(id)arg1 error:(id*)arg2;
- (id)sessionId;
- (id /* block */)sessionTeardownCompletion;
- (void)setAllowCellularSizeThreshold:(unsigned long long)arg1;
- (void)setBackoffCounter:(long long)arg1;
- (void)setBackoffTimer:(id)arg1;
- (void)setClientStatusLoopError:(id)arg1;
- (void)setClientStatusQueue:(id)arg1;
- (void)setConnectionManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setPendingAuthInfoResult:(id)arg1;
- (void)setPendingAuthInfoSemaphore:(id)arg1;
- (void)setPendingProfileResult:(id)arg1;
- (void)setPendingProfileSemaphore:(id)arg1;
- (void)setPendingPropertiesResult:(id)arg1;
- (void)setPendingPropertiesSemaphore:(id)arg1;
- (void)setPendingTestResults:(id)arg1;
- (void)setPhase:(long long)arg1;
- (void)setRetryCounter:(long long)arg1;
- (void)setRunningTests:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setSessionTeardownCompletion:(id /* block */)arg1;
- (void)setShouldAbort:(bool)arg1;
- (void)setShouldContinueRequestLoop:(bool)arg1;
- (void)setShouldUnenroll:(bool)arg1;
- (bool)shouldAbort;
- (bool)shouldContinueRequestLoop;
- (bool)shouldUnenroll;
- (void)start;
- (void)updateAction:(id)arg1;

@end
