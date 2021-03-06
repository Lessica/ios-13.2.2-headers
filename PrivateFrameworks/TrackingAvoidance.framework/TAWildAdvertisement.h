/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

@interface TAWildAdvertisement : NSObject <OSLogCoding, TAEventProtocol> {
    NSData * _address;
    NSData * _advertisementData;
    NSData * _reserved;
    long long  _rssi;
    NSDate * _scanDate;
    unsigned char  _status;
}

@property (nonatomic, readonly, copy) NSData *address;
@property (nonatomic, readonly, copy) NSData *advertisementData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *reserved;
@property (nonatomic, readonly) long long rssi;
@property (nonatomic, readonly, copy) NSDate *scanDate;
@property (nonatomic, readonly) unsigned char status;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)advertisementData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)reserved;
- (long long)rssi;
- (id)scanDate;
- (unsigned char)status;

@end
