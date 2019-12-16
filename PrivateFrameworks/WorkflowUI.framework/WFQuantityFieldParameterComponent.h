/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFQuantityFieldParameterComponent : WFParameterComponent {
    <WFComponentNavigationContext> * _navigationContext;
    WFQuantityFieldParameter * _parameter;
    WFQuantityParameterState * _state;
    id /* block */  _updateBlock;
}

@property (nonatomic, readonly) WFQuantityFieldParameter *parameter;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; bool x5; })arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (id)parameter;
- (id /* block */)updateBlock;

@end
