/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUUUIDSetStore : NSObject <NSCopying> {
    unsigned int  _highestIndex;
    NSMutableDictionary * _indexesUsingUuid;
    NSLock * _lock;
    TSUSparseArray * _uuidSetForIndex;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)_foreachUuidSet:(id /* block */)arg1;
- (unsigned int)addSet:(id)arg1;
- (unsigned int)addSetForSingleUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (unsigned int)addSetForUuids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (bool)containsUuidSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeToArchive:(struct UuidSetStoreArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSCE::UuidSetStoreArchive_UuidSet> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg1;
- (void)foreachUuidSet:(id /* block */)arg1;
- (unsigned int)indexOfSet:(id)arg1;
- (id)indexesUsingAnyOfUuids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (id)indexesUsingUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (id)init;
- (id)initFromMessage:(const struct UuidSetStoreArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSCE::UuidSetStoreArchive_UuidSet> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; }*)arg1;
- (void)p_addSet:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeSetAtIndex:(unsigned int)arg1;
- (id)setForIndex:(unsigned int)arg1;
- (id)subsetStoreForIndexes:(id)arg1;

@end