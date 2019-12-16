/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNNotificationIconCache : NSObject {
    <CALNNotificationIconProvider> * _notificationIconProvider;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <CALNNotificationIconProvider> *notificationIconProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)_iconCacheDirectory;
+ (id)_pathForCachedIconWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (bool)_addIconWithIdentifier:(id)arg1 toCacheAtPath:(id)arg2;
- (bool)_createCacheDirectoryIfNeeded;
- (id)cachedIconPathForIconIdentifier:(id)arg1;
- (id)iconIdentifierForCachedIconPath:(id)arg1;
- (id)initWithNotificationIconProvider:(id)arg1;
- (id)notificationIconProvider;
- (id)queue;

@end
