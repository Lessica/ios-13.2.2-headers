/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIconContinuityBadgeView : UIView <SBIconAccessoryView> {
    SBIconAccessoryImage * _backgroundImage;
    SBDarkeningImageView * _backgroundView;
    long long  _badgeType;
    SBIconAccessoryImage * _foregroundImage;
    UIImageView * _foregroundView;
    <SBIconListLayout> * _listLayout;
}

@property (nonatomic, readonly) SBIconAccessoryImage *backgroundImage;
@property (nonatomic, readonly) SBDarkeningImageView *backgroundView;
@property (nonatomic) long long badgeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBIconAccessoryImage *foregroundImage;
@property (nonatomic, readonly) UIImageView *foregroundView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBIconListLayout> *listLayout;
@property (nonatomic, retain) SBFParallaxSettings *parallaxSettings;
@property (readonly) Class superclass;

+ (id)_checkoutImageForContinuityBadgeType:(long long)arg1 highlighted:(bool)arg2;
+ (id)backgroundImageCache;

- (void).cxx_destruct;
- (id)_checkoutBackgroundImage;
- (void)_clearIcon;
- (struct CGPoint { double x1; double x2; })accessoryCenterForIconBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)backgroundImage;
- (id)backgroundView;
- (struct CGSize { double x1; double x2; })badgeSize;
- (long long)badgeType;
- (void)configureAnimatedForIcon:(id)arg1 infoProvider:(id)arg2 animator:(id)arg3;
- (void)configureForIcon:(id)arg1 infoProvider:(id)arg2;
- (void)dealloc;
- (bool)displayingAccessory;
- (id)foregroundImage;
- (id)foregroundView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGPoint { double x1; double x2; })layoutOffset;
- (void)layoutSubviews;
- (id)listLayout;
- (void)prepareForReuse;
- (void)setAccessoryBrightness:(double)arg1;
- (void)setBadgeType:(long long)arg1;
- (void)setForegroundImage:(id)arg1;
- (void)setListLayout:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
