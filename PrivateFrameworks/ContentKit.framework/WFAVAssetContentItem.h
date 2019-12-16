/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic, readonly) AVAsset *asset;

+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (id)asset;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)duration;
- (id)frameRate;
- (id)generateExportSessionForType:(id)arg1;
- (void)generateFileRepresentation:(id /* block */)arg1 forType:(id)arg2 metadata:(id)arg3 options:(id)arg4;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (id)metadataItemForCommonKey:(id)arg1;
- (id)preferredFileType;
- (id)supportedTypes;

@end
