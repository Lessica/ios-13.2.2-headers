/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchGridViewController : PUPhotosGridViewController <PUPhotosSectionHeaderViewDelegate, PUSearchGridDataSourceDelegate, PUSectionedGridLayoutDelegate> {
    NSString * _emptyPlaceholderText;
    PUSearchGridDataSource * _searchGridDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emptyPlaceholderText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUSearchGridDataSource *searchGridDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_containsScene;
- (void)_getDataForVisualSection:(long long)arg1 locations:(id*)arg2 title:(id*)arg3 startDate:(id*)arg4 endDate:(id*)arg5;
- (id)_subtitle;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (void)_updateNavigationTitleView;
- (bool)allowSlideshowButton;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)didTapHeaderView:(id)arg1;
- (id)emptyPlaceholderText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fullMomentsLevelSectionHeaderHighlightInset;
- (id)newEmptyPlaceholderView;
- (id)newGridLayout;
- (long long)oneUpPresentationOrigin;
- (bool)pu_handleSecondTabTap;
- (id)searchGridDataSource;
- (void)searchGridDataSourceHasPendingChanges:(id)arg1;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (void)setEmptyPlaceholderText:(id)arg1;
- (void)setSearchGridDataSource:(id)arg1;
- (bool)updateSpec;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
