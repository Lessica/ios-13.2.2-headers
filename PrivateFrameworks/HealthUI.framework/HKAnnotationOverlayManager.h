/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAnnotationOverlayManager : NSObject <HKInteractiveChartViewObserver> {
    HKInteractiveChartViewController * _chartViewController;
    HKAnnotationDisplayType * _currentOverlayDisplayType;
}

@property (nonatomic, readonly) HKInteractiveChartViewController *chartViewController;
@property (nonatomic, retain) HKAnnotationDisplayType *currentOverlayDisplayType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chartViewController;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)currentOverlayDisplayType;
- (void)dealloc;
- (id)initWithInteractiveChart:(id)arg1;
- (void)installAnnotationOverlayForRange:(id)arg1 trendData:(id)arg2;
- (void)removeAnnotationOverlay;
- (void)setCurrentOverlayDisplayType:(id)arg1;

@end
