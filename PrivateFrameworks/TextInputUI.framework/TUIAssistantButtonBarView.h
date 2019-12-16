/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUIAssistantButtonBarView : UIView <TUIButtonBarViewProvider> {
    <_UIButtonBarAppearanceDelegate> * _appearanceDelegate;
    long long  _buttonAlignment;
    UIView * _buttonContainer;
    NSArray * _buttonGroups;
    bool  _constrainedHorizontally;
    <TUIAssistantButtonBarViewDelegate> * _delegate;
    double  _effectiveInterItemSpacing;
    NSMutableOrderedSet * _groupViews;
    double  _horizontalMargins;
    double  _minimumInterGroupSpace;
    double  _minimumInterItemSpace;
    _UIButtonBarButtonVisualProvider * _visualProvider;
}

@property (nonatomic) <_UIButtonBarAppearanceDelegate> *appearanceDelegate;
@property (nonatomic) long long buttonAlignment;
@property (nonatomic, retain) UIView *buttonContainer;
@property (nonatomic, retain) NSArray *buttonGroups;
@property (nonatomic) bool constrainedHorizontally;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUIAssistantButtonBarViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double effectiveInterItemSpacing;
@property (nonatomic, retain) NSMutableOrderedSet *groupViews;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalMargins;
@property (nonatomic) double minimumInterGroupSpace;
@property (nonatomic) double minimumInterItemSpace;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIButtonBarButtonVisualProvider *visualProvider;

- (void).cxx_destruct;
- (id)_allVisibleBarItemViews;
- (void)_collapseGroupsIfNecessaryForWidth:(double)arg1;
- (bool)_containsFlexibleGroupViews;
- (void)_didTapButtonBarButton:(id)arg1 withEvent:(id)arg2;
- (id)_groupViewForBarButtonItemGroup:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForHorizontalMargin;
- (double)_interItemSpacingThatFits:(struct CGSize { double x1; double x2; })arg1 forGroupSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_itemViewForSender:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredTitleSizeForBarButtonItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_totalGroupSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_uncollapseAllGroupsForNewSizeIfNecessary:(struct CGSize { double x1; double x2; })arg1;
- (id)_uncollapsedGroupViews;
- (void)_updateBarButtonItemHiddenState;
- (id)_visibleGroupViews;
- (id)_visibleGroups;
- (id)appearanceDelegate;
- (long long)buttonAlignment;
- (id)buttonContainer;
- (id)buttonGroups;
- (void)configureButtonBarItemView:(id)arg1 forItem:(id)arg2 group:(id)arg3;
- (bool)constrainedHorizontally;
- (id)delegate;
- (double)effectiveInterItemSpacing;
- (id)groupViews;
- (double)horizontalMargins;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)minimumInterGroupSpace;
- (double)minimumInterItemSpace;
- (void)preferredSizeDidChangeForButtonBarItem:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredSizeForButtonBarItem:(id)arg1;
- (void)setAppearanceDelegate:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButtonAlignment:(long long)arg1;
- (void)setButtonContainer:(id)arg1;
- (void)setButtonGroups:(id)arg1;
- (void)setConstrainedHorizontally:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectiveInterItemSpacing:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGroupViews:(id)arg1;
- (void)setHorizontalMargins:(double)arg1;
- (void)setMinimumInterGroupSpace:(double)arg1;
- (void)setMinimumInterItemSpace:(double)arg1;
- (void)setVisualProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)validateButtonGroups;
- (id)visualProvider;

@end
