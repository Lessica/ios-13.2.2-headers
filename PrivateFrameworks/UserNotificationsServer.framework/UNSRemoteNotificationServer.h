/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate> {
    NSObject<OS_dispatch_queue> * _apsQueue;
    UNSAttachmentsService * _attachmentsService;
    NSSet * _backgroundAppRefreshBlackList;
    NSMutableDictionary * _bundleIdentifierToRegistration;
    NSMutableSet * _bundleIdentifiersNeedingToken;
    UNSNotificationCategoryRepository * _categoryRepository;
    NSMutableSet * _cloudKitBundleIdentifiers;
    NSMutableSet * _contentAvailableBundleIdentifiers;
    <_DASActivityScheduler> * _duetActivityScheduler;
    NSMutableDictionary * _environmentsToConnections;
    NSMutableSet * _foregroundBundleIdentifiers;
    NSMutableSet * _installedBundleIdentifiers;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSettingsService * _notificationSettingsService;
    <UNSRemoteNotificationServerObserver> * _observer;
    BSPlatform * _platform;
    NSMutableDictionary * _processBundleIdentifiersToApplicationBundleIdentifiers;
    UNSPushRegistrationRepository * _pushRegistrationRepository;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _restrictedBundleIdentifiers;
    NSMutableSet * _runningBundleIdentifiers;
    UNSNotificationServiceExtensionManager * _serviceExtensionManager;
    NSMutableSet * _userNotificationEnabledBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UNSRemoteNotificationServerObserver> *observer;
@property (readonly) Class superclass;

+ (id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;

- (void).cxx_destruct;
- (void)_extensionQueue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4 enforcePushType:(bool)arg5;
- (id)_initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 categoryRepository:(id)arg4 pushRegistrationRepository:(id)arg5 platform:(id)arg6 queue:(id)arg7 apsQueue:(id)arg8 duetActivityScheduler:(id)arg9 serviceExtensionManager:(id)arg10;
- (id)_portNameForEnvironmentName:(id)arg1;
- (id)_queue_allTopicsForApplication:(id)arg1;
- (void)_queue_applicationDidBecomeBackground:(id)arg1;
- (void)_queue_applicationDidBecomeForeground:(id)arg1;
- (void)_queue_applicationDidLaunch:(id)arg1;
- (void)_queue_applicationDidTerminate:(id)arg1;
- (void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_queue_backgroundRefreshApplicationsDidChange;
- (void)_queue_calculateTopics;
- (bool)_queue_canDeliverMessageToBundle:(id)arg1;
- (void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(bool)arg4;
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didCompleteInitialization;
- (void)_queue_didReceiveIncomingMessage:(id)arg1;
- (bool)_queue_enforcePushTypeForMessage:(id)arg1;
- (void)_queue_invalidateTokenForBundleIdentifier:(id)arg1;
- (bool)_queue_isApplicationForeground:(id)arg1;
- (bool)_queue_isApplicationRunning:(id)arg1;
- (bool)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1;
- (bool)_queue_isPushedEnabledForApplication:(id)arg1;
- (bool)_queue_isUserNotificationEnabled:(id)arg1;
- (bool)_queue_isUserNotificationEnabledForApplication:(id)arg1;
- (bool)_queue_messageIsValidForDelivery:(id)arg1;
- (void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (void)_queue_performMigration;
- (void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2;
- (void)_queue_reloadBackgroundAppRefreshBlackList;
- (void)_queue_reloadRegistrations;
- (void)_queue_removeRegistrationForBundleIdentifier:(id)arg1;
- (void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 enforcePushType:(bool)arg4;
- (void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)allowsRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)backgroundRefreshApplicationsDidChange;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)didCompleteInitialization;
- (id)initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 categoryRepository:(id)arg4 pushRegistrationRepository:(id)arg5 platform:(id)arg6;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (id)observer;
- (void)performMigration;
- (void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setObserver:(id)arg1;

@end
