/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapAccessTransitHall : GEOMapAccessTransitNodeBase <GEOMapTransitHall> {
    <GEOMapTransitStation> * _station;
}

@property (nonatomic, readonly) double boundingRadius;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) struct { double x1; double x2; }*polygonPoints;
@property (nonatomic, readonly) long long polygonPointsCount;
@property (nonatomic, readonly) unsigned long long stationID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long transitID;

- (void).cxx_destruct;
- (id)findStation:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)findStops:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)stationID;

@end
