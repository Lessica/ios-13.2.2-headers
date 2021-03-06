/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TATrackingAvoidanceService : NSObject {
    unsigned long long  _currentSessionID;
    NSDate * _latestClassificationDate;
    NSHashTable * _observers;
    TASettings * _settings;
    TAStore * _store;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)handleChangeOfSession;
- (void)ingestTAEvent:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)notifyObserversOfRequests:(id)arg1;
- (void)notifyObserversOfSuspiciousDevices:(id)arg1;
- (id)predicateForSurfacingAlert;
- (void)removeObserver:(id)arg1;
- (void)setDevice:(id)arg1 withStatus:(unsigned long long)arg2;
- (bool)shouldPerformDetection;

@end
