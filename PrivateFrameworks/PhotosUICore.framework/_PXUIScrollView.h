/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXUIScrollView : UIScrollView {
    bool  _deferContentOffsetUpdates;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pagingOriginOffset;
    <PXUIScrollViewDelegate> * _px_delegate;
}

@property (nonatomic) bool deferContentOffsetUpdates;
@property (nonatomic) struct CGPoint { double x1; double x2; } pagingOriginOffset;
@property (setter=px_setDelegate:, nonatomic) <PXUIScrollViewDelegate> *px_delegate;

- (void).cxx_destruct;
- (void)_updatePagingOrigin;
- (bool)deferContentOffsetUpdates;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })pagingOriginOffset;
- (void)px_addSubview:(id)arg1;
- (id)px_delegate;
- (void)px_setDelegate:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setDeferContentOffsetUpdates:(bool)arg1;
- (void)setPagingOriginOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
