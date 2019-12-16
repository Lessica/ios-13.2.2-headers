/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFHardwareManager : NSObject <NFHardwareManagerCallbacks, NSXPCConnectionDelegate> {
    NSXPCConnection * _connection;
    bool  _didPreWarm;
    NSMutableSet * _eventListeners;
    bool  _hasEventListener;
    unsigned int  _hwSupport;
    NSArray * _secureElements;
    NSDictionary * _secureElementsById;
    NSMutableSet * _sessions;
}

@property (readonly) NSUUID *blessedUser;
@property (readonly) NFHardwareControllerInfo *controllerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackgroundTagReadingAvailable;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendBackgroundTagReading;

+ (id)sharedHardwareManager;

- (void)_connectIfNeeded;
- (id)_startReaderSessionWithUI:(long long)arg1 callback:(id /* block */)arg2;
- (void)actOnUserInitiatedSystemShutDown:(unsigned int)arg1 completion:(id /* block */)arg2;
- (bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2;
- (bool)areSessionsAllowed;
- (id)blessedUser;
- (unsigned int)checkUserBlessing:(id)arg1;
- (unsigned int)checkUserBlessing:(id)arg1 hasCards:(bool*)arg2;
- (id)configureHeadlessFactoryMode:(bool)arg1;
- (void)configureReaderModeRFForTransitPartner:(bool)arg1 transitPartner:(unsigned int)arg2 callback:(id /* block */)arg3;
- (id)controllerInfo;
- (id)controllerInfoWithError:(id*)arg1;
- (void)dealloc;
- (void)didInterruptXPCConnection:(id)arg1;
- (void)didInvalidateXPCConnection:(id)arg1;
- (id)disableHeadless;
- (void)dumpLPMDebugLog;
- (id)enableHeadlessTestMode:(unsigned short)arg1;
- (bool)expressModesEnabled;
- (id)getDieID;
- (id)getDieIDWithError:(id*)arg1;
- (bool)getHeadlessFactoryMode:(id*)arg1;
- (id)getHeadlessModeFlags:(unsigned int*)arg1;
- (unsigned int)getHwSupport;
- (id)getPowerCounters:(id*)arg1;
- (id)getUniqueFDRKey:(id*)arg1;
- (bool)hasCard;
- (id)hostEmulationLog;
- (id)init;
- (void)invalidateConnection;
- (bool)isBackgroundTagReadingAvailable;
- (bool)isExpressAppletTypeSupported:(unsigned char)arg1;
- (bool)isExpressModeSupported;
- (bool)isInRestrictedMode;
- (bool)preWarm;
- (id)pushSignedRF:(id)arg1;
- (unsigned int)queryHardwareSupport:(id*)arg1;
- (void)refreshSecureElements;
- (void)registerEventListener:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)rfSettings;
- (bool)secureElementBootHistory:(id*)arg1;
- (id)secureElementWithIdentifier:(id)arg1;
- (void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(bool)arg2;
- (id)secureElements;
- (void)sessionDidEnd:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (unsigned int)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3;
- (unsigned int)setBlessedUser:(id)arg1 withAuthorization:(id)arg2;
- (id)setChipscope:(bool)arg1;
- (bool)setFieldDetectEnabled:(bool)arg1;
- (void)setSuspendBackgroundTagReading:(bool)arg1;
- (id)startContactlessPaymentSession:(id /* block */)arg1;
- (id)startContactlessSession:(id /* block */)arg1;
- (id)startContactlessUICCSession:(id /* block */)arg1;
- (id)startECommercePaymentSession:(id /* block */)arg1;
- (id)startFieldDetectSession:(id /* block */)arg1;
- (id)startHCESession:(id /* block */)arg1;
- (id)startLoyaltyAndContactlessPaymentSession:(id /* block */)arg1;
- (id)startNdefTagSession:(id /* block */)arg1;
- (id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 callback:(id /* block */)arg2;
- (id)startPeerPaymentSession:(id /* block */)arg1;
- (id)startReaderSession:(id /* block */)arg1;
- (id)startReaderSessionWithActionSheetUI:(id /* block */)arg1;
- (id)startSecureElementAndHCESession:(id /* block */)arg1;
- (id)startSecureElementManagerSession:(id /* block */)arg1;
- (id)startSecureElementManagerSessionWithPriority:(id /* block */)arg1;
- (id)startSecureElementManagerSessionWithPriority:(bool)arg1 callback:(id /* block */)arg2;
- (id)startSesHatSession:(id /* block */)arg1;
- (id)startTrustSession:(id /* block */)arg1;
- (bool)suspendBackgroundTagReading;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)toggleGPIO:(unsigned short)arg1;
- (bool)triggerDelayedWake:(unsigned char)arg1;
- (void)unregisterEventListener:(id)arg1;
- (id)updateHWSupport:(bool)arg1;

@end