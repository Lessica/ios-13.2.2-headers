/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDBuddyFlowUserInfoViewController : HKTableViewController <HKSimpleDataEntryItemToolbarDelegate, UITableViewDataSource, UITableViewDelegate, WDUserActivityResponder> {
    NSArray * _dataEntryItems;
    <WDBuddyControllerUserInfoDelegate> * _delegate;
    WDBuddyFlowContinueFooterView * _footerView;
    HKTitledContactBuddyHeaderView * _headerView;
    HKHealthStore * _healthStore;
    _HKMedicalIDData * _medicalIDData;
    WDProfile * _profile;
    WDUserDefaults * _userDefaults;
    WDBuddyFlowUserInfo * _userInfo;
}

@property (nonatomic, retain) NSArray *dataEntryItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WDBuddyControllerUserInfoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) WDBuddyFlowUserInfo *userInfo;

- (void).cxx_destruct;
- (void)_configureHeaderView:(id)arg1;
- (id)_createTableFooterView;
- (id)_createTableHeaderView;
- (void)_loadData;
- (void)_localeDidChange:(id)arg1;
- (void)_saveData;
- (void)_setupObservers;
- (void)_updateForCurrentSizeCategory;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)continueButtonTapped:(id)arg1;
- (void)dataEntryItemDonePressed:(id)arg1;
- (void)dataEntryItemNextPressed:(id)arg1;
- (void)dataEntryItemPrevPressed:(id)arg1;
- (id)dataEntryItems;
- (void)dealloc;
- (id)delegate;
- (void)focusItemAtIndex:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)setDataEntryItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)userInfo;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
