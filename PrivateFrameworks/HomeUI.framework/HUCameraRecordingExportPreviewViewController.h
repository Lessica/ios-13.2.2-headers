/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraRecordingExportPreviewViewController : UIViewController <UITextViewDelegate> {
    NSOperationQueue * _backgroundSessionQueue;
    HMCameraClip * _cameraClip;
    HMCameraProfile * _cameraProfile;
    id /* block */  _completionHandler;
    UILabel * _descriptionLabel;
    NSURL * _exportURL;
    bool  _hasVideoPreview;
    UITextView * _learnMoreTextView;
    UIActivityIndicatorView * _loadingIndicatorView;
    AVPlayerLooper * _looper;
    HUCameraRecordingPlayerView * _playerView;
    AVQueuePlayer * _queuePlayer;
    id  _queuePlayerObserver;
    UIButton * _submitButton;
    HMCameraClipFetchVideoAssetContextOperation * _videoDownloadOperation;
}

@property (nonatomic, retain) NSOperationQueue *backgroundSessionQueue;
@property (nonatomic) HMCameraClip *cameraClip;
@property (nonatomic) HMCameraProfile *cameraProfile;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) NSURL *exportURL;
@property (nonatomic) bool hasVideoPreview;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITextView *learnMoreTextView;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicatorView;
@property (nonatomic, retain) AVPlayerLooper *looper;
@property (nonatomic, retain) HUCameraRecordingPlayerView *playerView;
@property (nonatomic) AVQueuePlayer *queuePlayer;
@property (nonatomic, retain) id queuePlayerObserver;
@property (nonatomic, retain) UIButton *submitButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) HMCameraClipFetchVideoAssetContextOperation *videoDownloadOperation;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_displayFailureToSubmitAlert;
- (void)_loadLoadingInterface;
- (void)_loadPreviewInterface;
- (void)_stripAndTruncateRecording;
- (id)backgroundSessionQueue;
- (id)cameraClip;
- (id)cameraProfile;
- (void)cancelSubmission;
- (id /* block */)completionHandler;
- (id)descriptionLabel;
- (void)didDismissPrivacyViewController;
- (id)exportURL;
- (bool)hasVideoPreview;
- (id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)learnMoreTextView;
- (id)loadingIndicatorView;
- (id)looper;
- (void)playVideoFile;
- (id)playerView;
- (void)prepareRecordingForExport;
- (id)queuePlayer;
- (id)queuePlayerObserver;
- (void)setBackgroundSessionQueue:(id)arg1;
- (void)setCameraClip:(id)arg1;
- (void)setCameraProfile:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setExportURL:(id)arg1;
- (void)setHasVideoPreview:(bool)arg1;
- (void)setLearnMoreTextView:(id)arg1;
- (void)setLoadingIndicatorView:(id)arg1;
- (void)setLooper:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setQueuePlayer:(id)arg1;
- (void)setQueuePlayerObserver:(id)arg1;
- (void)setSubmitButton:(id)arg1;
- (void)setVideoDownloadOperation:(id)arg1;
- (void)showPrivacyInformation;
- (id)submitButton;
- (void)submitCurrentClip;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (id)videoDownloadOperation;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
