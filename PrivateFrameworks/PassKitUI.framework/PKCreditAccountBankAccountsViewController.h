/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKCreditAccountBankAccountsViewController : PKSectionTableViewController <PKAddBankAccountInformationViewControllerDelegate> {
    PKAccount * _account;
    unsigned long long  _accountFeatureIdentifier;
    long long  _context;
    NSMutableArray * _deletingFundingSources;
    NSMutableArray * _fundingSources;
    PKPaymentWebService * _paymentWebService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addBankAccountInformationViewController;
- (id)_broadwayBankAccountCellForRowAtIndex:(long long)arg1;
- (void)_configureBankAccountCell:(id)arg1 withFundingSource:(id)arg2;
- (void)_didSelectDeleteBroadwayBankAccountAtIndexPath:(id)arg1;
- (void)_editButtonPressed:(id)arg1;
- (bool)_isBankAccountIndexPath:(id)arg1;
- (void)_toggleEditingMode;
- (void)_updateEditButtonIfNecessary;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)addBankAccountInformationViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (id)initWithAccount:(id)arg1 paymentWebService:(id)arg2 context:(long long)arg3;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
