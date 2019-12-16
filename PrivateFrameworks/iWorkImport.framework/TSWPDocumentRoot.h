/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex> {
    bool  _didRemoveMissingAttachments;
    NSMutableSet * _ignoredWords;
    <TSWPTOCController> * _tocController;
    NSUUID * _uuid;
}

@property (getter=isChangeTrackingEnabled, nonatomic, readonly) bool changeTrackingEnabled;
@property (nonatomic) bool didRemoveMissingAttachments;
@property (nonatomic, readonly) EQKitEnvironment *equationEnvironment;
@property (nonatomic) bool laysOutBodyVertically;
@property (nonatomic, readonly) double stickyCommentScaleMultiplier;
@property (nonatomic, readonly) bool supportHeaderFooterParagraphAlignmentInInspectors;
@property (nonatomic, readonly) <TSWPTOCController> *tocController;
@property (nonatomic, readonly) TSULocale *typesettingLocale;

- (void).cxx_destruct;
- (void)addIgnoredWord:(id)arg1;
- (double)bodyWidth;
- (bool)cellCommentsAllowedOnInfo:(id)arg1;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (bool)containsVerticalText;
- (bool)didRemoveMissingAttachments;
- (void)documentDidLoad;
- (id)documentFonts;
- (id)documentId;
- (id)documentTSWPFontObjects;
- (id)equationEnvironment;
- (id)flowInfoContainer;
- (void)fontUpdatedForStyleClient:(id)arg1;
- (int)fullyJustifiedAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (bool)has_30356142_build;
- (const struct __CFLocale { }*)hyphenationLocale;
- (id)ignoredWords;
- (bool)isChangeTrackingEnabled;
- (bool)isDrawableOnPageMaster:(id)arg1;
- (bool)isIgnoringWord:(id)arg1;
- (bool)isMasterInfo:(id)arg1;
- (bool)isSectionModel:(id)arg1;
- (bool)laysOutBodyVertically;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (id)p_fontsInStylesheetUsingBlock:(id /* block */)arg1;
- (void)removeIgnoredWord:(id)arg1;
- (void)setDidRemoveMissingAttachments:(bool)arg1;
- (void)setLaysOutBodyVertically:(bool)arg1;
- (bool)shouldHyphenate;
- (double)stickyCommentScaleMultiplier;
- (bool)supportHeaderFooterParagraphAlignmentInInspectors;
- (bool)textIsVerticalInStorage:(id)arg1 atCharIndex:(unsigned long long)arg2;
- (id)tocController;
- (id)typesettingLocale;
- (id)unavailableDocumentFonts;
- (bool)useLigatures;
- (bool)validatedLoadFromUnarchiver:(id)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (void)willClose;

@end
