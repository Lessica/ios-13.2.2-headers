/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarRecordImageGenerator : NSObject {
    AVTCoreModel * _coreModel;
    AVTUIEnvironment * _environment;
    AVTImageStore * _imageStore;
    <AVTUILogger> * _logger;
    AVTAvatarConfigurationImageRenderer * _renderer;
    NSArray * _scopes;
}

@property (nonatomic, readonly) AVTCoreModel *coreModel;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTImageStore *imageStore;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly, copy) NSArray *scopes;

+ (id)supportedScopesForScale:(double)arg1;

- (void).cxx_destruct;
- (id)coreModel;
- (bool)deleteThumbnailsForAvatarRecordsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)environment;
- (bool)generateThumbnailForAvatarRecordItem:(id)arg1 avatarConfiguration:(id)arg2 scope:(id)arg3 error:(id*)arg4;
- (bool)generateThumbnailsForAvatarRecord:(id)arg1 avatar:(id)arg2 error:(id*)arg3;
- (bool)generateThumbnailsForAvatarRecords:(id)arg1 error:(id*)arg2;
- (bool)generateThumbnailsForDuplicateAvatarRecord:(id)arg1 originalRecord:(id)arg2 error:(id*)arg3;
- (id)imageStore;
- (id)initWithImageStore:(id)arg1 coreEnvironment:(id)arg2;
- (id)initWithImageStore:(id)arg1 renderer:(id)arg2 environment:(id)arg3;
- (id)logger;
- (id)renderer;
- (id)scopes;
- (void)updateThumbnailsForChangesWithTracker:(id)arg1 recordProvider:(id /* block */)arg2;

@end
