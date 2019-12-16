/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDateRangeFormatter : NSObject <PLMutableDateRangeFormatter> {
    bool  _autoUpdateOnChanges;
    id  _currentLocaleDidChangeNotificationObserver;
    id  _currentTimeZoneDidChangeNotificationObserver;
    NSDateFormatter * _dayOfTheWeekDateFormatter;
    struct UDateIntervalFormat { } * _dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat { } * _differentMonthDayIntervalFormat;
    struct UDateIntervalFormat { } * _differentMonthDayNoYearIntervalFormat;
    bool  _includeDayNumbers;
    bool  _includeDayNumbersWhenMonthsDiffer;
    NSLocale * _locale;
    NSDateFormatter * _monthDateFormatter;
    struct UDateIntervalFormat { } * _monthDayIntervalFormat;
    struct UDateIntervalFormat { } * _monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } * _monthIntervalFormat;
    bool  _monthOnly;
    NSDateFormatter * _relativeDateFormatter;
    NSDateFormatter * _sameDayDateFormatter;
    NSDateFormatter * _sameDayNoYearDateFormatter;
    bool  _shouldOmitYear;
    id  _significantTimeChangeNotificationObserver;
    struct UDateIntervalFormat { } * _timeIntervalFormat;
    bool  _timeOnly;
    NSTimeZone * _timeZone;
    bool  _useLocalDates;
    bool  _useRelativeDayFormatting;
    bool  _useShortDaysInRanges;
    bool  _useShortMonths;
    bool  _useTime;
    NSDateFormatter * _yearDateFormatter;
    struct UDateIntervalFormat { } * _yearIntervalFormat;
    bool  _yearOnly;
}

@property (nonatomic) bool autoUpdateOnChanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) bool shouldOmitYear;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic) bool useLocalDates;

- (void).cxx_destruct;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayTemplate;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3;
- (void)_handleNotification:(id)arg1;
- (id)_sameMonthTemplate;
- (void)_updateDayOfTheWeekDateFormatter;
- (void)_updateDayOfTheWeekIntervalFormat;
- (void)_updateDifferentMonthDayIntervalFormat;
- (void)_updateDifferentMonthDayNoYearIntervalFormat;
- (void)_updateFormatters;
- (void)_updateMonthDateFormatter;
- (void)_updateMonthDayIntervalFormat;
- (void)_updateMonthDayNoYearIntervalFormat;
- (void)_updateMonthIntervalFormat;
- (void)_updateRelativeDateFormatter;
- (void)_updateSameDayDateFormatter;
- (void)_updateSameDayNoYearDateFormatter;
- (void)_updateTimeIntervalFormat;
- (void)_updateTimeZone;
- (void)_updateYearDateFormatter;
- (void)_updateYearIntervalFormat;
- (bool)autoUpdateOnChanges;
- (void)configureForFormatPreset:(unsigned long long)arg1;
- (void)dealloc;
- (id)formattedDate:(id)arg1;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)init;
- (id)initWithFormatPreset:(unsigned long long)arg1 autoUpdateOnChanges:(bool)arg2;
- (id)initWithFormatPreset:(unsigned long long)arg1 configurationBlock:(id /* block */)arg2;
- (id)locale;
- (void)performChanges:(id /* block */)arg1;
- (void)setAutoUpdateOnChanges:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setShouldOmitYear:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUseLocalDates:(bool)arg1;
- (bool)shouldOmitYear;
- (id)timeZone;
- (bool)useLocalDates;

@end