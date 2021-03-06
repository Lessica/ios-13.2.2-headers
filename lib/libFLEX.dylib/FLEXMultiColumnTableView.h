/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXMultiColumnTableView : UIView <FLEXTableContentCellDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIScrollView * _contentScrollView;
    UITableView * _contentTableView;
    <FLEXMultiColumnTableViewDataSource> * _dataSource;
    <FLEXMultiColumnTableViewDelegate> * _delegate;
    UIScrollView * _headerScrollView;
    UIView * _leftHeader;
    UITableView * _leftTableView;
    NSArray * _rowData;
    NSDictionary * _sortStatusDict;
}

@property (nonatomic, retain) UIScrollView *contentScrollView;
@property (nonatomic, retain) UITableView *contentTableView;
@property (nonatomic) <FLEXMultiColumnTableViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FLEXMultiColumnTableViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIScrollView *headerScrollView;
@property (nonatomic, retain) UIView *leftHeader;
@property (nonatomic, retain) UITableView *leftTableView;
@property (nonatomic, retain) NSArray *rowData;
@property (nonatomic, retain) NSDictionary *sortStatusDict;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)columnMargin;
- (id)columnTitleForColumn:(long long)arg1;
- (id)contentAtColumn:(long long)arg1 row:(long long)arg2;
- (void)contentHeaderTap:(id)arg1;
- (double)contentHeightForRow:(long long)arg1;
- (id)contentScrollView;
- (id)contentTableView;
- (double)contentWidthForColumn:(long long)arg1;
- (id)dataSource;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)headerScrollView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leftHeader;
- (double)leftHeaderWidth;
- (id)leftTableView;
- (void)loadContentData;
- (void)loadContentScrollView;
- (void)loadHeaderData;
- (void)loadHeaderScrollView;
- (void)loadLeftView;
- (void)loadLeftViewData;
- (void)loadUI;
- (long long)numberOfColumns;
- (long long)numberOfRows;
- (void)reloadData;
- (id)rowData;
- (id)rowTitleForRow:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentScrollView:(id)arg1;
- (void)setContentTableView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderScrollView:(id)arg1;
- (void)setLeftHeader:(id)arg1;
- (void)setLeftTableView:(id)arg1;
- (void)setRowData:(id)arg1;
- (void)setSortStatusDict:(id)arg1;
- (id)sortStatusDict;
- (void)tableContentCell:(id)arg1 labelDidTapWithText:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)topHeaderHeight;

@end
