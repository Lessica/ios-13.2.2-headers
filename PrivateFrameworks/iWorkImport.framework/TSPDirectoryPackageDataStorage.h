/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {
    unsigned long long  _cachedEncodedLength;
    <TSPCryptoInfo> * _decryptionInfo;
    bool  _gilligan_isRemote;
    bool  _isMissingData;
    TSPDirectoryPackage * _package;
    unsigned char  _packageIdentifier;
    NSString * _path;
}

@property (nonatomic, readonly) TSPDirectoryPackage *package;

- (void).cxx_destruct;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (unsigned long long)encodedLength;
- (bool)gilligan_isRemote;
- (id)init;
- (id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3;
- (bool)isInPackage:(id)arg1;
- (bool)isMissingData;
- (unsigned long long)length;
- (bool)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(bool)arg3;
- (id)package;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)arg1;
- (void)performReadWithAccessor:(id /* block */)arg1;
- (void)setGilligan_isRemote:(bool)arg1;
- (void)setIsMissingData:(bool)arg1;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_7_1_1; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_8_1_1; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_9_1_1; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_10_1_1; } x10; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_11_1_1; } x11; }*)arg3 preferredFilename:(id)arg4 error:(id*)arg5;

@end