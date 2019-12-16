/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long  _cachedNumberOfGroups;
    bool  _cachedNumberOfGroupsValid;
    int  _direction;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) unsigned long long categoryLabelFormulaType;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) unsigned long long numberOfDataFormulas;
@property (nonatomic, readonly) unsigned long long seriesLabelFormulaType;

+ (struct vector<TNChartFormulaType, std::__1::allocator<TNChartFormulaType> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<TNChartFormulaType *, std::__1::allocator<TNChartFormulaType> > { unsigned long long *x_3_1_1; } x3; })persistentFormulaTypes;

- (void).cxx_destruct;
- (id)areaFormulaWithCalcEngine:(id)arg1 inOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (unsigned long long)categoryLabelFormulaType;
- (void)clearCachesForCalculationEngine:(id)arg1;
- (id)copyByRewriting:(bool)arg1 withCalcEngine:(id)arg2 andHostUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (bool)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)arg1 inOwner:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)description;
- (int)direction;
- (id)formulaForID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (id)formulaListForType:(unsigned long long)arg1;
- (id)formulaTypeEnumerator;
- (bool)formulasOfType:(unsigned long long)arg1 areAllStaticWithCalcEngine:(id)arg2 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3;
- (id)init;
- (id)initWithArchive:(const struct ChartMediatorFormulaStorage { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_8_1_1; int x_8_1_2; int x_8_1_3; struct Rep {} *x_8_1_4; } x8; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_9_1_1; int x_9_1_2; int x_9_1_3; struct Rep {} *x_9_1_4; } x9; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_10_1_1; int x_10_1_2; int x_10_1_3; struct Rep {} *x_10_1_4; } x10; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_11_1_1; int x_11_1_2; int x_11_1_3; struct Rep {} *x_11_1_4; } x11; }*)arg1 unarchiver:(id)arg2;
- (id)initWithChartFormulaStorage:(id)arg1;
- (id)initWithDirection:(int)arg1;
- (bool)isEqualToFormulaStorage:(id)arg1;
- (bool)labelFormulasAreAllStaticWithCalcEngine:(id)arg1 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)numberOfDataFormulas;
- (unsigned long long)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (unsigned long long)numberOfSeries;
- (unsigned long long)numberOfTotalCategoryLabelsWithCalcEngine:(id)arg1 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (unsigned long long)p_calculateNumberOfGroupsWithCalcEngine:(id)arg1 inEntity:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (void)saveToArchive:(struct ChartMediatorFormulaStorage { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_8_1_1; int x_8_1_2; int x_8_1_3; struct Rep {} *x_8_1_4; } x8; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_9_1_1; int x_9_1_2; int x_9_1_3; struct Rep {} *x_9_1_4; } x9; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_10_1_1; int x_10_1_2; int x_10_1_3; struct Rep {} *x_10_1_4; } x10; struct RepeatedPtrField<TSCE::FormulaArchive> { struct Arena {} *x_11_1_1; int x_11_1_2; int x_11_1_3; struct Rep {} *x_11_1_4; } x11; }*)arg1 archiver:(id)arg2;
- (unsigned long long)seriesLabelFormulaType;

@end