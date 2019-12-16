/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPMutableTopicNumberHints : NSObject <TSWPTopicNumberHints> {
    unsigned long long  _charIndex;
    TSUPointerKeyDictionary * _numbersForListStyle;
    unsigned long long  _validThroughCharIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)p_deepCopyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)advanceToCharIndex:(unsigned long long)arg1 storage:(id)arg2;
- (void)backUpByOneParagraphWithPreviousState:(id)arg1 storage:(id)arg2;
- (unsigned long long)charIndex;
- (unsigned long long)charIndexValidThrough;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entries;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentStateToTopicNumberHints:(id)arg1;
- (unsigned long long)nextTopicNumberForList:(id)arg1 level:(unsigned long long)arg2;
- (void)offsetCharIndexBy:(long long)arg1 startCharIndex:(unsigned long long)arg2;
- (unsigned long long)previousCharIndexForList:(id)arg1 level:(unsigned long long)arg2;
- (void)reset;
- (void)setCharIndex:(unsigned long long)arg1 validThroughCharIndex:(unsigned long long)arg2;
- (void)setTopicNumber:(unsigned long long)arg1 forList:(id)arg2 level:(unsigned long long)arg3 charIndex:(unsigned long long)arg4;
- (void)unarchiveSetEntries:(struct NSMutableArray { Class x1; }*)arg1 forListStyle:(id)arg2;

@end
