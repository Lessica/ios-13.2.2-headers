/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemViewControllerLegacy : UINavigationController <SKUIRedeemIdDelegate, SKUIRedeemStepDelegate> {
    bool  _attempsAutomaticRedeem;
    <SKUIRedeemViewCameraOverrideDelegate> * _cameraDelegate;
    BOOL  _cameraRedeemEnabled;
    bool  _cameraRedeemVisible;
    UIBarButtonItem * _cancelButtonItem;
    long long  _category;
    SKUIClientContext * _clientContext;
    long long  _initialBarStyle;
    NSString * _initialCode;
    SKUIRedeemStepViewController * _inputViewController;
    NSOperationQueue * _operationQueue;
    SKUIRedeemPreflightOperation * _preflightOperation;
    SKUIRedeemConfiguration * _redeemConfiguration;
    bool  _shouldPerformInitialOperationOnAppear;
}

@property (nonatomic) bool attempsAutomaticRedeem;
@property (nonatomic) <SKUIRedeemViewCameraOverrideDelegate> *cameraDelegate;
@property (nonatomic) bool cameraRedeemVisible;
@property (nonatomic, retain) UIBarButtonItem *cancelButtonItem;
@property (nonatomic, readonly) long long category;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *initialCode;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, retain) SKUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) bool shouldPerformInitialOperationOnAppear;
@property (readonly) Class superclass;

+ (bool)redeemRequiresNationalId:(id)arg1;

- (void).cxx_destruct;
- (void)_attemptAutomaticRedeemWithMetadata:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)_executeIdValidationOperationWithFields:(id)arg1;
- (void)_executePreflightOperationForcesAuthentication:(bool)arg1;
- (void)_executeRequiresIdValidationOperation;
- (void)_finishPreflightWithResult:(id)arg1;
- (void)_loadInputViewController;
- (id)_newInputViewController;
- (void)_performInitialRedeemOperation;
- (void)_showInputViewController;
- (void)_showNationalIdLoadingPage;
- (void)_showNationalIdVerificationPage;
- (bool)attempsAutomaticRedeem;
- (id)cameraDelegate;
- (bool)cameraRedeemVisible;
- (id)cancelButtonItem;
- (long long)category;
- (id)clientContext;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)initWithRedeemCategory:(long long)arg1;
- (id)initialCode;
- (id)operationQueue;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)redeemAgainAnimated:(bool)arg1;
- (id)redeemConfiguration;
- (void)redeemIdViewController:(id)arg1 submittedWithFields:(id)arg2;
- (void)redeemIdViewControllerDidCancel:(id)arg1;
- (void)redeemStepViewControllerShouldValidateNationalID:(id)arg1;
- (void)setAttempsAutomaticRedeem:(bool)arg1;
- (void)setCameraDelegate:(id)arg1;
- (void)setCameraRedeemVisible:(bool)arg1;
- (void)setCancelButtonItem:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setInitialCode:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setRedeemConfiguration:(id)arg1;
- (void)setShouldPerformInitialOperationOnAppear:(bool)arg1;
- (bool)shouldPerformInitialOperationOnAppear;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
