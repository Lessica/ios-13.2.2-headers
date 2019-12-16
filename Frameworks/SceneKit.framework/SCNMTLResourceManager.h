/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMTLResourceManager : NSObject {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; double x57; unsigned int x58; double x59; unsigned int x60; double x61; double x62; double x63; double x64; double x65[60]; } * __engineStats;
    <MTLTexture> * _areaLightPrecomputedDataTexture;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableBuffers;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableComputePipelines;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableComputePipelinesWithStageDescriptor;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableIESTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableImageProxy;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableImages;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableIrradianceTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableLightingSystemReflectionProbeTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshElements;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshSources;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshes;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMorphs;
    struct __CFDictionary { } * _availablePipelineStates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _availablePipelineStatesLock;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableRadianceTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableRasterizerStates;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableSamplers;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableShadables;
    SCNMTLShadableKey * _availableShadablesSearchKey;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableSkins;
    NSMutableArray * _availableStageDescriptors;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableTessellators;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableWireframeMaterials;
    SCNMTLShaderBindingsGenerator * _bindingsGenerator;
    <MTLCommandQueue> * _commandQueue;
    SCNMTLBufferAllocator * _commonProfileBuffersAllocator;
    <MTLTexture> * _defaultCubeTexture;
    <MTLTexture> * _defaultLightingEnvironmentIrradianceTexture;
    <MTLTexture> * _defaultLightingEnvironmentRadianceTexture;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFDictionary {} *x4; void *x5; struct __CFDictionary {} *x6; void *x7; struct __CFString {} *x8; } * _defaultProgram;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFDictionary {} *x4; void *x5; struct __CFDictionary {} *x6; void *x7; struct __CFString {} *x8; } * _defaultProgramForTessellation;
    <MTLTexture> * _defaultTexture;
    <MTLTexture> * _defaultTexture3D;
    <MTLDepthStencilState> * _depthAndStencilStateWithReadWriteDepthDisabled;
    <MTLDevice> * _device;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFDictionary {} *x4; void *x5; struct __CFDictionary {} *x6; void *x7; struct __CFString {} *x8; } * _isolateProgram;
    SCNMTLLibraryManager * _libraryManager;
    MTKTextureLoader * _mtkTextureLoader;
    id  _nullStageDescriptor;
    <MTLTexture> * _specularDFGTexture;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stageDescriptorsLock;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, retain) SCNMTLLibraryManager *libraryManager;

+ (id)resourceManagerForDevice:(id)arg1;
+ (void)unregisterManagerForDevice:(id)arg1;

- (void)__updateMutableMesh:(struct __C3DMesh { }*)arg1 withMetalMesh:(id)arg2;
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(id /* block */)arg4;
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 useTextureView:(bool)arg4 renderContext:(id)arg5;
- (id)_bufferForData:(struct __CFData { }*)arg1 bytesPerIndex:(unsigned long long)arg2;
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;
- (bool)_copyImage:(struct __C3DImage { }*)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(bool)arg5;
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(struct { struct { struct __C3DFXProgram {} *x_1_1_1; struct __C3DMaterial {} *x_1_1_2; struct __C3DGeometry {} *x_1_1_3; struct __C3DFXPass {} *x_1_1_4; struct __C3DFXPass {} *x_1_1_5; id x_1_1_6; struct __C3DBlendStates {} x_1_1_7; struct __C3DNode {} *x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; id x_1_1_14; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x_1_1_15; void*x_1_1_16; unsigned char x_1_1_17; id /* block */ x_1_1_18; } x1; })arg2 pipeline:(id)arg3;
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder { id x1; }*)arg3 generateMipMaps:(bool)arg4;
- (void)_geometryWillDie:(id)arg1;
- (void)_imageProxyWillDie:(id)arg1;
- (void)_imageWillDie:(id)arg1;
- (void)_materialWillDie:(id)arg1;
- (void)_meshElementWillDie:(id)arg1;
- (void)_meshSourceWillDie:(id)arg1;
- (void)_meshWillDie:(id)arg1;
- (void)_morphWillDie:(id)arg1;
- (id)_newComputeDescriptorForPipelineDesc:(struct { id x1; id x2; bool x3; bool x4; })arg1 library:(id)arg2;
- (void)_passWillDie:(id)arg1;
- (void)_programHashCodeWillDie:(id)arg1;
- (void)_programWillDie:(id)arg1;
- (void)_removeMatchingProgram:(struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; }*)arg1 pass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg2;
- (void)_skinWillDie:(id)arg1;
- (id)_textureDescriptorFromImage:(struct __C3DImage { }*)arg1 needsMipMap:(bool)arg2 textureOptions:(int)arg3;
- (id)areaLightPrecomputedDataTexture;
- (id)commandQueue;
- (id)computePipelineStateForKernel:(id)arg1;
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg2;
- (id)convertTextureToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 needsMipmap:(bool)arg3;
- (id)cubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(struct __C3DEngineContext { }*)arg3 needsMipmap:(bool)arg4;
- (void)dealloc;
- (id)defaultCubeTexture;
- (id)defaultLightingEnvironmentIrradianceTexture;
- (id)defaultLightingEnvironmentRadianceTexture;
- (struct __C3DFXProgram { }*)defaultProgramUsingTessellation:(bool)arg1;
- (id)defaultTexture;
- (id)defaultTexture3D;
- (id)depthAndStencilStateWithReadWriteDepthDisabled;
- (id)device;
- (void)dispatchForCubemap:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)dispatchForTexture:(id)arg1 computeEncoder:(id)arg2 pipelineState:(id)arg3;
- (void)flush;
- (id)getUniqueStageDescriptor:(id)arg1;
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(id /* block */)arg3;
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(bool)arg4;
- (id)libraryManager;
- (id)newBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newComputePipelineStateForDesc:(struct { id x1; id x2; bool x3; bool x4; })arg1 library:(id)arg2;
- (id)newComputePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 constants:(id)arg3 constantsHash:(id)arg4;
- (id)newComputePipelineStateWithFunctionName:(id)arg1;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;
- (id)newConstantBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newIndexBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 cpuAccessible:(bool)arg3 commandBuffer:(id)arg4;
- (id)newRenderPipelineStateWithDesc:(struct { struct { struct __C3DFXProgram {} *x_1_1_1; struct __C3DMaterial {} *x_1_1_2; struct __C3DGeometry {} *x_1_1_3; struct __C3DFXPass {} *x_1_1_4; struct __C3DFXPass {} *x_1_1_5; id x_1_1_6; struct __C3DBlendStates {} x_1_1_7; struct __C3DNode {} *x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; bool x_1_1_13; id x_1_1_14; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x_1_1_15; void*x_1_1_16; unsigned char x_1_1_17; id /* block */ x_1_1_18; } x1; })arg1;
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 commandBuffer:(id)arg3;
- (void)reloadPipelinesIfNeeded;
- (void)removeAllShaders;
- (id)renderResourceForImage:(struct __C3DImage { }*)arg1 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 options:(int)arg3 engineContext:(struct __C3DEngineContext { }*)arg4;
- (id)renderResourceForImageProxy:(struct __C3DImageProxy { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); } x2; void *x3; unsigned char x4; }*)arg1 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 engineContext:(struct __C3DEngineContext { }*)arg3;
- (id)renderResourceForMaterial:(struct __C3DMaterial { }*)arg1 geometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg2 renderPipeline:(id)arg3 engineContext:(struct __C3DEngineContext { }*)arg4;
- (id)renderResourceForMesh:(struct __C3DMesh { }*)arg1 dataKind:(unsigned char)arg2;
- (id)renderResourceForMeshElement:(struct __C3DMeshElement { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; unsigned int x2; unsigned int x3; struct __C3DMeshElement {} *x4; unsigned char x5; unsigned char x6; unsigned char x7; struct { BOOL x_8_1_1; struct __CFData {} *x_8_1_2; unsigned int x_8_1_3; unsigned int *x_8_1_4; struct { long long x_5_2_1; long long x_5_2_2; } x_8_1_5; unsigned char x_8_1_6; bool x_8_1_7; } x8; float x9; float x10; float x11; void *x12; struct __C3DMeshSource {} *x13; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x14[2]; }*)arg1;
- (id)renderResourceForMeshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg1;
- (id)renderResourceForMorph:(struct __C3DMorph { }*)arg1 baseGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg2;
- (id)renderResourceForProgramDesc:(struct { struct __C3DFXProgram {} *x1; struct __C3DMaterial {} *x2; struct __C3DGeometry {} *x3; struct __C3DFXPass {} *x4; struct __C3DFXPass {} *x5; id x6; struct __C3DBlendStates {} x7; struct __C3DNode {} *x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; bool x13; id x14; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x15; void*x16; unsigned char x17; id /* block */ x18; })arg1 renderPassDescriptor:(id)arg2;
- (id)renderResourceForRasterizerState:(struct __C3DRasterizerStates { }*)arg1 reverseZ:(bool)arg2;
- (id)renderResourceForSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg1;
- (id)renderResourceForSkinner:(struct __C3DSkinner { }*)arg1 baseMesh:(struct __C3DMesh { }*)arg2 baseGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg3;
- (id)renderResourceForTessellatedGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct { /* ? */ } *x7; unsigned int x8 : 1; int (*x9)(); struct { unsigned char x_10_1_1; bool x_10_1_2; struct { bool x_3_2_1; unsigned char x_3_2_2; unsigned char x_3_2_3; unsigned char x_3_2_4; } x_10_1_3; struct __C3DMeshElement {} *x_10_1_4; struct __C3DMeshSource {} *x_10_1_5; struct __C3DMesh {} *x_10_1_6; void *x_10_1_7; void *x_10_1_8; } x10; struct { unsigned char x_11_1_1; float x_11_1_2; unsigned int x_11_1_3; unsigned char x_11_1_4; union { struct { float x_1_3_1; float x_1_3_2; } x_5_2_1; struct { float x_2_3_1; } x_5_2_2; struct { float x_3_3_1; } x_5_2_3; struct { unsigned char x_4_3_1; unsigned int x_4_3_2 : 1; unsigned int x_4_3_3 : 1; } x_5_2_4; } x_11_1_5; } x11; }*)arg1;
- (id)renderResourcesForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1 withEngineContext:(struct __C3DEngineContext { }*)arg2;
- (void)resetRasterizerStates;
- (void)setLibraryManager:(id)arg1;
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;
- (id)specularDFGTextureWithRenderContext:(id)arg1;
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;
- (struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; double x57; unsigned int x58; double x59; unsigned int x60; double x61; double x62; double x63; double x64; double x65[60]; }*)stats;
- (id)textureForSamplingTexture:(id)arg1 atSize:(unsigned long long)arg2 mipmapLevelCount:(unsigned long long*)arg3 renderContext:(id)arg4;
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;
- (id)wireframeResourceForRendererElement:(struct __C3DRendererElement { unsigned int x1; struct __C3DNode {} *x2; struct __C3DGeometry {} *x3; struct __C3DMesh {} *x4; void *x5; struct __C3DMaterial {} *x6; struct __C3DFXTechnique {} *x7; struct { unsigned char x_8_1_1[8]; } x8; int x9; unsigned int x10; unsigned int x11 : 8; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 3; unsigned int x19 : 1; unsigned int x20 : 3; }*)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 passInstance:(struct __C3DFXPassInstance { struct __C3DFXPass {} *x1; long long x2; struct __C3DFXPassInstance {} *x3; unsigned char x4; unsigned char x5; bool x6; unsigned char x7; struct __C3DArray {} *x8[6]; struct __C3DCullingContext { struct __C3DEnginePipeline {} *x_9_1_1; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_2_2_1[6]; } x_9_1_2[6]; union C3DMatrix4x4 { float x_3_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_2[4]; void*x_3_2_3; } x_9_1_3[6]; union C3DMatrix4x4 { float x_4_2_1[16]; void*x_4_2_2[4]; void*x_4_2_3; } x_9_1_4[6]; union C3DMatrix4x4 { float x_5_2_1[16]; void*x_5_2_2[4]; void*x_5_2_3; } x_9_1_5[6]; union C3DMatrix4x4 { float x_6_2_1[16]; void*x_6_2_2[4]; void*x_6_2_3; } x_9_1_6[6]; struct { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; float x_1_4_4; } x_1_3_1; } x_7_2_1[6]; } x_9_1_7[6]; union C3DMatrix4x4 { float x_8_2_1[16]; void*x_8_2_2[4]; void*x_8_2_3; } x_9_1_8[6]; union C3DMatrix4x4 { float x_9_2_1[16]; void*x_9_2_2[4]; void*x_9_2_3; } x_9_1_9[6]; union C3DMatrix4x4 { float x_10_2_1[16]; void*x_10_2_2[4]; void*x_10_2_3; } x_9_1_10[6]; union C3DMatrix4x4 { float x_11_2_1[16]; void*x_11_2_2[4]; void*x_11_2_3; } x_9_1_11[6]; } x9; }*)arg3 hashPass:(unsigned long long)arg4;

@end
