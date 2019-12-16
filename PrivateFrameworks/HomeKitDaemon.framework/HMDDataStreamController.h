/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamController : NSObject <HMDDataStreamDelegate, HMFLogging> {
    HMDHAPAccessory * _accessory;
    NSMutableArray * _activeProtocols;
    id /* block */  _dataStreamFactory;
    HMDDataStream * _defaultDataStream;
    NSString * _logIdentifier;
    HMDDataStreamSetup * _setupInProgress;
    bool  _supportsDataStreamOverTCP;
    HMDService * _transferManagementService;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) HMDHAPAccessory *accessory;
@property (nonatomic, retain) NSMutableArray *activeProtocols;
@property (readonly) id /* block */ dataStreamFactory;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDDataStream *defaultDataStream;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *logIdentifier;
@property (nonatomic, retain) HMDDataStreamSetup *setupInProgress;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDataStreamOverTCP;
@property (nonatomic) HMDService *transferManagementService;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cancelStreamTransportWithError:(id)arg1;
- (void)_continueStreamSetupWithResponse:(id)arg1;
- (void)_createBulkStreamProtocol;
- (void)_finishStreamTransport;
- (void)_generateStreamKeys;
- (id)_getActiveProtocolWithClass:(Class)arg1;
- (void)_handleAccessoryIsReachable;
- (void)_initiateStreamSetup;
- (void)_resetDefaultDataStream;
- (id)accessory;
- (id)activeProtocols;
- (void)addBulkSendListener:(id)arg1 fileType:(id)arg2;
- (bool)canAcceptBulkSendListeners;
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;
- (void)dataStreamDidClose:(id)arg1;
- (void)dataStreamDidOpen:(id)arg1;
- (id /* block */)dataStreamFactory;
- (id)defaultDataStream;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (void)handleAccessoryIsReachable:(id)arg1;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3 dataStreamFactory:(id /* block */)arg4;
- (void)invalidate;
- (id)logIdentifier;
- (void)registerForMessages;
- (void)removeBulkSendListener:(id)arg1;
- (void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)arg1;
- (void)setAccessory:(id)arg1;
- (void)setActiveProtocols:(id)arg1;
- (void)setDefaultDataStream:(id)arg1;
- (void)setSetupInProgress:(id)arg1;
- (void)setSupportsDataStreamOverTCP:(bool)arg1;
- (void)setTransferManagementService:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)setupInProgress;
- (void)startBulkSendSessionForFileType:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (bool)supportsDataStreamOverTCP;
- (id)transferManagementService;
- (id)workQueue;

@end
