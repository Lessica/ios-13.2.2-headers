/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNSharingProfileOnboardingVariantViewController : CNPhotoPickerVariantListController <_UIScrollViewLayoutObserver> {
    OBButtonTray * _buttonTray;
    OBNavigationBarDisplayState * _cachedBarState;
    OBBoldTrayButton * _continueButton;
    <CNSharingProfileOnboardingVariantViewControllerDelegate> * _onboardingDelegate;
    OBHeaderView * _onboardingHeaderView;
    OBLinkTrayButton * _poseButton;
    UINavigationController * _retainedNavigationController;
    bool  _shouldShowPoseButton;
}

@property (nonatomic, retain) OBButtonTray *buttonTray;
@property (nonatomic, retain) OBNavigationBarDisplayState *cachedBarState;
@property (nonatomic, retain) OBBoldTrayButton *continueButton;
@property (nonatomic) <CNSharingProfileOnboardingVariantViewControllerDelegate> *onboardingDelegate;
@property (nonatomic, retain) OBHeaderView *onboardingHeaderView;
@property (nonatomic, retain) OBLinkTrayButton *poseButton;
@property (nonatomic, retain) UINavigationController *retainedNavigationController;
@property (nonatomic) bool shouldShowPoseButton;

+ (bool)_navigationBarTitleShouldShowForHeaderView:(id)arg1 inScrollView:(id)arg2;
+ (void)updateNavigationBarWithNavigationItem:(id)arg1 forHeaderView:(id)arg2 inScrollView:(id)arg3 animated:(bool)arg4;

- (void).cxx_destruct;
- (bool)_scrollViewContentIsUnderTrayForScrollView:(id)arg1;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)applyAutomaticScrollToEdgeBehaviorToNavigationItem:(id)arg1 withDistance:(double)arg2;
- (id)buttonTray;
- (id)cachedBarState;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)continueButton;
- (void)didTapContinue:(id)arg1;
- (void)didTapPose:(id)arg1;
- (id)navigationItem;
- (id)onboardingDelegate;
- (id)onboardingHeaderView;
- (id)poseButton;
- (void)restoreNavigationBarAppearance;
- (id)retainedNavigationController;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setButtonTray:(id)arg1;
- (void)setCachedBarState:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setOnboardingDelegate:(id)arg1;
- (void)setOnboardingHeaderView:(id)arg1;
- (void)setPoseButton:(id)arg1;
- (void)setRetainedNavigationController:(id)arg1;
- (void)setShouldShowPoseButton:(bool)arg1;
- (bool)shouldShowPoseButton;
- (void)updateContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)updateTrayBackgroundForScrollView:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end