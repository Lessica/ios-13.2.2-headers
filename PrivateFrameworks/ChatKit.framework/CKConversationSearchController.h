/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationSearchController : CKSearchController {
    NSArray * _currentZKWSuggestions;
    bool  _gotResults;
    NSSet * _intermediaryResults;
    bool  _searchTerminated;
    _PSSuggester * _zkwSuggester;
}

@property (nonatomic, retain) NSArray *currentZKWSuggestions;
@property (nonatomic) bool gotResults;
@property (nonatomic, retain) NSSet *intermediaryResults;
@property (nonatomic) bool searchTerminated;
@property (nonatomic, retain) _PSSuggester *zkwSuggester;

+ (Class)cellClass;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (bool)supportsMenuInteraction;
+ (bool)supportsQuicklook;
+ (bool)useRecencyRankedSearchForMode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_appendRecencyToRankingQuery:(id)arg1 hours:(unsigned long long)arg2;
- (void)_searchSpotlightWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)_searchZKWWithText:(id)arg1 mode:(unsigned long long)arg2;
- (id)_sortedAndRankedItemsWithItems:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })additionalGroupInsets;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)currentZKWSuggestions;
- (void)didSelectResult:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (bool)gotResults;
- (double)interGroupSpacing;
- (id)intermediaryResults;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (id)rankingQueriesWithText:(id)arg1;
- (void)searchEnded;
- (bool)searchTerminated;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)setCurrentZKWSuggestions:(id)arg1;
- (void)setGotResults:(bool)arg1;
- (void)setIntermediaryResults:(id)arg1;
- (void)setSearchTerminated:(bool)arg1;
- (void)setZkwSuggester:(id)arg1;
- (bool)wantsHeaderSection;
- (id)zkwSuggester;

@end
