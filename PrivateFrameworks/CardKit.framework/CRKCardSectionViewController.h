/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKCardSectionViewController : UIViewController <CRKCardSectionViewControllingDelegate, CRKEventResponding, CRKFeedbackDelegate, SFFeedbackListener> {
    INUIRemoteViewController * __remoteViewController;
    <CRCardSection> * _cardSection;
    <CRKCardSectionViewControllerDelegate> * _delegate;
    NSArray * _extraCommands;
    bool  _loading;
    CRKOverlayButton * _overlayButton;
    CRKCardSectionViewConfiguration * _viewConfiguration;
}

@property (nonatomic, readonly) INUIRemoteViewController *_remoteViewController;
@property (nonatomic, retain) <CRCardSection> *cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKCardSectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_extraCommands, setter=_setExtraCommands:, nonatomic, retain) NSArray *extraCommands;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic) bool loading;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView<CRKCardSectionView> *view;
@property (nonatomic, retain) CRKCardSectionViewConfiguration *viewConfiguration;

+ (void)_registerWithCardKit;
+ (id)cardSectionClasses;
+ (id)cardSectionViewControllerForCardSection:(id)arg1;
+ (id)cardSectionViewControllerForViewConfiguration:(id)arg1;
+ (void)registerCardSectionViewController;

- (void).cxx_destruct;
- (id)_backingCardSection;
- (void)_buttonOverlayTouchWasCanceled:(id)arg1;
- (void)_buttonOverlayWasTouchedDown:(id)arg1;
- (void)_buttonOverlayWasTouchedUpInside:(id)arg1;
- (void)_buttonOverlayWasTouchedUpOutside:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_cancelTouchesIfNecessary;
- (void)_cardSectionTapped;
- (bool)_checkIfCardSectionIsNull:(id)arg1;
- (id)_commands;
- (id)_destinationPunchout;
- (bool)_expectsSearchUIView;
- (id)_extraCommands;
- (void)_finishLoadingViewIfNecessary;
- (id)_generateCardSectionViewAppearanceFeedback;
- (bool)_hasCorrespondingSearchUIView;
- (id)_initWithCardSection:(id)arg1;
- (bool)_isIndicatingActivity;
- (bool)_isLoadedWithIntentsUIView;
- (void)_loadCardSectionView;
- (void)_performAllCommands;
- (void)_performCommand:(id)arg1;
- (id)_preferredPunchoutCommand;
- (id)_remoteViewController;
- (void)_resumeTouchesIfNecessary;
- (void)_setExtraCommands:(id)arg1;
- (void)_setViewExternally:(id)arg1;
- (void)_setupCardSectionButtons;
- (bool)_shouldHideButtonOverlay;
- (bool)_shouldRenderButtonOverlay;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)cardSection;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidInvalidateSize:(id)arg1;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(bool)arg2;
- (void)cardSectionViewDidInvalidateSizeForCardSection:(id)arg1;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardViewDidDisappearForCard:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardViewWillAppearForCard:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)controllerForCard:(id)arg1 didReceiveAsyncCard:(id)arg2 withAsyncCardReceiptFeedback:(id)arg3;
- (void)controllerForCard:(id)arg1 didRequestAsyncCard:(id)arg2 withAsyncCardRequestFeedback:(id)arg3;
- (id)delegate;
- (void)didEngageCardSection:(id)arg1;
- (bool)isLoading;
- (void)loadView;
- (bool)performCommand:(id)arg1 forViewController:(id)arg2;
- (void)presentViewController:(id)arg1;
- (void)setCardSection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setViewConfiguration:(id)arg1;
- (bool)shouldHandleEngagement:(id)arg1 forCardSection:(id)arg2;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (id)viewConfiguration;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismissViewController:(id)arg1;

@end
