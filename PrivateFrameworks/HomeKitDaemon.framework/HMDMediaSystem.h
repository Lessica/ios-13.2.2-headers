/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaSystem : NSObject <HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, HMFTimerDelegate, NSSecureCoding> {
    HMDApplicationData * _appData;
    HMFTimer * _auditSettingsTimer;
    NSArray * _components;
    NSString * _configuredName;
    HMFTimer * _fixupSettingsTimer;
    HMDHome * _home;
    HMDMediaSession * _mediaSession;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDAccessorySettingGroup * _rootSettings;
    HMDMediaSystemSymptomHandler * _symptomsHandler;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSArray *accessories;
@property (nonatomic, retain) HMDApplicationData *appData;
@property (nonatomic, retain) HMFTimer *auditSettingsTimer;
@property (nonatomic, copy) NSArray *components;
@property (nonatomic, retain) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMFTimer *fixupSettingsTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, retain) HMDMediaSession *mediaSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) HMDAccessorySettingGroup *rootSettings;
@property (readonly) Class superclass;
@property (readonly) HMDMediaSystemSymptomHandler *symptomsHandler;
@property (nonatomic, readonly) HMDAppleMediaAccessory *targetAccessory;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)_configureMediaSystemComponents:(id)arg1 mediaSystem:(id)arg2;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)sortMediaComponents:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appDataRemoved:(id)arg1 message:(id)arg2;
- (void)_appDataUpdated:(id)arg1 message:(id)arg2;
- (void)_auditRootSettingsAfterTimerFire;
- (void)_auditRootSettingsGroup:(unsigned long long)arg1;
- (void)_fixupAccessorySetting;
- (void)_fixupAccessorySettingAfterTimerFire;
- (void)_handleAppData:(id)arg1;
- (void)_handleUpdateMediaSystem:(id)arg1;
- (id)_mergeSetting:(id)arg1 item:(id)arg2 groupMetadata:(id)arg3;
- (void)_notifyClientsOfUpdatedRootSettings:(id)arg1;
- (void)_registerForMessages;
- (void)_registerForNotifications;
- (void)_setupSettings:(id)arg1;
- (void)_transactionMediaSystemUpdated:(id)arg1 message:(id)arg2;
- (void)_updateAppData:(id)arg1;
- (void)_updateMediaSystem:(id)arg1;
- (void)_updateMediaSystemSettingsGroup;
- (void)_updateSettings:(id)arg1;
- (id)accessories;
- (void)addModels:(id)arg1 settingsGroup:(id)arg2;
- (id)appData;
- (id)assistantObject;
- (void)auditMediaComponents;
- (void)auditRootSettingsGroup:(unsigned long long)arg1;
- (id)auditSettingsTimer;
- (id)backingStoreObjects;
- (id)components;
- (void)configureMediaSystemComponents:(id)arg1;
- (void)configureQueue:(id)arg1 messageDispatcher:(id)arg2;
- (id)configuredName;
- (id)container;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupAccessorySetting;
- (id)fixupSettingsTimer;
- (void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2;
- (void)handleHomeCloudZoneReadyNotification:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleRemovedRootSettingsModel:(id)arg1 message:(id)arg2;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaSystemModel:(id)arg1 home:(id)arg2;
- (bool)isValid;
- (id)logIdentifier;
- (id)mediaSession;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageReceiverChildren;
- (id)messageTargetUUID;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)msgDispatcher;
- (id)name;
- (void)notifyClientsOfUpdatedRootSettings:(id)arg1;
- (id)propertyQueue;
- (id)rootSettings;
- (id)serialize;
- (void)setAppData:(id)arg1;
- (void)setAuditSettingsTimer:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setFixupSettingsTimer:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRootSettings:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)symptomsHandler;
- (id)targetAccessory;
- (void)timerDidFire:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)unconfigureMediaSystemComponents;
- (void)unconfigureMediaSystemComponents:(id)arg1;
- (void)updateMediaSystemSettingsGroup;
- (id)url;
- (id)uuid;
- (id)workQueue;

@end