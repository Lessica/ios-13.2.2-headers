/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator {
    <PGEventEnrichment> * _collection;
    bool  _createVerboseTitle;
    NSString * _meaningLabel;
}

@property (nonatomic, readonly) <PGEventEnrichment> *collection;
@property (nonatomic, readonly) bool createVerboseTitle;
@property (nonatomic, readonly) NSString *meaningLabel;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)collection;
- (bool)createVerboseTitle;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(bool)arg3;
- (id)meaningLabel;

@end
