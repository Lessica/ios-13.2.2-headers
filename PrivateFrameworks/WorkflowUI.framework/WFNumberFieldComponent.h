/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFNumberFieldComponent : CKStatefulViewComponent {
    struct WFNumberFieldAttributes { 
        bool editable; 
        NSString *placeholder; 
        long long textAlignment; 
        bool becomeFirstResponder; 
        NSString *text; 
        bool allowsDecimalNumbers; 
        bool allowsNegatingNumbers; 
        <WFVariableProvider> *variableProvider; 
        <WFVariableUIDelegate> *variableUIDelegate; 
        NSSet *allowedVariableTypes; 
        bool variablesDisabled; 
    }  _attributes;
    /* Warning: unhandled struct encoding: '{CKTypedComponentAction<>="_variant"Q"_target"@"_scopeHandle"@"CKComponentScopeHandle""_selector":}' */ struct CKTypedComponentAction<> { 
        unsigned long long _variant; 
        id _target; 
    }  _doneAction;
    id /* block */  _updateBlock;
    id /* block */  _variableBlock;
}

@property (nonatomic, readonly) struct WFNumberFieldAttributes { bool x1; id x2; bool x3; id x4; bool x5; id x6; id x7; } attributes;
@property (nonatomic, readonly) struct CKTypedComponentAction<> { unsigned long long x1; id x2; SEL x3; } doneAction;
@property (nonatomic, readonly) id /* block */ updateBlock;
@property (nonatomic, readonly) id /* block */ variableBlock;

+ (id)newWithAttributes:(const struct WFNumberFieldAttributes { bool x1; id x2; bool x3; id x4; bool x5; id x6; id x7; }*)arg1 updateBlock:(id /* block */)arg2 variableBlock:(id /* block */)arg3 doneAction:(struct CKTypedComponentAction<> { unsigned long long x1; id x2; SEL x3; })arg4 size:(const struct CKComponentSize { struct CKRelativeDimension { int x_1_1_1; double x_1_1_2; } x1; struct CKRelativeDimension { int x_2_1_1; double x_2_1_2; } x2; struct CKRelativeDimension { int x_3_1_1; double x_3_1_2; } x3; struct CKRelativeDimension { int x_4_1_1; double x_4_1_2; } x4; struct CKRelativeDimension { int x_5_1_1; double x_5_1_2; } x5; struct CKRelativeDimension { int x_6_1_1; double x_6_1_2; } x6; }*)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WFNumberFieldAttributes { bool x1; id x2; bool x3; id x4; bool x5; id x6; id x7; })attributes;
- (struct CKTypedComponentAction<> { unsigned long long x1; id x2; SEL x3; })doneAction;
- (id /* block */)updateBlock;
- (id /* block */)variableBlock;

@end
