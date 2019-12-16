/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate> {
    NSString * _bodyAddition;
    id /* block */  _continueHandler;
    unsigned long long  _educationContext;
    PKPaymentHeroImageController * _heroImageController;
    UIImageView * _heroPhone;
    UIView * _heroPhoneBackground;
    PKPaymentSetupHeroView * _heroView;
    PKPaymentSetupInitialCardEducationIconsView * _iconsView;
    UILabel * _instructionLabel;
    bool  _invalidated;
    bool  _isFaceIDDevice;
    bool  _isPad;
    double  _maxHeight;
    PKMobileAssetManager * _mobileAssetManager;
    bool  _offerAddToWatch;
    UIImageView * _passSnapshot;
    PKPaymentPass * _paymentPass;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    bool  _playerStarted;
    NSString * _titleOverride;
    AVPlayerLayer * _video;
    UIView * _videoBoundingView;
}

@property (nonatomic, copy) NSString *bodyAddition;
@property (nonatomic, copy) id /* block */ continueHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool offerAddToWatch;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleOverride;

+ (id)assetBackgroundColor;
+ (id)assetBackgroundColorPad;
+ (bool)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_performAddToWatchFlow;
- (void)_removePlayerItem;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (id)bodyAddition;
- (id /* block */)continueHandler;
- (void)dealloc;
- (void)didFinishPlaying;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)init;
- (id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(unsigned long long)arg3;
- (void)invalidate;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)offerAddToWatch;
- (void)performContinue;
- (void)setBodyAddition:(id)arg1;
- (void)setContinueHandler:(id /* block */)arg1;
- (void)setOfferAddToWatch:(bool)arg1;
- (void)setTitleOverride:(id)arg1;
- (void)startPlayingVideo;
- (id)titleOverride;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
