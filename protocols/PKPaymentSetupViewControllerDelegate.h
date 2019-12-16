/* Generated by RuntimeBrowser.
 */

@protocol PKPaymentSetupViewControllerDelegate <NSObject>

@required

- (void)viewControllerDidTerminateSetupFlow:(UIViewController *)arg1;

@optional

- (void)viewController:(UIViewController *)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg2 withShouldContinue:(bool)arg3 error:(NSError *)arg4;
- (void)viewController:(UIViewController *)arg1 didExitPasscodeUpgradeWithShouldContinue:(bool)arg2 error:(NSError *)arg3;
- (void)viewController:(UIViewController *)arg1 didShowProvisioningError:(NSError *)arg2;
- (void)viewController:(void *)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: UIViewController *, PKPasscodeUpgradeFlowController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)viewController:(void *)arg1 requestPasscodeUpgradeWithCompletion:(void *)arg2; // needs 2 arg types, found 8: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)viewController:(void *)arg1 willPerformPasscodeUpgradeWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)viewControllerDidCancelSetupFlow:(UIViewController *)arg1;
- (void)viewControllerDidFailToChangePasscodeComplex:(UIViewController *)arg1;
- (void)viewControllerDidFinishChangingPasscodeComplex:(UIViewController *)arg1;
- (void)viewControllerDidShowEligibilityIssue:(UIViewController *)arg1;
- (void)viewControllerWillPresentChangePasscodeComplex:(UIViewController *)arg1;

@end
