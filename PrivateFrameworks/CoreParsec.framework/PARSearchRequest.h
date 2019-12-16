/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSearchRequest : PARRequest <NSSecureCoding> {
    NSArray * _completionCacheSuggestions;
    SFSearchSuggestion * _engagedSuggestion;
    NSString * _l2version;
    NSString * _l3version;
    NSArray * _localContextualSuggestions;
    NSString * _queryString;
    NSDictionary * _topics;
}

@property (nonatomic, retain) NSArray *completionCacheSuggestions;
@property (nonatomic, retain) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic, copy) NSString *l2version;
@property (nonatomic, copy) NSString *l3version;
@property (nonatomic, copy) NSArray *localContextualSuggestions;
@property (nonatomic, copy) NSString *queryString;
@property (nonatomic, copy) NSDictionary *topics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completionCacheSuggestions;
- (void)encodeWithCoder:(id)arg1;
- (id)engagedSuggestion;
- (id)initWithCoder:(id)arg1;
- (id)l2version;
- (id)l3version;
- (id)localContextualSuggestions;
- (unsigned int)nwActivityLabel;
- (id)queryString;
- (void)setCompletionCacheSuggestions:(id)arg1;
- (void)setEngagedSuggestion:(id)arg1;
- (void)setL2version:(id)arg1;
- (void)setL3version:(id)arg1;
- (void)setLocalContextualSuggestions:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setTopics:(id)arg1;
- (id)topics;

@end
