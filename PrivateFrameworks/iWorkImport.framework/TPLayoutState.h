/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPLayoutState : NSObject <NSCopying> {
    unsigned long long  _bodyLength;
    unsigned long long  _documentPageIndex;
    unsigned long long  _lastPageCount;
    NSSet * _missingFonts;
    NSArray * _sectionHints;
    unsigned long long  _sectionIndex;
    unsigned long long  _sectionPageIndex;
}

@property (nonatomic) unsigned long long bodyLength;
@property (nonatomic) unsigned long long documentPageIndex;
@property (nonatomic) unsigned long long lastPageCount;
@property (nonatomic, copy) NSSet *missingFonts;
@property (nonatomic, copy) NSArray *sectionHints;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) unsigned long long sectionPageIndex;

- (void).cxx_destruct;
- (id)archivedLayoutStateInContext:(id)arg1;
- (unsigned long long)bodyLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)documentPageIndex;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct LayoutStateArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TP::SectionHintArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int x12; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLayoutState:(id)arg1;
- (unsigned long long)lastPageCount;
- (id)missingFonts;
- (void)reset;
- (void)saveToArchive:(struct LayoutStateArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TP::SectionHintArchive> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<std::__1::basic_string<char> > { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int x12; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (id)sectionHints;
- (unsigned long long)sectionIndex;
- (unsigned long long)sectionPageIndex;
- (void)setBodyLength:(unsigned long long)arg1;
- (void)setDocumentPageIndex:(unsigned long long)arg1;
- (void)setLastPageCount:(unsigned long long)arg1;
- (void)setMissingFonts:(id)arg1;
- (void)setSectionHints:(id)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;
- (void)setSectionPageIndex:(unsigned long long)arg1;

@end
