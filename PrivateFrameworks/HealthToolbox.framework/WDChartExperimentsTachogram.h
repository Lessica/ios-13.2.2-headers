/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDChartExperimentsTachogram : HKInteractiveChartViewController {
    HKValueRange * _computedAxisRange;
    HKValueRange * _requestedVisibleRange;
}

@property (nonatomic, readonly) HKValueRange *computedAxisRange;
@property (nonatomic, readonly) HKValueRange *requestedVisibleRange;

- (void).cxx_destruct;
- (id)computedAxisRange;
- (struct CGSize { double x1; double x2; })extentOfData:(id)arg1;
- (id)initWithIrregularBeatData:(id)arg1 normalData:(id)arg2 visibleRange:(id)arg3 profile:(id)arg4;
- (id)requestedVisibleRange;
- (id)tachogramSeriesWithData:(id)arg1 unit:(id)arg2 maximumY:(double)arg3 axis:(id)arg4 irregularBeatStyle:(bool)arg5;
- (void)viewDidLoad;

@end
