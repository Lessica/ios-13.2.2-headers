/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDigitalHealthViewController : UIViewController <STLockoutViewControllerDelegate> {
    double  _additionalVerticalSafeAreaMargin;
    STLockoutViewController * _currentLockOutViewController;
    <_SFDigitalHealthViewControllerDelegate> * _digitalHealthViewControllerDelegate;
    NSURL * _url;
    NSMutableDictionary * _urlsToLockOutViewControllers;
}

@property (nonatomic) double additionalVerticalSafeAreaMargin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_SFDigitalHealthViewControllerDelegate> *digitalHealthViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(long long)arg1;
- (id)_urlStringForLockOutGivenURL:(id)arg1;
- (double)additionalVerticalSafeAreaMargin;
- (id)digitalHealthViewControllerDelegate;
- (void)hideLockOutForURL:(id)arg1;
- (void)lockoutViewControllerDidFinishDismissing:(id)arg1;
- (void)setAdditionalVerticalSafeAreaMargin:(double)arg1;
- (void)setDigitalHealthViewControllerDelegate:(id)arg1;
- (id)showLockOutForURL:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
