/* Generated by RuntimeBrowser.
 */

@protocol CKTextKitTruncating <NSObject>

@required

- (id)initWithContext:(CKTextKitContext *)arg1 truncationAttributedString:(NSAttributedString *)arg2 avoidTailTruncationSet:(NSCharacterSet *)arg3 constrainedSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })truncationStringRect;
- (struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; })visibleRanges;

@end
