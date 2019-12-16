/* Generated by RuntimeBrowser.
 */

@protocol TSTAdditionalHiddenRowColumnProviding <NSObject>

@required

- (bool)anyHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 forAction:(unsigned char)arg2;
- (bool)hasHiddenColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (bool)hasHiddenColumns;
- (bool)hasHiddenRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (bool)hasHiddenRows;
- (bool)hasUserHiddenColumns;
- (bool)hasUserHiddenRows;
- (bool)hideColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (bool)hideRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;
- (unsigned char)hidingActionForColumnAtIndex:(unsigned short)arg1;
- (unsigned char)hidingActionForRowAtIndex:(unsigned int)arg1;
- (NSMutableIndexSet *)indexesOfCollapsedRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfFilteredRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfUserHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfUserHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfUserVisibleRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInCellRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesOfVisibleColumnsInColumnRange:(NSIndexSet *)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (NSIndexSet *)indexesOfVisibleRowsInCellRegion:(TSTCellRegion *)arg1;
- (NSIndexSet *)indexesOfVisibleRowsInRowRange:(NSIndexSet *)arg1;
- (unsigned int)numberOfHiddenColumns;
- (unsigned int)numberOfHiddenColumnsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned int)numberOfHiddenRows;
- (unsigned int)numberOfHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned int)numberOfUserHiddenColumns;
- (unsigned int)numberOfUserHiddenRows;
- (unsigned int)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (bool)showColumnAtIndex:(unsigned short)arg1 forAction:(unsigned char)arg2;
- (bool)showRowAtIndex:(unsigned int)arg1 forAction:(unsigned char)arg2;

@end
