/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSummaryView : UIView {
    unsigned long long  _contentAlignment;
    NSArray * _contentConstraints;
    unsigned long long  _iconSize;
    HUIconView * _iconView;
    UILayoutGuide * _lastBaselineLayoutGuide;
    UILabel * _primaryStatusLabel;
    <HFStringGenerator> * _primaryStatusText;
    UILabel * _secondaryStatusLabel;
    <HFStringGenerator> * _secondaryStatusText;
    long long  _sizeSubclass;
}

@property (nonatomic) unsigned long long contentAlignment;
@property (nonatomic, retain) NSArray *contentConstraints;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic, readonly) HUIconView *iconView;
@property (nonatomic, retain) UILayoutGuide *lastBaselineLayoutGuide;
@property (nonatomic, readonly) UILabel *primaryStatusLabel;
@property (nonatomic, copy) <HFStringGenerator> *primaryStatusText;
@property (nonatomic, readonly) UILabel *secondaryStatusLabel;
@property (nonatomic, copy) <HFStringGenerator> *secondaryStatusText;
@property (nonatomic) long long sizeSubclass;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (double)_iconHeight;
- (double)_iconWidth;
- (void)_invalidateContentAndConstraints;
- (id)_primaryFont;
- (id)_primaryFontTextStyle;
- (id)_secondaryFont;
- (id)_statusParagraphStyleWithLineHeight:(double)arg1;
- (void)_updatePrimaryStatusContent;
- (void)_updateSecondaryStatusContent;
- (unsigned long long)contentAlignment;
- (id)contentConstraints;
- (void)contentSizeCategoryDidChangeNotification;
- (void)dealloc;
- (unsigned long long)iconSize;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastBaselineAnchor;
- (id)lastBaselineLayoutGuide;
- (id)primaryStatusLabel;
- (id)primaryStatusText;
- (id)secondaryStatusLabel;
- (id)secondaryStatusText;
- (void)setContentAlignment:(unsigned long long)arg1;
- (void)setContentConstraints:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setLastBaselineLayoutGuide:(id)arg1;
- (void)setPrimaryStatusText:(id)arg1;
- (void)setSecondaryStatusText:(id)arg1;
- (void)setSizeSubclass:(long long)arg1;
- (long long)sizeSubclass;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
