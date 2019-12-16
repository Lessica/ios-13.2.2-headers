/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass> {
    CLLocation * _queryLocation;
}

@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, retain) CLLocation *queryLocation;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithMapItem:(id)arg1 fromQueryLocation:(id)arg2;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (void).cxx_destruct;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (id)mapItem;
- (id)queryLocation;
- (void)setQueryLocation:(id)arg1;

@end
