/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPMapTemplate : CPTemplate <CPBannerDelegate, CPBarButtonProviding, CPMapButtonDelegate, CPMapClientTemplateDelegate, CPNavigationAlertUpdating> {
    bool  _automaticallyHidesNavigationBar;
    <CPBannerProviding> * _bannerProvider;
    CPNavigationAlert * _currentNavigationAlert;
    UIColor * _guidanceBackgroundColor;
    bool  _hidesButtonsWithNavigationBar;
    NSArray * _mapButtons;
    <CPMapTemplateDelegate> * _mapDelegate;
    NSMutableDictionary * _postedBannerObjects;
    unsigned long long  _tripEstimateStyle;
    NSArray * _tripPreviews;
}

@property (nonatomic) bool automaticallyHidesNavigationBar;
@property (nonatomic, retain) CPBarButton *backButton;
@property (nonatomic, retain) <CPBannerProviding> *bannerProvider;
@property (nonatomic, readonly) CPNavigationAlert *currentNavigationAlert;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *guidanceBackgroundColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesButtonsWithNavigationBar;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (nonatomic, retain) NSArray *mapButtons;
@property (nonatomic) <CPMapTemplateDelegate> *mapDelegate;
@property (getter=isPanningInterfaceVisible, nonatomic, readonly) bool panningInterfaceVisible;
@property (nonatomic, retain) NSMutableDictionary *postedBannerObjects;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;
@property (nonatomic) unsigned long long tripEstimateStyle;
@property (nonatomic, readonly, copy) NSArray *tripPreviews;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_displayStyleForManeuver:(id)arg1;
- (void)_postBannerIfNecessaryForManeuver:(id)arg1;
- (void)_postBannerIfNecessaryForNavigationAlert:(id)arg1;
- (void)_resolveTrip:(id)arg1 routeChoice:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateBannerIfNecessaryForManeuver:(id)arg1 travelEstimates:(id)arg2;
- (void)_updateNavigationAlert:(id)arg1;
- (bool)automaticallyHidesNavigationBar;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (id)bannerProvider;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (void)clientNavigationAlertDidAppear:(id)arg1;
- (void)clientNavigationAlertDidDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientNavigationAlertWillAppear:(id)arg1;
- (void)clientNavigationAlertWillDisappear:(id)arg1 context:(unsigned long long)arg2;
- (void)clientPanBeganWithDirection:(long long)arg1;
- (void)clientPanEndedWithDirection:(long long)arg1;
- (void)clientPanGestureBegan;
- (void)clientPanGestureEndedWithVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)clientPanGestureWithDeltaPoint:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)clientPanViewDidAppear;
- (void)clientPanViewDidDisappear;
- (void)clientPanViewWillDisappear;
- (void)clientPanWithDirection:(long long)arg1;
- (void)clientTripAlreadyStartedException;
- (void)clientTripCanceledByExternalNavigation;
- (id)currentNavigationAlert;
- (void)dismissNavigationAlertAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissPanningInterfaceAnimated:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)guidanceBackgroundColor;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)hideTripPreviews;
- (bool)hidesButtonsWithNavigationBar;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPanningInterfaceVisible;
- (bool)mapButton:(id)arg1 setFocusedImage:(id)arg2;
- (bool)mapButton:(id)arg1 setHidden:(bool)arg2;
- (bool)mapButton:(id)arg1 setImageSet:(id)arg2;
- (id)mapButtons;
- (id)mapDelegate;
- (id)postedBannerObjects;
- (void)presentNavigationAlert:(id)arg1 animated:(bool)arg2;
- (void)previewTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (void)setAutomaticallyHidesNavigationBar:(bool)arg1;
- (void)setBannerProvider:(id)arg1;
- (void)setGuidanceBackgroundColor:(id)arg1;
- (void)setHidesButtonsWithNavigationBar:(bool)arg1;
- (void)setMapButtons:(id)arg1;
- (void)setMapDelegate:(id)arg1;
- (void)setPostedBannerObjects:(id)arg1;
- (void)setTripEstimateStyle:(unsigned long long)arg1;
- (void)showPanningInterfaceAnimated:(bool)arg1;
- (void)showRouteChoicesPreviewForTrip:(id)arg1 textConfiguration:(id)arg2;
- (void)showTripPreviews:(id)arg1 textConfiguration:(id)arg2;
- (id)startNavigationSessionForTrip:(id)arg1;
- (void)startTripIdentifier:(id)arg1 usingRouteIdentifier:(id)arg2;
- (unsigned long long)tripEstimateStyle;
- (id)tripPreviews;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2;
- (void)updateTravelEstimates:(id)arg1 forTrip:(id)arg2 withTimeRemainingColor:(unsigned long long)arg3;

@end
