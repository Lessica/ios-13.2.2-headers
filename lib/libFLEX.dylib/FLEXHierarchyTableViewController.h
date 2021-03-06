/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXHierarchyTableViewController : FLEXTableViewController {
    NSArray * _allViews;
    <FLEXHierarchyTableViewControllerDelegate> * _delegate;
    NSDictionary * _depthsForViews;
    NSArray * _displayedViews;
    UIView * _selectedView;
    NSArray * _viewsAtTap;
}

@property (nonatomic, retain) NSArray *allViews;
@property (nonatomic) <FLEXHierarchyTableViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *depthsForViews;
@property (nonatomic, retain) NSArray *displayedViews;
@property (nonatomic, retain) UIView *selectedView;
@property (nonatomic, retain) NSArray *viewsAtTap;

- (void).cxx_destruct;
- (id)allViews;
- (id)delegate;
- (id)depthsForViews;
- (id)displayedViews;
- (void)donePressed:(id)arg1;
- (id)initWithViews:(id)arg1 viewsAtTap:(id)arg2 selectedView:(id)arg3 depths:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)selectedView;
- (void)setAllViews:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthsForViews:(id)arg1;
- (void)setDisplayedViews:(id)arg1;
- (void)setSelectedView:(id)arg1;
- (void)setViewsAtTap:(id)arg1;
- (bool)showScopeBar;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)trySelectCellForSelectedViewWithScrollPosition:(long long)arg1;
- (void)updateDisplayedViews;
- (void)updateSearchResults:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (id)viewsAtTap;

@end
