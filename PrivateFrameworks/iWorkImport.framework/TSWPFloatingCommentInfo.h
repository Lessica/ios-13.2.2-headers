/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFloatingCommentInfo : TSWPShapeInfo <TSDComment> {
    TSDCommentStorage * _commentStorage;
}

@property (nonatomic, readonly) int annotationDisplayStringType;
@property (nonatomic, readonly) int annotationType;
@property (nonatomic, readonly) NSString *annotationUUID;
@property (nonatomic, retain) TSKAnnotationAuthor *author;
@property (nonatomic, readonly) double commentScalingMultiplier;
@property (nonatomic, retain) TSDCommentStorage *commentStorage;
@property (nonatomic, readonly) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHighlight;
@property (nonatomic, copy) TSDCommentStorage *storage;
@property (readonly) Class superclass;

+ (id)bezierPathForExportCommentOutline;
+ (id)commentInfoWithContext:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 storage:(id)arg3;
+ (struct CGSize { double x1; double x2; })commentInitialSizeWithContext:(id)arg1;
+ (id)commentParagraphStyleForStylesheet:(id)arg1;
+ (id)commentParagraphStyleForStylesheet:(id)arg1 scalingMultiplier:(double)arg2;
+ (id)commentParagraphStyleIdentifierForFontSize:(unsigned long long)arg1;
+ (id)commentStyleIdentifier;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)arg1;
+ (id)p_commentInfoWithContext:(id)arg1 geometry:(id)arg2 storage:(id)arg3;
+ (id)p_commentParagraphStyleForStylesheet:(id)arg1 fontSize:(unsigned long long)arg2;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)arg1;
+ (id)p_defaultFill;
+ (id)p_defaultPadding;
+ (id)p_defaultShadow;
+ (id)p_defaultStroke;
+ (void)upgradeCommentInfoStorage:(id)arg1;
+ (void)upgradeCommentInfoStyle:(id)arg1;
+ (void)upgradeCommentParagraphStylesForStylesheet:(id)arg1 withCommentScale:(double)arg2;

- (void).cxx_destruct;
- (int)annotationDisplayStringType;
- (int)annotationType;
- (id)annotationUUID;
- (id)author;
- (double)commentScalingMultiplier;
- (id)commentStorage;
- (void)commentWillBeAddedToDocumentRoot;
- (id)copyWithContext:(id)arg1;
- (id)creationDateString;
- (id)date;
- (Class)editorClass;
- (int)elementKind;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 commentStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5 commentStorage:(id)arg6;
- (bool)isAllowedInGroups;
- (bool)isFloatingComment;
- (bool)isHighlight;
- (bool)isInDocument;
- (bool)isLockable;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct CommentInfoArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ShapeInfoArchive {} *x5; struct Reference {} *x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)pathSourceForExportCommentOutline;
- (Class)repClass;
- (void)saveToArchive:(struct CommentInfoArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct ShapeInfoArchive {} *x5; struct Reference {} *x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCommentStorage:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (bool)supportsAttachedComments;
- (bool)supportsHyperlinks;
- (double)transformGeometryRatioForTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;

@end
