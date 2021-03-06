/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAccountServiceAccountResolutionController : NSObject {
    PKAccount * _account;
    <PKAccountBillPaymentObserver> * _billPaymentObserver;
    PKBusinessChatController * _businessChatController;
    <PKAccountServiceAccountResolutionControllerDelegate> * _delegate;
    PKPaymentPass * _pass;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic) <PKAccountBillPaymentObserver> *billPaymentObserver;
@property (nonatomic) <PKAccountServiceAccountResolutionControllerDelegate> *delegate;
@property (nonatomic, retain) PKPaymentPass *pass;

- (void).cxx_destruct;
- (id)_alertControllerForBusinessChatContext:(id)arg1;
- (void)_callIssuer;
- (void)_handleAccountServiceAccountDidChangeNotification:(id)arg1;
- (void)_openBusinessChatWithContext:(id)arg1;
- (void)_presentAccountServiceAction:(unsigned long long)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentViewController:(id)arg1;
- (id)account;
- (id)billPaymentObserver;
- (id)delegate;
- (id)initWithAccount:(id)arg1 pass:(id)arg2;
- (id)pass;
- (void)presentFlowForAccountResolution:(unsigned long long)arg1 configuration:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccount:(id)arg1;
- (void)setBillPaymentObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;

@end
