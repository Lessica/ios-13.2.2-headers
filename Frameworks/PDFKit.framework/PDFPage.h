/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPage : NSObject <NSCopying> {
    PDFPagePrivate * _private;
}

@property (nonatomic, readonly) NSArray *annotations;
@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic) bool displaysAnnotations;
@property (nonatomic, readonly) PDFDocument *document;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long numberOfCharacters;
@property (nonatomic, readonly) struct CGPDFPage { }*pageRef;
@property (nonatomic) long long rotation;
@property (nonatomic, readonly) NSString *string;

// Image: /System/Library/Frameworks/PDFKit.framework/PDFKit

+ (bool)_getBooleanProperty:(id)arg1 forKey:(id)arg2 withDefault:(bool)arg3;
+ (id)fontWithPDFFont:(struct CGPDFFont { }*)arg1 size:(float)arg2;
+ (bool)isExcludingAKAnnotationRenderingForThisThread;
+ (bool)isNativeRotationDrawingEnabledForThisThread;
+ (void)setExcludingAKAnnotationRenderingForThisThread:(bool)arg1;
+ (void)setNativeRotationDrawingEnabledForThisThread:(bool)arg1;
+ (void)setShouldHideAnnotationsForThisThread:(bool)arg1;
+ (bool)shouldHideAnnotationsForThisThread;

- (void).cxx_destruct;
- (void)_addBox:(int)arg1 toDictionary:(struct __CFDictionary { }*)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_addWidgetAnnotationToLookupDictionary:(id)arg1;
- (void)_buildPageLayout;
- (void)_commonInit;
- (id)_createAttributedString;
- (unsigned long long)_documentIndex;
- (void)_drawAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)_drawBookmarkInContext:(struct CGContext { }*)arg1;
- (void)_drawPageCGImageInContext:(struct CGContext { }*)arg1 withDisplayBox:(long long)arg2;
- (void)_drawPageImageInContext:(struct CGContext { }*)arg1 withRotation:(bool)arg2 withDisplayBox:(long long)arg3;
- (void)_drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 withRotation:(bool)arg3 isThumbnail:(bool)arg4 withAnnotations:(bool)arg5 withBookmark:(bool)arg6 withDelegate:(id)arg7;
- (struct CGImage { }*)_newCGImageWithBox:(long long)arg1 bitmapSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 offset:(struct CGPoint { double x1; double x2; })arg4 backgroundColor:(id)arg5 withRotation:(bool)arg6 withAntialiasing:(bool)arg7 withAnnotations:(bool)arg8 withBookmark:(bool)arg9 withDelegate:(id)arg10;
- (void)_postAnnotationsChangedNotificationCoalesced;
- (void)_removeWidgetAnnotationFromLookupDictionary:(id)arg1;
- (id)_rvItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_scanData:(id)arg1;
- (bool)_writeToConsumer:(struct CGDataConsumer { }*)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1 withUndo:(bool)arg2;
- (void)addAnnotationFormField:(id)arg1;
- (void)addScannedAnnotation:(id)arg1;
- (bool)akDidSetupRealPageModelController;
- (id)akPageAdaptor;
- (id)allAnnotations;
- (id)annotationAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)annotationAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)annotationChanges;
- (id)annotationWithUUID:(id)arg1;
- (id)annotations;
- (id)annotationsForFieldName:(id)arg1;
- (id)attributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForBox:(long long)arg1;
- (void)changedAnnotation:(id)arg1;
- (id)changedAnnotations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })characterBoundsAtIndex:(long long)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)clearAnnotationChanges;
- (bool)colorWidgetBackgrounds;
- (bool)columnAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)columnAtPointIfAvailable:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })columnFrameAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPDFPage { }*)createPageRefFromImage;
- (id)dataRepresentation;
- (id)ddScannerResults;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (bool)didChangeBounds;
- (bool)disableUndoManagerForAK;
- (bool)displaysAnnotations;
- (id)document;
- (void)drawBurnedInAnnotationsWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2 isThumbnail:(bool)arg3;
- (void)drawWithBox:(long long)arg1 toContext:(struct CGContext { }*)arg2;
- (void)enableUndoManagerForAK:(bool)arg1;
- (void)fetchPageLayoutOnQueue:(id)arg1;
- (struct __CFDictionary { }*)gcCreateBoxDictionary;
- (void)getAnnotations;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getDrawingTransformForBox:(long long)arg1;
- (bool)hasArtBox;
- (bool)hasBleedBox;
- (bool)hasCropBox;
- (bool)hasPopups;
- (bool)hasTrimBox;
- (id)imageOfSize:(struct CGSize { double x1; double x2; })arg1 forBox:(long long)arg2 withOptions:(id)arg3;
- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1;
- (id)initWithPageRef:(struct CGPDFPage { }*)arg1;
- (void)insertAnnotation:(id)arg1 atIndex:(long long)arg2;
- (bool)isBookmarked;
- (id)label;
- (void)lazilyLoadAnnotations;
- (unsigned long long)numberOfCharacters;
- (struct CGColor { }*)pageBackgroundColorHint;
- (struct CGPDFLayout { }*)pageLayout;
- (struct CGPDFLayout { }*)pageLayoutIfAvail;
- (struct CGPDFPage { }*)pageRef;
- (id)pdfScannerResultAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)pdfScannerResultAtPoint:(struct CGPoint { double x1; double x2; })arg1 onPageLayer:(id)arg2;
- (void)postAnnotationsChangedNotification;
- (void)printActivePageAnnotations;
- (void)purgeAll;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotation:(id)arg1 atIndex:(long long)arg2;
- (void)removeAnnotation:(id)arg1 withUndo:(bool)arg2;
- (void)resetChangedAnnotations;
- (long long)rotation;
- (id)rvItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)rvItemAtPoint:(struct CGPoint { double x1; double x2; })arg1 onPageLayer:(id)arg2;
- (id)rvItemWithPDFScannerResult:(id)arg1;
- (id)scannedAnnotationAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)scannedAnnotations;
- (id)selectionForAll;
- (id)selectionForCharacterAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionForCodeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)selectionForLineAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)selectionForRangeCommon:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 isCodeRange:(bool)arg2;
- (id)selectionForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)selectionForWordAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)selectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)selectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 type:(int)arg3;
- (id)selectionFromPointToBottom:(struct CGPoint { double x1; double x2; })arg1 type:(int)arg2;
- (id)selectionFromTopToPoint:(struct CGPoint { double x1; double x2; })arg1 type:(int)arg2;
- (void)setAKDidSetupRealPageModelController:(bool)arg1;
- (void)setBookmarked:(bool)arg1;
- (void)setBookmarked:(bool)arg1 updateBookmarks:(bool)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forBox:(long long)arg2;
- (void)setColorWidgetBackgrounds:(bool)arg1;
- (void)setDisplaysAnnotations:(bool)arg1;
- (void)setDisplaysMarkupAnnotations:(bool)arg1;
- (void)setDocument:(id)arg1;
- (bool)setPageRef:(struct CGPDFPage { }*)arg1;
- (void)setRotation:(long long)arg1;
- (void)setView:(id)arg1;
- (void)setupAKPageAdaptorIfNecessary;
- (id)string;
- (id)thumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 forBox:(long long)arg2;
- (id)thumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 forBox:(long long)arg2 withBookmark:(bool)arg3;
- (id)thumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 forBox:(long long)arg2 withBookmark:(bool)arg3 withAnnotations:(bool)arg4;
- (void)transformContext:(struct CGContext { }*)arg1 forBox:(long long)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForBox:(long long)arg1;
- (id)view;

// Image: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles

- (id)na_thumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 forBox:(long long)arg2;

@end