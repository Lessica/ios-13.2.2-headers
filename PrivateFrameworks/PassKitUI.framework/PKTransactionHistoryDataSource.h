/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKTransactionHistoryDataSource : NSObject <PKDashboardDataSource, PKDashboardTransactionFetcherDelegate> {
    PKAccount * _account;
    NSArray * _actionItems;
    PKInstallmentPlan * _associatedInstallmentPlan;
    CNContact * _contact;
    bool  _contactLoaded;
    PKPeerPaymentContactResolver * _contactResolver;
    bool  _contentIsLoaded;
    NSCalendar * _currentCalendar;
    <PKDashboardDataSourceDelegate> * _delegate;
    PKPaymentTransaction * _featuredTransaction;
    PKCurrencyAmount * _footerSecondaryTotal;
    PKCurrencyAmount * _footerTotal;
    NSDateFormatter * _formatterMonth;
    NSDateFormatter * _formatterTitle;
    PKPaymentTransactionGroup * _group;
    PKMerchant * _merchant;
    PKPaymentPass * _paymentPass;
    PKPaymentTransactionGroup * _selectedTransactions;
    PKDashboardTransactionFetcher * _transactionFetcher;
    NSArray * _transactionHistory;
    bool  _transactionHistoryLoaded;
    unsigned long long  _type;
}

@property (nonatomic, readonly) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *footerSecondaryTitle;
@property (nonatomic, readonly) PKCurrencyAmount *footerSecondaryTotal;
@property (nonatomic, readonly) NSString *footerTitle;
@property (nonatomic, readonly) PKCurrencyAmount *footerTotal;
@property (nonatomic, readonly) PKPaymentTransactionGroup *group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKMerchant *merchant;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (void)_handleTransactionHistoryUpdated:(id)arg1;
- (id)_headerItem;
- (void)_loadContact;
- (void)_notifyContentLoadedIfNecessary;
- (void)_reloadTransactions;
- (id)_totalPaymentsFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_totalRewardsFromTransactions:(id)arg1;
- (id)_totalSpendingFromTransactions:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_transactionItemForTransaction:(id)arg1;
- (id)contact;
- (id)footerSecondaryTitle;
- (id)footerSecondaryTotal;
- (id)footerTextForSection:(unsigned long long)arg1;
- (id)footerTitle;
- (id)footerTotal;
- (id)group;
- (id)initWithFetcher:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 featuredTransaction:(id)arg4 selectedTransactions:(id)arg5 transactionHistory:(id)arg6 type:(unsigned long long)arg7;
- (id)initWithTransactionGroup:(id)arg1 paymentPass:(id)arg2 account:(id)arg3 transactionHistory:(id)arg4;
- (id)itemAtIndexPath:(id)arg1;
- (id)merchant;
- (id)navigationBarTitle;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)setDataSourceDelegate:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (void)transactionsChanged:(id)arg1;
- (unsigned long long)type;

@end
