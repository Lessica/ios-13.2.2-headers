/* Generated by RuntimeBrowser.
 */

@protocol SISchemaUserSpeechDuration <NSObject>

@required

- (long long)durationMs;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)resultCandidateId;
- (void)setDurationMs:(long long)arg1;
- (void)setResultCandidateId:(NSString *)arg1;

@end