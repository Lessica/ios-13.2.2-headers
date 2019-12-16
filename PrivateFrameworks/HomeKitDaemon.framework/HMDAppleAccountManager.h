/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleAccountManager : HMFObject <APSConnectionDelegate, HMDAccountManager, HMFLogging, HMFMessageReceiver, HMFTimerDelegate, IDSAccountDelegate, IDSAccountRegistrationDelegate, IDSServiceDelegate> {
    HMDAccount * _account;
    HMFExponentialBackoffTimer * _accountChangeBackoffTimer;
    HMDAppleAccountContext * _accountContext;
    ACAccountStore * _accountStore;
    HMDBackingStore * _backingStore;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDCloudCache * _cloudCache;
    HMFTimer * _devicesChangeBackoffTimer;
    HMFUnfairLock * _lock;
    bool  _monitoring;
    APSConnection * _pushConnection;
    int  _rapportIdentitiesChangedNotificationToken;
    bool  _rapportIdentitiesChangedNotificationTokenValid;
    IDSService * _service;
}

@property (retain) HMDAccount *account;
@property (nonatomic, readonly) HMFExponentialBackoffTimer *accountChangeBackoffTimer;
@property (readonly) HMDAppleAccountContext *accountContext;
@property (readonly) ACAccountStore *accountStore;
@property (nonatomic, retain) HMDBackingStore *backingStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMDCloudCache *cloudCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device;
@property (nonatomic, readonly) HMFTimer *devicesChangeBackoffTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic, readonly) APSConnection *pushConnection;
@property (nonatomic) int rapportIdentitiesChangedNotificationToken;
@property (getter=isRapportIdentitiesChangedNotificationTokenValid, nonatomic) bool rapportIdentitiesChangedNotificationTokenValid;
@property (nonatomic, readonly) IDSService *service;
@property (nonatomic, readonly) HMDAppleAccountSettings *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)__deviceAddedToCurrentAccount:(id)arg1;
- (void)__deviceRemovedFromCurrentAccount:(id)arg1;
- (void)__handleMigrationUpdated:(id)arg1;
- (void)__handleModifiedAccount:(id)arg1;
- (void)__handleRemovedAccount:(id)arg1;
- (void)__handleUpdatedName:(id)arg1;
- (void)__localDataReset:(id)arg1;
- (void)_deregisterForRapportNotifications;
- (void)_registerForRapportNotifications;
- (id)account;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(bool)arg2;
- (id)accountChangeBackoffTimer;
- (id)accountContext;
- (id)accountStore;
- (id)backingStore;
- (id)clientQueue;
- (id)cloudCache;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (id)device;
- (id)devicesChangeBackoffTimer;
- (id)init;
- (id)initWithIDSService:(id)arg1;
- (bool)isModelCurrentAccount:(id)arg1;
- (bool)isMonitoring;
- (bool)isRapportIdentitiesChangedNotificationTokenValid;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)primaryHandleForAccount:(id)arg1;
- (void)processAccountModel:(id)arg1 message:(id)arg2;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;
- (id)pushConnection;
- (int)rapportIdentitiesChangedNotificationToken;
- (id)service;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)setAccount:(id)arg1;
- (void)setBackingStore:(id)arg1;
- (void)setCloudCache:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setRapportIdentitiesChangedNotificationToken:(int)arg1;
- (void)setRapportIdentitiesChangedNotificationTokenValid:(bool)arg1;
- (id)settings;
- (bool)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
- (bool)shouldCacheAccount:(id)arg1;
- (bool)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;
- (bool)shouldSyncAccount:(id)arg1;
- (bool)shouldSyncDevice:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;

@end
