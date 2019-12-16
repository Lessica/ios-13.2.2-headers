/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFStepperParameterComponent : WFParameterComponent {
    WFParameter * _parameter;
    id /* block */  _updateBlock;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; bool x5; })arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

- (void).cxx_destruct;
- (id)parameter;
- (void)stepperValueChanged:(id)arg1;
- (id /* block */)updateBlock;

@end
