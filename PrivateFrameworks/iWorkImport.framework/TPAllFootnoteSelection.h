/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPAllFootnoteSelection : TSKSelection

+ (Class)archivedSelectionClass;

- (id)initWithArchive:(const struct AllFootnoteSelectionArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct AllFootnoteSelectionArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; }*)arg1 archiver:(id)arg2;

@end