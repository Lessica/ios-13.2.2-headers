/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMEditorTitleViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    long long  _activeCellIndex;
    NSString * _activeCellText;
    UITableViewCell * _collectionViewControllerCell;
    bool  _sizeIsTransitioning;
    UITableView * _tableView;
    <TitleChangeInformable> * _titleChangeInformableDelegate;
    PMTitleEditorProvider * _titleProvider;
}

@property (nonatomic) long long activeCellIndex;
@property (nonatomic, retain) NSString *activeCellText;
@property (nonatomic, retain) UITableViewCell *collectionViewControllerCell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool sizeIsTransitioning;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic) <TitleChangeInformable> *titleChangeInformableDelegate;
@property (nonatomic, retain) PMTitleEditorProvider *titleProvider;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (long long)activeCellIndex;
- (id)activeCellText;
- (id)collectionViewControllerCell;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setActiveCellIndex:(long long)arg1;
- (void)setActiveCellText:(id)arg1;
- (void)setCollectionViewControllerCell:(id)arg1;
- (void)setSizeIsTransitioning:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleChangeInformableDelegate:(id)arg1;
- (void)setTitleProvider:(id)arg1;
- (bool)sizeIsTransitioning;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleChangeInformableDelegate;
- (id)titleProvider;
- (void)updateFonts;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
