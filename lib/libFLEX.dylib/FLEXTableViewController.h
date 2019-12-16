/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXTableViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    bool  _automaticallyShowsSearchBarCancelButton;
    FLEXScopeCarousel * _carousel;
    NSTimer * _debounceTimer;
    bool  _hideSearchBarInitially;
    bool  _pinSearchBar;
    double  _searchBarDebounceInterval;
    UISearchController * _searchController;
    UIViewController * _searchResultsController;
    bool  _showsCarousel;
    bool  _showsSearchBar;
}

@property (nonatomic) bool automaticallyShowsSearchBarCancelButton;
@property (nonatomic, retain) FLEXScopeCarousel *carousel;
@property (nonatomic, retain) NSTimer *debounceTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideSearchBarInitially;
@property (nonatomic) bool pinSearchBar;
@property (nonatomic) double searchBarDebounceInterval;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) UIViewController *searchResultsController;
@property (nonatomic, readonly) NSString *searchText;
@property (nonatomic, readonly) long long selectedScope;
@property (nonatomic) bool showsCarousel;
@property (nonatomic) bool showsSearchBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)automaticallyShowsSearchBarCancelButton;
- (id)carousel;
- (void)debounce:(id /* block */)arg1;
- (id)debounceTimer;
- (bool)hideSearchBarInitially;
- (id)init;
- (id)initWithStyle:(long long)arg1;
- (void)onBackgroundQueue:(id /* block */)arg1 thenOnMainQueue:(id /* block */)arg2;
- (bool)pinSearchBar;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (double)searchBarDebounceInterval;
- (id)searchController;
- (id)searchResultsController;
- (id)searchText;
- (long long)selectedScope;
- (void)setAutomaticallyShowsSearchBarCancelButton:(bool)arg1;
- (void)setCarousel:(id)arg1;
- (void)setDebounceTimer:(id)arg1;
- (void)setHideSearchBarInitially:(bool)arg1;
- (void)setPinSearchBar:(bool)arg1;
- (void)setSearchBarDebounceInterval:(double)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setShowsCarousel:(bool)arg1;
- (void)setShowsSearchBar:(bool)arg1;
- (bool)showsCarousel;
- (bool)showsSearchBar;
- (void)updateSearchResults:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
