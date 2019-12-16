/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTColumnAggregateList : TSKSosBase <NSCopying> {
    NSArray * _columnAggregates;
}

@property (nonatomic, readonly) NSArray *asArray;

- (void).cxx_destruct;
- (id)aggregatesOnLevel:(unsigned char)arg1;
- (id)asArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeToArchive:(struct ColumnAggregateListArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TST::ColumnAggregateArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ColumnAggregateListArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TST::ColumnAggregateArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg1;
- (id)initWithColumnAggregates:(id)arg1;

@end