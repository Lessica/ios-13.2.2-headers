/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

@interface TUICandidateArrowButton : UIButton {
    long long  _arrowDirection;
    NSString * _arrowImageName;
    TUICandidateBackdropView * _backdropView;
    UIView * _backgroundView;
    UIView * _contentView;
    UIView * _highlightBackgroundView;
    bool  _showsBackground;
    <TUICandidateViewStyle> * _style;
}

@property (nonatomic) long long arrowDirection;
@property (nonatomic, copy) NSString *arrowImageName;
@property (nonatomic, retain) TUICandidateBackdropView *backdropView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) UIView *highlightBackgroundView;
@property (nonatomic) bool showsBackground;
@property (nonatomic, retain) <TUICandidateViewStyle> *style;

- (void).cxx_destruct;
- (long long)arrowDirection;
- (id)arrowImageName;
- (id)backdropView;
- (id)backgroundView;
- (void)commonInit;
- (id)contentView;
- (id)highlightBackgroundView;
- (double)imageViewAlpha;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)rotatedImageForImage:(id)arg1 scale:(double)arg2;
- (void)setArrowDirection:(long long)arg1;
- (void)setArrowImageName:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setHighlightBackgroundView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setShowsBackground:(bool)arg1;
- (void)setStyle:(id)arg1;
- (bool)showsBackground;
- (id)style;
- (void)udpateBackgroundColor;
- (void)updateStyle;

@end
