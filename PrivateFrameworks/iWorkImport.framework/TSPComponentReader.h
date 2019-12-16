/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentReader : TSPReader <TSPComponentParserDelegate> {
    struct { 
        unsigned int isReadingFromDocument : 1; 
        unsigned int ignoreUnknownContent : 1; 
        unsigned int ignoreVersionChecking : 1; 
        unsigned int hasIncompatibleVersion : 1; 
        unsigned int acceptUnknownDocumentObject : 1; 
    }  _flags;
    <TSUStreamReadChannel> * _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)componentParser:(id)arg1 didReadArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::MessageInfo> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned long long x6; bool x7; }*)arg2 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg3 error:(id*)arg4;
- (void)dealloc;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 readChannel:(id)arg4 ignoreUnknownContent:(bool)arg5 ignoreVersionChecking:(bool)arg6;
- (id)newUnarchiverWithArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::MessageInfo> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned long long x6; bool x7; }*)arg1 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg2 isUnknownObject:(bool*)arg3;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct RepeatedField<unsigned long long> { int x_8_1_1; int x_8_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { int x_10_1_1; int x_10_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_10_1_3; } x10; int x11; struct RepeatedField<unsigned int> { int x_12_1_1; int x_12_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_12_1_3; } x12; int x13; struct RepeatedPtrField<TSP::FieldPath> { struct Arena {} *x_14_1_1; int x_14_1_2; int x_14_1_3; struct Rep {} *x_14_1_4; } x14; }*)arg2 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; }*)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(struct auto_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg5 unknownContent:(id)arg6;
- (bool)shouldProceedParsingOnFailure;
- (id)unknownMessageFromMessageInfo:(const struct MessageInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct RepeatedField<unsigned long long> { int x_8_1_1; int x_8_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { int x_10_1_1; int x_10_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_10_1_3; } x10; int x11; struct RepeatedField<unsigned int> { int x_12_1_1; int x_12_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_12_1_3; } x12; int x13; struct RepeatedPtrField<TSP::FieldPath> { struct Arena {} *x_14_1_1; int x_14_1_2; int x_14_1_3; struct Rep {} *x_14_1_4; } x14; }*)arg1 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg2;
- (const struct MessageInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedField<unsigned int> { int x_5_1_1; int x_5_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_5_1_3; } x5; int x6; struct RepeatedPtrField<TSP::FieldInfo> { struct Arena {} *x_7_1_1; int x_7_1_2; int x_7_1_3; struct Rep {} *x_7_1_4; } x7; struct RepeatedField<unsigned long long> { int x_8_1_1; int x_8_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { int x_10_1_1; int x_10_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_10_1_3; } x10; int x11; struct RepeatedField<unsigned int> { int x_12_1_1; int x_12_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_12_1_3; } x12; int x13; struct RepeatedPtrField<TSP::FieldPath> { struct Arena {} *x_14_1_1; int x_14_1_2; int x_14_1_3; struct Rep {} *x_14_1_4; } x14; }*)unknownObjectMessageInfo;
- (id)unknownObjectUnarchiverArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::MessageInfo> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned long long x6; bool x7; }*)arg1 stream:(struct DispatchDataInputStream { int (**x1)(); id x2; unsigned long long x3; id x4; char *x5; }*)arg2;

@end