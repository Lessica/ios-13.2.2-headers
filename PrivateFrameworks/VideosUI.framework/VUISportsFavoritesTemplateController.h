/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISportsFavoritesTemplateController : _TVBgImageLoadingViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, _TVCollectionViewDelegate> {
    UICollectionView * _collectionView;
    VUIFavoriteCollectionViewCell * _computationCell;
    VUICollectionFooterView * _computationFooterView;
    VUICollectionHeaderView * _computationHeaderView;
    VUISportsFavoritesContainerView * _containerView;
    IKViewElement * _footerElement;
    IKHeaderElement * _headerElement;
    bool  _requiresRelayout;
    NSArray * _sectionElements;
    IKViewElement * _templateElement;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) VUIFavoriteCollectionViewCell *computationCell;
@property (nonatomic, retain) VUICollectionFooterView *computationFooterView;
@property (nonatomic, retain) VUICollectionHeaderView *computationHeaderView;
@property (nonatomic, retain) VUISportsFavoritesContainerView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) IKViewElement *footerElement;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IKHeaderElement *headerElement;
@property (nonatomic, retain) NSArray *sectionElements;
@property (readonly) Class superclass;
@property (nonatomic, retain) IKViewElement *templateElement;

- (void).cxx_destruct;
- (void)_animateSectionElementsChanges;
- (struct CGSize { double x1; double x2; })_expectedCellSizeForElement:(id)arg1 collectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)computationCell;
- (id)computationFooterView;
- (id)computationHeaderView;
- (id)containerView;
- (void)didCancel;
- (id)footerElement;
- (id)headerElement;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)sectionElements;
- (void)setCollectionView:(id)arg1;
- (void)setComputationCell:(id)arg1;
- (void)setComputationFooterView:(id)arg1;
- (void)setComputationHeaderView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFooterElement:(id)arg1;
- (void)setHeaderElement:(id)arg1;
- (void)setSectionElements:(id)arg1;
- (void)setTemplateElement:(id)arg1;
- (id)templateElement;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
