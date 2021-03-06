/* Generated by RuntimeBrowser.
 */

@protocol PXGMutableAccessibilityContentInfo <NSObject>

@required

- (<PXDisplayAsset> *)asset;
- (long long)contentKind;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (NSString *)imageName;
- (void)px_accessibilityAddChildElement:(PXGReusableAccessibilityContentInfo *)arg1;
- (void)px_accessibilityRemoveAllChildren;
- (bool)selected;
- (NSArray *)selectedContent;
- (void)setAsset:(id <PXDisplayAsset>)arg1;
- (void)setContentKind:(long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageName:(NSString *)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedContent:(NSArray *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setText:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setView:(NSObject<PXAccessibilityView> *)arg1;
- (void)setVisible:(bool)arg1;
- (NSString *)subtitle;
- (NSString *)text;
- (NSString *)title;
- (NSObject<PXAccessibilityView> *)view;
- (bool)visible;

@end
