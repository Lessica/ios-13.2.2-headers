/* Generated by RuntimeBrowser.
 */

@protocol VSRecognitionSessionDelegate <NSObject>

@optional

- (void)recognitionSession:(VSRecognitionSession *)arg1 didCompleteActionWithError:(NSError *)arg2;
- (void)recognitionSession:(VSRecognitionSession *)arg1 didFinishSpeakingFeedbackStringWithError:(NSError *)arg2;
- (NSError *)recognitionSession:(VSRecognitionSession *)arg1 openURL:(NSURL *)arg2;
- (void)recognitionSessionDidBeginAction:(VSRecognitionSession *)arg1;
- (bool)recognitionSessionWillBeginAction:(VSRecognitionSession *)arg1;

@end
