/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRenderProcessor : NSObject {
    TSCH3DFramebuffer * _activeFramebuffer;
}

@property (nonatomic, retain) TSCH3DFramebuffer *activeFramebuffer;

+ (void)initialize;
+ (id)processor;

- (id)activeFramebuffer;
- (void)beginFrame;
- (bool)canRenderPrefilteredLines;
- (void)dealloc;
- (id)effects;
- (void)endFrame;
- (void)geometry:(id)arg1;
- (void)normals:(id)arg1;
- (void)popRenderState;
- (void)popState;
- (void)pushRenderState;
- (void)pushState;
- (struct RenderHints { struct TextureSizeHint { int x_1_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; })renderHints;
- (struct RenderState { struct BlendState { bool x_1_1_1; int x_1_1_2; } x1; struct DepthState { bool x_2_1_1; bool x_2_1_2; } x2; bool x3; bool x4; bool x5; float x6; float x7; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_8_1_1; } x8; })renderState;
- (void)resetBuffers;
- (void)setActiveFramebuffer:(id)arg1;
- (void)setRenderHints:(const struct RenderHints { struct TextureSizeHint { int x_1_1_1; struct tvec2<int> { union { int x_1_3_1; int x_1_3_2; int x_1_3_3; } x_2_2_1; union { int x_2_3_1; int x_2_3_2; int x_2_3_3; } x_2_2_2; } x_1_1_2; } x1; }*)arg1;
- (void)setRenderState:(const struct RenderState { struct BlendState { bool x_1_1_1; int x_1_1_2; } x1; struct DepthState { bool x_2_1_1; bool x_2_1_2; } x2; bool x3; bool x4; bool x5; float x6; float x7; struct EnableClipDistances { struct array<bool, 8> { bool x_1_2_1[8]; } x_8_1_1; } x8; }*)arg1;
- (void)texcoords:(id)arg1;
- (void)updateRenderState;
- (void)wipeActiveFramebuffer:(const struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; }*)arg1;

@end
