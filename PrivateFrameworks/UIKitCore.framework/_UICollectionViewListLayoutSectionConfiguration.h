/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject {
    long long  _appearanceStyle;
    UICollectionView * _collectionView;
    double  _estimatedRowHeight;
    double  _estimatedSectionFooterHeight;
    double  _estimatedSectionHeaderHeight;
    NSArray * _itemHeights;
    <NSCollectionLayoutEnvironment_Private> * _layoutEnvironment;
    double  _rowHeight;
    double  _sectionFooterHeight;
    double  _sectionHeaderHeight;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _separatorInset;
    long long  _separatorStyle;
}

@property (nonatomic) long long appearanceStyle;
@property (getter=_collectionView, nonatomic, readonly) UICollectionView *collectionView;
@property (getter=_constants, nonatomic, readonly) <UITableConstants> *constants;
@property (nonatomic) double estimatedRowHeight;
@property (nonatomic) double estimatedSectionFooterHeight;
@property (nonatomic) double estimatedSectionHeaderHeight;
@property (getter=_itemHeights, setter=_setItemHeights:, nonatomic, copy) NSArray *itemHeights;
@property (getter=_layoutEnvironment, nonatomic, readonly) <NSCollectionLayoutEnvironment_Private> *layoutEnvironment;
@property (nonatomic) double rowHeight;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } separatorInset;
@property (nonatomic) long long separatorStyle;

- (void).cxx_destruct;
- (void)_addSupplementaryItemsToLayout:(id)arg1;
- (id)_collectionView;
- (id)_constants;
- (double)_defaultCellHeight;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_defaultDirectionalLayoutMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultLayoutMargins;
- (double)_defaultSectionFooterHeight;
- (double)_defaultSectionHeaderHeight;
- (double)_effectiveEstimatedRowHeight;
- (double)_effectiveEstimatedSectionFooterHeight;
- (double)_effectiveEstimatedSectionHeaderHeight;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveSeparatorInsets;
- (id)_generateLayoutGroup:(id)arg1;
- (id)_itemHeights;
- (id)_layoutEnvironment;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_sectionInsetsForAppearanceStyle;
- (double)_separatorHeight;
- (void)_setItemHeights:(id)arg1;
- (bool)_shouldDrawThickSeparators;
- (bool)_shouldPinSupplementaries;
- (long long)appearanceStyle;
- (double)estimatedRowHeight;
- (double)estimatedSectionFooterHeight;
- (double)estimatedSectionHeaderHeight;
- (id)init;
- (id)initWithCollectionView:(id)arg1;
- (double)rowHeight;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (long long)separatorStyle;
- (void)setAppearanceStyle:(long long)arg1;
- (void)setEstimatedRowHeight:(double)arg1;
- (void)setEstimatedSectionFooterHeight:(double)arg1;
- (void)setEstimatedSectionHeaderHeight:(double)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setSectionFooterHeight:(double)arg1;
- (void)setSectionHeaderHeight:(double)arg1;
- (void)setSeparatorInset:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSeparatorStyle:(long long)arg1;

@end
