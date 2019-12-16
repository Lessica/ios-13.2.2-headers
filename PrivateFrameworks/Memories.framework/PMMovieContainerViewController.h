/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMMovieContainerViewController : UIViewController <PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PMPlayerControlling, UIGestureRecognizerDelegate> {
    bool  _airplayActive;
    <PMMovieContainerViewControllerDelegate> * _delegate;
    PMPosterViewController * _parentAirplayPlaceholderPosterViewController;
    id  _playbackProgressTimeObserver;
    NSLayoutConstraint * _posterAspectConstraint;
    PMPosterContainerView * _posterContainerView;
    long long  _posterMoodIndex;
    PMPosterViewController * _posterViewController;
    bool  _preventRotation;
    bool  _registeredAsAirPlayProvider;
    PMRotationViewController * _rotationViewController;
    NSString * _savedAudioCategory;
    long long  _secondaryPosterMoodIndex;
    PMAVSynchronizedView * _synchronizedView;
    NSNumber * _titleScale;
    UITapGestureRecognizer * _visibilityTapGestureRecognizer;
    UITapGestureRecognizer * _zoomDoubleTap;
}

@property (nonatomic) bool airplayActive;
@property (nonatomic, readonly) int currentFrameTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PMMovieContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PMPosterViewController *parentAirplayPlaceholderPosterViewController;
@property (nonatomic, retain) id playbackProgressTimeObserver;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic) float playerRate;
@property (nonatomic, readonly) bool playerReadyForDisplay;
@property (getter=isPlaying, nonatomic) bool playing;
@property (nonatomic) double posterAspect;
@property (nonatomic, retain) NSLayoutConstraint *posterAspectConstraint;
@property (nonatomic, retain) PMPosterContainerView *posterContainerView;
@property (nonatomic) long long posterMoodIndex;
@property (nonatomic, retain) PMPosterViewController *posterViewController;
@property (nonatomic) bool preventRotation;
@property (nonatomic) bool registeredAsAirPlayProvider;
@property (nonatomic, retain) PMRotationViewController *rotationViewController;
@property (nonatomic, retain) NSString *savedAudioCategory;
@property (nonatomic) long long secondaryPosterMoodIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) PMAVSynchronizedView *synchronizedView;
@property (nonatomic, copy) NSNumber *titleScale;
@property (nonatomic, readonly) PMTitleSubtitleView *titleView;
@property (nonatomic, retain) UITapGestureRecognizer *visibilityTapGestureRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *zoomDoubleTap;

- (void).cxx_destruct;
- (void)_makeAudioCategoryPlayback;
- (void)_notifyTitleScaleChanged;
- (void)_restoreAudioCategory;
- (void)_saveAudioCategory;
- (void)activateAirplay;
- (id)addAirPlayPlaceholderViewToParentView:(id)arg1;
- (void)addObserversToPlayer;
- (void)addTimeObserverToPlayer;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (id)airPlayScreenController;
- (bool)airplayActive;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (int)currentFrameTime;
- (void)deactivateAirplay;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToParentViewController:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)heightOfTitleArea;
- (void)hidePosterAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)hidePosterTitleAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)isPlayerAtEndOfProject;
- (bool)isPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)parentAirplayPlaceholderPosterViewController;
- (id)playbackProgressTimeObserver;
- (id)player;
- (id)playerItem;
- (float)playerRate;
- (bool)playerReadyForDisplay;
- (void)playerResumeActive;
- (double)posterAspect;
- (id)posterAspectConstraint;
- (id)posterContainerView;
- (long long)posterMoodIndex;
- (id)posterViewController;
- (bool)preventRotation;
- (void)registerAsAirPlayProvider;
- (bool)registeredAsAirPlayProvider;
- (void)removeAirPlayPlaceholderViewFromParentView:(id)arg1;
- (void)removeObserversFromPlayer;
- (id)rotationViewController;
- (id)savedAudioCategory;
- (long long)secondaryPosterMoodIndex;
- (void)setAirplayActive:(bool)arg1;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setParentAirplayPlaceholderPosterViewController:(id)arg1;
- (void)setPlaybackProgressTimeObserver:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlayerRate:(float)arg1;
- (void)setPlayerRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setPlaying:(bool)arg1;
- (void)setPosterAspect:(double)arg1;
- (void)setPosterAspectConstraint:(id)arg1;
- (void)setPosterContainerView:(id)arg1;
- (void)setPosterMoodIndex:(long long)arg1;
- (void)setPosterViewController:(id)arg1;
- (void)setPreventRotation:(bool)arg1;
- (void)setRegisteredAsAirPlayProvider:(bool)arg1;
- (void)setRotationViewController:(id)arg1;
- (void)setSavedAudioCategory:(id)arg1;
- (void)setSecondaryPosterMoodIndex:(long long)arg1;
- (void)setSynchronizedView:(id)arg1;
- (void)setTitleScale:(id)arg1;
- (void)setVisibilityTapGestureRecognizer:(id)arg1;
- (void)setZoomDoubleTap:(id)arg1;
- (void)setupPosterViews;
- (void)showPosterAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)synchronizedView;
- (void)teardownPosterViews;
- (id)titleScale;
- (id)titleView;
- (void)toggleControlVisibility:(id)arg1;
- (void)toggleZoom:(id)arg1;
- (void)unregisterAsAirPlayProvider;
- (void)updateAirplay;
- (void)updatePostersViewsWithImages:(id)arg1;
- (void)updatePostersViewsWithProduction:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)visibilityTapGestureRecognizer;
- (bool)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg1;
- (id)zoomDoubleTap;

@end
