/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDImprovementDataCollectionOptInViewController : HKViewController <UITableViewDataSource, UITableViewDelegate> {
    UIButton * _allowButton;
    UIButton * _doNotAllowButton;
    UIView * _footerView;
    HRProfile * _profile;
    NSArray * _sections;
    UITableView * _tableView;
}

@property (nonatomic, retain) UIButton *allowButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *doNotAllowButton;
@property (nonatomic, retain) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HRProfile *profile;
@property (nonatomic, retain) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_computeSections;
- (void)_setOptInStatus:(long long)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)aboutPrivacyButtonTapped:(id)arg1;
- (id)allowButton;
- (void)allowButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id)doNotAllowButton;
- (void)doNotAllowButtonTapped:(id)arg1;
- (id)footerView;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (id)sections;
- (void)setAllowButton:(id)arg1;
- (void)setDoNotAllowButton:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
