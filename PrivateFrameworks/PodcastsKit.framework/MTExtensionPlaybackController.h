/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
 */

@interface MTExtensionPlaybackController : NSObject {
    NSMutableArray * _magicMomentCompletionHandlers;
}

@property (nonatomic, retain) NSMutableArray *magicMomentCompletionHandlers;

+ (void)_setPlaybackQueueWithIdentifier:(id)arg1 playerID:(id)arg2 mrCompletion:(id /* block */)arg3;
+ (void)getNowPlayingInfoForMagicMomentInfoCenterWithCompletion:(id /* block */)arg1;
+ (void)startPlaybackWithPlaybackRequestIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)startPlaybackWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_getNowPlayingInfoAndCallPendingCompletions;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (id)init;
- (id)magicMomentCompletionHandlers;
- (void)populateMagicMomentInfoCenterWithPlaybackRequestIdentifier:(id)arg1 mrCompletion:(id /* block */)arg2;
- (void)setMagicMomentCompletionHandlers:(id)arg1;

@end
