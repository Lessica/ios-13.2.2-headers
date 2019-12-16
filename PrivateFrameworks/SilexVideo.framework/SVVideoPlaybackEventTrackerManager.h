/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackEventTrackerManager : NSObject <SVVideoTransitionObserver> {
    <SVVideoEventTracker> * _eventTracker;
    <SVVideoPlaybackEventTracking> * _playbackEventTracker;
    <SVVideoPlaybackEventTrackerFactory> * _playbackEventTrackerFactory;
    NSMapTable * _playbackEventTrackers;
    <SVVideoEventTrackerProviding> * _videoEventTrackerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SVVideoEventTracker> *eventTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SVVideoPlaybackEventTracking> *playbackEventTracker;
@property (nonatomic, readonly) <SVVideoPlaybackEventTrackerFactory> *playbackEventTrackerFactory;
@property (nonatomic, readonly) NSMapTable *playbackEventTrackers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoEventTrackerProviding> *videoEventTrackerProvider;

- (void).cxx_destruct;
- (id)eventTracker;
- (id)initWithPlaybackEventTrackerFactory:(id)arg1 videoEventTrackerProvider:(id)arg2;
- (id)playbackEventTracker;
- (id)playbackEventTrackerFactory;
- (id)playbackEventTrackers;
- (void)setEventTracker:(id)arg1;
- (void)setPlaybackEventTracker:(id)arg1;
- (id)videoEventTrackerProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
