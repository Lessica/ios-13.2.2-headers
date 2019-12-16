/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTVehicleEvent : NSObject <NSCopying, NSSecureCoding> {
    bool  _confirmed;
    NSDate * _date;
    NSUUID * _identifier;
    RTLocation * _location;
    bool  _locationFinalized;
    unsigned long long  _locationQuality;
    RTMapItem * _mapItem;
    RTLocationOfInterest * _nearbyLocationOfInterest;
    NSString * _notes;
    NSData * _photo;
    bool  _userSetLocation;
    bool  _usualLocation;
    NSString * _vehicleIdentifier;
}

@property (nonatomic) bool confirmed;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) RTLocation *location;
@property (nonatomic) bool locationFinalized;
@property (nonatomic) unsigned long long locationQuality;
@property (nonatomic, retain) RTMapItem *mapItem;
@property (nonatomic, copy) RTLocationOfInterest *nearbyLocationOfInterest;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, retain) NSData *photo;
@property (nonatomic) bool userSetLocation;
@property (nonatomic) bool usualLocation;
@property (nonatomic, copy) NSString *vehicleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)confirmed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 location:(id)arg2 vehicleIdentifier:(id)arg3 userSetLocation:(bool)arg4 notes:(id)arg5 identifier:(id)arg6 photo:(id)arg7 mapItem:(id)arg8 confirmed:(bool)arg9;
- (bool)isEqual:(id)arg1;
- (id)location;
- (bool)locationFinalized;
- (unsigned long long)locationQuality;
- (id)mapItem;
- (id)nearbyLocationOfInterest;
- (id)notes;
- (id)photo;
- (void)setConfirmed:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationFinalized:(bool)arg1;
- (void)setLocationQuality:(unsigned long long)arg1;
- (void)setMapItem:(id)arg1;
- (void)setNearbyLocationOfInterest:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setUserSetLocation:(bool)arg1;
- (void)setUsualLocation:(bool)arg1;
- (void)setVehicleIdentifier:(id)arg1;
- (bool)userSetLocation;
- (bool)usualLocation;
- (id)vehicleIdentifier;

@end
