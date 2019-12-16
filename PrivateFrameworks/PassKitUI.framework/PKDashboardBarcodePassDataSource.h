/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardBarcodePassDataSource : NSObject <PKDashboardPassDataSource, PKSecureElementObserver> {
    <PKDashboardDataSourceDelegate> * _delegate;
    PKGroup * _group;
    PKPassGroupView * _groupView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)footerTextForSection:(unsigned long long)arg1;
- (void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2;
- (void)groupViewDidUpdatePassView:(id)arg1;
- (id)initWithGroupView:(id)arg1 context:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)reloadData;
- (void)sendContentIsLoadedIfNecessary;
- (void)setDataSourceDelegate:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;

@end
