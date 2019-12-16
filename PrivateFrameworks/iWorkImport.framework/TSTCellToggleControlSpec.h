/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellToggleControlSpec : TSTCellSpec

+ (id)cellSpecFromTSKFormat:(id)arg1;
+ (id)instanceWithArchive:(const struct CellSpecArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct FormulaArchive {} *x5; struct Reference {} *x6; double x7; double x8; double x9; unsigned int x10; bool x11; bool x12; }*)arg1 unarchiver:(id)arg2;
+ (id)toggleControlSpec;

- (id)asToggleControlSpec;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct CellSpecArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct FormulaArchive {} *x5; struct Reference {} *x6; double x7; double x8; double x9; unsigned int x10; bool x11; bool x12; }*)arg1 unarchiver:(id)arg2;
- (int)interactionType;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct CellSpecArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct FormulaArchive {} *x5; struct Reference {} *x6; double x7; double x8; double x9; unsigned int x10; bool x11; bool x12; }*)arg1 archiver:(id)arg2;
- (bool)validateFormatAndValue:(id)arg1;

@end
