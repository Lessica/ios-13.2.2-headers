/* Generated by RuntimeBrowser.
 */

@protocol CALNTTLEventTracker

@required

- (void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(bool)arg4 isOnSharedCalendar:(bool)arg5;
- (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(bool)arg5 isOnSharedCalendar:(bool)arg6;

@end
