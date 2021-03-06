/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCardViewController : UIViewController <HFItemManagerDelegate, HUQuickControlViewControllerCoordinatorDelegate, HUViewControllerCustomDismissing, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    HUAnimationApplier * _animationApplier;
    UIColor * _backgroundColor;
    UIButton * _closeButton;
    NSMutableArray * _constraints;
    <HUCardViewControllerDelegate> * _delegate;
    bool  _disablePullToUnlockSettings;
    bool  _hideControls;
    bool  _hideSettings;
    UIImpactFeedbackGenerator * _impactFeedbackGenerator;
    HUQuickControlSummaryNavigationBarTitleView * _navigationBarTitleView;
    UIPanGestureRecognizer * _panGestureRecognizer;
    UILayoutGuide * _quickControlLayoutGuide;
    HUQuickControlContainerViewController * _quickControlViewController;
    bool  _reachable;
    UIScrollView * _scrollView;
    bool  _settingsUnlocked;
    UIViewController * _settingsViewController;
    HFItem * _sourceItem;
    HUQuickControlViewControllerCoordinator * _viewControllerCoordinator;
}

@property (nonatomic, retain) HUAnimationApplier *animationApplier;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIButton *closeButton;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCardViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disablePullToUnlockSettings;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideControls;
@property (nonatomic) bool hideSettings;
@property (nonatomic, retain) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (nonatomic, retain) HUQuickControlSummaryNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) UILayoutGuide *quickControlLayoutGuide;
@property (nonatomic, readonly) HUQuickControlContainerViewController *quickControlViewController;
@property (nonatomic) bool reachable;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) bool settingsUnlocked;
@property (nonatomic, readonly) UIViewController *settingsViewController;
@property (nonatomic, readonly) HFItem *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUQuickControlViewControllerCoordinator *viewControllerCoordinator;

- (void).cxx_destruct;
- (void)_actuateTapticFeedback;
- (void)_closeButtonPressed:(id)arg1;
- (void)_endUsingTapticFeedback;
- (void)_escapeKeyPressed;
- (void)_handlePanGesture:(id)arg1;
- (double)_hostViewHeight;
- (void)_nudgeScrollViewToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_prepareForTapticFeedback;
- (double)_quickControlScrollOffsetBoundary;
- (double)_quickControlSectionHeight;
- (void)_scrollToSettings;
- (id)_springAnimationSettings;
- (void)_unlockSettings;
- (void)_updateControlStatusText;
- (void)_updateIconDescriptorAnimated:(bool)arg1;
- (void)_updateReachabilityState;
- (id)animationApplier;
- (id)backgroundColor;
- (id)closeButton;
- (id)constraints;
- (void)controllerCoordinator:(id)arg1 didUpdateIconDescriptor:(id)arg2 showOffState:(bool)arg3;
- (void)controllerCoordinator:(id)arg1 didUpdateReachability:(bool)arg2;
- (void)controllerCoordinator:(id)arg1 didUpdateStatusWithPrimaryText:(id)arg2 secondaryText:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (bool)disablePullToUnlockSettings;
- (void)dismissCardAnimated:(bool)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)hideControls;
- (bool)hideSettings;
- (id)hu_prepareForDismissalAnimated:(bool)arg1;
- (id)impactFeedbackGenerator;
- (id)initWithQuickControlViewController:(id)arg1 settingsViewController:(id)arg2 sourceItem:(id)arg3 controlItems:(id)arg4 home:(id)arg5;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)keyCommands;
- (id)navigationBarTitleView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { double x1; double x2; })overridingContentSizeForPresentedViewController:(id)arg1;
- (id)panGestureRecognizer;
- (id)quickControlLayoutGuide;
- (id)quickControlViewController;
- (bool)reachable;
- (id)requestDismissal;
- (void)scrollToDetailsViewAnimated:(bool)arg1;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAnimationApplier:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisablePullToUnlockSettings:(bool)arg1;
- (void)setHideControls:(bool)arg1;
- (void)setHideSettings:(bool)arg1;
- (void)setImpactFeedbackGenerator:(id)arg1;
- (void)setNavigationBarTitleView:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setQuickControlLayoutGuide:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSettingsUnlocked:(bool)arg1;
- (void)setUpConstraints;
- (void)setViewControllerCoordinator:(id)arg1;
- (bool)settingsUnlocked;
- (id)settingsViewController;
- (id)sourceItem;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewControllerCoordinator;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
