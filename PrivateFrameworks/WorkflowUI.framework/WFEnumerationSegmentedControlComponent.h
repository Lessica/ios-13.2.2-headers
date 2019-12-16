/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFEnumerationSegmentedControlComponent : CKComponent {
    WFEnumerationParameter * _parameter;
    id /* block */  _updateBlock;
}

+ (double)estimatedWidthWithSegments:(id)arg1;
+ (double)minimumWidthForSegmentWithTitle:(id)arg1;
+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions { bool x1; bool x2; bool x3; id x4; bool x5; })arg4;
+ (double)perSegmentWidthWithSegments:(id)arg1;

- (void).cxx_destruct;
- (void)segmentedControlSelectedSegmentChanged:(id)arg1;

@end
