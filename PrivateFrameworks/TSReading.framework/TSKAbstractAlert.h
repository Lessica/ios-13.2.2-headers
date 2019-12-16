/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKAbstractAlert : NSObject {
    bool  _cancelOnEnterBackground;
    id /* block */  _clickedBlock;
    bool  _clickedButtonAtIndex;
    id  _context;
    <TSKUIAlertProtocol> * _delegate;
    bool  _didDismissWithButtonIndex;
    bool  _didPresentAlertView;
    id /* block */  _dismissedBlock;
    bool  _inBackground;
    bool  _isDelegateRetained;
    long long  _result;
    <TSKUIAlertProtocol> * _retainedDelegate;
    bool  _willDismissWithButtonIndex;
    bool  _willPresentAlertView;
}

@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic) bool cancelOnEnterBackground;
@property (nonatomic, retain) id context;
@property (nonatomic) <TSKUIAlertProtocol> *delegate;
@property (nonatomic, readonly) bool inBackground;
@property (nonatomic, retain) <TSKUIAlertProtocol> *retainedDelegate;

- (void)_didPresentAlertView:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (bool)cancelOnEnterBackground;
- (void)clickedButtonAtIndex:(long long)arg1;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)didDismissWithButtonIndex:(long long)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (void)enterBackground;
- (long long)firstOtherButtonIndex;
- (bool)inBackground;
- (id)init;
- (long long)numberOfButtons;
- (long long)result;
- (id)retainedDelegate;
- (void)setCancelButtonIndex:(long long)arg1;
- (void)setCancelOnEnterBackground:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRetainedDelegate:(id)arg1;
- (void)show;
- (void)showAlert;
- (long long)showSynchronously;
- (void)showWithClickedButtonBlock:(id /* block */)arg1;
- (void)showWithDelegate:(id)arg1 context:(id)arg2;
- (void)showWithDismissedByButtonBlock:(id /* block */)arg1;
- (void)willDismissWithButtonIndex:(long long)arg1;
- (void)willPresentAlertView;

@end
