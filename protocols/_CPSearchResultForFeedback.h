/* Generated by RuntimeBrowser.
 */

@protocol _CPSearchResultForFeedback <NSObject>

@required

- (_CPActionItemForFeedback *)action;
- (NSString *)applicationBundleIdentifier;
- (unsigned long long)blockId;
- (NSString *)completedQuery;
- (NSString *)correctedQuery;
- (bool)doNotFold;
- (NSData *)entityData;
- (NSString *)fbr;
- (unsigned long long)hashedIdentifier;
- (NSString *)identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)intendedQuery;
- (bool)isFuzzyMatch;
- (bool)isLocalApplicationResult;
- (bool)isStaticCorrection;
- (NSData *)jsonData;
- (int)knownApplicationBundleIdentifier;
- (int)knownResultBundleId;
- (int)knownSectionBundleIdentifier;
- (_CPStruct *)localFeatures;
- (bool)publiclyIndexable;
- (_CPPunchoutForFeedback *)punchout;
- (unsigned long long)queryId;
- (double)rankingScore;
- (NSString *)resultBundleId;
- (NSString *)resultType;
- (NSString *)sectionBundleIdentifier;
- (void)setAction:(_CPActionItemForFeedback *)arg1;
- (void)setApplicationBundleIdentifier:(NSString *)arg1;
- (void)setBlockId:(unsigned long long)arg1;
- (void)setCompletedQuery:(NSString *)arg1;
- (void)setCorrectedQuery:(NSString *)arg1;
- (void)setDoNotFold:(bool)arg1;
- (void)setEntityData:(NSData *)arg1;
- (void)setFbr:(NSString *)arg1;
- (void)setHashedIdentifier:(unsigned long long)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIntendedQuery:(NSString *)arg1;
- (void)setIsFuzzyMatch:(bool)arg1;
- (void)setIsLocalApplicationResult:(bool)arg1;
- (void)setIsStaticCorrection:(bool)arg1;
- (void)setKnownApplicationBundleIdentifier:(int)arg1;
- (void)setKnownResultBundleId:(int)arg1;
- (void)setKnownSectionBundleIdentifier:(int)arg1;
- (void)setLocalFeatures:(_CPStruct *)arg1;
- (void)setPubliclyIndexable:(bool)arg1;
- (void)setPunchout:(_CPPunchoutForFeedback *)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResultBundleId:(NSString *)arg1;
- (void)setResultType:(NSString *)arg1;
- (void)setSectionBundleIdentifier:(NSString *)arg1;
- (void)setSrf:(NSString *)arg1;
- (void)setTopHit:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUserInput:(NSString *)arg1;
- (NSString *)srf;
- (int)topHit;
- (int)type;
- (NSString *)userInput;
- (unsigned long long)whichApplicationbundleid;
- (unsigned long long)whichResultbundleidentifier;
- (unsigned long long)whichSectionbundleid;

@end
