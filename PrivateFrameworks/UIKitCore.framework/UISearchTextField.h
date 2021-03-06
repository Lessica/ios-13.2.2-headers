/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISearchTextField : UITextField <_UISearchBarTextFieldOrMailReplacement> {
    bool  __preventSelectionViewActivation;
    long long  __textInputSource;
    bool  _animatePlaceholderOnResignFirstResponder;
    NSMutableDictionary * _customClearButtons;
    UIImageView * _defaultLeftView;
    bool  _deferringFirstResponder;
    _UISearchBarSearchFieldBackgroundView * _effectBackgroundBottom;
    _UISearchBarSearchFieldBackgroundView * _effectBackgroundTop;
    NSMutableDictionary * _iconOffsets;
    NSHashTable * _knownTokenLayoutViews;
    UISearchBar * _searchBar;
    struct { 
        unsigned int searchBarWantsShouldSendContentChangedNotificationsIfOnlyMarkedTextChanged : 1; 
        unsigned int delegateImplementsItemProviderForCopyingTokens; 
        unsigned int delegateImplementsUnderscoredItemProviderForCopyingTokens; 
        unsigned int allowsCopyingTokens : 1; 
        unsigned int allowsDeletingTokens : 1; 
    }  _searchBarTextFieldFlags;
    NSValue * _searchTextOffsetValue;
    UIColor * _tokenBackgroundColor;
    _UISearchBarTextFieldTokenCounter * _tokenCounter;
    UITapGestureRecognizer * _tokenTapGestureRecognizer;
}

@property (setter=_setIgnoresDynamicType:, nonatomic) bool _ignoresDynamicType;
@property (setter=_setPreventSelectionViewActivation:, nonatomic) bool _preventSelectionViewActivation;
@property (setter=_setSearchBar:, nonatomic) UISearchBar *_searchBar;
@property (setter=_setSearchTextOffetValue:, nonatomic, retain) NSValue *_searchTextOffsetValue;
@property (nonatomic) long long _textInputSource;
@property (nonatomic) bool allowsCopyingTokens;
@property (nonatomic) bool allowsDeletingTokens;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITextRange *textualRange;
@property (nonatomic, retain) UIColor *tokenBackgroundColor;
@property (nonatomic, copy) NSArray *tokens;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)_fieldEditorClass;
+ (Class)_textPasteItemClass;
+ (bool)_wantsFadedEdges;

- (void).cxx_destruct;
- (void)_activateSelectionView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedTextOrEditingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustmentsForSearchIconViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_applyHighlightedAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forEditing:(bool)arg2;
- (void)_becomeFirstResponder;
- (bool)_becomeFirstResponderWhenPossible;
- (long long)_blurEffectStyle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bookmarkViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)_characterIndexForTokenTapGestureRecognizer;
- (void)_clearBackgroundViews;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_clearButtonSize;
- (void)_copySelectionPopulatingActuallyCopiedTokenCharacterIndexes:(id)arg1;
- (id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2;
- (id)_customDraggableObjectsForRange:(id)arg1;
- (void)_defaultInsertTextSuggestion:(id)arg1;
- (bool)_delegateShouldBeginEditing;
- (bool)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 delegateCares:(bool*)arg3;
- (bool)_delegateShouldClear;
- (bool)_delegateShouldEndEditing;
- (bool)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
- (void)_didRemoveTokenLayoutView:(id)arg1;
- (void)_didSetFont:(id)arg1;
- (bool)_hasContent;
- (bool)_ignoresDynamicType;
- (id)_newAttributedStringWithToken:(id)arg1;
- (id)_offsetValueForIcon:(long long)arg1;
- (void)_pasteSessionDidFinish:(id)arg1;
- (id)_placeholderColor;
- (Class)_placeholderLabelClass;
- (bool)_preventSelectionViewActivation;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForSetText;
- (id)_rangeOfCustomDraggableObjectsInRange:(id)arg1;
- (void)_redirectSelectionToAvoidClobberingTokens;
- (void)_removeEffectsBackgroundViews;
- (id)_searchBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchIconViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_searchTextOffsetValue;
- (void)_setAnimatesBackgroundCornerRadius:(bool)arg1;
- (void)_setBackgroundViewsAlpha:(double)arg1;
- (void)_setBottomEffectBackgroundVisible:(bool)arg1;
- (void)_setClearButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setIgnoresDynamicType:(bool)arg1;
- (void)_setMagnifyingGlassImage:(id)arg1;
- (void)_setOffsetValue:(id)arg1 forIcon:(long long)arg2;
- (void)_setPreventSelectionViewActivation:(bool)arg1;
- (void)_setSearchBar:(id)arg1;
- (void)_setSearchTextOffetValue:(id)arg1;
- (bool)_shouldCenterPlaceholder;
- (bool)_shouldDetermineInterfaceStyleTextColor;
- (bool)_shouldResignOnEditingDidEndOnExit;
- (bool)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (bool)_shouldSuppressSelectionHandles;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_suffixFrame;
- (long long)_suffixLabelTextAlignment;
- (Class)_systemBackgroundViewClass;
- (long long)_textInputSource;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_textRangeForTextStorageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_textShouldFillFieldEditorHeight;
- (void)_tokenTapGestureRecognized;
- (void)_updateAtomViewSelection:(bool)arg1;
- (void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3;
- (void)_updateBackgroundViewsAnimated:(bool)arg1;
- (void)_willAddTokenLayoutView:(id)arg1;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (bool)allowsCopyingTokens;
- (bool)allowsDeletingTokens;
- (bool)allowsDraggingAttachments;
- (id)attributedText;
- (id)attributedTextInRange:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)deleteBackward;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertAttributedText:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertFilteredText:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTextSuggestion:(id)arg1;
- (void)insertToken:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)paste:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)positionOfTokenAtIndex:(long long)arg1;
- (void)removeTokenAtIndex:(long long)arg1;
- (void)replaceRange:(id)arg1 withAttributedText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceTextualPortionOfRange:(id)arg1 withToken:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)resignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)selectedTokens;
- (void)setAllowsCopyingTokens:(bool)arg1;
- (void)setAllowsDeletingTokens:(bool)arg1;
- (void)setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setTokenBackgroundColor:(id)arg1;
- (void)setTokens:(id)arg1;
- (void)set_textInputSource:(long long)arg1;
- (id)text;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textualRange;
- (void)tintColorDidChange;
- (id)tokenBackgroundColor;
- (id)tokens;
- (id)tokensInRange:(id)arg1;
- (void)updateForBackdropStyle:(unsigned long long)arg1;

@end
