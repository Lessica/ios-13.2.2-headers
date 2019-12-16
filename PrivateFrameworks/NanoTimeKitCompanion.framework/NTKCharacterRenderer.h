/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterRenderer : NSObject {
    bool  _active;
    bool  _animatingIntoOrb;
    bool  _animatingToNewDate;
    float  _animationFrameInterval;
    bool  _applyInstantTimeWarp;
    _Arms * _arms;
    _Background * _background;
    float  _blinkDuration;
    _Body * _body;
    NSCalendar * _cal;
    float  _characterBrightness;
    float  _characterScale;
    UIColor * _clothingColor;
    int  _clothingColorLoc;
    int  _curPose;
    int  _curState;
    float  _curTimeMod15Sec;
    float  _curTimeMod1Sec;
    unsigned long long  _currentPipeline;
    float  _dampenBones;
    double  _desaturation;
    int  _endPose;
    int  _endState;
    _Foot * _foot;
    double  _fromHourPercent;
    double  _fromMinutePercent;
    <MTLBuffer> * _geometryMtlBuffer;
    void _globalOffset;
    void _globalScale;
    float  _glowBrightness;
    _Head * _head;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _headMatrix;
    float  _hourHandPos;
    int  _idealPose;
    int  _idealState;
    bool  _inTimeTravel;
    NTKCharacterResourceLoader * _loader;
    float  _minHandPos;
    int  _modelMatrixLoc;
    <MTLDevice> * _mtlDevice;
    void _neckBone;
    float  _numbersAlpha;
    float  _numbersBrightness;
    float  _numbersScale;
    NSDate * _overrideDate;
    float  _overrideDateFraction;
    bool  _pinHandsBrightnessToMax;
    <MTLRenderPipelineState> * _pipelines;
    struct CharacterPoseSpecs { 
        float bodyOffsetX; 
        float footOffsetX; 
        float headOffsetX; 
    }  _poseSpecs;
    NSString * _prefix;
    int  _prevPose;
    int  _prevState;
    bool  _sayCheese;
    float  _scrubOffset;
    struct CharacterStateSpecs { 
        unsigned int bodyTexIdx; 
        unsigned int minuteTexIdx; 
        unsigned int hourArmOnLeftShoulder; 
        float xFlipBody; 
        float xFlipFoot; 
        float xFlipFace; 
        float xFlipMinuteHand; 
        float xFlipHourHand; 
        float leftShoulderX; 
        float rightShoulderX; 
        float minuteElbowBend; 
        float hourElbowBend; 
    }  _stateSpecs;
    NSDate * _timeTravelEnterDate;
    double  _toHourPercent;
    double  _toMinutePercent;
    float  _zoomFraction;
}

@property (nonatomic, readonly) bool active;
@property (retain) _Arms *arms;
@property (retain) _Background *background;
@property (retain) _Body *body;
@property (nonatomic) float characterBrightness;
@property (readonly) float characterScale;
@property (readonly) UIColor *clothingColor;
@property (readonly) int clothingColorLoc;
@property (readonly) float curTimeMod15Sec;
@property (readonly) float curTimeMod1Sec;
@property (readonly) float dampenBones;
@property (readonly) double desaturation;
@property (retain) _Foot *foot;
@property (retain) <MTLBuffer> *geometryMtlBuffer;
@property void globalOffset;
@property void globalScale;
@property (nonatomic) float glowBrightness;
@property (retain) _Head *head;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } headMatrix;
@property (nonatomic, readonly) NTKCharacterResourceLoader *loader;
@property (readonly) int modelMatrixLoc;
@property (readonly) void neckBone;
@property (nonatomic) float numbersAlpha;
@property (nonatomic) float numbersBrightness;
@property (nonatomic) float numbersScale;
@property (nonatomic, readonly) NSString *prefix;
@property (readonly) float zoomFraction;

+ (id)rendererWithCharacter:(unsigned long long)arg1 loader:(id)arg2;

- (void).cxx_destruct;
- (void)_applyClothingColorWithEncoder:(id)arg1;
- (void)_doneWaitingForFootRaise;
- (void)_drawArmFromShoulder:(void *)arg1 toWrist:(void *)arg2 withBend:(void *)arg3 withEncoder:(void *)arg4; // needs 4 arg types, found 2: float, id
- (void)_drawBackgroundWithEncoder:(id)arg1;
- (void)_drawBodyWithEncoder:(id)arg1;
- (void)_drawCharacterWithEncoder:(id)arg1;
- (void)_drawHeadWithEncoder:(id)arg1;
- (void)_drawHourHandWithEncoder:(id)arg1;
- (void)_drawMinuteHandWithEncoder:(id)arg1;
- (void)_drawTappingFootWithEncoder:(id)arg1;
- (bool)_footIsRaisedEnoughToStartAnimation;
- (float)_getElbowScaleForPosition:(float)arg1;
- (void)_idleBodyAfterAnimation;
- (void)_localeChanged;
- (void)_lowerFootAfterBodyAnimation;
- (void)_raiseFootForBodyAnimation;
- (void)_resetTimeVariable;
- (void)_setBlinkDuration:(float)arg1;
- (void)_setPoseSpecs:(struct CharacterPoseSpecs { float x1; float x2; float x3; })arg1;
- (void)_setStateSpecs:(struct CharacterStateSpecs { unsigned int x1; unsigned int x2; unsigned int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; })arg1;
- (void)_updateStateAndPose;
- (void)_updateTimeVariables;
- (void)_updateWaitingForFootRaise;
- (void)activate;
- (bool)active;
- (id)arms;
- (id)background;
- (void)bindPipelineState:(unsigned long long)arg1 withEncoder:(id)arg2;
- (id)body;
- (float)characterBrightness;
- (float)characterScale;
- (void)cleanupAfterZoom;
- (void)cleanupToOverrideDate:(id)arg1;
- (id)clothingColor;
- (int)clothingColorLoc;
- (void)copyStateFrom:(id)arg1;
- (int)curPose;
- (int)curState;
- (float)curTimeMod15Sec;
- (float)curTimeMod1Sec;
- (float)dampenBones;
- (void)deactivate;
- (void)dealloc;
- (double)desaturation;
- (id)foot;
- (void)forceUpdateTimeVariables;
- (id)geometryMtlBuffer;
- (int)getBlinkFrameFor15sTime:(float)arg1;
- (void)globalOffset;
- (void)globalScale;
- (float)glowBrightness;
- (id)head;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })headMatrix;
- (id)initWithCharacter:(unsigned long long)arg1 loader:(id)arg2 prefix:(id)arg3;
- (void)loadBackgroundTextures;
- (void)loadBodyTextures;
- (void)loadFootTextures;
- (void)loadHeadBlinkTextures;
- (void)loadHeadTextures;
- (void)loadNumbersTexture;
- (void)loadShiftTextures;
- (id)loader;
- (int)modelMatrixLoc;
- (void)neckBone;
- (float)numbersAlpha;
- (float)numbersBrightness;
- (float)numbersScale;
- (id)prefix;
- (void)prepareToAnimateToDate:(id)arg1 forOrb:(bool)arg2;
- (void)prepareToZoom;
- (void)renderWithEncoder:(id)arg1;
- (void)scrubToDate:(id)arg1;
- (void)setAnimationFrameInterval:(float)arg1;
- (void)setArms:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCharacterBrightness:(float)arg1;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2;
- (void)setFoot:(id)arg1;
- (void)setGeometryMtlBuffer:(id)arg1;
- (void)setGlobalOffset;
- (void)setGlobalScale;
- (void)setGlowBrightness:(float)arg1;
- (void)setHead:(id)arg1;
- (void)setNumbersAlpha:(float)arg1;
- (void)setNumbersBrightness:(float)arg1;
- (void)setNumbersScale:(float)arg1;
- (void)setOverrideDateFraction:(float)arg1;
- (void)setScrubOffset:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)setupBodyState;
- (void)setupGeometry;
- (void)setupPipelineState;
- (void)setupTextures;
- (void)significantTimeChanged:(id)arg1;
- (float)zoomFraction;

@end
