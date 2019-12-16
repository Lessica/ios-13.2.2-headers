/* Generated by RuntimeBrowser.
 */

@protocol NTKFaceEditViewDelegate <NSObject>

@required

- (void)editView:(NTKFaceEditView *)arg1 didScrollToFraction:(double)arg2 fromEditMode:(long long)arg3 toEditMode:(long long)arg4;
- (void)editView:(NTKFaceEditView *)arg1 didStopAtEditMode:(long long)arg2;
- (void)editView:(NTKFaceEditView *)arg1 didTapKeylineForKey:(NSString *)arg2 editMode:(long long)arg3;
- (void)editView:(NTKFaceEditView *)arg1 keylineDidBreathe:(double)arg2 forKey:(NSString *)arg3 editMode:(long long)arg4;
- (void)editView:(NTKFaceEditView *)arg1 keylineDidRubberBand:(double)arg2 forKey:(NSString *)arg3 editMode:(long long)arg4;
- (bool)editViewShouldShowPageDotsOnBottom:(NTKFaceEditView *)arg1;
- (void)editViewWillBeginScrolling:(NTKFaceEditView *)arg1;

@end
