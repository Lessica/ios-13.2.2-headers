/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INExtensionContext : NSObject <NSSecureCoding> {
    NSArray * _airPlayRouteIdentifiers;
    NSString * _recordDeviceIdentifier;
    NSUUID * _recordDeviceUID;
    NSString * _recordRoute;
}

@property (setter=_setAirPlayRouteIdentifiers:, nonatomic, copy) NSArray *_airPlayRouteIdentifiers;
@property (setter=_setRecordDeviceIdentifier:, nonatomic, copy) NSString *_recordDeviceIdentifier;
@property (setter=_setRecordDeviceUID:, nonatomic, copy) NSUUID *_recordDeviceUID;
@property (setter=_setRecordRoute:, nonatomic, copy) NSString *_recordRoute;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_airPlayRouteIdentifiers;
- (id)_recordDeviceIdentifier;
- (id)_recordDeviceUID;
- (id)_recordRoute;
- (void)_setAirPlayRouteIdentifiers:(id)arg1;
- (void)_setRecordDeviceIdentifier:(id)arg1;
- (void)_setRecordDeviceUID:(id)arg1;
- (void)_setRecordRoute:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end