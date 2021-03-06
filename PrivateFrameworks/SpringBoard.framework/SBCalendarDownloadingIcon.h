/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBCalendarDownloadingIcon : SBDownloadingIcon <SBCalendarIconImageProviderDelegate> {
    SBCalendarIconImageProvider * _imageProvider;
}

@property (nonatomic, readonly) SBCalendarIconImageProvider *imageProvider;

+ (bool)canGenerateIconsInBackground;

- (void).cxx_destruct;
- (void)calendarIconImageProviderHasChanged:(id)arg1;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)imageProvider;
- (id)initWithDownloadingIconDataSource:(id)arg1;
- (void)localeChanged;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;

@end
