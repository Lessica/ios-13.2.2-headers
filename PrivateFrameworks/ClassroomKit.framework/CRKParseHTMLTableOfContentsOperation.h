/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKParseHTMLTableOfContentsOperation : CATOperation <NSXMLParserDelegate> {
    NSMutableArray * mChapters;
    CRKChapter * mCurrentChapter;
    NSMutableString * mCurrentText;
    NSString * mHTMLFilePath;
    NSXMLParser * mHTMLParser;
    bool  mIsInNav;
    CRKOPFPackageContents * mPackageContents;
    NSMutableArray * mParentChapters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)arg1 packageContents:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;

@end
