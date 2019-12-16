/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideCollectionSelection : TSKSelection {
    KNSlideNode * _slideNodeToEdit;
    NSOrderedSet * _slideNodes;
}

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) KNSlideNode *slideNodeToEdit;
@property (nonatomic, readonly) NSOrderedSet *slideNodes;

+ (Class)archivedSelectionClass;

- (void).cxx_destruct;
- (id)UUIDDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct SlideCollectionSelectionArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<KN::SlideCollectionSelectionArchive_OutlineSelection> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct Reference {} *x7; struct Range {} *x8; }*)arg1 unarchiver:(id)arg2;
- (id)initWithSlideNode:(id)arg1;
- (id)initWithSlideNodes:(id)arg1 slideNodeToEdit:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct SlideCollectionSelectionArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<KN::SlideCollectionSelectionArchive_OutlineSelection> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct Reference {} *x7; struct Range {} *x8; }*)arg1 archiver:(id)arg2;
- (id)slideNodeToEdit;
- (id)slideNodes;

@end