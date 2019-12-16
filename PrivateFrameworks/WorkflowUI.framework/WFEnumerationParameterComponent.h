/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFEnumerationParameterComponent : WFParameterComponent {
    <WFComponentNavigationContext> * _navigationContext;
    WFEnumerationParameter * _parameter;
    bool  _processing;
    WFEnumerationSegmentedControlComponent * _segmentedControlComponent;
    WFVariableSubstitutableParameterState * _state;
    id /* block */  _updateBlock;
    <WFVariableProvider> * _variableProvider;
    <WFVariableUIDelegate> * _variableUIDelegate;
}

@property (nonatomic, readonly) <WFComponentNavigationContext> *navigationContext;
@property (nonatomic, readonly) WFEnumerationParameter *parameter;
@property (nonatomic, readonly) bool processing;
@property (nonatomic, readonly) WFEnumerationSegmentedControlComponent *segmentedControlComponent;
@property (nonatomic, readonly) WFVariableSubstitutableParameterState *state;
@property (nonatomic, readonly) <WFVariableProvider> *variableProvider;
@property (nonatomic, readonly) <WFVariableUIDelegate> *variableUIDelegate;

+ (bool)editsMultipleValues;
+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; bool x5; })arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
+ (unsigned long long)variableResultTypeForParameter:(id)arg1;

- (void).cxx_destruct;
- (id)navigationContext;
- (id)parameter;
- (bool)processing;
- (id)segmentedControlComponent;
- (id)state;
- (id /* block */)updateBlock;
- (id)variableProvider;
- (id)variableUIDelegate;

@end
