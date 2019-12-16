/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrintingProgressViewController : UITableViewController {
    UIPrintingMessageView * _messageView;
    UINavigationController * _navController;
    UIPrintingProgress * _printingProgress;
    double  _rotationDelay;
    UIWindow * _window;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)cancelProgress;
- (void)cleanupAfterDismiss;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismissAnimated:(bool)arg1;
- (void)doneProgress;
- (id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3;
- (double)rotationDelay;
- (void)setDonePrinting:(bool)arg1;
- (void)setMessage:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)show;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)visible;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
