/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchQuery : NSObject <NSCopying> {
    double  _cancellationTime;
    bool  _cancelled;
    long long  _contentFilters;
    unsigned long long  _creationStamp;
    double  _creationTime;
    double  _currentTime;
    NSArray * _disabledApps;
    NSArray * _disabledBundles;
    NSArray * _disabledDomains;
    SFSearchSuggestion * _engagedSuggestion;
    bool  _finished;
    bool  _grouped;
    bool  _infinitePatience;
    bool  _internalDebug;
    bool  _internalValidation;
    bool  _isPasscodeLocked;
    bool  _isWideScreen;
    NSString * _keyboardLanguage;
    NSString * _keyboardPrimaryLanguage;
    NSArray * _markedTextArray;
    long long  _maxCount;
    bool  _noTokenize;
    bool  _promoteLocalResults;
    bool  _promoteParsecResults;
    unsigned long long  _queryID;
    unsigned long long  _queryIdent;
    double  _scaleFactor;
    NSArray * _searchDomains;
    NSArray * _searchEntities;
    NSString * _searchString;
    unsigned long long  _whyQuery;
    NSArray * markedTextArray;
}

@property (nonatomic, readonly) double cancellationTime;
@property (nonatomic, readonly) bool cancelled;
@property (nonatomic) long long contentFilters;
@property (nonatomic, readonly) unsigned long long creationStamp;
@property (nonatomic, readonly) double creationTime;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, retain) NSArray *disabledApps;
@property (nonatomic, retain) NSArray *disabledBundles;
@property (nonatomic, readonly) NSArray *disabledDomains;
@property (nonatomic, readonly) SFSearchSuggestion *engagedSuggestion;
@property (nonatomic) bool grouped;
@property (nonatomic, readonly) bool hasMarkedText;
@property (nonatomic) bool infinitePatience;
@property (nonatomic) bool internalDebug;
@property (nonatomic) bool internalValidation;
@property (nonatomic, readonly) bool isPasscodeLocked;
@property (nonatomic) bool isWideScreen;
@property (nonatomic, readonly) NSString *keyboardLanguage;
@property (nonatomic, readonly) NSString *keyboardPrimaryLanguage;
@property (nonatomic, readonly) NSArray *markedTextArray;
@property (nonatomic) long long maxCount;
@property (nonatomic) bool noTokenize;
@property (nonatomic) bool promoteLocalResults;
@property (nonatomic) bool promoteParsecResults;
@property (nonatomic) unsigned long long queryIdent;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) NSArray *searchDomains;
@property (nonatomic, readonly) NSArray *searchEntities;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic) unsigned long long whyQuery;

- (void).cxx_destruct;
- (void)cancel;
- (double)cancellationTime;
- (bool)cancelled;
- (long long)contentFilters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creationStamp;
- (double)creationTime;
- (double)currentTime;
- (id)disabledApps;
- (id)disabledBundles;
- (id)disabledDomains;
- (id)engagedSuggestion;
- (void)execute:(id /* block */)arg1;
- (bool)grouped;
- (bool)hasMarkedText;
- (unsigned long long)hash;
- (bool)infinitePatience;
- (id)initWithQuery:(id)arg1 domains:(id)arg2;
- (id)initWithSearchQueryContext:(id)arg1;
- (bool)internalDebug;
- (bool)internalValidation;
- (bool)isEqual:(id)arg1;
- (bool)isPasscodeLocked;
- (bool)isWideScreen;
- (id)keyboardLanguage;
- (id)keyboardPrimaryLanguage;
- (id)markedTextArray;
- (long long)maxCount;
- (bool)noTokenize;
- (bool)promoteLocalResults;
- (bool)promoteParsecResults;
- (unsigned long long)queryIdent;
- (double)scaleFactor;
- (id)searchDomains;
- (id)searchEntities;
- (id)searchString;
- (void)setContentFilters:(long long)arg1;
- (void)setDisabledApps:(id)arg1;
- (void)setDisabledBundles:(id)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setInfinitePatience:(bool)arg1;
- (void)setInternalDebug:(bool)arg1;
- (void)setInternalValidation:(bool)arg1;
- (void)setIsWideScreen:(bool)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setNoTokenize:(bool)arg1;
- (void)setPromoteLocalResults:(bool)arg1;
- (void)setPromoteParsecResults:(bool)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;
- (void)setWhyQuery:(unsigned long long)arg1;
- (unsigned long long)whyQuery;

@end
