/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate> {
    TSCEReferenceTracker * _referenceTracker;
    NSMutableSet * _references;
    TSTTableInfo * _tableInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSCEReferenceTracker *referenceTracker;
@property (nonatomic, retain) NSMutableSet *references;
@property (readonly) Class superclass;
@property (nonatomic) TSTTableInfo *tableInfo;

- (void).cxx_destruct;
- (id)cellRangeWasInserted:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (void)encodeToArchive:(struct SortRuleReferenceTrackerArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct Reference {} *x5; }*)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct SortRuleReferenceTrackerArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct Reference {} *x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithTableInfo:(id)arg1 context:(id)arg2;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })ownerUID;
- (unsigned short)p_columnForTrackedReference:(id)arg1;
- (struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_3_1; unsigned short x_1_3_2; bool x_1_3_3; bool x_1_3_4; } x_1_2_1; struct TSUCellCoord { unsigned int x_2_3_1; unsigned short x_2_3_2; bool x_2_3_3; bool x_2_3_4; } x_1_2_2; } x_1_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; unsigned char x2; })p_referenceForColumnIndex:(unsigned short)arg1;
- (id)p_ruleReferenceForTrackedReference:(id)arg1;
- (id)referenceTracker;
- (void)referencedCellWasModified:(id)arg1;
- (id)references;
- (void)registerWithCalcEngine:(id)arg1;
- (void)setOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (void)setReferenceTracker:(id)arg1;
- (void)setReferences:(id)arg1;
- (void)setTableInfo:(id)arg1;
- (bool)shouldRewriteOnCellMerge;
- (bool)shouldRewriteOnRangeMove;
- (bool)shouldRewriteOnSort;
- (bool)shouldRewriteOnTableIDReassignment;
- (bool)shouldRewriteOnTectonicShift;
- (bool)shouldRewriteOnTranspose;
- (id)tableInfo;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (void)unregisterFromCalcEngine;
- (void)updateForSortRules:(id)arg1;

@end