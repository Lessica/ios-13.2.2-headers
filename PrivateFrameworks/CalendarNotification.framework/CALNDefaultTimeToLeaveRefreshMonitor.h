/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNDefaultTimeToLeaveRefreshMonitor : NSObject <CADModule, CALNTimeToLeaveRefreshMonitor> {
    bool  _active;
    <CALNTimeToLeaveRefreshMonitorDelegate> * _delegate;
    bool  _registeredForBackgroundTaskAgentJobs;
    <CALNTimeToLeaveRefreshStorage> * _storage;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CALNTimeToLeaveRefreshMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRegisteredForBackgroundTaskAgentJobs, nonatomic) bool registeredForBackgroundTaskAgentJobs;
@property (nonatomic, readonly) <CALNTimeToLeaveRefreshStorage> *storage;
@property (readonly) Class superclass;

+ (id)_refreshTimerBTAJobNameForEventExternalURL:(id)arg1;

- (void).cxx_destruct;
- (void)_refreshTimerFiredForEventExternalURL:(id)arg1;
- (void)activate;
- (void)deactivate;
- (id)delegate;
- (void)didRegisterForAlarms;
- (void)didRegisterForBackgroundTaskAgentJobs;
- (void)handleBTAJob:(id)arg1 named:(const char *)arg2;
- (id)initWithStorage:(id)arg1;
- (bool)isActive;
- (bool)isRegisteredForBackgroundTaskAgentJobs;
- (void)protectedDataDidBecomeAvailable;
- (void)receivedAlarmNamed:(id)arg1;
- (void)receivedNotificationNamed:(id)arg1;
- (void)removeRefreshTimerForEventExternalURL:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRegisteredForBackgroundTaskAgentJobs:(bool)arg1;
- (void)setUpRefreshTimerWithTriggerDate:(id)arg1 eventExternalURL:(id)arg2;
- (id)storage;

@end
