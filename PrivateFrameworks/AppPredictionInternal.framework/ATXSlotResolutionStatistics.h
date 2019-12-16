/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXSlotResolutionStatistics : NSObject {
    NSString * _actionKey;
    int  _slotCount;
    NSMutableDictionary * _statisticsForParameters;
    NSMutableDictionary * _statisticsForSlotSet;
    double  _totalCoarseTimeOfDayCount;
    int  _totalConfirmRatioCount;
    double  _totalConfirmRatioMean;
    double  _totalConfirmRatioSumOfSquaresOfDifferencesFromMean;
    double  _totalConfirmsForAllSlots;
    double  _totalConfirmsInLockscreenForAllSlots;
    double  _totalConfirmsInSpotlightForAllSlots;
    double  _totalConfirmsInSpotlightWithinMeanWindowForAllSlots;
    double  _totalConfirmsTodayInLockscreenForAllSlots;
    double  _totalDayAndLocationCount;
    double  _totalDayAndLocationOccurrences;
    double  _totalDayAndPrevLocationCount;
    double  _totalDayAndPrevLocationOccurrences;
    double  _totalDayOfWeekCount;
    double  _totalDayOfWeekOccurrences;
    double  _totalEightHourWindowCount;
    double  _totalHourWindowCount;
    double  _totalLaunches;
    double  _totalLocationCount;
    double  _totalLocationOccurrences;
    double  _totalMotionTypeCount;
    double  _totalMotionTypeOccurrences;
    double  _totalPartOfWeekAndLocationCount;
    double  _totalPartOfWeekAndLocationOccurrences;
    double  _totalPartOfWeekAndTimeCount;
    double  _totalPartOfWeekAndTimeOccurrences;
    double  _totalPartOfWeekCount;
    double  _totalPartOfWeekOccurrences;
    double  _totalPrevLocationAndLocationCount;
    double  _totalPrevLocationAndLocationOccurrences;
    double  _totalPrevLocationAndMotionTypeCount;
    double  _totalPrevLocationAndMotionTypeOccurrences;
    double  _totalPrevLocationCount;
    double  _totalPreviousLocationOccurrences;
    double  _totalRejectsForAllSlots;
    double  _totalRejectsInLockscreenForAllSlots;
    double  _totalRejectsInSpotlightForAllSlots;
    double  _totalRejectsInSpotlightWithinMeanWindowForAllSlots;
    double  _totalRejectsTodayInLockscreenForAllSlots;
    double  _totalThirtyMinuteWindowCount;
    double  _totalTimeAndDayAndLocationCount;
    double  _totalTimeAndDayAndLocationOccurrences;
    double  _totalTimeAndDayCount;
    double  _totalTimeAndDayOccurrences;
    double  _totalTimeAndLocationCount;
    double  _totalTimeAndLocationOccurrences;
    double  _totalTimeAndPrevLocationCount;
    double  _totalTimeAndPrevLocationOccurrences;
    double  _totalTimeOfDayCount;
    double  _totalTimeOfDayOccurrences;
    NSMutableSet * _totalUniqueDaysConfirmedOrRejectedInSpotlightWithinMeanWindowForAllSlots;
    NSMutableSet * _totalUniqueDaysLaunched;
}

- (void).cxx_destruct;
- (double)_totalConfirmRatioStandardDeviation;
- (void)_updateConfirmRatioStatisticsForNewConfirmRatio:(double)arg1;
- (id)init;
- (id)initWithActionKey:(id)arg1;

@end