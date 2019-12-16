/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosExtrasNavigationController : UINavigationController <IKAppNavigationController, VideosExtrasLoadingViewDelegate> {
    bool  _clearStackOnPush;
    VideosExtrasContext * _context;
    UIViewController * _emptyViewController;
    VideosExtrasLoadingView * _loadingView;
    bool  _showsBuiltInNavControls;
}

@property (nonatomic, readonly) VideosExtrasContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (nonatomic) bool showsBuiltInNavControls;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissViewController:(id)arg1;
- (void)_installBackButtonOnNavigationItem:(id)arg1 withTitle:(id)arg2;
- (void)_installDoneButtonOnNavigationItem:(id)arg1;
- (void)_popViewControllerFromBackButton;
- (void)_presentDialogTemplate:(id)arg1;
- (id)_viewControllerForDocument:(id)arg1 index:(long long*)arg2;
- (void)applyMainTemplateOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)context;
- (id)documents;
- (void)finalizeMainTemplateOffset:(bool)arg1;
- (id)initWithContext:(id)arg1;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)loadingView:(id)arg1 documentDidUpdate:(id)arg2 options:(id)arg3;
- (id)mainTemplateViewController;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)setClearsStackOnNextPush;
- (void)setShowsBuiltInNavControls:(bool)arg1;
- (void)setViewControllers:(id)arg1 animated:(bool)arg2;
- (bool)showsBuiltInNavControls;
- (void)viewDidLoad;
- (void)willShowViewController:(id)arg1 animated:(bool)arg2;

@end
