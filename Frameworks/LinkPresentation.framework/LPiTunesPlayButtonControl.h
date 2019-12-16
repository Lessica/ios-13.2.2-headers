/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesPlayButtonControl : LPPlayButtonControl {
    double  _currentPlaybackPosition;
    bool  _currentlyPlaying;
    MPModelGenericObject * _enqueuedItem;
    MPModelGenericObject * _enqueuedItemContext;
    bool  _hasStartedPlaying;
    LPInlineMediaPlaybackInformation * _playbackInformation;
    NSTimer * _playbackStateUpdateTimer;
}

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (struct _MRSystemAppPlaybackQueue { }*)createPlaybackQueue;
- (void)didMoveToWindow;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;
- (bool)matchesNowPlayingItem;
- (id)mediaPlaybackApplicationID;
- (void)startListeningForPlayback;
- (void)startPlaying;
- (void)stopListeningForPlayback;
- (void)updatePlayState;
- (void)updatePlaybackState;
- (void)willMoveToWindow:(id)arg1;

@end
