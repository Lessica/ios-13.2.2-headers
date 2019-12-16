/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
 */

@interface MSDKManagedDevice : NSObject {
    <MSDKF200EventObserverProtocol> * _F200EventObserver;
    NSObject<OS_xpc_object> * _connection;
    <MSDKManagedDeviceDelegate> * _delegate;
    NSObject<OS_xpc_object> * _helperConnection;
}

@property (retain) <MSDKF200EventObserverProtocol> *F200EventObserver;
@property (retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic) <MSDKManagedDeviceDelegate> *delegate;
@property (retain) NSObject<OS_xpc_object> *helperConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)F200EventObserver;
- (bool)cancelOperation;
- (bool)checkInBlockingUI;
- (bool)clearOwnershipWarning;
- (bool)configureWiFi:(id)arg1 password:(id)arg2;
- (id)connection;
- (id)delegate;
- (bool)deleteDataBlob;
- (id)errorWithXPCDictionary:(id)arg1;
- (bool)fetchF200EventsWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)fetchF200StatusInfo;
- (id)getCacheIdentifier;
- (long long)getDemoInstallState;
- (id)getDeviceOptions;
- (id)getPersistentWiFiSsid;
- (id)getScreenSaverConfig;
- (id)getStoreID;
- (void)handleContentUpdateStatus:(const char *)arg1 event:(id)arg2;
- (void)handleF200EventMessage:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)helperConnection;
- (id)init;
- (bool)isContentFrozen;
- (bool)isContentFrozen_xpc;
- (bool)isDeviceClassSupported;
- (bool)isEnrolled;
- (bool)lockDemoContent;
- (bool)needOwnershipWarning:(id*)arg1;
- (bool)prepare;
- (bool)prepareWithWiFi:(id)arg1 password:(id)arg2;
- (int)readDemoMode;
- (id)readNVRam:(id)arg1;
- (bool)registerF200EventObserver:(id)arg1;
- (id)retrieveDataBlob;
- (bool)saveScreenSaverConfig:(id)arg1;
- (id)saveScreenSaverIdleDelay:(id)arg1;
- (id)saveStoreHour:(id)arg1;
- (bool)sendF200ArmCommandWithOptions:(id)arg1 storePasscode:(id)arg2 replyQueue:(id)arg3 withCompletion:(id /* block */)arg4;
- (bool)sendF200ConfigCommandWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)sendF200DisarmCommandWithOptions:(id)arg1 storePasscode:(id)arg2 replyQueue:(id)arg3 withCompletion:(id /* block */)arg4;
- (bool)sendF200EchoCommandWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)sendF200GenericCommandWithPayload:(id)arg1 replyQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)sendF200QueryCommandWithOptions:(id)arg1 replyQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setF200EventObserver:(id)arg1;
- (void)setHelperConnection:(id)arg1;
- (bool)setIdleDelay:(long long)arg1;
- (bool)setStoreOpenAt:(long long)arg1 openMinute:(long long)arg2 closeHour:(long long)arg3 closeMinute:(long long)arg4;
- (bool)setupConnection;
- (bool)setupConnection:(id)arg1 withMachService:(id)arg2;
- (bool)setupHelperConnection;
- (bool)storeDataBlob:(id)arg1;
- (unsigned long long)typeOfDemoDevice;
- (bool)unenroll:(bool)arg1;
- (bool)unlockDemoContent;
- (bool)unregisterF200EventObserver;

@end
