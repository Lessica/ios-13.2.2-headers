/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAppDocumentRequestController : _TVAppDocumentController <IKDocumentServiceRequestDelegate, IKServiceRequestDelegate, TVMediaControllerDelegate, TVMediaControllerHosting, TVMediaPlaybackManagerDelegate, TVMediaPlaying, TVObserving, TVTemplateFeaturesManagerDelegate> {
    struct { 
        bool hasSelectedMediaInfoDidChange; 
        bool hasDidHideUI; 
        bool hasShowcaseFactorDidChange; 
        bool hasDidCompleteDocumentCreation; 
    }  _adrcDelegateFlags;
    IKDocumentServiceRequest * _documentServiceRequest;
    TVTemplateFeaturesManager * _featuresManager;
    struct { 
        bool initialRequestSent; 
        bool shouldHideUI; 
    }  _flags;
    UIViewController<TVMediaController> * _mediaController;
    TVMediaPlaybackManager * _mediaPlaybackManager;
    <TVMediaProviding> * _mediaProvider;
    TVObservableEventController * _observableEventController;
    TVMediaInfo * _selectedMediaInfo;
    double  _showcaseFactor;
    double  _showcaseInset;
    <TVShowcasing> * _showcasingController;
    _TVSwipeUpMessageView * _swipeUpMessageView;
    IKUpdateServiceRequest * _updateServiceRequest;
}

@property (nonatomic, readonly) UIImage *coverImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IKDocumentServiceRequest *documentServiceRequest;
@property (nonatomic, readonly) TVTemplateFeaturesManager *featuresManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, readonly) bool isUIHidden;
@property (nonatomic, retain) UIViewController<TVMediaController> *mediaController;
@property (nonatomic, retain) TVMediaPlaybackManager *mediaPlaybackManager;
@property (nonatomic) <TVMediaProviding> *mediaProvider;
@property (nonatomic, retain) TVObservableEventController *observableEventController;
@property (nonatomic, readonly) TVMediaInfo *selectedMediaInfo;
@property (nonatomic, readonly) double showcaseFactor;
@property (nonatomic) double showcaseInset;
@property (nonatomic) <TVShowcasing> *showcasingController;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TVSwipeUpMessageView *swipeUpMessageView;
@property (nonatomic, retain) IKUpdateServiceRequest *updateServiceRequest;

- (void).cxx_destruct;
- (void)_hostMediaControllerIfPossible;
- (id)_hostingFocusEnvironment;
- (void)_updateMediaInfo;
- (void)_updateShowcaseFactor;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)adoptMediaController:(id)arg1;
- (bool)automaticallyProvidesMediaController;
- (id)coverImage;
- (void)coverImageDidChangeForMediaController:(id)arg1;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;
- (void)dealloc;
- (void)didChangeDocumentContext;
- (void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2;
- (void)documentDidChangeForDocumentServiceRequest:(id)arg1;
- (id)documentServiceRequest;
- (void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg1;
- (id)featuresManager;
- (void)featuresManager:(id)arg1 currentContextDidChangeForFeature:(id)arg2;
- (void)handleEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3;
- (bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4;
- (id)initWithAppDocument:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1;
- (id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(bool)arg2;
- (id)interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (bool)isPlaying;
- (bool)isUIHidden;
- (id)mediaController;
- (void)mediaInfoDidChange;
- (id)mediaPlaybackManager;
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(bool)arg2 animated:(bool)arg3 animations:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)mediaProvider;
- (id)observableEventController;
- (id)preferredFocusEnvironments;
- (id)relinquishOwnership;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (id)selectedMediaInfo;
- (void)sendInitialRequestIfNeeded;
- (void)serviceRequest:(id)arg1 didCompleteWithStatus:(long long)arg2 errorDictionary:(id)arg3;
- (void)setAppDelegate:(id)arg1;
- (void)setMediaController:(id)arg1;
- (void)setMediaPlaybackManager:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setObservableEventController:(id)arg1;
- (void)setShowcaseInset:(double)arg1;
- (void)setShowcasingController:(id)arg1;
- (void)setSwipeUpMessageView:(id)arg1;
- (void)setUpdateServiceRequest:(id)arg1;
- (void)shouldHideSupplementaryUI:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (double)showcaseFactor;
- (void)showcaseFactorDidChange;
- (double)showcaseInset;
- (id)showcasingController;
- (void)stateDidChangeForMediaController:(id)arg1;
- (id)swipeUpMessageView;
- (id)tv_featuresManagerForDocument:(id)arg1;
- (bool)tv_handleEventForDocument:(id)arg1 eventName:(id)arg2 targetResponder:(id)arg3 viewElement:(id)arg4 extraInfo:(id*)arg5;
- (id)tv_interactionPreviewControllerForViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;
- (id)updateServiceRequest;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willHostTemplateViewController:(id)arg1 usesTransitions:(bool*)arg2;

@end
