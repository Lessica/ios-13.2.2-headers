/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartActivityController : HKInteractiveChartViewController <HKActivityBarSeriesDelegate, HKInteractiveChartViewObserver> {
    HKActivitySummaryAnnotationViewDataSource * _activityAnnotationDataSource;
    _ActivityCurrentValueView * _activityCurrentValueView;
    <HKInteractiveChartCurrentValueViewCallbacks> * _activityCurrentValueViewCallbacks;
    HKActivitySummaryDataProvider * _activityDataProvider;
    long long  _currentTimeScope;
    HKInteractiveChartDisplayType * _exerciseGoalDisplayType;
    HKInteractiveChartDisplayType * _exerciseValueDisplayType;
    HKInteractiveChartDisplayType * _moveGoalDisplayType;
    HKInteractiveChartDisplayType * _moveValueDisplayType;
    HKInteractiveChartDisplayType * _standGoalDisplayType;
    HKInteractiveChartDisplayType * _standValueDisplayType;
    _HKWheelchairUseCharacteristicCache * _wheelchairUseCharacteristicCache;
    NSMapTable * _yAxisAccessoryViewsByGraphSeries;
}

@property (nonatomic, retain) HKActivitySummaryAnnotationViewDataSource *activityAnnotationDataSource;
@property (nonatomic, retain) _ActivityCurrentValueView *activityCurrentValueView;
@property (nonatomic) <HKInteractiveChartCurrentValueViewCallbacks> *activityCurrentValueViewCallbacks;
@property (nonatomic, retain) HKActivitySummaryDataProvider *activityDataProvider;
@property (nonatomic) long long currentTimeScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *exerciseGoalDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *exerciseValueDisplayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *moveGoalDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *moveValueDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *standGoalDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *standValueDisplayType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (nonatomic, retain) NSMapTable *yAxisAccessoryViewsByGraphSeries;

- (void).cxx_destruct;
- (id)_activitySeriesForActivityValue:(long long)arg1 wheelchairUseCharacteristicCache:(id)arg2 unitPreferenceController:(id)arg3 displayTypeController:(id)arg4;
- (id)_activityYAxisForActivityValue:(long long)arg1 zeroOnly:(bool)arg2 stackOffset:(long long)arg3 bottomLabelPadding:(double)arg4 displayTypeController:(id)arg5 unitPreferenceController:(id)arg6;
- (id)_dayActivitySummaryForDateRange:(id)arg1;
- (id)_displayTypeForActivityValue:(long long)arg1 yAxis:(id)arg2 dataProvider:(id)arg3 displayTypeController:(id)arg4 unitPreferenceController:(id)arg5 wheelchairUseCharacteristicCache:(id)arg6;
- (id)_generateActivityBarSeriesWithColor:(id)arg1 legendTitle:(id)arg2 metGoalFillStyle:(id)arg3 missedGoalFillStyle:(id)arg4 activityValue:(long long)arg5 unitPreferenceController:(id)arg6 displayTypeController:(id)arg7;
- (id)_generateActivityGoalLineSeriesWithColor:(id)arg1;
- (id)_lineColorForActivityValue:(long long)arg1;
- (id)_metGoalFillStyleForActivityValue:(long long)arg1;
- (id)_missedGoalFillStyleForActivityValue:(long long)arg1;
- (id)_rangeValueAsNumber:(id)arg1;
- (long long)_representativeDataTypeForActivityValue:(long long)arg1;
- (id)_spanForValueDisplayType:(id)arg1 title:(id)arg2;
- (id)_titleForActivityValue:(long long)arg1 wheelchairUseCharacteristicCache:(id)arg2;
- (id)_unitForActivityValue:(long long)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3;
- (id)_zeroStringForActivityValue:(long long)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3;
- (id)activityAnnotationDataSource;
- (id)activityCurrentValueView;
- (id)activityCurrentValueViewCallbacks;
- (id)activityDataProvider;
- (id)activitySummaryForCurrentRange;
- (id)calendarQueryDisplayType;
- (id)calendarQuerySampleType;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (long long)currentTimeScope;
- (id)descriptionForChartData:(id)arg1 timeScope:(long long)arg2;
- (id)descriptionSeriesForGraphView:(id)arg1;
- (id)descriptionSpansForGraphView:(id)arg1;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (id)exerciseGoalDisplayType;
- (id)exerciseValueDisplayType;
- (long long)graphSeriesTimeScope;
- (id)initWithHealthStore:(id)arg1 unitPreferenceController:(id)arg2 dateCache:(id)arg3 chartDataCacheController:(id)arg4 selectedTimeScopeController:(id)arg5 wheelchairUseCharacteristicCache:(id)arg6 initialXValue:(id)arg7;
- (id)lollipopAnnotationColor;
- (id)lollipopExtensionColor;
- (id)makeAnnotationDataSource;
- (id)makeCurrentValueView;
- (id)moveGoalDisplayType;
- (id)moveValueDisplayType;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setActivityAnnotationDataSource:(id)arg1;
- (void)setActivityCurrentValueView:(id)arg1;
- (void)setActivityCurrentValueViewCallbacks:(id)arg1;
- (void)setActivityDataProvider:(id)arg1;
- (void)setCurrentTimeScope:(long long)arg1;
- (void)setCurrentValueViewCallbacks:(id)arg1;
- (void)setYAxisAccessoryViewsByGraphSeries:(id)arg1;
- (id)standGoalDisplayType;
- (id)standValueDisplayType;
- (void)tappedOnCurrentValueView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateCurrentValueView:(id)arg1 graphView:(id)arg2 timeScope:(long long)arg3;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (id)wheelchairUseCharacteristicCache;
- (id)yAxisAccessoryViewsByGraphSeries;

@end
