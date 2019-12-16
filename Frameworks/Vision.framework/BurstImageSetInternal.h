/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface BurstImageSetInternal : NSObject {
    BurstActionClassifier * _actionClassifier;
    NSMutableArray * _allImageIdentifiers;
    NSArray * _bestImageIdentifiersArray;
    NSObject<OS_dispatch_queue> * _burstAnalyzerDispatchQueue;
    NSString * _burstCoverSelection;
    NSString * _burstId;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _burstLogFileHandle;
    NSString * _burstLogFileName;
    NSMutableArray * _clusterArray;
    NSMutableDictionary * _clusterByImageIdentifier;
    int  _currentClusterIndexToProcess;
    int  _dummyAnalysisCount;
    bool  _enableAnalysis;
    bool  _enableDumpYUV;
    bool  _enableFaceCore;
    BurstImageFaceAnalysisContext * _faceAnalysisContext;
    NSCountedSet * _faceIDCounts;
    bool  _isAction;
    bool  _isPortrait;
    id /* block */  _loggingCallback;
    int  _maxNumPendingFrames;
    VNImageBuffer * _overrideImage;
    NSDictionary * _overrideProps;
    NSObject<OS_dispatch_semaphore> * _pendingFramesSemaphore;
    NSMutableDictionary * _statsByImageIdentifier;
    int  _temporalOrder;
    int  _version;
    NSString * _versionString;
    NSObject<OS_dispatch_queue> * _yuvdumpDispatchQueue;
}

@property (retain) BurstActionClassifier *actionClassifier;
@property (retain) NSMutableArray *allImageIdentifiers;
@property (retain) NSArray *bestImageIdentifiersArray;
@property (retain) NSString *burstCoverSelection;
@property (retain) NSString *burstId;
@property (retain) NSString *burstLogFileName;
@property (retain) NSMutableArray *clusterArray;
@property (retain) NSMutableDictionary *clusterByImageIdentifier;
@property int dummyAnalysisCount;
@property bool enableAnalysis;
@property bool enableDumpYUV;
@property bool enableFaceCore;
@property (retain) BurstImageFaceAnalysisContext *faceAnalysisContext;
@property (retain) NSCountedSet *faceIDCounts;
@property (nonatomic, copy) id /* block */ loggingCallback;
@property int maxNumPendingFrames;
@property (retain) VNImageBuffer *overrideImage;
@property (retain) NSDictionary *overrideProps;
@property (retain) NSMutableDictionary *statsByImageIdentifier;
@property int temporalOrder;
@property int version;
@property (retain) NSString *versionString;

+ (id)defaultVersionString;

- (void).cxx_destruct;
- (void)_addImageInternal:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)_reorientFaceRects:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 orientation:(int)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_reorientROIRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 orientation:(int)arg3;
- (id)actionClassifier;
- (void)addImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)allImageClusters;
- (id)allImageIdentifiers;
- (id)bestImageIdentifiers;
- (id)bestImageIdentifiersArray;
- (id)burstCoverSelection;
- (id)burstDocumentDirectory;
- (id)burstId;
- (id)burstLogFileName;
- (id)clusterArray;
- (id)clusterByImageIdentifier;
- (float)computeActionSelectionThreshold;
- (void)computeAllImageScores;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeCameraTravelDistance;
- (int)computeEmotion:(id)arg1;
- (void)dealloc;
- (int)dummyAnalysisCount;
- (bool)enableAnalysis;
- (bool)enableDumpYUV;
- (bool)enableFaceCore;
- (id)faceAnalysisContext;
- (id)faceIDCounts;
- (id)findBestImage:(id)arg1 useActionScores:(bool)arg2;
- (id)imageClusterForIdentifier:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (bool)isAction;
- (bool)isFaceDetectionForced;
- (bool)isPortrait;
- (id /* block */)loggingCallback;
- (int)maxNumPendingFrames;
- (id)overrideImage;
- (id)overrideProps;
- (void)performEmotionalRejectionOnCluster:(id)arg1;
- (void)processClusters:(bool)arg1;
- (double)secondsSinceStart;
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;
- (void)setActionClassifier:(id)arg1;
- (void)setAllImageIdentifiers:(id)arg1;
- (void)setBestImageIdentifiersArray:(id)arg1;
- (void)setBurstCoverSelection:(id)arg1;
- (void)setBurstId:(id)arg1;
- (void)setBurstLogFileName:(id)arg1;
- (void)setClusterArray:(id)arg1;
- (void)setClusterByImageIdentifier:(id)arg1;
- (void)setDummyAnalysisCount:(int)arg1;
- (void)setEnableAnalysis:(bool)arg1;
- (void)setEnableDumpYUV:(bool)arg1;
- (void)setEnableFaceCore:(bool)arg1;
- (void)setFaceAnalysisContext:(id)arg1;
- (void)setFaceIDCounts:(id)arg1;
- (void)setLoggingCallback:(id /* block */)arg1;
- (void)setMaxNumPendingFrames:(int)arg1;
- (void)setOverrideImage:(id)arg1;
- (void)setOverrideProps:(id)arg1;
- (void)setStatsByImageIdentifier:(id)arg1;
- (void)setTemporalOrder:(int)arg1;
- (void)setVersion:(int)arg1;
- (void)setVersionString:(id)arg1;
- (id)statsByImageIdentifier;
- (int)temporalOrder;
- (int)version;
- (id)versionString;

@end
