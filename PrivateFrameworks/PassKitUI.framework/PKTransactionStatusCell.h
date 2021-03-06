/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTransactionStatusCell : UITableViewCell {
    bool  _isBridge;
    UILabel * _primaryLabel;
    NSString * _primaryText;
    UIColor * _primaryTextOverrideColor;
    UIColor * _secondaryTextOverrideColor;
    NSString * _secondaryTitle;
    UILabel * _secondaryTitleLabel;
    NSString * _secondaryValue;
    UILabel * _secondaryValueLabel;
    bool  _templateLayout;
}

@property (nonatomic) bool isBridge;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, retain) UIColor *primaryTextOverrideColor;
@property (nonatomic, retain) UIColor *secondaryTextOverrideColor;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic, copy) NSString *secondaryValue;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveLayoutMargins;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateTextColors;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isBridge;
- (void)layoutSubviews;
- (id)primaryText;
- (id)primaryTextOverrideColor;
- (id)secondaryTextOverrideColor;
- (id)secondaryTitle;
- (id)secondaryValue;
- (void)setIsBridge:(bool)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextOverrideColor:(id)arg1;
- (void)setSecondaryTextOverrideColor:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSecondaryValue:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
