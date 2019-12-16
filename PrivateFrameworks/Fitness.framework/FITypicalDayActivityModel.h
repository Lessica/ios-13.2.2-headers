/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
 */

@interface FITypicalDayActivityModel : NSObject {
    NSObject<OS_dispatch_group> * _activitySummaryBarrierGroup;
    bool  _activitySummaryLoaded;
    <FITypicalDayActivityModelDelegate> * _delegate;
    NSDateInterval * _interval;
    NSDate * _projectedOffWristDateToday;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_bucketDates;
    HKActivitySummary * _queue_currentActivitySummary;
    FISimpleHistogram * _queue_exerciseHistogram;
    FISimpleHistogram * _queue_moveHistogram;
    long long  _totalActiveDays;
}

@property (nonatomic) <FITypicalDayActivityModelDelegate> *delegate;
@property (nonatomic, readonly) long long totalActiveDays;

+ (id)_emptySimpleHistogram;

- (void).cxx_destruct;
- (id)_bucketDateForIndex:(unsigned long long)arg1 startOfDay:(id)arg2;
- (long long)_bucketIndexForDate:(id)arg1 startOfDay:(id)arg2 bucketDates:(id)arg3;
- (double)_percentageOfTypicalDayComparedToNowForGoal:(long long)arg1;
- (double)_queue_briskWalkTimeToCompleteMoveGoalWithDateOfBirth:(id)arg1 biologicalSex:(long long)arg2 height:(id)arg3 weight:(id)arg4 wheelchairUse:(long long)arg5;
- (id)_queue_calculateProjectedOffWristDateFromHistogram:(id)arg1 activeDays:(long long)arg2;
- (double)_queue_currentValueForHistogram:(id)arg1;
- (bool)_queue_enumerateActivitySummariesOrderedByCacheIndexWithCalendar:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
- (void)_queue_populateHistogramsAndOffWristDateForToday;
- (void)_queue_updateHistogram:(id)arg1 goalType:(long long)arg2 activitySummary:(id)arg3;
- (void)_queue_updateProjectedOffWristDateHistogram:(id)arg1 activitySummary:(id)arg2 activeDays:(long long*)arg3;
- (void)_waitUntilActivitySummaryLoaded;
- (bool)_willCompleteGoalWithType:(long long)arg1 bufferPercentage:(double)arg2;
- (double)briskWalkTimeToCompleteMoveGoalWithAcitivitySettingsController:(id)arg1;
- (double)currentExerciseGoalPercentage;
- (double)currentMoveGoalPercentage;
- (double)currentStandGoalPercentage;
- (id)debugDescription;
- (id)delegate;
- (id)endOfToday;
- (void)handleUpdatedCurrentActivitySummary:(id)arg1;
- (id)initForDateInterval:(id)arg1 delegate:(id)arg2;
- (double)percentageOfTypicalDayBriskMinutesEarnedComparedToNow;
- (double)percentageOfTypicalDayMoveComparedToNow;
- (double)projectedDayDuration;
- (bool)projectedToBeatMoveRecordByEndOfDay;
- (void)rebuildWithInterval:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldSuggestWalkWithActivitySettingsController:(id)arg1;
- (id)startOfToday;
- (long long)totalActiveDays;
- (id)userEndOfDay;
- (id)userStartOfDay;
- (double)valueOfTypicalDayBriskMinutesEarnedByNow;
- (double)valueOfTypicalDayMoveEarnedByNow;
- (bool)willCompleteExerciseGoalWithBufferPercentage:(double)arg1;
- (bool)willCompleteMoveGoalWithBufferPercentage:(double)arg1;
- (bool)willCompleteStandGoalOrItIsTooLateWithBufferPercentage:(double)arg1;
- (bool)willCompletingMoveRingEarnStreakAchievement;

@end
