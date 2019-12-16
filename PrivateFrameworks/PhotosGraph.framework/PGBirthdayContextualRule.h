/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGBirthdayContextualRule : NSObject <PGContextualRule> {
    NSArray * _availablePersons;
    PGGraph * _graph;
    NSMutableDictionary * _personNodeByLocalIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bestAssetInCuratedAssets:(id)arg1 forPerson:(id)arg2 contextualScore:(out double*)arg3;
- (id)_bestBirthdayCelebrationAssetForHighlightNode:(id)arg1 assetCollection:(id)arg2;
- (id)_fetchCuratedAssetsForHighlightItem:(id)arg1 intersectingAssets:(id)arg2;
- (id)_filterCuratedAssets:(id)arg1 forHighlightItem:(id)arg2;
- (bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)initWithGraph:(id)arg1;

@end
