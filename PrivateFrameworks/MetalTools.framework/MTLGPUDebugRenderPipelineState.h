/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState {
    MTLRenderPipelineDescriptor * _descriptor;
    MTLRenderPipelineReflection * _reflection;
    MTLTileRenderPipelineDescriptor * _tileDescriptor;
}

@property (nonatomic, readonly) MTLToolsFunction *fragmentFunction;
@property (nonatomic, readonly) MTLRenderPipelineReflection *reflection;
@property (nonatomic, readonly) MTLToolsFunction *vertexFunction;

- (void)dealloc;
- (id)fragmentFunction;
- (id)fragmentLibrary;
- (id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;
- (id)initWithRenderPipelineState:(id)arg1 tileDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;
- (id)reflection;
- (id)vertexFunction;
- (id)vertexLibrary;

@end
