/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPersonItem : NSObject {
    UIImage * _faceImage;
    id /* block */  _faceImageLoadingCompletionBlock;
    int  _faceImageRequestID;
    id /* block */  _fastDisplayBlock;
    PHPerson * _modelObject;
}

@property UIImage *faceImage;
@property (copy) id /* block */ faceImageLoadingCompletionBlock;
@property int faceImageRequestID;
@property (copy) id /* block */ fastDisplayBlock;
@property (nonatomic, retain) PHPerson *modelObject;

- (void).cxx_destruct;
- (id)faceImage;
- (id /* block */)faceImageLoadingCompletionBlock;
- (int)faceImageRequestID;
- (id /* block */)fastDisplayBlock;
- (id)initWithPerson:(id)arg1;
- (id)modelObject;
- (void)setFaceImage:(id)arg1;
- (void)setFaceImageLoadingCompletionBlock:(id /* block */)arg1;
- (void)setFaceImageRequestID:(int)arg1;
- (void)setFastDisplayBlock:(id /* block */)arg1;
- (void)setModelObject:(id)arg1;
- (void)updateWithModel:(id)arg1;

@end
