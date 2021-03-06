/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPlaceInference : NSObject <NSSecureCoding> {
    double  _confidence;
    RTMapItem * _mapItem;
    unsigned long long  _placeType;
    RTLocation * _referenceLocation;
    unsigned long long  _userType;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) RTMapItem *mapItem;
@property (nonatomic, readonly) unsigned long long placeType;
@property (nonatomic, readonly) NSString *preferredName;
@property (nonatomic, readonly) RTLocation *referenceLocation;
@property (nonatomic, readonly) unsigned long long userType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapItem:(id)arg1 userType:(unsigned long long)arg2 placeType:(unsigned long long)arg3 referenceLocation:(id)arg4 confidence:(double)arg5;
- (id)mapItem;
- (id)nameFromUserType:(unsigned long long)arg1;
- (unsigned long long)placeType;
- (id)preferredName;
- (id)referenceLocation;
- (unsigned long long)userType;

@end
