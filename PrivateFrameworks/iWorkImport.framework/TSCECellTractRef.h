/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECellTractRef : NSObject <NSCopying> {
    struct TSUCellTractRef { 
        struct TSUIndexSet { 
            unsigned int _isEmpty : 1; 
            unsigned int _hasSingleRange : 1; 
            struct TSUIndexRange { 
                long long _begin; 
                long long _end; 
            } _singleRange; 
            struct { /* ? */ } *_multipleRanges; 
        } _columns; 
        struct TSUIndexSet { 
            unsigned int _isEmpty : 1; 
            unsigned int _hasSingleRange : 1; 
            struct TSUIndexRange { 
                long long _begin; 
                long long _end; 
            } _singleRange; 
            struct { /* ? */ } *_multipleRanges; 
        } _rows; 
        struct UUIDData<TSP::UUIDData> { 
            union { 
                unsigned char _uuid[16]; 
                struct { 
                    unsigned char byte0; 
                    unsigned char byte1; 
                    unsigned char byte2; 
                    unsigned char byte3; 
                    unsigned char byte4; 
                    unsigned char byte5; 
                    unsigned char byte6; 
                    unsigned char byte7; 
                    unsigned char byte8; 
                    unsigned char byte9; 
                    unsigned char byte10; 
                    unsigned char byte11; 
                    unsigned char byte12; 
                    unsigned char byte13; 
                    unsigned char byte14; 
                    unsigned char byte15; 
                } _cfuuid; 
                struct { 
                    unsigned long long _lower; 
                    unsigned long long _upper; 
                } ; 
            } ; 
        } _tableUID; 
        unsigned char _spanType; 
        struct TSUPreserveFlags { 
            unsigned char _flags; 
        } _preserveFlags; 
        bool _preserveRectangular; 
        bool _mixedColumnStartedWithPreserve; 
        bool _mixedRowStartedWithPreserve; 
    }  _cppCellTractRef;
}

@property (nonatomic) struct TSUCellTractRef { struct TSUIndexSet { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; struct TSUIndexRange { long long x_3_2_1; long long x_3_2_2; } x_1_1_3; struct { /* ? */ } *x_1_1_4; } x1; struct TSUIndexSet { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; struct TSUIndexRange { long long x_3_2_1; long long x_3_2_2; } x_2_1_3; struct { /* ? */ } *x_2_1_4; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; unsigned char x4; struct TSUPreserveFlags { unsigned char x_5_1_1; } x5; bool x6; bool x7; bool x8; } cppCellTractRef;
@property (nonatomic) bool mixedColumnStartedWithPreserve;
@property (nonatomic) bool mixedRowStartedWithPreserve;
@property (nonatomic) struct TSUPreserveFlags { unsigned char x1; } preserveFlags;
@property (nonatomic) bool preserveRectangular;
@property (nonatomic) bool spansAllColumns;
@property (nonatomic) bool spansAllRows;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } tableUID;

+ (id)cellTractRefWithUidTractList:(id)arg1 onTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 preserveFlags:(struct TSUPreserveFlags { unsigned char x1; })arg3 rewriteContext:(struct TSCEFormulaRewriteContext { id x1; struct vector<TSCEFormulaRewriteContextRecord, std::__1::allocator<TSCEFormulaRewriteContextRecord> > { struct TSCEFormulaRewriteContextRecord {} *x_2_1_1; struct TSCEFormulaRewriteContextRecord {} *x_2_1_2; struct __compressed_pair<TSCEFormulaRewriteContextRecord *, std::__1::allocator<TSCEFormulaRewriteContextRecord> > { struct TSCEFormulaRewriteContextRecord {} *x_3_2_1; } x_2_1_3; } x2; }*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addColumn:(unsigned short)arg1;
- (void)addColumnRange:(const struct TSUIndexRange { long long x1; long long x2; }*)arg1;
- (void)addColumns:(const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)arg1;
- (void)addRow:(unsigned int)arg1;
- (void)addRowRange:(const struct TSUIndexRange { long long x1; long long x2; }*)arg1;
- (void)addRows:(const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)arg1;
- (void)adjustIndexesBy:(const struct TSUColumnRowOffset { int x1; int x2; }*)arg1;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })bottomRight;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct TSUCellCoord { unsigned int x_2_1_1; unsigned short x_2_1_2; bool x_2_1_3; bool x_2_1_4; } x2; })boundingRange;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })boundingRangeRef;
- (id)collapseOutColumnIndexes:(id)arg1;
- (id)collapseOutRowIndexes:(id)arg1;
- (const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)columns;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })coordAtColumnOffset:(unsigned int)arg1 rowOffset:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct TSUCellTractRef { struct TSUIndexSet { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; struct TSUIndexRange { long long x_3_2_1; long long x_3_2_2; } x_1_1_3; struct { /* ? */ } *x_1_1_4; } x1; struct TSUIndexSet { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; struct TSUIndexRange { long long x_3_2_1; long long x_3_2_2; } x_2_1_3; struct { /* ? */ } *x_2_1_4; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; unsigned char x4; struct TSUPreserveFlags { unsigned char x_5_1_1; } x5; bool x6; bool x7; bool x8; })cppCellTractRef;
- (id)debugDescription;
- (id)description;
- (bool)edgeExpandTractUsingIncludeUidTract:(id)arg1 resolver:(id)arg2 forRows:(bool)arg3 isInverse:(bool)arg4;
- (id)edgeExpandUsingIndexes:(id)arg1 forRows:(bool)arg2;
- (bool)edgeExpandUsingMovingUids:(id)arg1 tractList:(id)arg2;
- (id)expandUsingIndexes:(id)arg1 forRows:(bool)arg2;
- (id)fillInColumnGapsUsingIndexes:(id)arg1;
- (id)fillInRowGapsUsingIndexes:(id)arg1;
- (void)foreachAnyRef:(id /* block */)arg1;
- (void)foreachCellRect:(id /* block */)arg1;
- (void)foreachRangeRef:(id /* block */)arg1;
- (bool)hasTableUID;
- (unsigned long long)hash;
- (id)initWithCellRefVector:(const struct vector<TSCECellRef, std::__1::allocator<TSCECellRef> > { struct TSCECellRef {} *x1; struct TSCECellRef {} *x2; struct __compressed_pair<TSCECellRef *, std::__1::allocator<TSCECellRef> > { struct TSCECellRef {} *x_3_1_1; } x3; }*)arg1;
- (id)initWithColumns:(const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)arg1 rows:(const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)arg2 tableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3;
- (id)initWithCppCellTractRef:(const struct TSUCellTractRef { struct TSUIndexSet { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; struct TSUIndexRange { long long x_3_2_1; long long x_3_2_2; } x_1_1_3; struct { /* ? */ } *x_1_1_4; } x1; struct TSUIndexSet { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; struct TSUIndexRange { long long x_3_2_1; long long x_3_2_2; } x_2_1_3; struct { /* ? */ } *x_2_1_4; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; unsigned char x4; struct TSUPreserveFlags { unsigned char x_5_1_1; } x5; bool x6; bool x7; bool x8; }*)arg1;
- (id)initWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)initWithTopLeft:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg1 bottomRight:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg2;
- (id)initWithTopLeft:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg1 bottomRight:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg2 tableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3;
- (bool)insertColumnGapsAtIndexes:(id)arg1;
- (bool)insertRowGapsAtIndexes:(id)arg1;
- (void)intersectWithCellRect:(const struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; }*)arg1;
- (void)intersectWithCellRectIgnoringSpanning:(const struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPreservedColumn:(unsigned short)arg1 preferStart:(bool)arg2;
- (bool)isPreservedRow:(unsigned int)arg1 preferStart:(bool)arg2;
- (bool)isRectangularRange;
- (bool)isSingleCell;
- (bool)isSingleCellOrSpanningRange;
- (bool)isValid;
- (bool)mixedColumnStartedWithPreserve;
- (bool)mixedRowStartedWithPreserve;
- (unsigned int)numColumns;
- (unsigned int)numRows;
- (struct TSUPreserveFlags { unsigned char x1; })preserveFlags;
- (struct TSUPreserveFlags { unsigned char x1; })preserveFlagsForCoord:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg1 preferStart:(bool)arg2;
- (bool)preserveRectangular;
- (void)removeColumnRange:(const struct TSUIndexRange { long long x1; long long x2; }*)arg1;
- (void)removeColumns:(const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)arg1;
- (void)removeRowRange:(const struct TSUIndexRange { long long x1; long long x2; }*)arg1;
- (void)removeRows:(const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)arg1;
- (const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)rows;
- (void)setBottomRight:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg1;
- (void)setColumns:(const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)arg1;
- (void)setCppCellTractRef:(struct TSUCellTractRef { struct TSUIndexSet { unsigned int x_1_1_1 : 1; unsigned int x_1_1_2 : 1; struct TSUIndexRange { long long x_3_2_1; long long x_3_2_2; } x_1_1_3; struct { /* ? */ } *x_1_1_4; } x1; struct TSUIndexSet { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; struct TSUIndexRange { long long x_3_2_1; long long x_3_2_2; } x_2_1_3; struct { /* ? */ } *x_2_1_4; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; unsigned char x4; struct TSUPreserveFlags { unsigned char x_5_1_1; } x5; bool x6; bool x7; bool x8; })arg1;
- (void)setMixedColumnStartedWithPreserve:(bool)arg1;
- (void)setMixedRowStartedWithPreserve:(bool)arg1;
- (void)setPreserveFlags:(struct TSUPreserveFlags { unsigned char x1; })arg1;
- (void)setPreserveFlagsOnSubrange:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (void)setPreserveRectangular:(bool)arg1;
- (void)setRows:(const struct TSUIndexSet { unsigned int x1 : 1; unsigned int x2 : 1; struct TSUIndexRange { long long x_3_1_1; long long x_3_1_2; } x3; struct { /* ? */ } *x4; }*)arg1;
- (void)setSpansAllColumns:(bool)arg1;
- (void)setSpansAllRows:(bool)arg1;
- (void)setTableUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setTopLeft:(const struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; }*)arg1;
- (bool)spansAllColumns;
- (bool)spansAllRows;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })tableUID;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })topLeft;
- (bool)transpose;
- (struct UUIDRect<TSP::UUIDRect> { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_1_1_1; struct UUIDData<TSP::UUIDData> {} *x_1_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_2_1_1; struct UUIDData<TSP::UUIDData> {} *x_2_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_2_1_3; } x2; })uidTractWithCalcEngine:(id)arg1 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;

@end