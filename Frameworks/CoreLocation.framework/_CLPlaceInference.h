/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLPlaceInference : NSObject <NSCopying, NSSecureCoding, RCLocationOfInterest> {
    double  _confidence;
    unsigned long long  _placeType;
    CLPlacemark * _placemark;
    NSString * _preferredName;
    CLLocation * _referenceLocation;
    unsigned long long  _userType;
}

@property (nonatomic, readonly) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) unsigned long long placeType;
@property (nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly) CLLocation *referenceLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long userType;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 placemark:(id)arg3 referenceLocation:(id)arg4 confidence:(double)arg5 preferredName:(id)arg6;
- (unsigned long long)placeType;
- (id)placemark;
- (id)preferredName;
- (id)referenceLocation;
- (unsigned long long)userType;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (void)initialize;

- (id)location;
- (id)preferredName;

@end
