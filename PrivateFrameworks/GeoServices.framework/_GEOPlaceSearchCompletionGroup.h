/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup> {
    bool  _enforceServerResultsOrder;
    NSArray * _items;
    NSString * _localizedSectionHeader;
    bool  _shouldInterleaveClientResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enforceServerResultsOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *localizedSectionHeader;
@property (nonatomic, readonly) bool shouldInterleaveClientResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)enforceServerResultsOrder;
- (id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4;
- (id)items;
- (id)localizedSectionHeader;
- (bool)shouldInterleaveClientResults;

@end
