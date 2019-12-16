/* Generated by RuntimeBrowser.
 */

@protocol _EARSpeechRecognitionResultStream <NSObject>

@required

- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didFinishRecognitionWithError:(NSError *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResults:(NSArray *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizePartialResult:(_EARSpeechRecognitionResult *)arg2;

@optional

- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(NSArray *)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResultPackage:(_EARSpeechRecognitionResultPackage *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResults:(NSArray *)arg2 tokenSausage:(NSArray *)arg3 nBestChoices:(NSArray *)arg4;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizePartialResultNbest:(NSArray *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeRawEagerRecognitionCandidate:(_EARSpeechRecognition *)arg2;

@end
