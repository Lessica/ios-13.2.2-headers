/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFDatePickerParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate, WFNonViewResponderDelegate, WFVariableUIDelegate> {
    UIDatePicker * _datePicker;
    WFNonViewResponder * _datePickerResponder;
    bool  _isPickingMagicVariable;
    UIViewController * _presentedViewController;
    UIView * _sourceView;
    WFVariableInputCoordinator * _variableCoordinator;
}

@property (nonatomic, retain) UIDatePicker *datePicker;
@property (nonatomic, retain) WFNonViewResponder *datePickerResponder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPickingMagicVariable;
@property (nonatomic) UIViewController *presentedViewController;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFVariableInputCoordinator *variableCoordinator;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (id)datePicker;
- (id)datePickerResponder;
- (void)datePickerValueChanged:(id)arg1;
- (bool)isPickingMagicVariable;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentedViewController;
- (void)responderWillResign:(id)arg1;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(id /* block */)arg3 goBackHandler:(id /* block */)arg4 scrolledAwayHandler:(id /* block */)arg5;
- (void)setDatePicker:(id)arg1;
- (void)setDatePickerResponder:(id)arg1;
- (void)setIsPickingMagicVariable:(bool)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setVariableCoordinator:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)setVariableUIDelegate:(id)arg1;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(bool)arg2 variableProvider:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)sourceView;
- (void)sourceViewTintColorDidChange;
- (id)variableCoordinator;

@end
