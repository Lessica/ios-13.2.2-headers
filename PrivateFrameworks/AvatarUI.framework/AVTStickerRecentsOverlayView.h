/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTStickerRecentsOverlayView : UIVisualEffectView {
    UIView * _centeredContainerView;
    AVTCircularButton * _closeButton;
    NSLayoutConstraint * _containerLeadingConstraint;
    NSLayoutConstraint * _containerTopConstraint;
    NSLayoutConstraint * _containerTrailingConstraint;
    UIButton * _continueButton;
    AVTStickerRecentsOverlayViewLayout * _currentLayout;
    <AVTStickerRecentsOverlayDelegate> * _delegate;
    NSLayoutConstraint * _hideSubtitleConstraint;
    UIImage * _image;
    NSLayoutConstraint * _imageHeightConstraint;
    NSLayoutConstraint * _imageToTitleConstraint;
    UIImageView * _imageView;
    AVTStickerRecentsOverlayViewLayout * _landscapeLayout;
    NSArray * _layoutConstraints;
    AVTStickerRecentsOverlayViewLayout * _portraitLayout;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    UITapGestureRecognizer * _tapGestureRecognizer;
    NSString * _title;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleToSubtitleConstraint;
}

@property (nonatomic, readonly) UIView *animatableView;
@property (nonatomic, retain) UIView *centeredContainerView;
@property (nonatomic, retain) AVTCircularButton *closeButton;
@property (nonatomic, retain) NSLayoutConstraint *containerLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *containerTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *containerTrailingConstraint;
@property (nonatomic, retain) UIButton *continueButton;
@property (nonatomic, retain) AVTStickerRecentsOverlayViewLayout *currentLayout;
@property (nonatomic) <AVTStickerRecentsOverlayDelegate> *delegate;
@property (nonatomic, retain) NSLayoutConstraint *hideSubtitleConstraint;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) NSLayoutConstraint *imageHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *imageToTitleConstraint;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) AVTStickerRecentsOverlayViewLayout *landscapeLayout;
@property (nonatomic, retain) NSArray *layoutConstraints;
@property (nonatomic, retain) AVTStickerRecentsOverlayViewLayout *portraitLayout;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSLayoutConstraint *titleToSubtitleConstraint;

+ (id)disclosureOverlayView;
+ (id)overlayViewForMemojiCreation;
+ (id)standardOverlayView;
+ (id)stickerButtonImage;

- (void).cxx_destruct;
- (id)animatableView;
- (id)appropriateLayout;
- (id)centeredContainerView;
- (id)closeButton;
- (id)containerLeadingConstraint;
- (id)containerTopConstraint;
- (id)containerTrailingConstraint;
- (id)continueButton;
- (id)currentLayout;
- (id)delegate;
- (void)didTapCloseButton:(id)arg1;
- (void)didTapContentView:(id)arg1;
- (void)didTapContinueButton:(id)arg1;
- (void)dismissAnimatedWithDuration:(double)arg1;
- (id)hideSubtitleConstraint;
- (id)image;
- (id)imageHeightConstraint;
- (id)imageToTitleConstraint;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 title:(id)arg2 subtitle:(id)arg3 buttonTitle:(id)arg4 image:(id)arg5;
- (id)landscapeLayout;
- (id)layoutConstraints;
- (void)layoutSubviews;
- (id)portraitLayout;
- (void)setCenteredContainerView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setContainerLeadingConstraint:(id)arg1;
- (void)setContainerTopConstraint:(id)arg1;
- (void)setContainerTrailingConstraint:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setCurrentLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHideSubtitleConstraint:(id)arg1;
- (void)setImageHeightConstraint:(id)arg1;
- (void)setImageToTitleConstraint:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLandscapeLayout:(id)arg1;
- (void)setLayoutConstraints:(id)arg1;
- (void)setPortraitLayout:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleToSubtitleConstraint:(id)arg1;
- (void)setupConstraints;
- (id)subtitle;
- (id)subtitleLabel;
- (id)tapGestureRecognizer;
- (id)title;
- (id)titleLabel;
- (id)titleToSubtitleConstraint;
- (void)updateConstraints;

@end
