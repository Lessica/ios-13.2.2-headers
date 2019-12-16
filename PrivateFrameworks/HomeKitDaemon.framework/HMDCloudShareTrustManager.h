/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudShareTrustManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDDatabaseDelegate, HMFLogging, HMFTimerDelegate> {
    HMDCloudShareMessenger * _cloudShareMessenger;
    HMDCloudShareParticipantsManager * _cloudShareParticipantManager;
    HMBCloudZone * _cloudZone;
    long long  _configureState;
    <HMDCloudShareTrustManagerDataSource> * _dataSource;
    <HMDDatabase> * _database;
    <HMDCloudShareTrustManagerDelegate> * _delegate;
    HMBLocalZone * _localZone;
    bool  _ownedTrust;
    HMBShareUserID * _ownerCloudShareID;
    id /* block */  _participantsManagerFactory;
    NSObject<OS_dispatch_queue> * _queue;
    HMFTimer * _requestInviteTimer;
    id /* block */  _requestInviteTimerFactory;
}

@property (readonly) HMDCloudShareMessenger *cloudShareMessenger;
@property (retain) HMDCloudShareParticipantsManager *cloudShareParticipantManager;
@property (retain) HMBCloudZone *cloudZone;
@property long long configureState;
@property <HMDCloudShareTrustManagerDataSource> *dataSource;
@property (readonly) <HMDDatabase> *database;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCloudShareTrustManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HMBLocalZone *localZone;
@property (getter=isOwnedTrust, readonly) bool ownedTrust;
@property (retain) HMBShareUserID *ownerCloudShareID;
@property (copy) id /* block */ participantsManagerFactory;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain) HMFTimer *requestInviteTimer;
@property (copy) id /* block */ requestInviteTimerFactory;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_cancelRequestInviteTimer;
- (void)_configure;
- (void)_configureOwnerCloudShareIDWithCloudZone:(id)arg1;
- (void)_configureWithFetchZoneResult:(id)arg1 error:(id)arg2;
- (void)_configureWithOwnedZone;
- (void)_configureWithSharedZone;
- (void)_didCreateZone;
- (void)_didRemoveZone;
- (void)_finishConfigure;
- (void)_homeDidBecomeTrustZoneCapable:(id)arg1;
- (void)_removeTrust;
- (void)_requestShareInvitationForSharedZone;
- (void)_startRequestInviteTimer;
- (id)attributeDescriptions;
- (bool)canUseUntrustedAccountHandlesForParticipantManager:(id)arg1;
- (id)cloudShareMessenger;
- (id)cloudShareParticipantManager;
- (id)cloudZone;
- (void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2;
- (void)configure;
- (long long)configureState;
- (id)dataSource;
- (id)database;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2;
- (id)delegate;
- (void)discoverUntrustedUsers;
- (void)homeDidBecomeTrustZoneCapable:(id)arg1;
- (id)initWithDatabase:(id)arg1 isOwnedTrust:(bool)arg2 messageTargetUUID:(id)arg3 queue:(id)arg4 ownerCloudShareID:(id)arg5;
- (id)initWithDatabase:(id)arg1 isOwnedTrust:(bool)arg2 messageTargetUUID:(id)arg3 queue:(id)arg4 shareMessenger:(id)arg5 ownerCloudShareID:(id)arg6;
- (bool)isOwnedTrust;
- (id)localZone;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)logIdentifier;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(id /* block */)arg3;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (id)ownerCloudShareID;
- (id /* block */)participantsManagerFactory;
- (id)queue;
- (void)removeTrust;
- (id)requestInviteTimer;
- (id /* block */)requestInviteTimerFactory;
- (void)setCloudShareParticipantManager:(id)arg1;
- (void)setCloudZone:(id)arg1;
- (void)setConfigureState:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalZone:(id)arg1;
- (void)setOwnerCloudShareID:(id)arg1;
- (void)setParticipantsManagerFactory:(id /* block */)arg1;
- (void)setRequestInviteTimer:(id)arg1;
- (void)setRequestInviteTimerFactory:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;
- (void)updateCurrentUserCloudShareID;
- (void)updateSharedUsersCloudShareIDs;

@end
