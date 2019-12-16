/* Generated by RuntimeBrowser.
 */

@protocol WDDashboardCellChartSource

@required

- (HKActivitySummaryDataProvider *)activitySummaryProvider;
- (void)invalidateChart;
- (bool)localeDidChange;
- (void)setLocaleDidChange:(bool)arg1;
- (bool)shouldHideAverageLineForTimeScope:(long long)arg1;
- (bool)shouldHideMinMaxOnBackgroundForTimeScope:(long long)arg1;

@end
