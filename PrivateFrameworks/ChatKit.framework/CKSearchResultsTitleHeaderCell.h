/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSearchResultsTitleHeaderCell : UICollectionViewCell <CKSearchResultSupplementryCell> {
    <CKSearchResultsTitleHeaderCellDelegate> * _delegate;
    unsigned long long  _sectionIndex;
    UILabel * _sectionTitle;
    UIButton * _showAllButton;
    double  _titleBottomPadding;
    double  _titleTopPadding;
    CALayer * _topHairline;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKSearchResultsTitleHeaderCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic, retain) UILabel *sectionTitle;
@property (nonatomic, retain) UIButton *showAllButton;
@property (readonly) Class superclass;
@property (nonatomic) double titleBottomPadding;
@property (nonatomic) double titleTopPadding;
@property (nonatomic, retain) CALayer *topHairline;

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (void).cxx_destruct;
- (void)_showAllButtonTapped:(id)arg1;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (unsigned long long)sectionIndex;
- (id)sectionTitle;
- (void)setDelegate:(id)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setSectionTitle:(id)arg1;
- (void)setShowAllButton:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleBottomPadding:(double)arg1;
- (void)setTitleTopPadding:(double)arg1;
- (void)setTopHairline:(id)arg1;
- (id)showAllButton;
- (double)titleBottomPadding;
- (double)titleTopPadding;
- (id)topHairline;

@end
