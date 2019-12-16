/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession> {
    GEOApplicationAuditToken * _auditToken;
    id /* block */  _batteryHandler;
    double  _currentRoutePosition;
    <GEORoutePreloadSessionDelegate> * _delegate;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _didTearDown;
    int  _downloadState;
    bool  _enabled;
    bool  _fullDebuggingEnabled;
    bool  _loggingEnabled;
    bool  _minimalDebuggingEnabled;
    unsigned long long  _networkQuality;
    bool  _paused;
    GEOComposedRoute * _route;
    double  _stepSizeInMeters;
    id /* block */  _tileKeyIsDownloadedPredicate;
    NSMutableDictionary * _tileSetStyles;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, copy) id /* block */ batteryHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEORoutePreloadSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long networkQuality;
@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) id /* block */ tileKeyIsDownloadedPredicate;

+ (id)preloaderForRoute:(id)arg1;
+ (id)preloaderForRoute:(id)arg1 auditToken:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(bool)arg1;
- (void)_start;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (id)auditToken;
- (id /* block */)batteryHandler;
- (void)beginLoading;
- (void)dealloc;
- (id)delegate;
- (bool)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(struct { double x1; double x2; }*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
- (id)init;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2 loggingEnabled:(bool)arg3 minimalDebugging:(bool)arg4 fullDebugging:(bool)arg5 batteryHandler:(id /* block */)arg6;
- (id)initWithRoute:(id)arg1 loggingEnabled:(bool)arg2 minimalDebugging:(bool)arg3 fullDebugging:(bool)arg4 batteryHandler:(id /* block */)arg5;
- (bool)isSufficientlyLoaded;
- (bool)loggingEnabled;
- (bool)minimalDebuggingEnabled;
- (unsigned long long)networkQuality;
- (void)performTearDown;
- (int)preloadStateForTile:(const struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEORegionalResourceKey { unsigned int x_2_2_1 : 32; unsigned int x_2_2_2 : 8; unsigned int x_2_2_3 : 6; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2; struct _GEOSputnikMetadataKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 24; unsigned int x_3_2_3 : 14; unsigned int x_3_2_4 : 8; } x_3_1_3; struct _GEOFlyoverKey { unsigned int x_4_2_1 : 6; unsigned int x_4_2_2 : 26; unsigned int x_4_2_3 : 26; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 24; unsigned int x_4_2_6 : 14; unsigned int x_4_2_7 : 8; unsigned int x_4_2_8 : 8; } x_3_1_4; struct _GEOTransitLineSelectionKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 25; unsigned int x_5_2_3 : 25; unsigned int x_5_2_4 : 64; } x_3_1_5; struct _GEOTileOverlayKey { unsigned int x_6_2_1 : 6; unsigned int x_6_2_2 : 26; unsigned int x_6_2_3 : 26; unsigned int x_6_2_4 : 8; unsigned int x_6_2_5 : 32; } x_3_1_6; } x3; }*)arg1;
- (id)preloaderLog;
- (void)reachabilityChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)route;
- (void)setBatteryHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (void)setTraits:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)tearDown;
- (id /* block */)tileKeyIsDownloadedPredicate;
- (void)tilesChanged;
- (void)updateWithRouteMatch:(id)arg1;

@end