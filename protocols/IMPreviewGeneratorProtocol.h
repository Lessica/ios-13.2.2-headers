/* Generated by RuntimeBrowser.
 */

@protocol IMPreviewGeneratorProtocol

@required

+ (NSURL *)generateAndPersistPreviewFromSourceURL:(NSURL *)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 outSize:(struct CGSize { double x1; double x2; }*)arg3 error:(id*)arg4;
+ (double)maxUpScale;
+ (struct CGImage { }*)newPreviewFromSourceURL:(NSURL *)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 error:(id*)arg3;
+ (NSString *)previewExtension;
+ (bool)shouldScaleUpPreview;
+ (bool)shouldShadePreview;
+ (struct CGSize { double x1; double x2; })sizePreviewAtSourceURL:(NSURL *)arg1 withPreviewConstraints:(struct IMPreviewConstraints { double x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; bool x4; })arg2 error:(id*)arg3;
+ (bool)writesToDisk;

@end
