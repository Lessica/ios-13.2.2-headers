/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface SSBaseDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource> {
    long long  _cachedSeparatorStyle;
    Class  _cellClass;
    id /* block */  _cellConfigureBlock;
    id /* block */  _cellCreationBlock;
    id /* block */  _collectionSupplementaryConfigureBlock;
    id /* block */  _collectionSupplementaryCreationBlock;
    UICollectionView * _collectionView;
    Class  _collectionViewSupplementaryElementClass;
    UIView * _emptyView;
    long long  _rowAnimation;
    id /* block */  _tableActionBlock;
    id /* block */  _tableDeletionBlock;
    id /* block */  _tableMoveBlock;
    UITableView * _tableView;
}

@property (nonatomic) long long cachedSeparatorStyle;
@property (nonatomic) Class cellClass;
@property (nonatomic, copy) id /* block */ cellConfigureBlock;
@property (nonatomic, copy) id /* block */ cellCreationBlock;
@property (nonatomic, copy) id /* block */ collectionSupplementaryConfigureBlock;
@property (nonatomic, copy) id /* block */ collectionSupplementaryCreationBlock;
@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic) Class collectionViewSupplementaryElementClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *emptyView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long rowAnimation;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ tableActionBlock;
@property (nonatomic, copy) id /* block */ tableDeletionBlock;
@property (nonatomic, copy) id /* block */ tableMoveBlock;
@property (nonatomic) UITableView *tableView;

+ (id)indexPathArrayWithIndexSet:(id)arg1 inSection:(long long)arg2;
+ (id)indexPathArrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inSection:(long long)arg2;

- (void).cxx_destruct;
- (void)_updateEmptyView;
- (long long)cachedSeparatorStyle;
- (Class)cellClass;
- (id /* block */)cellConfigureBlock;
- (id /* block */)cellCreationBlock;
- (id /* block */)collectionSupplementaryConfigureBlock;
- (id /* block */)collectionSupplementaryCreationBlock;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (Class)collectionViewSupplementaryElementClass;
- (void)configureCell:(id)arg1 forItem:(id)arg2 parentView:(id)arg3 indexPath:(id)arg4;
- (void)dealloc;
- (void)deleteCellsAtIndexPaths:(id)arg1;
- (void)deleteSectionsAtIndexes:(id)arg1;
- (id)emptyView;
- (id)indexPathForItem:(id)arg1;
- (id)init;
- (void)insertCellsAtIndexPaths:(id)arg1;
- (void)insertSectionsAtIndexes:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)moveCellAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSectionAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadCellsAtIndexPaths:(id)arg1;
- (void)reloadData;
- (void)reloadSectionsAtIndexes:(id)arg1;
- (long long)rowAnimation;
- (void)setCachedSeparatorStyle:(long long)arg1;
- (void)setCellClass:(Class)arg1;
- (void)setCellConfigureBlock:(id /* block */)arg1;
- (void)setCellCreationBlock:(id /* block */)arg1;
- (void)setCollectionSupplementaryConfigureBlock:(id /* block */)arg1;
- (void)setCollectionSupplementaryCreationBlock:(id /* block */)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewSupplementaryElementClass:(Class)arg1;
- (void)setEmptyView:(id)arg1;
- (void)setRowAnimation:(long long)arg1;
- (void)setTableActionBlock:(id /* block */)arg1;
- (void)setTableDeletionBlock:(id /* block */)arg1;
- (void)setTableMoveBlock:(id /* block */)arg1;
- (void)setTableView:(id)arg1;
- (id /* block */)tableActionBlock;
- (id /* block */)tableDeletionBlock;
- (id /* block */)tableMoveBlock;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
