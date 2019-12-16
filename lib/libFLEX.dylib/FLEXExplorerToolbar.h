/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXExplorerToolbar : UIView {
    UIView * _backgroundView;
    FLEXToolbarItem * _closeItem;
    UIView * _dragHandle;
    UIImageView * _dragHandleImageView;
    FLEXToolbarItem * _globalsItem;
    FLEXToolbarItem * _hierarchyItem;
    FLEXToolbarItem * _moveItem;
    FLEXToolbarItem * _selectItem;
    UIView * _selectedViewColorIndicator;
    NSString * _selectedViewDescription;
    UIView * _selectedViewDescriptionContainer;
    UILabel * _selectedViewDescriptionLabel;
    UIView * _selectedViewDescriptionSafeAreaContainer;
    UIColor * _selectedViewOverlayColor;
    NSArray * _toolbarItems;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) FLEXToolbarItem *closeItem;
@property (nonatomic, retain) UIView *dragHandle;
@property (nonatomic, retain) UIImageView *dragHandleImageView;
@property (nonatomic, retain) FLEXToolbarItem *globalsItem;
@property (nonatomic, retain) FLEXToolbarItem *hierarchyItem;
@property (nonatomic, retain) FLEXToolbarItem *moveItem;
@property (nonatomic, retain) FLEXToolbarItem *selectItem;
@property (nonatomic, retain) UIView *selectedViewColorIndicator;
@property (nonatomic, copy) NSString *selectedViewDescription;
@property (nonatomic, retain) UIView *selectedViewDescriptionContainer;
@property (nonatomic, retain) UILabel *selectedViewDescriptionLabel;
@property (nonatomic, retain) UIView *selectedViewDescriptionSafeAreaContainer;
@property (nonatomic, retain) UIColor *selectedViewOverlayColor;
@property (nonatomic, copy) NSArray *toolbarItems;

+ (double)descriptionContainerHeight;
+ (id)descriptionLabelFont;
+ (double)descriptionLabelHeight;
+ (double)descriptionVerticalPadding;
+ (double)dragHandleWidth;
+ (double)horizontalPadding;
+ (double)selectedViewColorIndicatorDiameter;
+ (double)toolbarItemHeight;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)closeItem;
- (id)dragHandle;
- (id)dragHandleImageView;
- (id)globalsItem;
- (id)hierarchyItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)moveItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeArea;
- (id)selectItem;
- (id)selectedViewColorIndicator;
- (id)selectedViewDescription;
- (id)selectedViewDescriptionContainer;
- (id)selectedViewDescriptionLabel;
- (id)selectedViewDescriptionSafeAreaContainer;
- (id)selectedViewOverlayColor;
- (void)setBackgroundView:(id)arg1;
- (void)setCloseItem:(id)arg1;
- (void)setDragHandle:(id)arg1;
- (void)setDragHandleImageView:(id)arg1;
- (void)setGlobalsItem:(id)arg1;
- (void)setHierarchyItem:(id)arg1;
- (void)setMoveItem:(id)arg1;
- (void)setSelectItem:(id)arg1;
- (void)setSelectedViewColorIndicator:(id)arg1;
- (void)setSelectedViewDescription:(id)arg1;
- (void)setSelectedViewDescriptionContainer:(id)arg1;
- (void)setSelectedViewDescriptionLabel:(id)arg1;
- (void)setSelectedViewDescriptionSafeAreaContainer:(id)arg1;
- (void)setSelectedViewOverlayColor:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)toolbarItems;

@end
