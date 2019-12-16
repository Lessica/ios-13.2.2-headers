/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartScene : NSObject {
    TSCH3DChartSceneInfo * mSceneInfo;
}

+ (void)addObjectsToSceneWithSceneInfo:(id)arg1;
+ (bool)supportsValueAxisLabelAlignmentCaching;

- (void)addAllLabelsToScene;
- (void)addAllObjectsToScene;
- (void)addChartTitlesToScene;
- (void)addLabelsToScene;
- (void)addObjectsToScene;
- (void)addSeriesObjectsToScene;
- (void)adjustSceneSettings;
- (id)chartInfo;
- (id)chartType;
- (void)dealloc;
- (id)initWithSceneInfo:(id)arg1;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })layoutSettings;
- (id)scene;
- (id)seriesType;

@end
