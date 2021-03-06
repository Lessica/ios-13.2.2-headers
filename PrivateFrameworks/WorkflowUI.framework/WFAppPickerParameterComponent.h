/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFAppPickerParameterComponent : WFParameterComponent {
    <WFComponentNavigationContext> * _navigationContext;
    WFParameter * _parameter;
    id /* block */  _updateBlock;
}

@property (nonatomic, readonly) <WFComponentNavigationContext> *navigationContext;

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; bool x5; })arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;

- (void).cxx_destruct;
- (id)navigationContext;
- (id)parameter;
- (id /* block */)updateBlock;

@end
