/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDashboardPaymentProductsItem : NSObject <PKDashboardItem> {
    PKPassView * _passView;
    PKTransitBalanceModel * _transitBalanceModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKTransitBalanceModel *transitBalanceModel;

- (void).cxx_destruct;
- (id)initWithPassView:(id)arg1;
- (id)pass;
- (void)setTransitBalanceModel:(id)arg1;
- (id)transitBalanceModel;

@end
