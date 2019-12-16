/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVZoomableTextView : TVFocusableTextView {
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSizeThatFits;
    double  _maxHeight;
    double  _maxWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousTargetSize;
    IKViewElement * _viewElement;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cachedSizeThatFits;
@property (nonatomic) struct CGSize { double x1; double x2; } previousTargetSize;
@property (nonatomic, retain) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)_clearCachedValues;
- (struct CGSize { double x1; double x2; })cachedSizeThatFits;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })previousTargetSize;
- (void)setCachedSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviousTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateWithViewElement:(id)arg1;
- (id)viewElement;

@end
