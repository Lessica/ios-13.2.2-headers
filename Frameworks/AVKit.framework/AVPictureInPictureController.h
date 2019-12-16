/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPictureInPictureController : NSObject <AVPictureInPictureControlsStyleAppearance, AVPictureInPicturePlatformAdapterDelegate> {
    bool  _allowsPictureInPictureFromInlineWhenEnteringBackground;
    bool  _allowsPictureInPicturePlayback;
    long long  _controlsStyle;
    <AVPictureInPictureControllerDelegate> * _delegate;
    AVObservationController * _observationController;
    bool  _otherPictureInPictureActive;
    bool  _pictureInPictureActive;
    bool  _pictureInPicturePossible;
    bool  _pictureInPictureSuspended;
    bool  _pictureInPictureWasStartedWhenEnteringBackground;
    AVPictureInPicturePlatformAdapter * _platformAdapter;
    AVPlayerController * _playerController;
    AVPlayerLayer * _playerLayer;
    bool  _retainsSourceDuringPictureInPicturePlayback;
    <AVPictureInPictureContentSource> * _source;
    <AVPictureInPictureContentSource> * _sourceIfRetainedDuringPictureInPicturePlayback;
    bool  _wantsImmediateAssetInspection;
}

@property (nonatomic) bool allowsPictureInPictureFromInlineWhenEnteringBackground;
@property (nonatomic) bool allowsPictureInPicturePlayback;
@property (nonatomic) long long controlsStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPictureInPictureControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (getter=isOtherPictureInPictureActive, nonatomic) bool otherPictureInPictureActive;
@property (getter=isPictureInPictureActive, nonatomic) bool pictureInPictureActive;
@property (getter=isPictureInPicturePossible, nonatomic) bool pictureInPicturePossible;
@property (getter=isPictureInPictureSuspended, nonatomic) bool pictureInPictureSuspended;
@property (nonatomic, readonly) AVPictureInPictureViewController *pictureInPictureViewController;
@property (nonatomic) bool pictureInPictureWasStartedWhenEnteringBackground;
@property (nonatomic, readonly) AVPictureInPicturePlatformAdapter *platformAdapter;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic) bool retainsSourceDuringPictureInPicturePlayback;
@property (nonatomic, readonly) <AVPictureInPictureContentSource> *source;
@property (nonatomic, retain) <AVPictureInPictureContentSource> *sourceIfRetainedDuringPictureInPicturePlayback;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsImmediateAssetInspection;

+ (bool)isPictureInPictureSupported;
+ (id)pictureInPictureButtonStartImage;
+ (id)pictureInPictureButtonStartImageCompatibleWithTraitCollection:(id)arg1;
+ (id)pictureInPictureButtonStopImage;
+ (id)pictureInPictureButtonStopImageCompatibleWithTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_commonInitWithSource:(id)arg1;
- (id)_delegateIfRespondsToSelector:(SEL)arg1;
- (void)_stopPictureInPictureAndRestoreUserInterface:(bool)arg1;
- (bool)allowsPictureInPictureFromInlineWhenEnteringBackground;
- (bool)allowsPictureInPicturePlayback;
- (void)contentSourceVideoRectInWindowChanged;
- (long long)controlsStyle;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithPlayerLayer:(id)arg1;
- (id)initWithSource:(id)arg1;
- (void)invalidate;
- (bool)isOtherPictureInPictureActive;
- (bool)isPictureInPictureActive;
- (bool)isPictureInPicturePossible;
- (bool)isPictureInPictureSuspended;
- (id)observationController;
- (void)pictureInPicturePlatformAdapter:(id)arg1 failedToStartError:(id)arg2;
- (void)pictureInPicturePlatformAdapter:(id)arg1 handlePlaybackCommand:(long long)arg2;
- (void)pictureInPicturePlatformAdapter:(id)arg1 prepareToStopForRestoringUserInterface:(id /* block */)arg2;
- (void)pictureInPicturePlatformAdapter:(id)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3;
- (void)pictureInPicturePlatformAdapter:(id)arg1 stopPictureInPictureAndRestoreUserInterface:(bool)arg2;
- (void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg1;
- (id)pictureInPictureViewController;
- (bool)pictureInPictureWasStartedWhenEnteringBackground;
- (id)platformAdapter;
- (id)playerController;
- (id)playerLayer;
- (bool)retainsSourceDuringPictureInPicturePlayback;
- (void)setAllowsPictureInPictureFromInlineWhenEnteringBackground:(bool)arg1;
- (void)setAllowsPictureInPicturePlayback:(bool)arg1;
- (void)setControlsStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOtherPictureInPictureActive:(bool)arg1;
- (void)setPictureInPictureActive:(bool)arg1;
- (void)setPictureInPicturePossible:(bool)arg1;
- (void)setPictureInPictureSuspended:(bool)arg1;
- (void)setPictureInPictureWasStartedWhenEnteringBackground:(bool)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setRetainsSourceDuringPictureInPicturePlayback:(bool)arg1;
- (void)setSourceIfRetainedDuringPictureInPicturePlayback:(id)arg1;
- (void)setWantsImmediateAssetInspection:(bool)arg1;
- (id)source;
- (id)sourceIfRetainedDuringPictureInPicturePlayback;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (void)stopPictureInPictureEvenWhenInBackground;
- (bool)wantsImmediateAssetInspection;

@end
