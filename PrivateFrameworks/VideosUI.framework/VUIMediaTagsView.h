/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMediaTagsView : UIView <VUILabelTopMarginCalculationProtocol, VUIRentalExpirationLabelDelegate> {
    UIImage * _commonSenseDarkImage;
    UIImage * _commonSenseLightImage;
    NSArray * _groupedSubviews;
    VUIMediaTagsViewLayout * _layout;
    double  _totalSubviewsWidth;
    NSDictionary * _viewsMap;
}

@property (nonatomic, retain) UIImage *commonSenseDarkImage;
@property (nonatomic, retain) UIImage *commonSenseLightImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *groupedSubviews;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VUIMediaTagsViewLayout *layout;
@property (readonly) Class superclass;
@property (nonatomic) double totalSubviewsWidth;
@property (nonatomic, copy) NSDictionary *viewsMap;

+ (id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 element:(id)arg3 existingView:(id)arg4;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutSubviewsForSize:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (id)_newImageViewAsSubview;
- (id)_newLabelAsSubview:(id)arg1;
- (id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2;
- (void)_removeGenreLabelAndSeparator;
- (void)_removeSeparatorsFromGroupsIfNeeded:(bool)arg1;
- (bool)_shouldPutTextOnSeparateLines;
- (double)_totalSubviewsWidth;
- (void)_updateAppearance;
- (double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (id)commonSenseDarkImage;
- (id)commonSenseLightImage;
- (id)groupedSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layout:(id)arg2;
- (id)layout;
- (void)layoutSubviews;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (void)setCommonSenseDarkImage:(id)arg1;
- (void)setCommonSenseLightImage:(id)arg1;
- (void)setGroupedSubviews:(id)arg1;
- (void)setTotalSubviewsWidth:(double)arg1;
- (void)setViewsMap:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (double)totalSubviewsWidth;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithMetadata:(id)arg1;
- (id)viewsMap;

@end
