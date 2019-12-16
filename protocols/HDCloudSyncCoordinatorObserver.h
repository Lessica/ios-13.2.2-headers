/* Generated by RuntimeBrowser.
 */

@protocol HDCloudSyncCoordinatorObserver

@required

- (void)cloudSyncCoordinatorObserver:(HDCloudSyncCoordinator *)arg1 didUpdateErrorRequiringUserAction:(NSError *)arg2;
- (void)cloudSyncCoordinatorObserver:(HDCloudSyncCoordinator *)arg1 didUpdateLastPushDate:(NSDate *)arg2 lastPullDate:(NSDate *)arg3;
- (void)cloudSyncCoordinatorObserver:(HDCloudSyncCoordinator *)arg1 didUpdateRestoreCompletionDate:(NSDate *)arg2;
- (void)cloudSyncCoordinatorObserver:(HDCloudSyncCoordinator *)arg1 didUpdateSyncEnabled:(bool)arg2;

@end
