/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDDataListViewController : HKTableViewController <HKMonthViewControllerDelegate, WDUserActivityResponder> {
    long long  _cellStyle;
    <WDDataListViewControllerDataProvider> * _dataProvider;
    UIBarButtonItem * _deleteAllButtonItem;
    HKDisplayType * _displayType;
    _UIContentUnavailableView * _noContentView;
    WDProfile * _profile;
    NSDate * _scrollToDate;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, readonly) <WDDataListViewControllerDataProvider> *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WDProfile *profile;
@property (nonatomic, retain) NSDate *scrollToDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_calendarDateSelectorButtonTapped:(id)arg1;
- (long long)_closestRowToDate:(id)arg1;
- (void)_dataProviderDidUpdate;
- (bool)_dataProviderEnabled;
- (id)_defaultCellForTableView:(id)arg1 cellStyle:(long long)arg2 indexPath:(id)arg3 text:(id)arg4 secondaryText:(id)arg5 icon:(id)arg6;
- (void)_deleteAllButtonTapped:(id)arg1;
- (void)_deleteAllWithOptions:(unsigned long long)arg1;
- (void)_deleteAssociatedSamplesConfirmationPlural:(bool)arg1 deleteBlock:(id /* block */)arg2;
- (void)_displayTypeStringsChanged:(id)arg1;
- (bool)_hasSpinnerRowRowAtIndexPath:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (id)_quantityCellForTableView:(id)arg1 dataObjectSource:(id)arg2;
- (void)_reloadAllData;
- (void)_reloadAllDataScrolledToDate:(id)arg1;
- (id)_rightBarButtonItems;
- (id)_sampleAtIndexPath:(id)arg1;
- (id)_sampleTypesForDeleteAll;
- (bool)_shouldShowSpinnerRowInSection:(long long)arg1;
- (id)_sourceIconForObject:(id)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)_updateRightBarButtonItems;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)dataProvider;
- (void)dealloc;
- (void)didTapBackButtonForMonthViewController:(id)arg1;
- (id)displayType;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 dataProvider:(id)arg3 usingInsetStyling:(bool)arg4;
- (void)monthViewController:(id)arg1 didSelectDate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (void)resetDataAndScrollToDate:(id)arg1;
- (id)scrollToDate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setScrollToDate:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
