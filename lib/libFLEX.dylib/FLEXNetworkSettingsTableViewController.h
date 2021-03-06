/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXNetworkSettingsTableViewController : UITableViewController <UIActionSheetDelegate> {
    UITableViewCell * _cacheLimitCell;
    NSArray * _cells;
}

@property (nonatomic, retain) UITableViewCell *cacheLimitCell;
@property (nonatomic, copy) NSArray *cells;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellTitleFont;

- (void).cxx_destruct;
- (id)buttonCellWithTitle:(id)arg1 touchUpAction:(SEL)arg2 isDestructive:(bool)arg3;
- (void)cacheLimitAdjusted:(id)arg1;
- (id)cacheLimitCell;
- (void)cacheMediaResponsesToggled:(id)arg1;
- (id)cells;
- (void)clearRequestsTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)networkDebuggingToggled:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCacheLimitCell:(id)arg1;
- (void)setCells:(id)arg1;
- (id)sliderCellWithTitle:(id)arg1 changedAction:(SEL)arg2 minimum:(double)arg3 maximum:(double)arg4 initialValue:(double)arg5;
- (id)switchCellWithTitle:(id)arg1 toggleAction:(SEL)arg2 isOn:(bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleForCacheLimitCellWithValue:(long long)arg1;
- (void)viewDidLoad;

@end
