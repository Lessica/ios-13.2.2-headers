/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

@interface CEKDiscreteSlider : UIControl <CEKAbstractSlider, CEKSliderTickMarksDelegate, UIScrollViewDelegate> {
    CEKAnimationGenerator * __animationGenerator;
    UIScrollView * __contentScrollView;
    CEKSliderDotView * __dotView;
    CEKEdgeGradientView * __edgeGradientView;
    CEKSelectionFeedbackGenerator * __feedbackGenerator;
    UIView * __indicatorBackground;
    UIView * __levelIndicatorView;
    bool  __needsUpdateContentOffset;
    bool  __overscrolling;
    CEKSliderTickMarksView * __tickMarksView;
    UIImageView * __titleBackground;
    UILabel * __titleLabel;
    UIImageView * __valueBackground;
    UILabel * __valueLabel;
    unsigned long long  _colorHighlight;
    unsigned long long  _fontStyle;
    struct { 
        double startInset; 
        double endInset; 
    }  _gradientInsets;
    unsigned long long  _indexCount;
    double  _labelVerticalPadding;
    unsigned long long  _markedIndex;
    unsigned long long  _selectedIndex;
    long long  _sliderVerticalAlignment;
    double  _sliderVerticalOffset;
    long long  _textOrientation;
    unsigned long long  _tickMarkCountBetweenIndexes;
    double  _tickMarksHeight;
    long long  _titleAlignment;
    NSString * _titleText;
    bool  _useTextLegibilityShadows;
}

@property (setter=_setAnimationGenerator:, nonatomic, retain) CEKAnimationGenerator *_animationGenerator;
@property (nonatomic, readonly) UIScrollView *_contentScrollView;
@property (nonatomic, retain) CEKSliderDotView *_dotView;
@property (nonatomic, retain) CEKEdgeGradientView *_edgeGradientView;
@property (nonatomic, readonly) CEKSelectionFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, retain) UIView *_indicatorBackground;
@property (nonatomic, readonly) UIView *_levelIndicatorView;
@property (setter=_setNeedsUpdateContentOffset:, nonatomic) bool _needsUpdateContentOffset;
@property (getter=_isOverscrolling, setter=_setOverscrolling:, nonatomic) bool _overscrolling;
@property (getter=_isScrollActive, nonatomic, readonly) bool _scrollActive;
@property (nonatomic, readonly) bool _shouldUseHighlightColor;
@property (nonatomic, readonly) CEKSliderTickMarksView *_tickMarksView;
@property (nonatomic, retain) UIImageView *_titleBackground;
@property (nonatomic, retain) UILabel *_titleLabel;
@property (nonatomic, retain) UIImageView *_valueBackground;
@property (nonatomic, retain) UILabel *_valueLabel;
@property (nonatomic) unsigned long long colorHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long fontStyle;
@property (nonatomic, retain) UIColor *gradientColor;
@property (nonatomic) struct { double x1; double x2; } gradientInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexCount;
@property (nonatomic) double labelVerticalPadding;
@property (nonatomic) unsigned long long markedIndex;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) long long sliderVerticalAlignment;
@property (nonatomic) double sliderVerticalOffset;
@property (readonly) Class superclass;
@property (nonatomic) long long textOrientation;
@property (nonatomic) unsigned long long tickMarkCountBetweenIndexes;
@property (nonatomic, readonly) <CEKTickMarksConfiguration> *tickMarksConfiguration;
@property (nonatomic) double tickMarksHeight;
@property (nonatomic) long long titleAlignment;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) bool useLegibilityBackgrounds;
@property (nonatomic) bool useLegibilityShadows;
@property (nonatomic) bool useTextLegibilityShadows;
@property (nonatomic) bool useTickMarkLegibilityShadows;

- (void).cxx_destruct;
- (id)_animationGenerator;
- (unsigned long long)_biasedIndexForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_contentOffsetForIndex:(unsigned long long)arg1;
- (id)_contentScrollView;
- (void)_createGradientIfNeeded;
- (id)_createLegibilityImage;
- (id)_dotView;
- (id)_edgeGradientView;
- (id)_feedbackGenerator;
- (id)_indicatorBackground;
- (double)_interpolatedIndexForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isOverscrolling;
- (bool)_isScrollActive;
- (void)_layoutSliderContentAtY:(double)arg1 withHorizontalPadding:(double)arg2;
- (void)_layoutSubviewsWithLabelRotation:(double)arg1;
- (void)_layoutSubviewsWithNoRotation;
- (id)_levelIndicatorView;
- (unsigned long long)_nearestIndexForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_needsUpdateContentOffset;
- (void)_setAnimationGenerator:(id)arg1;
- (void)_setNeedsUpdateContentOffset:(bool)arg1;
- (void)_setOverscrolling:(bool)arg1;
- (void)_setSelectedIndex:(unsigned long long)arg1 shouldDelegate:(bool)arg2 shouldEmitFeedback:(bool)arg3 shouldScroll:(bool)arg4 scrollDuration:(double)arg5 scrollCurve:(id)arg6 scrollCompletion:(id /* block */)arg7;
- (bool)_shouldUseHighlightColor;
- (unsigned long long)_tickMarkIndexForIndex:(unsigned long long)arg1;
- (id)_tickMarksView;
- (id)_titleBackground;
- (id)_titleLabel;
- (void)_updateAppearanceForActiveScrolling;
- (void)_updateColorsAnimated:(bool)arg1;
- (void)_updateFonts;
- (void)_updateMarkedIndexViewAnimated:(bool)arg1;
- (void)_updateScrollViewContentOffset;
- (void)_updateTextLegibilityBackground;
- (id)_valueBackground;
- (id)_valueLabel;
- (unsigned long long)colorHighlight;
- (unsigned long long)fontStyle;
- (id)gradientColor;
- (struct { double x1; double x2; })gradientInsets;
- (double)horizontalValueLabelOffset;
- (unsigned long long)indexCount;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)labelVerticalPadding;
- (void)layoutSubviews;
- (unsigned long long)markedIndex;
- (void)removeGradients;
- (void)removeMarkedIndex;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (unsigned long long)selectedIndex;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColorHighlight:(unsigned long long)arg1;
- (void)setColorHighlight:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setFontStyle:(unsigned long long)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientColor:(id)arg1;
- (void)setGradientInsets:(struct { double x1; double x2; })arg1;
- (void)setIndexCount:(unsigned long long)arg1;
- (void)setLabelVerticalPadding:(double)arg1;
- (void)setMarkedIndex:(unsigned long long)arg1;
- (void)setMarkedIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setOpaqueGradientsWithColor:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1 animatedDuration:(double)arg2 animatedCurve:(id)arg3 completion:(id /* block */)arg4;
- (void)setSliderVerticalAlignment:(long long)arg1;
- (void)setSliderVerticalOffset:(double)arg1;
- (void)setTextOrientation:(long long)arg1;
- (void)setTextOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTickMarkCountBetweenIndexes:(unsigned long long)arg1;
- (void)setTickMarksHeight:(double)arg1;
- (void)setTickMarksHeight:(double)arg1 animated:(bool)arg2;
- (void)setTitleAlignment:(long long)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTransparentGradients;
- (void)setUseLegibilityBackgrounds:(bool)arg1;
- (void)setUseLegibilityShadows:(bool)arg1;
- (void)setUseTextLegibilityShadows:(bool)arg1;
- (void)setUseTickMarkLegibilityShadows:(bool)arg1;
- (void)set_dotView:(id)arg1;
- (void)set_edgeGradientView:(id)arg1;
- (void)set_indicatorBackground:(id)arg1;
- (void)set_titleBackground:(id)arg1;
- (void)set_titleLabel:(id)arg1;
- (void)set_valueBackground:(id)arg1;
- (void)set_valueLabel:(id)arg1;
- (long long)sliderVerticalAlignment;
- (double)sliderVerticalOffset;
- (long long)textOrientation;
- (unsigned long long)tickMarkCountBetweenIndexes;
- (id)tickMarksConfiguration;
- (double)tickMarksHeight;
- (void)tickMarksViewDidChangeWidthForTickMarkCount:(id)arg1;
- (long long)titleAlignment;
- (id)titleText;
- (void)updateValueLabel;
- (bool)useLegibilityBackgrounds;
- (bool)useLegibilityShadows;
- (bool)useTextLegibilityShadows;
- (bool)useTickMarkLegibilityShadows;
- (id)valueText;

@end
