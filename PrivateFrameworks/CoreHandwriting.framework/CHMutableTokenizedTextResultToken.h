/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken

@property (nonatomic) double combinedScore;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) double recognitionScore;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, copy) NSIndexSet *strokeIndexes;
@property (nonatomic) long long substrokeCount;
@property (nonatomic) unsigned int wordID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCombinedScore:(double)arg1;
- (void)setProperties:(unsigned long long)arg1;
- (void)setRecognitionScore:(double)arg1;
- (void)setString:(id)arg1;
- (void)setStrokeIndexes:(id)arg1;
- (void)setSubstrokeCount:(long long)arg1;
- (void)setWordID:(unsigned int)arg1;

@end
