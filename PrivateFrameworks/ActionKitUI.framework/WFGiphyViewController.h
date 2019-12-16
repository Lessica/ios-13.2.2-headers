/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFGiphyViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UISearchBarDelegate> {
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    <WFGiphyViewControllerDelegate> * _delegate;
    UIView * _emptyListView;
    NSArray * _objects;
    NSString * _query;
    bool  _selectMultiple;
    WFGiphySessionManager * _sessionManager;
}

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewFlowLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFGiphyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *emptyListView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *objects;
@property (nonatomic, copy) NSString *query;
@property (nonatomic) bool selectMultiple;
@property (nonatomic, readonly) WFGiphySessionManager *sessionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)accessibilityPerformEscape;
- (void)cancel;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewLayout;
- (id)delegate;
- (void)done;
- (id)emptyListView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)objects;
- (id)query;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)selectMultiple;
- (id)sessionManager;
- (void)setDelegate:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSelectMultiple:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
