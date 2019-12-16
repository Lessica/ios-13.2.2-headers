/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraProfileSettingsManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMBLocalZoneModelObserver, HMDCloudShareParticipantsManagerDataSource, HMDDatabaseZoneManagerDelegate, HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    NSNumber * _anyUserAtHome;
    HMDBulletinBoard * _bulletinBoard;
    NSString * _clientIdentifier;
    unsigned long long  _currentAccessMode;
    <HMDCameraProfileSettingsManagerDelegate> * _delegate;
    HMDHAPAccessory * _hapAccessory;
    NSObject<OS_dispatch_queue> * _messageReceiveQueue;
    HMFMessageDispatcher * _msgDispatcher;
    NSNotificationCenter * _notificationCenter;
    HMFTimer * _safeModeTimer;
    id /* block */  _timerFactory;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
    HMDDatabaseZoneManager * _zoneManager;
}

@property (getter=isAnyUserAtHome, retain) NSNumber *anyUserAtHome;
@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (getter=isCameraManuallyDisabled, readonly) bool cameraManuallyDisabled;
@property (readonly) NSString *clientIdentifier;
@property (readonly) unsigned long long currentAccessMode;
@property (getter=isCurrentDevicePrimaryResident, readonly) bool currentDevicePrimaryResident;
@property (readonly) HMDCameraProfileSettingsModel *currentSettingsModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMDCameraProfileSettingsModel *defaultSettingsModel;
@property <HMDCameraProfileSettingsManagerDelegate> *delegate;
@property (readonly) HMDCameraProfileSettingsDerivedPropertiesModel *derivedPropertiesModel;
@property (readonly) NSUUID *derivedPropertiesModelID;
@property (readonly, copy) NSString *description;
@property HMDHAPAccessory *hapAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) HMFTimer *safeModeTimer;
@property (readonly) Class superclass;
@property (readonly) unsigned long long supportedFeatures;
@property (copy) id /* block */ timerFactory;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDDatabaseZoneManager *zoneManager;
@property (readonly) NSString *zoneName;

+ (id)logCategory;
+ (id)zoneNameForHome:(id)arg1;

- (void).cxx_destruct;
- (void)_addAccessModeCharacteristicWriteRequestsToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2;
- (void)_addHomeKitCameraActiveCharacteristicWriteRequestToArray:(id)arg1 currentAccessMode:(unsigned long long)arg2;
- (void)_addNightVisionCharacteristicWriteRequestToArray:(id)arg1 nightVisionEnabled:(bool)arg2;
- (void)_addOperatingModeIndicatorCharacteristicWriteRequestToArray:(id)arg1 accessModeIndicatorEnabled:(bool)arg2;
- (void)_addPeriodicSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg1 periodicSnapshotsAllowed:(bool)arg2;
- (void)_addRecordingAudioEnabledWriteRequestToArray:(id)arg1 recordingAudioEnabled:(bool)arg2;
- (void)_addSnapshotsActiveCharacteristicWriteRequestToArray:(id)arg1 snapshotsAllowed:(bool)arg2;
- (void)_addWriteRequestToArray:(id)arg1 forCharacteristicWithType:(id)arg2 ofServiceWithType:(id)arg3 value:(id)arg4;
- (void)_evaluateHomePresence;
- (void)_handleAccessModeChangeNotificationEnabled:(id)arg1;
- (void)_handleAccessModeIndicatorEnabled:(id)arg1;
- (void)_handleAccessoryDidBecomeReachable;
- (void)_handleBulletinBoardNotificationCommit:(id)arg1;
- (void)_handleCharacteristicWriteRequests:(id)arg1;
- (void)_handleModelUpdate:(id)arg1 previousModel:(id)arg2;
- (void)_handleRecordingAudioEnabled:(id)arg1;
- (void)_handleUpdateAccessMode:(id)arg1;
- (void)_handleUpdateNightVisionModeEnabled:(id)arg1;
- (void)_handleUpdateRecordingTriggerEvents:(id)arg1;
- (void)_handleUpdateSnapshotsAllowed:(id)arg1;
- (void)_handleUpdatedDerivedProperties:(id)arg1 previousProperties:(id)arg2;
- (void)_handleUpdatedSettings:(id)arg1 previousSettings:(id)arg2;
- (id /* block */)_localZoneUpdateCompletionForMessage:(id)arg1;
- (id)_payloadForSettings:(id)arg1;
- (void)_populateCurrentAccessModeFieldForDerivedProperties:(id)arg1 currentSettings:(id)arg2 userInitiated:(bool)arg3 didUpdateField:(bool*)arg4;
- (void)_populateNotificationFieldForSettings:(id)arg1 didUpdateField:(bool*)arg2;
- (id)_settingsModelForUpdate;
- (bool)_shouldQueryCanDisableRecordingForAccessMode:(unsigned long long)arg1 isAtHome:(bool)arg2 currentSettings:(id)arg3;
- (bool)_shouldQueryCanEnableRecordingForAccessMode:(unsigned long long)arg1 currentSettings:(id)arg2;
- (void)_startSafeModeTimer;
- (void)_synchronizeAllSettingsToCamera;
- (void)_updateClientsOfChangedSettings:(id)arg1;
- (void)_updateCurrentAccessModeForSettings:(id)arg1 userInitiated:(bool)arg2 withDescription:(id)arg3;
- (void)_updateSettingsWithDerivedProperties:(id)arg1;
- (id)bulletinBoard;
- (id)clientIdentifier;
- (void)configureWithMessageDispatcher:(id)arg1 adminMessageDispatcher:(id)arg2 deviceIsResidentCapable:(bool)arg3;
- (unsigned long long)currentAccessMode;
- (id)currentSettingsModel;
- (void)dealloc;
- (id)defaultSettingsModel;
- (id)delegate;
- (id)derivedPropertiesModel;
- (id)derivedPropertiesModelID;
- (void)disableRecordingAccessModes;
- (void)handleAccessoryConfiguredNotification:(id)arg1;
- (void)handleAccessoryServiceAddedNotification:(id)arg1;
- (void)handleCharacteristicsValueUpdated:(id)arg1;
- (void)handleHomePresenceEvaluatedNotification:(id)arg1;
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;
- (void)handleRecordingManagementServiceDidUpdateNotification:(id)arg1;
- (id)hapAccessory;
- (id)initWithHAPAccessory:(id)arg1 workQueue:(id)arg2;
- (id)initWithIdentifier:(id)arg1 hapAccessory:(id)arg2 workQueue:(id)arg3 zoneManager:(id)arg4 notificationCenter:(id)arg5 bulletinBoard:(id)arg6;
- (id)isAnyUserAtHome;
- (bool)isCameraManuallyDisabled;
- (bool)isCurrentDevicePrimaryResident;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (void)localZone:(id)arg1 processingDidComplete:(id)arg2 mirrorOutputFuture:(id)arg3 actions:(id)arg4;
- (id)logIdentifier;
- (bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (id)manuallyDisabledCharacteristic;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)notificationCenter;
- (void)remove;
- (id)safeModeTimer;
- (void)setAnyUserAtHome:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHapAccessory:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setSafeModeTimer:(id)arg1;
- (void)setTimerFactory:(id /* block */)arg1;
- (void)start;
- (unsigned long long)supportedFeatures;
- (void)timerDidFire:(id)arg1;
- (id /* block */)timerFactory;
- (id)uniqueIdentifier;
- (id)workQueue;
- (id)zoneManager;
- (void)zoneManagerDidStart:(id)arg1;
- (void)zoneManagerDidStop:(id)arg1;
- (id)zoneName;

@end
