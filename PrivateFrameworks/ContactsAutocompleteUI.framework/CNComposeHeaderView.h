/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

@interface CNComposeHeaderView : UIView {
    <CNComposeHeaderViewDelegate> * _delegate;
    UIView * _highlightedBackgroundView;
    CNComposeHeaderLabelView * _labelView;
    NSString * _navTitle;
    UIView * _separator;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _separatorDirectionalEdgeInsets;
    bool  _showsHighlightWhenTouched;
}

@property (nonatomic) <CNComposeHeaderViewDelegate> *delegate;
@property (nonatomic, retain) UIView *highlightedBackgroundView;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) CNComposeHeaderLabelView *labelView;
@property (nonatomic, copy) NSString *navTitle;
@property (nonatomic, retain) UIView *separator;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } separatorDirectionalEdgeInsets;
@property (nonatomic) bool showsHighlightWhenTouched;

+ (double)_labelTopPaddingSpecification;
+ (id)defaultFont;
+ (id)defaultSeparatorColor;
+ (double)preferredHeight;
+ (double)separatorHeight;

- (void).cxx_destruct;
- (id)_automationID;
- (id)_baseAttributes;
- (bool)_canBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2;
- (id)_highlightedBackgroundView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_recipientViewEdgeInsets;
- (bool)_shouldEmbedLabelInTextView;
- (id)delegate;
- (void)handleTouchesEnded;
- (id)highlightedBackgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelColor;
- (double)labelTopPadding;
- (id)labelView;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)navTitle;
- (void)refreshPreferredContentSize;
- (id)separator;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })separatorDirectionalEdgeInsets;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setHighlightedBackgroundView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelView:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setSeparatorDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShowsHighlightWhenTouched:(bool)arg1;
- (bool)showsHighlightWhenTouched;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleLabelBaselineAlignmentRectForLabel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
