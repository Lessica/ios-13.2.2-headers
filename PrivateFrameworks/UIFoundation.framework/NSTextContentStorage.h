/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextContentStorage : NSTextContentManager <NSTextStorageController> {
    struct { id *x1; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x2; inout unsigned short x3; void*x4; void*x5; in void*x6; void*x7; void*x8; unsigned long long x9; unsigned long long x10; } * _activeEnumerationCache;
    NSAttributedString * _attributedString;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _cachedRange;
    NSCountableTextRange * _documentRange;
    NSStorage * _elements;
    NSRunStorage * _indexTable;
    long long  _modifiedDocumentLengthDelta;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _modifiedRange;
    NSTextStorage * _textStorage;
}

@property (copy) NSAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSCountableTextRange *documentRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSTextStorage *textStorage;

+ (bool)supportsSecureCoding;

- (void)_commonInitialization;
- (id)attributedString;
- (id)attributedStringForTextElement:(id)arg1;
- (id)attributedStringForTextElements:(id)arg1;
- (void)beginEditingTransaction;
- (void)dealloc;
- (id)documentRange;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditingTransaction;
- (id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (bool)synchronizeToBackingStore:(id /* block */)arg1;
- (id)textElementForAttributedString:(id)arg1;
- (id)textElementsForAttributedString:(id)arg1;
- (id)textStorage;
- (void)updateRangesForTextElement:(id)arg1 locationDelta:(long long)arg2;

@end