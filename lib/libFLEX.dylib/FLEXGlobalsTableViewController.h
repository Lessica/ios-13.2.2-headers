/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXGlobalsTableViewController : FLEXTableViewController {
    <FLEXGlobalsTableViewControllerDelegate> * _delegate;
    NSArray * _filteredSections;
    NSArray * _sections;
}

@property (nonatomic) <FLEXGlobalsTableViewControllerDelegate> *delegate;
@property (nonatomic, copy) NSArray *filteredSections;
@property (nonatomic, readonly) NSArray *sections;

+ (id)defaultGlobalSections;
+ (id)globalsEntryForRow:(unsigned long long)arg1;
+ (id)globalsTitleForSection:(unsigned long long)arg1;
+ (void)setApplicationWindow:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (void)deselectSelectedRow;
- (void)donePressed:(id)arg1;
- (id)filteredSections;
- (id)globalEntryAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setFilteredSections:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)titleForRowAtIndexPath:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (void)tryExploreAddress:(id)arg1 safely:(bool)arg2;
- (void)updateSearchResults:(id)arg1;
- (void)viewDidLoad;

@end