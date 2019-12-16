/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNNotificationServerModule : NSObject <CADModule> {
    CALNCalendarAppBadgeUpdater * _calendarAppBadgeUpdater;
    CALNNotificationServer * _calendarNotificationServer;
    CALNNotificationStorageWrapper * _calendarStorageWrapper;
    CALNInboxNotificationMonitor * _inboxNotificationMonitor;
    NSArray * _modules;
    CALNNotificationSourceRefresher * _notificationSourceRefresher;
    CALNNotificationStorageWrapper * _remindersStorageWrapper;
}

@property (nonatomic, readonly) CALNCalendarAppBadgeUpdater *calendarAppBadgeUpdater;
@property (nonatomic, readonly) CALNNotificationServer *calendarNotificationServer;
@property (nonatomic, readonly) CALNNotificationStorageWrapper *calendarStorageWrapper;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (nonatomic, readonly) NSArray *modules;
@property (nonatomic, readonly) CALNNotificationSourceRefresher *notificationSourceRefresher;
@property (nonatomic, readonly) CALNNotificationStorageWrapper *remindersStorageWrapper;
@property (readonly) Class superclass;

+ (id)_createCalendarNotificationServerWithUserNotificationCenterFactory:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 inboxNotificationProvider:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 timeToLeaveRefreshMonitor:(id)arg7 timeToLeaveRefreshStorage:(id)arg8;
+ (id)_createNotificationServerWithUserNotificationCenter:(id)arg1 storage:(id)arg2 eventStoreProvider:(id)arg3 inboxNotificationProvider:(id)arg4 alarmEngineMonitor:(id)arg5 travelEngine:(id)arg6 timeToLeaveRefreshMonitor:(id)arg7 timeToLeaveRefreshStorage:(id)arg8;
+ (id)_createNotificationSourcesWithNotificationManager:(id)arg1 eventStoreProvider:(id)arg2 inboxNotificationProvider:(id)arg3 alarmEngineMonitor:(id)arg4 travelEngine:(id)arg5 timeToLeaveRefreshMonitor:(id)arg6 timeToLeaveRefreshStorage:(id)arg7;
+ (id)_createNotificationStorageAtPath:(id)arg1;
+ (id)_createTimeToLeaveRefreshStorageAtPath:(id)arg1;
+ (id)_createTriggeredEventNotificationDataStorageAtPath:(id)arg1;
+ (id)_notificationStoragePathWithName:(id)arg1;
+ (id)_protectedCalendarNotificationStorage;
+ (void)_setProtectedClassForStorageAtPath:(id)arg1;
+ (id)_timeToLeaveRefreshStorage;
+ (id)_timeToLeaveRefreshStoragePathWithName:(id)arg1;
+ (id)_triggeredEventNotificationDataStorage;
+ (id)_triggeredEventNotificationDataStoragePathWithName:(id)arg1;
+ (id)_unprotectedCalendarNotificationStorage;

- (void).cxx_destruct;
- (void)_registerSettingsCaptureHandlers;
- (void)_reloadNotificationRecords:(id)arg1 forNotificationServer:(id)arg2;
- (void)_reloadNotificationsAfterFirstUnlock;
- (void)_reloadNotificationsFromUnprotectedStorage:(id)arg1 intoProtectedStorage:(id)arg2 withStorageWrapper:(id)arg3 forNotificationServer:(id)arg4;
- (void)_removeNotificationsFromUnprotectedStorage:(id)arg1;
- (void)_updateSourceClientIdentifiersIfNeeded;
- (void)activate;
- (id)calendarAppBadgeUpdater;
- (id)calendarNotificationServer;
- (id)calendarStorageWrapper;
- (void)deactivate;
- (void)didRegisterForAlarms;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)inboxNotificationMonitor;
- (id)init;
- (id)modules;
- (id)notificationSourceRefresher;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (id)remindersStorageWrapper;

@end
