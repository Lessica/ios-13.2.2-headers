/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKHTMLParser : NSObject {
    unsigned long long  _bodyTagStartIndex;
    NSString * _bodyTagStyle;
    bool  _cancelled;
    NSMutableData * _charactersBuffer;
    bool  _containsBlacklistedElements;
    unsigned long long  _currentHeadTagStartIndex;
    NSString * _currentImgTagSource;
    unsigned long long  _currentImgTagStartIndex;
    unsigned long long  _currentListLevel;
    unsigned long long  _currentQuoteLevel;
    unsigned long long  _encoding;
    NSString * _htmlBodyToParse;
    NSString * _ignoringElementSubtree;
    bool  _isLastCharAddedLineBreak;
    NSMutableArray * _isQuoteElementStack;
    NSMutableArray * _listStack;
    struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; } * _parserContext;
    bool  _parsingBody;
    bool  _parsingHead;
    struct _xmlSAXHandler { 
        int (*internalSubset)(); 
        int (*isStandalone)(); 
        int (*hasInternalSubset)(); 
        int (*hasExternalSubset)(); 
        int (*resolveEntity)(); 
        int (*getEntity)(); 
        int (*entityDecl)(); 
        int (*notationDecl)(); 
        int (*attributeDecl)(); 
        int (*elementDecl)(); 
        int (*unparsedEntityDecl)(); 
        int (*setDocumentLocator)(); 
        int (*startDocument)(); 
        int (*endDocument)(); 
        int (*startElement)(); 
        int (*endElement)(); 
        int (*reference)(); 
        int (*characters)(); 
        int (*ignorableWhitespace)(); 
        int (*processingInstruction)(); 
        int (*comment)(); 
        int (*warning)(); 
        int (*error)(); 
        int (*fatalError)(); 
        int (*getParameterEntity)(); 
        int (*cdataBlock)(); 
        int (*externalSubset)(); 
        unsigned int initialized; 
        void *_private; 
        int (*startElementNs)(); 
        int (*endElementNs)(); 
        int (*serror)(); 
    }  _parsingSAXHandler;
    NSMutableArray * _stringAttributesStack;
}

@property (nonatomic) unsigned long long bodyTagStartIndex;
@property (nonatomic, retain) NSString *bodyTagStyle;
@property (nonatomic) bool cancelled;
@property (nonatomic, retain) NSMutableData *charactersBuffer;
@property (nonatomic) bool containsBlacklistedElements;
@property (nonatomic) unsigned long long currentHeadTagStartIndex;
@property (nonatomic, retain) NSString *currentImgTagSource;
@property (nonatomic) unsigned long long currentImgTagStartIndex;
@property (nonatomic) unsigned long long currentListLevel;
@property (nonatomic) unsigned long long currentQuoteLevel;
@property (nonatomic) unsigned long long encoding;
@property (nonatomic, retain) NSString *htmlBodyToParse;
@property (nonatomic, retain) NSString *ignoringElementSubtree;
@property (nonatomic) bool isLastCharAddedLineBreak;
@property (nonatomic, retain) NSMutableArray *isQuoteElementStack;
@property (nonatomic, retain) NSMutableArray *listStack;
@property (nonatomic) struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; }*parserContext;
@property (nonatomic) bool parsingBody;
@property (nonatomic) bool parsingHead;
@property (nonatomic) struct _xmlSAXHandler { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); unsigned int x28; void *x29; int (*x30)(); int (*x31)(); int (*x32)(); } parsingSAXHandler;
@property (nonatomic, retain) NSMutableArray *stringAttributesStack;

- (void).cxx_destruct;
- (void)_appendCharacters:(const char *)arg1 length:(int)arg2;
- (void)_appendImageFromAttributes:(const char **)arg1;
- (void)_appendLineBreak;
- (void)_appendString:(id)arg1;
- (void)_enumerateAttributes:(const char **)arg1 withBlock:(id /* block */)arg2;
- (void)_flushCharactersIfNeeded;
- (bool)_isElementBlacklisted:(id)arg1 attributes:(const char **)arg2;
- (bool)_isElementBody:(id)arg1;
- (bool)_isElementDisplayedInBlock:(id)arg1;
- (bool)_isElementHead:(id)arg1;
- (bool)_isElementHyperlink:(id)arg1;
- (bool)_isElementIgnorable:(id)arg1;
- (bool)_isElementImage:(id)arg1;
- (bool)_isElementLineBreak:(id)arg1;
- (bool)_isElementList:(id)arg1 ordered:(bool*)arg2;
- (bool)_isElementListItem:(id)arg1;
- (bool)_isElementQuoteElement:(id)arg1 attributes:(const char **)arg2;
- (bool)_isErrorBlacklisted:(struct _xmlError { int x1; int x2; char *x3; int x4; char *x5; int x6; char *x7; char *x8; char *x9; int x10; int x11; void *x12; void *x13; }*)arg1;
- (void)_popStringAttributes;
- (void)_pushStringAttributes:(id)arg1;
- (void)_requireNewLine;
- (void)_stringAttributeForElement:(id)arg1 attributes:(const char **)arg2 stringAttributeKey:(id*)arg3 stringAttributeValue:(id*)arg4;
- (void)_stringAttributeForHyperlink:(id)arg1 attributes:(const char **)arg2 stringAttributeKey:(id*)arg3 stringAttributeValue:(id*)arg4;
- (id)_stringAttributeValueForCSSStyleName:(id)arg1 inStyleAttribute:(id)arg2;
- (id)_stringAttributesForStyleAttribute:(id)arg1;
- (unsigned long long)_textAlignmentFromString:(id)arg1;
- (id)_topStringAttributes;
- (id)_valueForAttributeNamed:(id)arg1 inAttributes:(const char **)arg2;
- (unsigned long long)_writingDirectionFromString:(id)arg1;
- (void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4;
- (void)appendString:(id)arg1 stringAttributes:(id)arg2;
- (unsigned long long)bodyTagStartIndex;
- (id)bodyTagStyle;
- (bool)cancelled;
- (bool)caresAboutHTMLContentString;
- (id)charactersBuffer;
- (bool)containsBlacklistedElements;
- (unsigned long long)currentHeadTagStartIndex;
- (id)currentImgTagSource;
- (unsigned long long)currentImgTagStartIndex;
- (unsigned long long)currentListLevel;
- (unsigned long long)currentQuoteLevel;
- (unsigned long long)encoding;
- (id)htmlBodyToParse;
- (id)ignoringElementSubtree;
- (id)init;
- (bool)isElementBlacklisted:(id)arg1 attributeQueryBlock:(id /* block */)arg2;
- (bool)isElementIgnorable:(id)arg1;
- (bool)isErrorTypeBlacklisted:(char *)arg1;
- (bool)isLastCharAddedLineBreak;
- (id)isQuoteElementStack;
- (id)listStack;
- (void)parseHTMLBody:(id)arg1 encoding:(unsigned long long)arg2;
- (struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; }*)parserContext;
- (bool)parsingBody;
- (bool)parsingHead;
- (struct _xmlSAXHandler { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); unsigned int x28; void *x29; int (*x30)(); int (*x31)(); int (*x32)(); })parsingSAXHandler;
- (void)processBodyHTMLContent:(id)arg1 style:(id)arg2 contentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)processHeadHTMLTagContent:(id)arg1;
- (void)processImgTagSource:(id)arg1 contentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBodyTagStartIndex:(unsigned long long)arg1;
- (void)setBodyTagStyle:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCharactersBuffer:(id)arg1;
- (void)setContainsBlacklistedElements:(bool)arg1;
- (void)setCurrentHeadTagStartIndex:(unsigned long long)arg1;
- (void)setCurrentImgTagSource:(id)arg1;
- (void)setCurrentImgTagStartIndex:(unsigned long long)arg1;
- (void)setCurrentListLevel:(unsigned long long)arg1;
- (void)setCurrentQuoteLevel:(unsigned long long)arg1;
- (void)setEncoding:(unsigned long long)arg1;
- (void)setHtmlBodyToParse:(id)arg1;
- (void)setIgnoringElementSubtree:(id)arg1;
- (void)setIsLastCharAddedLineBreak:(bool)arg1;
- (void)setIsQuoteElementStack:(id)arg1;
- (void)setListStack:(id)arg1;
- (void)setParserContext:(struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; }*)arg1;
- (void)setParsingBody:(bool)arg1;
- (void)setParsingHead:(bool)arg1;
- (void)setParsingSAXHandler:(struct _xmlSAXHandler { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); unsigned int x28; void *x29; int (*x30)(); int (*x31)(); int (*x32)(); })arg1;
- (void)setStringAttributesStack:(id)arg1;
- (id)stringAttributesStack;

@end
