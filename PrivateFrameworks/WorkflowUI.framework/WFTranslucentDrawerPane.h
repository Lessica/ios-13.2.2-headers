/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface WFTranslucentDrawerPane : UIViewController <WFDrawerPane, WFDrawerPaneHeaderViewDelegate> {
    UIView<WFDrawerPaneHeaderView> * _activeHeaderView;
    UIView * _backgroundContentView;
    UIView * _backgroundView;
    double  _bottomContentInset;
    bool  _candidateForContentCapture;
    WFDrawerPaneContainer * _container;
    UIView * _contentView;
    NSString * _drawerGroup;
    WFDrawerGrabberView * _grabberView;
    bool  _roundsTopCorners;
    UISearchBar * _searchBar;
    UIView * _shadowView;
    NSString * _title;
    UIView * _titleView;
    double  _topCornerRadius;
    bool  _translucent;
    bool  _usesVisualEffectView;
    UIViewController * _viewController;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) UIView<WFDrawerPaneHeaderView> *activeHeaderView;
@property (nonatomic) UIView *backgroundContentView;
@property (nonatomic) UIView *backgroundView;
@property (nonatomic) double bottomContentInset;
@property (getter=isCandidateForContentCapture, nonatomic) bool candidateForContentCapture;
@property (nonatomic) WFDrawerPaneContainer *container;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *drawerGroup;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } grabberAreaBounds;
@property (nonatomic) WFDrawerGrabberView *grabberView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool roundsTopCorners;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic) UIView *shadowView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic) double topCornerRadius;
@property (getter=isTranslucent, nonatomic) bool translucent;
@property (nonatomic) bool usesVisualEffectView;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (bool)accessibilityPerformEscape;
- (id)activeHeaderView;
- (id)backgroundContentView;
- (id)backgroundView;
- (double)bottomContentInset;
- (id)container;
- (id)contentView;
- (void)didDismissHeaderView:(id)arg1;
- (id)drawerGroup;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })grabberAreaBounds;
- (id)grabberView;
- (id)initWithViewController:(id)arg1;
- (void)installChildViewController:(id)arg1;
- (bool)isCandidateForContentCapture;
- (bool)isTranslucent;
- (void)loadView;
- (bool)roundsTopCorners;
- (id)searchBar;
- (void)setActiveHeaderView:(id)arg1;
- (void)setBackgroundContentView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomContentInset:(double)arg1;
- (void)setCandidateForContentCapture:(bool)arg1;
- (void)setContainer:(id)arg1;
- (void)setDrawerGroup:(id)arg1;
- (void)setGrabberView:(id)arg1;
- (void)setRoundsTopCorners:(bool)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTopCornerRadius:(double)arg1;
- (void)setTranslucent:(bool)arg1;
- (void)setUsesVisualEffectView:(bool)arg1;
- (void)setViewController:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (id)shadowView;
- (id)title;
- (id)titleView;
- (double)topCornerRadius;
- (void)transitionContentForHeight:(double)arg1;
- (void)updateHeaderView;
- (void)updatePaneProperties;
- (bool)usesVisualEffectView;
- (id)viewController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)visualEffectView;
- (id)wf_drawerController;
- (id)wf_drawerItem;
- (void)wf_setDrawerController:(id)arg1;
- (void)wf_setDrawerItem:(id)arg1;
- (void)willTransitionToVisibility:(unsigned long long)arg1;

@end
