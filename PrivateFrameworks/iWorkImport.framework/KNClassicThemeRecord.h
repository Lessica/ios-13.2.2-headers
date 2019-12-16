/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNClassicThemeRecord : TSPObject {
    NSString * _UUID;
    NSMutableArray * _masters;
    KNClassicStylesheetRecord * _stylesheetRecord;
}

@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, readonly) NSArray *masters;
@property (nonatomic, retain) KNClassicStylesheetRecord *stylesheetRecord;

- (void).cxx_destruct;
- (id)UUID;
- (void)addMaster:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromArchive:(const struct ClassicThemeRecordArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Reference {} *x7; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)masters;
- (void)saveToArchive:(struct ClassicThemeRecordArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct Reference {} *x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setStylesheetRecord:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)stylesheetRecord;

@end