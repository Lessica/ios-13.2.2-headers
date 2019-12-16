/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpringboardStartMonitor : CSEventMonitor {
    bool  _isSpringBoardStarted;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (bool)_checkSpringBoardStarted;
- (void)_didReceiveSpringboardStarted:(bool)arg1;
- (void)_didReceiveSpringboardStartedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withStarted:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isSpringboardStarted;

@end
