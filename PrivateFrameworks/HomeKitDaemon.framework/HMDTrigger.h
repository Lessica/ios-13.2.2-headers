/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTrigger : HMFObject <HMDBackingStoreObjectProtocol, HMDBulletinIdentifiers, HMDDevicePreferenceDataSource, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {
    NSMutableDictionary * _actionSetMappings;
    NSMutableArray * _actionSetUUIDs;
    bool  _active;
    HMDHome * _home;
    NSDate * _mostRecentFireDate;
    HMFMessageDispatcher * _msgDispatcher;
    NSString * _name;
    HMDUser * _owner;
    HMDDevice * _owningDevice;
    unsigned long long  _triggerType;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSDictionary *actionContext;
@property (nonatomic, retain) NSMutableDictionary *actionSetMappings;
@property (nonatomic, retain) NSMutableArray *actionSetUUIDs;
@property (nonatomic, readonly) NSArray *actionSets;
@property (nonatomic) bool active;
@property (nonatomic, readonly) NSDictionary *bulletinContext;
@property (getter=isConfigured, nonatomic, readonly) bool configured;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSDate *mostRecentFireDate;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSString *name;
@property (getter=isOwnedByThisDevice, nonatomic, readonly) bool ownedByThisDevice;
@property (nonatomic, retain) HMDUser *owner;
@property (nonatomic, retain) HMDDevice *owningDevice;
@property (nonatomic, readonly) bool requiresDataVersion4;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long triggerType;
@property (nonatomic, copy) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_actionSetsUpdated:(id)arg1 message:(id)arg2;
- (void)_activate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_activateTriggerRequest:(id)arg1;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_addActionSet:(id)arg1;
- (void)_executeActionSets:(id)arg1 captureCurrentState:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_executeActionSetsWithCompletionHandler:(id /* block */)arg1;
- (void)_fillBaseObjectChangeModel:(id)arg1;
- (void)_handleActivateTriggerRequest:(id)arg1;
- (void)_handleAddActionSetRequest:(id)arg1;
- (void)_handleAddTriggerOwnedActionSetRequest:(id)arg1;
- (void)_handleRemoveActionSetRequest:(id)arg1 postUpdate:(bool)arg2;
- (void)_handleRemoveTriggerOwnedActionSetRequest:(id)arg1 postUpdate:(bool)arg2;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleTriggerUpdate:(id)arg1 message:(id)arg2;
- (void)_handleUpdateActionSetRequest:(id)arg1;
- (void)_handleUpdateActionSetRequest:(id)arg1 postUpdate:(bool)arg2;
- (bool)_isTriggerFiredNotificationEntitled;
- (void)_recentFireDateUpdated:(id)arg1;
- (void)_registerForMessages;
- (void)_renameRequest:(id)arg1;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)_updateActionSetRequest:(id)arg1 postUpdate:(bool)arg2;
- (struct NSDictionary { Class x1; }*)actionContext;
- (id)actionSetMappings;
- (id)actionSetUUIDs;
- (id)actionSets;
- (void)activateAfterResidentChangeWithCompletion:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (bool)active;
- (id)backingStoreObjects:(long long)arg1;
- (struct NSDictionary { Class x1; }*)bulletinContext;
- (void)checkForNoActions;
- (bool)compatible:(id)arg1 user:(id)arg2;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (void)confirmResident;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupForReplacementAccessory:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2 message:(id)arg3;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (void)invalidate;
- (bool)isConfigured;
- (bool)isOwnedByThisDevice;
- (id)logIdentifier;
- (void)markChangedForMessage:(id)arg1;
- (void)markChangedForMessage:(id)arg1 triggerModel:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageReceiverChildren;
- (id)messageTargetUUID;
- (bool)modelContainsTriggerFired:(id)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(id)arg2;
- (id)mostRecentFireDate;
- (id)msgDispatcher;
- (id)name;
- (id)owner;
- (id)owningDevice;
- (void)reEvaluate;
- (void)removeAccessory:(id)arg1;
- (void)removeActionSet:(id)arg1 postUpdate:(bool)arg2;
- (void)removeCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (bool)requiresDataVersion4;
- (void)sendTriggerFiredNotification:(id)arg1;
- (void)setActionSetMappings:(id)arg1;
- (void)setActionSetUUIDs:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setEnabled:(bool)arg1 message:(id)arg2;
- (void)setHome:(id)arg1;
- (void)setMostRecentFireDate:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setOwningDevice:(id)arg1;
- (void)setTriggerType:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldActivateOnLocalDevice;
- (bool)shouldEncodeLastFireDate:(id)arg1;
- (bool)supportsDeviceWithCapabilities:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)triggerFired;
- (unsigned long long)triggerType;
- (id)updateEventTriggerMessage:(int)arg1 message:(id)arg2 relay:(bool)arg3;
- (void)userDidConfirmExecute:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;
- (id)workQueue;

@end
