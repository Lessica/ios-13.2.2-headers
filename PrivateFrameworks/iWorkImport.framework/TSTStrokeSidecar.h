/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeSidecar : TSPObject <TSTCustomStrokeProviding> {
    NSPointerArray * _bottomRowStrokes;
    NSPointerArray * _leftColumnStrokes;
    int  _maxOrder;
    NSPointerArray * _rightColumnStrokes;
    NSPointerArray * _topRowStrokes;
}

@property (nonatomic, readonly) NSPointerArray *bottomRowStrokes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSPointerArray *leftColumnStrokes;
@property (nonatomic) int maxOrder;
@property (nonatomic, readonly) NSPointerArray *rightColumnStrokes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSPointerArray *topRowStrokes;

- (void).cxx_destruct;
- (void)accumulateCellBordersConcurrently:(struct vector<TSTCell *, std::__1::allocator<TSTCell *> > { id *x1; id x2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x3; void*x4; BOOL x5; out void*x6; void*x7; const void*x8; short x9; short x10; void*x11; double x12; void*x13; void*x14; void*x15; int x16; const void*x17; void*x18; unsigned short x19; void*x20; unsigned char x21; void*x22; long x23; long x24; void*x25; char *x26; void*x27; void*x28; short x29; void*x30; const out in void*x31; void*x32; char *x33; void*x34; void*x35; short x36; void*x37; double x38; SEL x39; SEL x40; void*x41; void*x42; void*x43; SEL x44; SEL x45; void*x46; long x47; long x48; out BOOL x49; void*x50; void*x51; out const void*x52; void*x53; unsigned short x54; void*x55; unsigned char x56; void*x57; long x58; long x59; void*x60; char *x61; void*x62; void*x63; void*x64; void*x65; id *x66; })arg1 inRow:(struct TSUModelRowIndex { unsigned int x1; })arg2 atColumns:(struct vector<TSUModelColumnIndex, std::__1::allocator<TSUModelColumnIndex> > { struct TSUModelColumnIndex {} *x1; struct TSUModelColumnIndex {} *x2; struct __compressed_pair<TSUModelColumnIndex *, std::__1::allocator<TSUModelColumnIndex> > { struct TSUModelColumnIndex {} *x_3_1_1; } x3; }*)arg3;
- (id)bottomRowStrokes;
- (id)cellBorderAtCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (void)enumerateStrokesInRegion:(id)arg1 usingTopStrokeBlock:(id /* block */)arg2 usingBottomStrokeBlock:(id /* block */)arg3 usingLeftStrokeBlock:(id /* block */)arg4 usingRightStrokeBlock:(id /* block */)arg5;
- (void)flattenStrokeOrder;
- (id)initForUpgradeWithTableModel:(id)arg1;
- (id)initWithTableModel:(id)arg1;
- (void)insertColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)insertRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)leftColumnStrokes;
- (void)loadFromUnarchiver:(id)arg1;
- (int)maxOrder;
- (void)moveColumnIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(unsigned int)arg2;
- (id)p_flattenMajorStrokeLayer:(id)arg1 minorStrokeLayer:(id)arg2;
- (void)p_setBottomStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (void)p_setLeftStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (void)p_setRightStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (void)p_setStroke:(id)arg1 order:(int)arg2 inStrokesArray:(id)arg3 atIndex:(unsigned int)arg4 atRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg5;
- (void)p_setTopStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })p_strokeRect;
- (void)removeColumns:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)rightColumnStrokes;
- (void)saveToArchiver:(id)arg1;
- (void)setBordersWithCellMap:(id)arg1;
- (void)setBordersWithConcurrentCellMap:(id)arg1 forTableInfo:(id)arg2;
- (void)setCellBorder:(id)arg1 atCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg2;
- (void)setMaxOrder:(int)arg1;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned int)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg4;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned short)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg4;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned short)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg4;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned int)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg4;
- (id)strokeLayerForBottomOfRow:(unsigned int)arg1;
- (id)strokeLayerForLeftSideOfColumn:(unsigned short)arg1;
- (id)strokeLayerForRightSideOfColumn:(unsigned short)arg1;
- (id)strokeLayerForTopOfRow:(unsigned int)arg1;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (id)topRowStrokes;
- (void)updateForTableSize:(struct { unsigned int x1; unsigned int x2; })arg1;

@end
