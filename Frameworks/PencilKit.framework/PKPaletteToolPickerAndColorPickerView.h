/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKPaletteToolPickerAndColorPickerView : UIView <PKEdgeLocatable, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteViewStateObserving> {
    PKPaletteColorPickerView * _colorPickerView;
    NSLayoutConstraint * _compactToolPickerContainerViewWidthConstraint;
    long long  _contextEditingMode;
    unsigned long long  _edgeLocation;
    <PKPaletteViewStateObservable> * _paletteViewState;
    double  _scalingFactor;
    UIStackView * _stackView;
    PKPaletteToolPickerContainerView * _toolPickerContainerView;
    NSLayoutConstraint * _toolPickerContainerViewHeightConstraint;
    NSLayoutConstraint * _toolPickerContainerViewWidthConstraint;
}

@property (nonatomic, readonly) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic, retain) NSLayoutConstraint *compactToolPickerContainerViewWidthConstraint;
@property (nonatomic) long long contextEditingMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKPaletteViewStateObservable> *paletteViewState;
@property (nonatomic) double scalingFactor;
@property (nonatomic, retain) UIStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPaletteToolPickerContainerView *toolPickerContainerView;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerContainerViewHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolPickerContainerViewWidthConstraint;
@property (nonatomic, readonly) PKPaletteToolPickerView *toolPickerView;

- (void).cxx_destruct;
- (void)_updateUI;
- (id)colorPickerView;
- (id)compactToolPickerContainerViewWidthConstraint;
- (long long)contextEditingMode;
- (void)didChangeAnnotationSupport:(id)arg1;
- (void)dismissPalettePopoverWithCompletion:(id /* block */)arg1;
- (unsigned long long)edgeLocation;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithPaletteViewStateObservable:(id)arg1;
- (id)paletteViewState;
- (double)scalingFactor;
- (void)setCompactToolPickerContainerViewWidthConstraint:(id)arg1;
- (void)setContextEditingMode:(long long)arg1;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setPaletteViewState:(id)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setStackView:(id)arg1;
- (void)setToolPickerContainerView:(id)arg1;
- (void)setToolPickerContainerViewHeightConstraint:(id)arg1;
- (void)setToolPickerContainerViewWidthConstraint:(id)arg1;
- (id)stackView;
- (id)toolPickerContainerView;
- (id)toolPickerContainerViewHeightConstraint;
- (id)toolPickerContainerViewWidthConstraint;
- (id)toolPickerView;
- (void)traitCollectionDidChange:(id)arg1;

@end
