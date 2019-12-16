/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXImagePreviewViewController : UIViewController <UIScrollViewDelegate> {
    UIImage * _image;
    UIImageView * _imageView;
    UIScrollView * _scrollView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionButtonPressed:(id)arg1;
- (void)centerContentInScrollViewIfNeeded;
- (id)image;
- (id)imageView;
- (id)initWithImage:(id)arg1;
- (id)scrollView;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;

@end