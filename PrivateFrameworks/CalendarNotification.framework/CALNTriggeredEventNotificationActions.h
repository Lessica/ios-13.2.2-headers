/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNTriggeredEventNotificationActions : NSObject <CALNTriggeredEventNotificationActionUpdater, CALNTriggeredEventNotificationResponseLaunchURLProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_mailOrganizerActionForNotification:(id)arg1;
+ (id)_mailtoURLForNotification:(id)arg1;

- (id)launchURLForResponse:(id)arg1;
- (id)updatedActionsForNotification:(id)arg1 existingActions:(id)arg2;

@end
