/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsETARequester : NSObject <MapsSuggestionsObject> {
    GEOAutomobileOptions * _automobileOptions;
    CLLocation * _currentLocationUsed;
    GEOComposedWaypoint * _currentLocationWaypoint;
    MapsSuggestionsETARequirements * _etaRequirements;
    int  _forcedTransportMode;
    int  _mapType;
    NSObject<OS_dispatch_queue> * _queue;
    MapsSuggestionsNetworkRequester * _requester;
    MNTimeballService * _timeballService;
    <MapsSuggestionsPredictor> * _transportModePredictor;
    MNRouteUpdateFreshness * _updateFreshness;
    NSMutableDictionary * _waypoints;
    NSLock * _waypointsLock;
}

@property (retain) GEOAutomobileOptions *automobileOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property int mapType;
@property MapsSuggestionsNetworkRequester *requester;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (bool)ETAsFromLocation:(id)arg1 toEntries:(struct NSArray { Class x1; }*)arg2 completion:(id /* block */)arg3;
- (bool)_determineTransportTypeFromOrigin:(id)arg1 toEntry:(id)arg2 completion:(id /* block */)arg3;
- (bool)_keepExistingWaypointsForEntries:(struct NSArray { Class x1; }*)arg1;
- (bool)_old_requestETAsToEntries:(struct NSArray { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (bool)_requestETAsToEntries:(struct NSArray { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (bool)_requestWaypointForCurrentLocation:(id)arg1;
- (bool)_requestWaypointsForEntries:(struct NSArray { Class x1; }*)arg1;
- (bool)_timeball_requestETAsToEntries:(struct NSArray { Class x1; }*)arg1 completion:(id /* block */)arg2;
- (id)_transportTypesForDestinationEntries:(id)arg1;
- (id)automobileOptions;
- (void)forceTransportType:(int)arg1;
- (id)initWithNetworkRequester:(id)arg1 transportModePredictor:(id)arg2 requirements:(id)arg3;
- (int)mapType;
- (id)requester;
- (void)setAutomobileOptions:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setRequester:(id)arg1;
- (struct NSString { Class x1; }*)uniqueName;

@end
