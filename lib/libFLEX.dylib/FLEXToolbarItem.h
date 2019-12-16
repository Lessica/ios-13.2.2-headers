/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXToolbarItem : UIButton {
    UIImage * _image;
    NSString * _title;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *title;

+ (id)_selectedIndicatorImage;
+ (id)defaultBackgroundColor;
+ (id)highlightedBackgroundColor;
+ (id)selectedBackgroundColor;
+ (id)titleAttributes;
+ (id)toolbarItemWithTitle:(id)arg1 image:(id)arg2;
+ (double)topMargin;

- (void).cxx_destruct;
- (id)image;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateColors;

@end
