/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDProfileSharingTableViewController : HKTableViewController <HKSourceListDataSourceObserver, HKSwitchTableViewCellDelegate> {
    NSDictionary * _characteristicAuthorizationRecordsBySource;
    HKCharacteristicType * _characteristicType;
    HKDisplayType * _displayType;
    WDDisplayTypeDescriptionTableFooterView * _footerView;
    HKHealthStore * _healthStore;
    bool  _isLoaded;
    WDProfile * _profile;
    HKSourceListDataSource * _sourceListDataSource;
    NSDictionary * _sourceToAuthRecord;
}

@property (nonatomic, retain) HKSourceListDataSource *sourceListDataSource;
@property (nonatomic, copy) NSDictionary *sourceToAuthRecord;

- (void).cxx_destruct;
- (void)_adjustFooterHeight;
- (void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)arg1;
- (void)_gatherDataAndRefreshUI;
- (id)_sourceForIndexPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithProfile:(id)arg1 characteristicType:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setSourceListDataSource:(id)arg1;
- (void)setSourceToAuthRecord:(id)arg1;
- (id)sourceListDataSource;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (id)sourceToAuthRecord;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
