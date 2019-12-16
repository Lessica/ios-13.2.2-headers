/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISnapshotModalViewController : UIViewController {
    UIViewController * _disappearingViewController;
    long long  _interfaceOrientation;
    UINavigationController * _parentController;
}

@property (nonatomic, retain) UIViewController *disappearingViewController;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)disappearingViewController;
- (id)initWithInterfaceOrientation:(long long)arg1;
- (void)setDisappearingViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
