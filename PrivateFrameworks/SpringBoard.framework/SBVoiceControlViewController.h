/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBVoiceControlViewController : UIViewController <SUICFlamesViewDelegate, SiriUISuggestionsViewDelegate, VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate> {
    NSString * _avAudioRouteName;
    NSString * _avAudioRouteUID;
    UIView * _contentView;
    NSTimer * _delayedConfirmationActionTimer;
    SUICFlamesView * _flamesView;
    bool  _hasConfiguredRouting;
    bool  _isHeadsetButtonPressedDown;
    NSDictionary * _localizationKeys;
    NSArray * _nextRecognitionAudioInputPaths;
    bool  _prefersProximityDetectionEnabled;
    VSRecognitionSession * _session;
    bool  _shouldAllowSensitiveActions;
    bool  _shouldDisableHandlerActions;
    bool  _shouldDisableVoiceControlForBluetoothRequests;
    SBVoiceControlPresentationSource * _source;
    long long  _startingKeywordIndex;
    UILabel * _subtitleLabel;
    SiriUISuggestionsView * _suggestionsView;
    UILabel * _titleLabel;
    <SBVoiceControlViewControllerDelegate> * _voiceControlDelegate;
    bool  _voiceControlLoggingEnabled;
    bool  _wasRecognizing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *nextRecognitionAudioInputPaths;
@property (nonatomic, readonly) bool prefersProximityDetectionEnabled;
@property (nonatomic) bool shouldAllowSensitiveActions;
@property (nonatomic) bool shouldDisableHandlerActions;
@property (nonatomic) bool shouldDisableVoiceControlForBluetoothRequests;
@property (readonly) Class superclass;
@property (nonatomic) <SBVoiceControlViewControllerDelegate> *voiceControlDelegate;
@property (getter=isVoiceControlLoggingEnabled, nonatomic) bool voiceControlLoggingEnabled;

- (void).cxx_destruct;
- (void)_avSystemControllerHeadphoneJackIsConnectedDidChangeNotification:(id)arg1;
- (void)_avSystemControllerPickableRoutesDidChangeNotification:(id)arg1;
- (id)_availableRouteDictionaries;
- (void)_configureRoutingIfNeeded;
- (void)_continueRecognitionAction;
- (void)_continueWithRecognitionAction;
- (id)_currentPreferredRouteDictionary;
- (void)_deviceProximityStateDidChangeNotification:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_flamesViewFrame;
- (void)_handleButtonUpCancel;
- (bool)_hasPickableBluetoothDevice;
- (id)_localizedStringForKey:(id)arg1;
- (id)_newRecognitionSession;
- (bool)_openDialRequest:(id)arg1;
- (void)_performConfirmationAction;
- (void)_performNoMatchFound;
- (id)_popNextRecognitionAudioInputPath;
- (id)_preferredRouteDictionaryWithAvailableRouteDictionaries:(id)arg1 preferredAVAudioRouteName:(id)arg2 preferredAVAudioRouteUID:(id)arg3 shouldPreferBluetooth:(bool)arg4;
- (void)_recognitionSessionKeywordsDidChangeNotification:(id)arg1;
- (void)_requestDismissal;
- (void)_resetSession;
- (void)_setAVAudioRouteUID:(id)arg1;
- (void)_setFeedbackVisible:(bool)arg1 animated:(bool)arg2;
- (void)_setNeedsRoutingUpdate;
- (void)_setPrefersProximityDetectionEnabled:(bool)arg1;
- (void)_setSession:(id)arg1;
- (void)_setStatusText:(id)arg1;
- (void)_setTitleText:(id)arg1;
- (void)_speakFeedbackText;
- (void)_speakText:(id)arg1;
- (void)_startSession;
- (double)_subtitleBaseline;
- (double)_titleBaseline;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)dealloc;
- (void)finalizeDismissalTransition;
- (void)handleHeadsetButtonUpFromButtonDownSource:(bool)arg1;
- (bool)handleHomeButtonPress;
- (id)initWithSource:(id)arg1;
- (bool)isVoiceControlLoggingEnabled;
- (id)nextRecognitionAudioInputPaths;
- (id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (void)performDismissalTransitionAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)performPresentationTransitionAnimated:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)prefersProximityDetectionEnabled;
- (void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
- (void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;
- (id)recognitionSession:(id)arg1 openURL:(id)arg2;
- (void)recognitionSessionDidBeginAction:(id)arg1;
- (bool)recognitionSessionWillBeginAction:(id)arg1;
- (void)resetSessionWithSource:(id)arg1;
- (void)setNextRecognitionAudioInputPaths:(id)arg1;
- (void)setShouldAllowSensitiveActions:(bool)arg1;
- (void)setShouldDisableHandlerActions:(bool)arg1;
- (void)setShouldDisableVoiceControlForBluetoothRequests:(bool)arg1;
- (void)setVoiceControlDelegate:(id)arg1;
- (void)setVoiceControlLoggingEnabled:(bool)arg1;
- (bool)shouldAllowSensitiveActions;
- (bool)shouldDisableHandlerActions;
- (bool)shouldDisableVoiceControlForBluetoothRequests;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)voiceControlDelegate;

@end
