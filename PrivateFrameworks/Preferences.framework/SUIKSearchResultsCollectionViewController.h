/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController> {
    NSObject<SUIKSearchResultsCollectionViewControllerDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    _SUIKSearchResultsUpdateOperation * _updateOperation;
}

@property (nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic, retain) _SUIKSearchResultsUpdateOperation *updateOperation;

- (void).cxx_destruct;
- (void)_selectAndScrollToIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)diffableDataSource;
- (double)iconWidth;
- (id)init;
- (void)searchQueryCompleted;
- (void)searchQueryFoundItems:(id)arg1;
- (void)searchQueryStarted;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (void)setDelegate:(id)arg1;
- (void)setDiffableDataSource:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setUpdateOperation:(id)arg1;
- (void)showSelectedSearchResult;
- (id)updateOperation;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
