/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.MagazineFeedPaywallViewController : UIViewController <TUPluggable> {
    void $__lazy_storage_$_spinnerViewController;
    void assetManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  config;
    void eventHandler;
    void imageCache;
    void isBeingUsedAsPlugin;
    void layoutAttributesFactory;
    void layoutOptionsProvider;
    void paywallView;
    void pluggableDelegate;
    void purchasePresenter;
    void purchasingSpinnerViewControllerFactory;
    void renderToken;
    void renderer;
    void styler;
}

@property (nonatomic) bool isBeingUsedAsPlugin;
@property (nonatomic) <TUPluggableDelegate> *pluggableDelegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)initializeWithCompletion:(id /* block */)arg1;
- (bool)isBeingUsedAsPlugin;
- (id)pluggableDelegate;
- (void)relayoutWithCompletion:(id /* block */)arg1;
- (void)setIsBeingUsedAsPlugin:(bool)arg1;
- (void)setPluggableDelegate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
