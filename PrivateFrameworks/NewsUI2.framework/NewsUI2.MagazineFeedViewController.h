/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.MagazineFeedViewController : UIViewController <TSTabBarSplitViewAutoObserver, TUPluggable> {
    void alertPresenter;
    void barCompressionManager;
    void blueprintSelectionProvider;
    void blueprintViewController;
    void eventHandler;
    void heightChangeRelayoutThreshold;
    void isBeingUsedAsPlugin;
    void offlineAlertControllerFactory;
    void pluggableDelegate;
    void sharingActivityProviderFactory;
    void styler;
    void viewportFromLastRelayout;
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
- (void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
