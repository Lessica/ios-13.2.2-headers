/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellMap : TSPObject <NSCopying, TSTCellMapChangeDescriptorDelivering> {
    struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { 
        struct TSUCellCoord {} *__begin_; 
        struct TSUCellCoord {} *__end_; 
        struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { 
            struct TSUCellCoord {} *__value_; 
        } __end_cap_; 
    }  _cellIDs;
    NSMutableArray * _cellLists;
    TSTCellUIDList * _cellUIDs;
    bool  _mayModifyFormulasInCells;
    bool  _mayModifyValuesReferencedByFormulas;
    NSMutableArray * _mergeActions;
    bool  _oneToMany;
    struct unordered_map<TSUCellCoord, TSTCell *, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTCell *> > > { struct __hash_table<std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, std::__1::hash<TSUCellCoord>, true>, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, std::__1::equal_to<TSUCellCoord>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUCellCoord, TSTCell *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * _searchableIDMap;
    struct unordered_map<TSTCellUID, TSTCell *, std::__1::hash<TSTCellUID>, std::__1::equal_to<TSTCellUID>, std::__1::allocator<std::__1::pair<const TSTCellUID, TSTCell *> > > { struct __hash_table<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::__unordered_map_hasher<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::hash<TSTCellUID>, true>, std::__1::__unordered_map_equal<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::equal_to<TSTCellUID>, true>, std::__1::allocator<std::__1::__hash_value_type<TSTCellUID, TSTCell *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * _searchableUIDMap;
    bool  _shallowCopy;
    bool  _uidBased;
}

@property (nonatomic, retain) NSMutableArray *cellLists;
@property (nonatomic, retain) TSTCellUIDList *cellUIDs;
@property (nonatomic) bool mayModifyFormulasInCells;
@property (nonatomic) bool mayModifyValuesReferencedByFormulas;
@property (getter=isOneToMany, nonatomic, readonly) bool oneToMany;
@property (nonatomic) bool shallowCopy;
@property (getter=isUIDBased, nonatomic) bool uidBased;

+ (id)cellMapWithContext:(id)arg1;
+ (id)uuidBasedCellMapWithContext:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCell:(id)arg1 andCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2;
- (void)addCell:(id)arg1 andCellUID:(const struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (void)addHeadMergeAction:(id)arg1;
- (void)addMergeAction:(id)arg1;
- (void)addMergeActions:(id)arg1;
- (void)appendCellMap:(id)arg1;
- (id)cellAtIndex:(unsigned long long)arg1;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })cellIDAtIndex:(unsigned long long)arg1;
- (id)cellIDBasedCellMapByTableInfo:(id)arg1;
- (const struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x1; struct TSUCellCoord {} *x2; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x_3_1_1; } x3; }*)cellIDs;
- (id)cellLists;
- (id)cellMapMaskedByUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1 inRows:(bool)arg2;
- (id)cellUIDs;
- (id)changeDescriptorsForTable:(id)arg1;
- (void)clearDataListIDs;
- (void)clearMerges;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)columnUIDs;
- (bool)containsMergeChanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 copyingCells:(bool)arg2;
- (unsigned long long)count;
- (void)enumerateCellsWithIDsUsingBlock:(id /* block */)arg1;
- (void)enumerateCellsWithUIDsUsingBlock:(id /* block */)arg1;
- (id)findCellForCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (id)findCellForCellUID:(const struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)initShallowMapWithContext:(id)arg1 uidBased:(bool)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 cell:(id)arg2 cellIDList:(const struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x1; struct TSUCellCoord {} *x2; struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { struct TSUCellCoord {} *x_3_1_1; } x3; }*)arg3;
- (id)initWithContext:(id)arg1 cell:(id)arg2 cellUIDList:(id)arg3;
- (id)initWithContext:(id)arg1 uidBased:(bool)arg2;
- (bool)isOneToMany;
- (bool)isUIDBased;
- (id)iterator;
- (void)loadFromUnarchiver:(id)arg1;
- (bool)mayModifyFormulasInCells;
- (bool)mayModifyValuesReferencedByFormulas;
- (id)mergeActions;
- (id)p_addCell:(id)arg1;
- (id)p_cellAtIndex:(unsigned long long)arg1 inCellListArray:(id)arg2;
- (unsigned long long)p_cellCount;
- (void)p_copyCellsAndUUIDsFromCellMap:(id)arg1 convertingToCellIDsWithTableInfo:(id)arg2;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1 preserveHostCells:(bool)arg2;
- (void)p_shallowAddCell:(id)arg1 atCellCoord:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2;
- (void)popLastCell;
- (void)remapUIDsByColumnMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 rowMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg2 ownerMap:(const struct UUIDMap<TSP::UUIDMap> { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg3;
- (void)replaceCellAtIndex0:(id)arg1;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)rowUIDs;
- (void)saveToArchiver:(id)arg1;
- (void)setCellLists:(id)arg1;
- (void)setCellUIDs:(id)arg1;
- (void)setMayModifyFormulasInCells:(bool)arg1;
- (void)setMayModifyValuesReferencedByFormulas:(bool)arg1;
- (void)setShallowCopy:(bool)arg1;
- (void)setUidBased:(bool)arg1;
- (bool)shallowCopy;
- (id)shallowCopyToCoordFormUsingMap:(id)arg1;
- (id)uuidBasedCellMapByTableInfo:(id)arg1;
- (id)uuidBasedCellMapByTableInfo:(id)arg1 preserveHostCells:(bool)arg2;

@end
