/* Generated by RuntimeBrowser.
 */

@protocol PGBehavioralAlgorithm

@required

- (NSDictionary *)dataToPersist;
- (id)initWithGoldAssets:(NSSet *)arg1 graph:(PGGraph *)arg2;
- (id)initWithGoldAssets:(NSSet *)arg1 graph:(PGGraph *)arg2 persistedData:(NSDictionary *)arg3;
- (void)preprocessWithProgressBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*
- (NSDictionary *)semanticScoreByAssetUUIDForAssets:(NSArray *)arg1;
- (float)semanticScoreForAsset:(PHAsset *)arg1;

@end
