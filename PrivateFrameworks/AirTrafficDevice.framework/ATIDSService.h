/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATIDSService : ATMessageLinkListener <ATSocketDelegate, IDSServiceDelegate> {
    ATIDSConnectionInfo * _connectionInfo;
    NSMutableArray * _listeners;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)openSocketPriorityFromATPendingChangePriority:(int)arg1;

- (void).cxx_destruct;
- (void)_cancelPendingConnectionRequests;
- (void)_connect;
- (id)_messageTypeToString:(int)arg1;
- (void)_scheduleConnectWithPriority:(long long)arg1;
- (void)_scheduleReconnect;
- (void)_sendWakeup;
- (void)addListener:(id)arg1;
- (id)deviceForId:(id)arg1;
- (bool)hasPairedDevice;
- (id)initWithServiceName:(id)arg1;
- (id)pairedDevice;
- (void)removeListener:(id)arg1;
- (void)requestConnectionToPairedDeviceWithPriority:(long long)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setPreferWifi:(bool)arg1;
- (void)socket:(id)arg1 hasDataAvailable:(const char *)arg2 length:(long long)arg3;
- (void)socketDidClose:(id)arg1;
- (bool)start;
- (void)stop;

@end
