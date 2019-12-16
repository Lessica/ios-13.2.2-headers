/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTCollapsibleHeaderController : NSObject <UIScrollViewDelegate> {
    double  _additionalTopContentInset;
    double  _collapseMarginalScrollDistance;
    unsigned long long  _currentScrollDirection;
    <AVTCollapsibleHeaderControllerDelegate> * _delegate;
    double  _expandMarginalScrollDistance;
    UIView * _headerView;
    double  _maxHeight;
    double  _minHeight;
    double  _previousOffset;
    double  _scrollToCompressionMultiplier;
    UIScrollView * _scrollView;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    bool  _shouldCollapseOnBottomBounceScroll;
    bool  _shouldOnlyExpandWhenScrollingAtEdge;
    bool  _shouldPushContentOffsetOnExpandOrCollapse;
    bool  _shouldResizeHeaderForScrolling;
    bool  _shouldSnapToMinOrMax;
    double  _singleTouchOffset;
}

@property (nonatomic) double additionalTopContentInset;
@property (nonatomic) double collapseMarginalScrollDistance;
@property (nonatomic, readonly) double currentHeightForHeader;
@property (nonatomic) unsigned long long currentScrollDirection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTCollapsibleHeaderControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expandMarginalScrollDistance;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic) double maxHeight;
@property (nonatomic) double minHeight;
@property (nonatomic) double previousOffset;
@property (nonatomic) double scrollToCompressionMultiplier;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (nonatomic) bool shouldCollapseOnBottomBounceScroll;
@property (nonatomic) bool shouldOnlyExpandWhenScrollingAtEdge;
@property (nonatomic) bool shouldPushContentOffsetOnExpandOrCollapse;
@property (nonatomic) bool shouldResizeHeaderForScrolling;
@property (nonatomic) bool shouldSnapToMinOrMax;
@property (nonatomic) double singleTouchOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)additionalTopContentInset;
- (void)collapseAnimated:(bool)arg1;
- (double)collapseMarginalScrollDistance;
- (double)currentHeightForHeader;
- (unsigned long long)currentScrollDirection;
- (id)delegate;
- (void)expandAnimated:(bool)arg1;
- (void)expandAnimated:(bool)arg1 withFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)expandMarginalScrollDistance;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (double)headerHeightForContentOffset:(double)arg1 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)headerView;
- (id)initWithScrollView:(id)arg1 headerView:(id)arg2 minHeight:(double)arg3 maxHeight:(double)arg4;
- (double)maxHeight;
- (id)methodSignatureForSelector:(SEL)arg1;
- (double)minHeight;
- (double)previousOffset;
- (bool)respondsToSelector:(SEL)arg1;
- (double)scrollToCompressionMultiplier;
- (void)scrollToTopAnimated:(bool)arg1;
- (void)scrollToTopPreservingHeaderHeight:(bool)arg1 animated:(bool)arg2;
- (id)scrollView;
- (id)scrollViewDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAdditionalTopContentInset:(double)arg1;
- (void)setCollapseMarginalScrollDistance:(double)arg1;
- (void)setCurrentScrollDirection:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpandMarginalScrollDistance:(double)arg1;
- (void)setMaxHeight:(double)arg1;
- (void)setMinHeight:(double)arg1;
- (void)setPreviousOffset:(double)arg1;
- (void)setScrollToCompressionMultiplier:(double)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setShouldCollapseOnBottomBounceScroll:(bool)arg1;
- (void)setShouldOnlyExpandWhenScrollingAtEdge:(bool)arg1;
- (void)setShouldPushContentOffsetOnExpandOrCollapse:(bool)arg1;
- (void)setShouldResizeHeaderForScrolling:(bool)arg1;
- (void)setShouldSnapToMinOrMax:(bool)arg1;
- (void)setSingleTouchOffset:(double)arg1;
- (bool)shouldCollapseOnBottomBounceScroll;
- (bool)shouldOnlyExpandWhenScrollingAtEdge;
- (bool)shouldPushContentOffsetOnExpandOrCollapse;
- (bool)shouldResizeGivenMarginalScrollDistancesForScrollDirection:(unsigned long long)arg1;
- (bool)shouldResizeGivenScrollDirection:(unsigned long long)arg1 currentHeaderHeight:(double)arg2 targetHeaderHeight:(double)arg3;
- (bool)shouldResizeHeaderForScrolling;
- (bool)shouldSnapToMinOrMax;
- (double)singleTouchOffset;
- (void)snapToMinMaxIfNeededAnimated:(bool)arg1;
- (struct CGPoint { double x1; double x2; })topContentOffsetWithHeaderHeight:(double)arg1;
- (void)updateHeaderForHeight:(double)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)updateHeaderHeightToMatchScrollViewStateForScrollDirection:(unsigned long long)arg1 animated:(bool)arg2;
- (void)updateHeaderSizeForGlobalHeaderHeight:(double)arg1;
- (void)updateInsetsIfNeeded;
- (void)updateMinHeight:(double)arg1 maxHeight:(double)arg2 animated:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })updatedScrollViewInsetsFromExistingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
