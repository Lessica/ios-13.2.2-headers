/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

@interface CVAUserEvent : NSObject <NSSecureCoding> {
    unsigned long long  _eventType;
    NSNumber * _movLowestTimestamp;
    NSString * _peerDisplayName;
    NSNumber * _sessionID;
    double  _timestamp;
    NSUUID * _uuid;
}

@property unsigned long long eventType;
@property (nonatomic, retain) NSNumber *movLowestTimestamp;
@property (nonatomic, retain) NSString *peerDisplayName;
@property (nonatomic, retain) NSNumber *sessionID;
@property double timestamp;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(unsigned long long)arg1 timestamp:(double)arg2;
- (id)movLowestTimestamp;
- (id)peerDisplayName;
- (id)sessionID;
- (void)setEventType:(unsigned long long)arg1;
- (void)setMovLowestTimestamp:(id)arg1;
- (void)setPeerDisplayName:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUuid:(id)arg1;
- (double)timestamp;
- (id)uuid;

@end
