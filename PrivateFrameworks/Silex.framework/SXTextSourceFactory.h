/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextSourceFactory : NSObject <SXTextSourceFactory> {
    <SXDocumentLanguageProviding> * _documentLanguageProvider;
    <SXFontAttributesConstructor> * _fontAttributesConstructor;
    <SXSmartFieldFactory> * _smartFieldFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentLanguageProviding> *documentLanguageProvider;
@property (nonatomic, readonly) <SXFontAttributesConstructor> *fontAttributesConstructor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXSmartFieldFactory> *smartFieldFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createTextSourceWithString:(id)arg1 dataSource:(id)arg2;
- (id)documentLanguageProvider;
- (id)fontAttributesConstructor;
- (id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3;
- (id)smartFieldFactory;

@end
