/* Generated by RuntimeBrowser.
 */

@protocol PXGRenderer <NSObject>

@required

- (<PXGRendererDelegate> *)delegate;
- (struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; })interactionState;
- (int)presentationType;
- (void)renderSpritesWithTextures:(NSArray *)arg1 dataStore:(PXGSpriteDataStore *)arg2 presentationDataStore:(PXGSpriteDataStore *)arg3 presentationMetadataStore:(PXGSpriteMetadataStore *)arg4 layout:(PXGLayout *)arg5;
- (void)setDelegate:(id <PXGRendererDelegate>)arg1;
- (void)setInteractionState:(struct { long long x1; bool x2; bool x3; bool x4; unsigned long long x5; bool x6; bool x7; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_8_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; })arg1;
- (void)setNeedsRender;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (<PXGTextureConverter> *)textureConverter;
- (void)updateWithChangeDetails:(PXGChangeDetails *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@optional

- (void)setTest_renderSnapshotHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (id /* block */)test_renderSnapshotHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, id, id, SEL

@end