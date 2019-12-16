/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABRTable : NSObject {
    struct OABTable2DArray<OABTableCell> { int x1; int x2; struct OABTableCell {} *x3; } * mCells;
    int  mColumnCount;
    struct OABTable2DArray<EshShape *> { int x1; int x2; struct EshShape {} **x3; } * mHorzLines;
    int  mRowCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  mScale;
    ESDContainer * mSrcTable;
    OABReaderState * mState;
    OADTable * mTgtTable;
    struct OABTable2DArray<EshShape *> { int x1; int x2; struct EshShape {} **x3; } * mVertLines;
    OABTableSortedIntArray * mXCoords;
    OABTableSortedIntArray * mYCoords;
}

- (void).cxx_destruct;
- (void)createTargetTableContents;
- (void)dealloc;
- (id)initWithSourceTable:(id)arg1 targetTable:(id)arg2 state:(id)arg3;
- (void)map;
- (void)mapScale;
- (void)readAnchor;
- (void)readCellsAndLines;
- (void)readCoordinates;
- (id)readStrokeFromShape:(struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned int, EshOpt::Value, CsLess<unsigned int> > { struct map<unsigned int, EshOpt::Value, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, EshOpt::Value> > > { struct __tree<std::__1::__value_type<unsigned int, EshOpt::Value>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, EshOpt::Value> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_5_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, EshOpt::Value>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_7_1; } x_2_6_1; } x_1_5_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, EshOpt::Value>, CsLess<unsigned int>, true> > { unsigned long long x_3_6_1; } x_1_5_3; } x_1_4_1; } x_4_3_1; } x_1_2_4; } x_3_1_1; } x3; }*)arg1;
- (void)validateTable;

@end
