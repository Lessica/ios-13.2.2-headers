/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFillSetIdentifier : NSObject {
    int  _fillPropertyType;
    int  _seriesIndex;
    NSString * _textureSetID;
}

@property (nonatomic, readonly) unsigned long long seriesIndex;
@property (nonatomic, readonly) NSString *textureSetFilename;
@property (nonatomic, readonly) NSString *textureSetID;

+ (id)identifierWithContentsOfDictionary:(id)arg1;
+ (id)identifierWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;
+ (id)identifierWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;
+ (id)instanceWithArchive:(const struct Chart3DFillArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct Chart3DLightingModelArchive {} *x6; int x7; unsigned int x8; }*)arg1 unarchiver:(id)arg2;
+ (id)instanceWithDEPRECATEDArchive:(const struct DEPRECATEDChart3DFillArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct FillArchive {} *x6; struct Chart3DLightingModelArchive {} *x7; int x8; unsigned int x9; }*)arg1 unarchiver:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)countOfSeriesInFillSet;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didInitFromSOS;
- (int)fillPropertyTypeFromName:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Chart3DFillArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct Chart3DLightingModelArchive {} *x6; int x7; unsigned int x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;
- (id)initWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isOnDemandResource;
- (bool)isSageCompatible;
- (bool)isStoredInLocalBundle;
- (id)loadPropertiesDictionary;
- (id)localDirectoryPath;
- (id)lowResLocalDirectoryPath;
- (id)lowResTextureSetFilename;
- (id)mipmapLocalDirectoryPath;
- (id)mipmapOnDemandResourceTag;
- (id)mipmapTextureSetFilename;
- (id)p_getPlist;
- (id)p_loadPlist;
- (id)p_plistData;
- (id)p_plistPath;
- (id)p_sageFillPropertyNames;
- (id)p_sageFillSetList;
- (id)p_sageSeriesNames;
- (id)p_version;
- (id)sageFillName;
- (id)sageSeriesName;
- (void)saveToArchive:(struct Chart3DFillArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct Chart3DLightingModelArchive {} *x6; int x7; unsigned int x8; }*)arg1 archiver:(id)arg2;
- (unsigned long long)seriesIndex;
- (unsigned long long)seriesIndexFromSageSeriesName:(id)arg1;
- (void)setSeriesIndex:(unsigned long long)arg1;
- (id)textureOnDemandResourceTag;
- (id)textureSetFilename;
- (id)textureSetID;

@end