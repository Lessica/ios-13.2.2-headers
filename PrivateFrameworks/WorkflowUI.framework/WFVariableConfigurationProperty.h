/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFVariableConfigurationProperty : NSObject {
    WFContentProperty * _contentProperty;
    NSString * _label;
    bool  _negativeProperty;
}

@property (nonatomic, readonly) WFContentProperty *contentProperty;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) bool negativeProperty;

- (void).cxx_destruct;
- (id)contentProperty;
- (id)initWithContentProperty:(id)arg1 negativeProperty:(bool)arg2;
- (id)initWithLabel:(id)arg1;
- (id)label;
- (bool)negativeProperty;

@end
