/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserAppManagerViewController : CKBrowserViewController <CKAppManagerViewControllerDelegate, UIPresentationControllerDelegatePrivate, UIViewControllerTransitioningDelegate> {
    CKAppManagerViewController * _appViewController;
    <CKBrowserAppManagerViewControllerDelegate> * _delegate;
    UINavigationController * _navController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserAppManagerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)appManagerViewControllerDidFinish:(id)arg1;
- (void)browserAppManagerDidSelectPlugin:(id)arg1;
- (long long)browserPresentationStyle;
- (id)delegate;
- (void)dismiss;
- (bool)isDismissing;
- (bool)isLoaded;
- (bool)mayBeKeptInViewHierarchy;
- (long long)parentModalPresentationStyle;
- (id)parentTransitioningDelegate;
- (long long)preferredStatusBarStyle;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setDelegate:(id)arg1;
- (bool)shouldShowChatChrome;
- (bool)supportsQuickView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;

@end
