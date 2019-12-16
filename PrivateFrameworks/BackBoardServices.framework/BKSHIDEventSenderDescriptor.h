/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventSenderDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDisplay * _associatedDisplay;
    bool  _authenticated;
    long long  _hardwareType;
    unsigned int  _primaryPage;
    unsigned int  _primaryUsage;
}

@property (nonatomic, readonly) BKSHIDEventDisplay *associatedDisplay;
@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (nonatomic, readonly) long long hardwareType;
@property (nonatomic, readonly) unsigned int primaryPage;
@property (nonatomic, readonly) unsigned int primaryUsage;

+ (id)build:(id /* block */)arg1;
+ (bool)supportsSecureCoding;
+ (id)wildcard;

- (void).cxx_destruct;
- (id)_initWithHardwareType:(long long)arg1 associatedDisplay:(id)arg2 authenticated:(bool)arg3 primaryPage:(unsigned int)arg4 primaryUsage:(unsigned int)arg5;
- (id)associatedDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hardwareType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAuthenticated;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)primaryPage;
- (unsigned int)primaryUsage;

@end
