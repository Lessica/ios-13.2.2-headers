/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSNavigationCardView : UIView <CPSNavigationDisplaying> {
    UIColor * _guidanceBackgroundColor;
    CPSUpcomingManeuversCardView * _maneuversView;
    CPSPausedCardView * _pausedView;
    CPSCardPlatterView * _platterView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *guidanceBackgroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPSUpcomingManeuversCardView *maneuversView;
@property (nonatomic, readonly) CPSPausedCardView *pausedView;
@property (nonatomic, readonly) CPSCardPlatterView *platterView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showManeuversView;
- (void)_showPausedViewForReason:(unsigned long long)arg1 description:(id)arg2;
- (id)guidanceBackgroundColor;
- (bool)hasContent;
- (id)initWithBackgroundColor:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;
- (id)maneuversView;
- (void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3;
- (id)pausedView;
- (id)platterView;
- (void)setGuidanceBackgroundColor:(id)arg1;
- (void)setManeuversView:(id)arg1;
- (void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2;
- (void)updateEstimates:(id)arg1 forManeuver:(id)arg2;

@end
