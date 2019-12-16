/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTransportSession : NSObject {
    unsigned int  _basebandNotificationRegistrationToken;
    VCConnectionManager * _connectionManager;
    NSObject * _connectionSetupPiggybackBlob;
    bool  _didRegisterForBasebandNotifications;
    id /* block */  _eventHandler;
    bool  _isCallActive;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    TimingCollection * _perfTimings;
    struct opaqueRTCReporting { } * _reportingAgent;
    bool  _requiresWiFi;
    NSObject<OS_dispatch_queue> * _stateQueue;
    bool  _useCompressedConnectionData;
}

@property (nonatomic, readonly) unsigned int basebandNotificationRegistrationToken;
@property (nonatomic, readonly) VCConnectionManager *connectionManager;
@property (nonatomic, retain) NSObject *connectionSetupPiggybackBlob;
@property (nonatomic, readonly) unsigned int connectionSetupRTTEstimate;
@property (nonatomic, readonly) int detailedErrorCode;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (setter=setCallActive:, nonatomic) bool isCallActive;
@property (nonatomic, readonly) bool isHandoverSupported;
@property (nonatomic, readonly) bool isRemoteOSPreLion;
@property (nonatomic, retain) TimingCollection *perfTimings;
@property (nonatomic) bool requiresWiFi;
@property (nonatomic) bool useCompressedConnectionData;

- (unsigned int)basebandNotificationRegistrationToken;
- (void)callEventHandlerWithEvent:(unsigned int)arg1 info:(id)arg2;
- (void)cleanupBaseband;
- (id)connectionManager;
- (id)connectionSetupPiggybackBlob;
- (unsigned int)connectionSetupRTTEstimate;
- (void)dealloc;
- (void)deregisterBasebandNotifications;
- (int)detailedErrorCode;
- (id /* block */)eventHandler;
- (int)flushBasebandQueueForConnection:(id)arg1 payloadInfoList:(id)arg2;
- (int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned int*)arg2;
- (bool)getConnectionSetupData:(id*)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (int)getSignalStrengthBars:(int*)arg1 displayBars:(int*)arg2 maxDisplayBars:(int*)arg3;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (id)initWithNotificationQueue:(id)arg1 reportingAgent:(struct opaqueRTCReporting { }*)arg2;
- (bool)isCallActive;
- (bool)isHandoverSupported;
- (bool)isRemoteOSPreLion;
- (id)perfTimings;
- (int)registerBasebandNotificationsForConnection:(id)arg1;
- (void)reportNetworkConditionsDegraded;
- (bool)requiresWiFi;
- (void)setCallActive:(bool)arg1;
- (void)setConnectionSetupPiggybackBlob:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setPerfTimings:(id)arg1;
- (void)setRequiresWiFi:(bool)arg1;
- (void)setUseCompressedConnectionData:(bool)arg1;
- (void)start;
- (void)stop;
- (int)updateBasebandForConnection:(id)arg1;
- (int)updateQualityIndicator:(int)arg1 isIPv6:(bool)arg2;
- (bool)useCompressedConnectionData;

@end