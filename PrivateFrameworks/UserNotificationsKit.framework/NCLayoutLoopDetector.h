/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCLayoutLoopDetector : NSObject {
    NSMutableArray * _notificationLayoutsInProgress;
}

@property (retain) NSMutableArray *notificationLayoutsInProgress;

- (void).cxx_destruct;
- (void)_saveNotificationLayoutsInProgress;
- (id)_savedNotificationLayoutsInProgress;
- (void)addNotificationRequestToLayoutsInProgress:(id)arg1;
- (id)init;
- (bool)layoutInProgressContainsNotificationRequest:(id)arg1;
- (id)notificationLayoutsInProgress;
- (void)removeNotificationRequestFromLayoutsInProgress:(id)arg1;
- (void)setNotificationLayoutsInProgress:(id)arg1;

@end
