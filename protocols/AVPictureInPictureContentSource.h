/* Generated by RuntimeBrowser.
 */

@protocol AVPictureInPictureContentSource <NSObject>

@required

- (bool)avkit_isVisible;
- (AVPlayerController *)avkit_makePlayerControllerIfNeeded:(AVPlayerController *)arg1;
- (AVPictureInPictureViewController *)avkit_pictureInPictureViewController;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(AVPictureInPictureViewController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avkit_videoRectInWindow;
- (UIWindow *)avkit_window;

@end
