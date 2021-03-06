/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryAssetDecorationSource : NSObject <PXGAssetBadgeDecorationSource, PXGCaptionDecorationSource, PXGDebugDecorationSource, PXGDisplayAssetRequestObserver, PXGDragDecorationSource, PXGSelectionDecorationSource> {
    NSMutableSet * _assetUUIDsInCloud;
    PXAssetBadgeManager * _badgeManager;
    PXAssetsDataSource * _dataSource;
    PXGLayout * _decoratedLayout;
    NSSet * _draggedAssetReferences;
    NSIndexSet * _draggedItems;
    bool  _durationAlwaysHidden;
    bool  _enableDebugDecoration;
    unsigned long long  _forbiddenBadges;
    bool  _forceBadgesOnAllAssets;
    NSIndexSet * _itemsWithCoveredBottomTrailingCorner;
    long long  _section;
    PXSelectionSnapshot * _selectionSnapshot;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) PXGLayout *decoratedLayout;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *draggedAssetReferences;
@property (nonatomic) bool durationAlwaysHidden;
@property (nonatomic) bool enableDebugDecoration;
@property (nonatomic) unsigned long long forbiddenBadges;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSIndexSet *itemsWithCoveredBottomTrailingCorner;
@property (nonatomic, readonly) long long section;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateDragDecoration;
- (id)_spriteIndexesForItems:(id)arg1 inLayout:(id)arg2;
- (void)_updateDragDecoration;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned int)arg2 inLayout:(id)arg3;
- (id)dataSource;
- (id)debugDecorationAtSpriteIndex:(unsigned int)arg1 asset:(id)arg2 inLayout:(id)arg3;
- (id)decoratedLayout;
- (id)draggedAssetReferences;
- (id)draggingSpriteIndexesInLayout:(id)arg1;
- (bool)durationAlwaysHidden;
- (bool)enableDebugDecoration;
- (unsigned long long)forbiddenBadges;
- (id)init;
- (id)itemsWithCoveredBottomTrailingCorner;
- (void)observeIsInCloud:(bool)arg1 forDisplayAsset:(id)arg2;
- (long long)section;
- (id)selectedSpriteIndexesInLayout:(id)arg1;
- (long long)selectionDecorationStyleInLayout:(id)arg1;
- (id)selectionSnapshot;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (void)setDecoratedLayout:(id)arg1;
- (void)setDraggedAssetReferences:(id)arg1;
- (void)setDurationAlwaysHidden:(bool)arg1;
- (void)setEnableDebugDecoration:(bool)arg1;
- (void)setForbiddenBadges:(unsigned long long)arg1;
- (void)setItemsWithCoveredBottomTrailingCorner:(id)arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)update;
- (bool)wantsAssetBadgeDecorationsInLayout:(id)arg1;
- (bool)wantsCaptionDecorationsInLayout:(id)arg1;
- (bool)wantsDebugDecorationInLayout:(id)arg1;

@end
