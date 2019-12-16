/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIResultTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate> {
    double  _cachedHeaderHeight;
    NSMutableSet * _expandedSections;
    unsigned long long  _lastVisibleResultsFeedbackEvent;
    NSArray * _latestVisibleHeadersAccountedForInFeedback;
    NSMutableOrderedSet * _latestVisibleResultsAccountedForInFeedback;
    NSMutableOrderedSet * _potentiallyVisibleCells;
    NSMutableOrderedSet * _potentiallyVisibleHeaders;
    NSString * _queryString;
    NSMutableSet * _sectionsThatHaveBeenExpanded;
    bool  _shortenTopFloatingHeader;
}

@property (nonatomic) double cachedHeaderHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *expandedSections;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic) unsigned long long lastVisibleResultsFeedbackEvent;
@property (nonatomic, retain) NSArray *latestVisibleHeadersAccountedForInFeedback;
@property (nonatomic, retain) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback;
@property (nonatomic, retain) NSMutableOrderedSet *potentiallyVisibleCells;
@property (nonatomic, retain) NSMutableOrderedSet *potentiallyVisibleHeaders;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (nonatomic) bool shortenTopFloatingHeader;
@property (readonly) Class superclass;

+ (void)fetchContactsIfNeededForTableModel:(id)arg1;

- (void).cxx_destruct;
- (double)cachedHeaderHeight;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(bool)arg2;
- (void)clearResultsFromSection:(id)arg1;
- (bool)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)arg1 performOpenIfSo:(bool)arg2;
- (bool)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (bool)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg1;
- (void)expandCellsIfNeeded;
- (id)expandedSections;
- (id)fallbackPeekViewControllerForIndexPath:(id)arg1;
- (unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(bool)arg2;
- (unsigned long long)handleSelectionOfResult:(id)arg1;
- (double)headerHeight;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (id)init;
- (unsigned long long)lastVisibleResultsFeedbackEvent;
- (id)latestVisibleHeadersAccountedForInFeedback;
- (id)latestVisibleResultsAccountedForInFeedback;
- (void)modalViewControllerClosed;
- (double)offScreenContentScrollDistance;
- (void)performExpansion:(bool)arg1 withSectionIndex:(unsigned long long)arg2;
- (id)potentiallyVisibleCells;
- (id)potentiallyVisibleHeaders;
- (void)purgeAndResetTable;
- (void)purgeMemory;
- (id)queryString;
- (void)replaceResult:(id)arg1 withResult:(id)arg2;
- (void)scrollSectionToTop:(unsigned long long)arg1 animate:(bool)arg2;
- (void)scrollTableToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)sectionIsClearable:(id)arg1;
- (bool)sectionShouldBeExpanded:(id)arg1;
- (id)sectionsThatHaveBeenExpanded;
- (void)sendVisibleFeedbackIfNecessary;
- (void)setCachedHeaderHeight:(double)arg1;
- (void)setExpandedSections:(id)arg1;
- (void)setLastVisibleResultsFeedbackEvent:(unsigned long long)arg1;
- (void)setLatestVisibleHeadersAccountedForInFeedback:(id)arg1;
- (void)setLatestVisibleResultsAccountedForInFeedback:(id)arg1;
- (void)setPotentiallyVisibleCells:(id)arg1;
- (void)setPotentiallyVisibleHeaders:(id)arg1;
- (void)setQueryString:(id)arg1;
- (void)setSectionsThatHaveBeenExpanded:(id)arg1;
- (void)setShortenTopFloatingHeader:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (bool)shortenTopFloatingHeader;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)toggleExpansionForSection:(id)arg1;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;
- (bool)updateMustAccountForLayout;
- (void)updateWithResultSections:(id)arg1 scrollToTop:(bool)arg2;
- (bool)view:(id)arg1 isVisibleInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)viewControllerForIndexPath:(id)arg1 isPeek:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;

@end
