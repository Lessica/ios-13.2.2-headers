/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol> {
    PKAccountFlowController * _accountController;
    bool  _hasSufficientOTBForInstallment;
    CLInUseAssertion * _inUseAssertion;
    PKPaymentInstallmentConfiguration * _installmentConfiguration;
    NSString * _offerTermsIdentifier;
    PKApplyOfferCreditCardView * _offerView;
    bool  _useCompactLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_openTermsAndConditions;
- (void)_setupForBroadwayApplication:(id)arg1;
- (void)_termsAccepted:(bool)arg1;
- (void)dealloc;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
