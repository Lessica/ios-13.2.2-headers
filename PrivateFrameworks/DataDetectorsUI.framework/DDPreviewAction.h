/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDPreviewAction : DDAction

+ (id)previewActionForURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 32; unsigned int x_1_2_2 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2 context:(id)arg3;

- (id)commitURL;
- (id)createViewController;
- (void)dealloc;
- (id)expandViewController;
- (id)menuActionClasses;
- (id)menuActions;
- (id)platterSubtitle;
- (id)platterTitle;
- (bool)prefersActionMenuStyle;
- (bool)requiresEmbeddingNavigationController;
- (void)setPreviewMode:(bool)arg1;
- (bool)showMenuTitle;
- (struct CGSize { double x1; double x2; })suggestedContentSize;
- (id)viewController;
- (bool)wantsCustomViewControllerCommit;
- (bool)wantsSeamlessCommit;

@end
