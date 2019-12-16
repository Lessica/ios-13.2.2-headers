/* Generated by RuntimeBrowser.
 */

@protocol _ATXFeedbackProtocol

@required

- (double)currentAlpha;
- (double)currentBeta;
- (void)decayCounts;
- (void)feedbackLaunched:(NSString *)arg1 rejected:(NSArray *)arg2;
- (void)feedbackLaunched:(NSString *)arg1 rejected:(NSArray *)arg2 inUnitTest:(bool)arg3;
- (void)removeFeedbackForBundle:(NSString *)arg1;
- (void)resetData;

@optional

- (void)doDecayAtTime:(double)arg1;

@end
