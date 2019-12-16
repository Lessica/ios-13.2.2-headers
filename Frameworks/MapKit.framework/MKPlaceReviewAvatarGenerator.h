/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceReviewAvatarGenerator : NSObject {
    NSMutableDictionary * _cachedMaskedImages;
    CNAvatarImageRenderer * _monogrammer;
    <MKInfoCardTheme> * _theme;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) CNAvatarImageRenderer *monogrammer;
@property (nonatomic) <MKInfoCardTheme> *theme;

- (void).cxx_destruct;
- (void)avatarForReview:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)monogramForReviewerName:(id)arg1 completion:(id /* block */)arg2;
- (id)monogrammer;
- (void)setMonogrammer:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;

@end
