/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMultiPoint : MKShape <MKGeoJSONObject> {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingRect;
    unsigned long long  _pointCount;
    struct { double x1; double x2; } * _points;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pointCount;
@property (readonly) Class superclass;

- (void)_assignPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)_calculateBounds;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2;
- (void)_pointsDidChange;
- (void)_setBounds:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCoordinates:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)_setPoints:(const struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)_wrapAroundTheDateline:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)getCoordinates:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)pointCount;
- (struct { double x1; double x2; }*)points;

@end
