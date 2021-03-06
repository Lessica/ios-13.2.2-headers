/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding> {
    bool  _enabled;
    bool  _isEmergencyText;
    long long  _type;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool isEmergencyText;
@property (nonatomic) long long type;

+ (id)convertFromEmergencyMode:(const struct EmergencyMode { int x1; int x2; int x3; bool x4; }*)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1 type:(long long)arg2;
- (id)initWithEnabled:(bool)arg1 type:(long long)arg2 isEmergencyText:(bool)arg3;
- (bool)isEmergencyText;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTEmergencyMode:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsEmergencyText:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
