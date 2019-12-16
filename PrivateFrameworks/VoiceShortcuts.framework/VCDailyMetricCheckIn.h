/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCDailyMetricCheckIn : NSObject {
    NSDate * _currentDate;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly, copy) NSDate *checkInDate;
@property (nonatomic, readonly, copy) NSDate *currentDate;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (id)recentCheckIn;

- (void).cxx_destruct;
- (id)checkInDate;
- (id)currentDate;
- (id)init;
- (id)initWithCurrentDate:(id)arg1 defaults:(id)arg2;
- (bool)isCheckInAllowed;
- (void)updateCheckInToNow;
- (id)userDefaults;

@end