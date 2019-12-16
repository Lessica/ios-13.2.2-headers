/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNNotificationSourceRefresher : NSObject {
    CALNInboxNotificationMonitor * _inboxNotificationMonitor;
    <CALNNotificationManager> * _notificationManager;
    NSArray<CALNNotificationSource> * _sources;
}

@property (nonatomic, readonly) CALNInboxNotificationMonitor *inboxNotificationMonitor;
@property (nonatomic, readonly) <CALNNotificationManager> *notificationManager;
@property (nonatomic, readonly, copy) NSArray<CALNNotificationSource> *sources;

- (void).cxx_destruct;
- (void)_withdrawExpiredNotificationsForSource:(id)arg1;
- (void)handleNotificationsChangedNotification:(id)arg1;
- (id)inboxNotificationMonitor;
- (id)initWithSources:(id)arg1 notificationMonitor:(id)arg2 notificationManager:(id)arg3;
- (id)notificationManager;
- (void)refreshNotifications;
- (void)refreshNotifications:(id)arg1;
- (id)sources;

@end
