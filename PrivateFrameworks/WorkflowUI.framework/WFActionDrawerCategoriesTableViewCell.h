/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFActionDrawerCategoriesTableViewCell : UITableViewCell <WFActionDrawerCategoriesCollectionViewManagerDelegate> {
    UICollectionView * _categoriesCollectionView;
    WFActionDrawerCategoriesCollectionViewManager * _categoriesCollectionViewManager;
    UICollectionViewFlowLayout * _categoriesFlowLayout;
    <WFActionDrawerCategoriesTableViewCellDelegate> * _delegate;
    WFActionDrawerCategoriesMetrics * _metrics;
    bool  _shouldStackVertically;
}

@property (nonatomic) UICollectionView *categoriesCollectionView;
@property (nonatomic, retain) WFActionDrawerCategoriesCollectionViewManager *categoriesCollectionViewManager;
@property (nonatomic) UICollectionViewFlowLayout *categoriesFlowLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFActionDrawerCategoriesTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) WFActionDrawerCategoriesMetrics *metrics;
@property (nonatomic) bool shouldStackVertically;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adjustForVerticalStacking;
- (id)categoriesCollectionView;
- (id)categoriesCollectionViewManager;
- (void)categoriesCollectionViewManager:(id)arg1 didSelectAction:(id)arg2;
- (void)categoriesCollectionViewManager:(id)arg1 didSelectCategoryForContentType:(id)arg2 title:(id)arg3;
- (void)categoriesCollectionViewManager:(id)arg1 didSelectDocumentationForAction:(id)arg2 fromView:(id)arg3;
- (void)categoriesCollectionViewManagerDidSelectCategoryApps:(id)arg1 title:(id)arg2;
- (void)categoriesCollectionViewManagerDidSelectCategoryFavorites:(id)arg1 title:(id)arg2;
- (void)categoriesCollectionViewManagerDidSelectCategoryScripting:(id)arg1 title:(id)arg2;
- (id)categoriesFlowLayout;
- (void)configureWithContentTypeCategories:(id)arg1 metrics:(id)arg2;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)metrics;
- (void)setCategoriesCollectionView:(id)arg1;
- (void)setCategoriesCollectionViewManager:(id)arg1;
- (void)setCategoriesFlowLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setShouldStackVertically:(bool)arg1;
- (bool)shouldStackVertically;

@end
