/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFParameterLayoutComponent : CKComponent {
    CKComponent * _controlComponent;
    struct WFCompressionResistance { 
        int _type; 
        double _value; 
    }  _controlResistance;
    NSString * _label;
    CKInsetComponent * _labelComponent;
    NSArray * _labelsToAlignTo;
    /* Warning: unhandled struct encoding: '{CKTypedComponentAction<>="_variant"Q"_target"@"_scopeHandle"@"CKComponentScopeHandle""_selector":}' */ struct CKTypedComponentAction<> { 
        unsigned long long _variant; 
        id _target; 
    }  _selectionAction;
    struct WFParameterLayoutComponentStyle { 
        UIColor *backgroundColor; 
        UIColor *highlightedBackgroundColor; 
        UIFont *labelFont; 
        UIColor *labelColor; 
    }  _style;
}

@property (nonatomic, readonly) CKComponent *controlComponent;
@property (nonatomic, readonly) struct CKTypedComponentAction<> { unsigned long long x1; id x2; SEL x3; } selectionAction;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
+ (id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 selectionAction:(struct CKTypedComponentAction<> { unsigned long long x1; id x2; SEL x3; })arg3 selectionEnabled:(bool)arg4 style:(const struct WFParameterLayoutComponentStyle { id x1; id x2; }*)arg5 accessibility:(const struct WFParameterLayoutComponentAccessibility { bool x1; id x2; id x3; }*)arg6 controlResistance:(const struct WFCompressionResistance { int x1; double x2; }*)arg7 controlComponent:(id)arg8;
+ (id)newWithView:(const struct CKComponentViewConfiguration { struct shared_ptr<const CKComponentViewConfiguration::Repr> { struct Repr {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 size:(const struct CKComponentSize { struct CKRelativeDimension { int x_1_1_1; double x_1_1_2; } x1; struct CKRelativeDimension { int x_2_1_1; double x_2_1_2; } x2; struct CKRelativeDimension { int x_3_1_1; double x_3_1_2; } x3; struct CKRelativeDimension { int x_4_1_1; double x_4_1_2; } x4; struct CKRelativeDimension { int x_5_1_1; double x_5_1_2; } x5; struct CKRelativeDimension { int x_6_1_1; double x_6_1_2; } x6; }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CKComponentLayout { id x1; unsigned char x2; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x3; unsigned short x4; int x5; void*x6; void*x7; void*x8; double x9; double x10; })computeLayoutThatFits:(struct CKSizeRange { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)controlComponent;
- (void)handleParameterLayoutPressed;
- (struct CKTypedComponentAction<> { unsigned long long x1; id x2; SEL x3; })selectionAction;

@end
