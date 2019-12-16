/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle

+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)arg1 alertContentView:(id)arg2 availableSpaceView:(id)arg3 visualStyle:(id)arg4 updatableConstraints:(id)arg5;

- (double)_spacingBetweenDismissButtonAndContent;
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(id /* block */)arg7;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForContainerView:(id)arg1;
- (bool)hideCancelAction:(id)arg1 inAlertController:(id)arg2;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (double)maximumWidth;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (long long)permittedActionLayoutDirection;
- (bool)placementAvoidsKeyboard;
- (id)titleLabelColor;
- (id)titleLabelFont;
- (double)transitionDurationForPresentation:(bool)arg1 ofAlertController:(id)arg2;
- (id)vibrancyEffectForTitleAndMessageLabel;

@end
