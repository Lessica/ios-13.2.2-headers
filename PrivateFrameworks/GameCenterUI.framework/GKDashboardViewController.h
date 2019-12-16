/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKDashboardViewController : GKDashboardCollectionViewController {
    GKChallengeDataSource * _challengeDataSource;
    GKGameRecord * _gameRecord;
    GKDashboardHeaderView * _headerView;
    NSString * _leaderboardIdentifier;
    GKCollectionMultiDataSource * _multiDataSource;
    bool  _shouldShowPlayForChallenge;
    bool  _shouldShowPlayForTurnBasedMatch;
    bool  _shouldShowQuitForTurnBasedMatch;
    NSArray * _titles;
    long long  _viewState;
    NSMutableDictionary * _viewStateIndexes;
}

@property (nonatomic) GKChallengeDataSource *challengeDataSource;
@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (nonatomic, retain) GKDashboardHeaderView *headerView;
@property (nonatomic, retain) NSString *leaderboardIdentifier;
@property (nonatomic) long long leaderboardTimeScope;
@property (nonatomic, retain) GKCollectionMultiDataSource *multiDataSource;
@property (nonatomic) bool shouldShowPlayForChallenge;
@property (nonatomic) bool shouldShowPlayForTurnBasedMatch;
@property (nonatomic) bool shouldShowQuitForTurnBasedMatch;
@property (nonatomic, retain) NSArray *titles;
@property (nonatomic) long long viewState;
@property (nonatomic, retain) NSMutableDictionary *viewStateIndexes;

- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)addDataSource:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3;
- (id)challengeDataSource;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)gameRecord;
- (id)headerView;
- (id)initWithGameRecord:(id)arg1;
- (id)leaderboardIdentifier;
- (long long)leaderboardTimeScope;
- (void)loadData;
- (id)multiDataSource;
- (void)selectDataSourceAtIndex:(long long)arg1 updateCollectionView:(bool)arg2;
- (void)selectedSegmentChanged:(id)arg1;
- (void)setChallengeDataSource:(id)arg1;
- (void)setGameRecord:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setLeaderboardIdentifier:(id)arg1;
- (void)setLeaderboardTimeScope:(long long)arg1;
- (void)setMultiDataSource:(id)arg1;
- (void)setShouldShowPlayForChallenge:(bool)arg1;
- (void)setShouldShowPlayForTurnBasedMatch:(bool)arg1;
- (void)setShouldShowQuitForTurnBasedMatch:(bool)arg1;
- (void)setTitles:(id)arg1;
- (void)setViewState:(long long)arg1;
- (void)setViewStateIndexes:(id)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)setupSegmentedControl;
- (bool)shouldShowPlayForChallenge;
- (bool)shouldShowPlayForTurnBasedMatch;
- (bool)shouldShowQuitForTurnBasedMatch;
- (void)showLeaderboardVC;
- (id)titles;
- (void)viewDidLoad;
- (long long)viewState;
- (id)viewStateIndexes;
- (void)viewWillAppear:(bool)arg1;

@end
