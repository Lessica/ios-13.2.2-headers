/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTrafficCameraFeature : VKTrafficFeature {
    bool  _isAboveSpeedThreshold;
    unsigned int  _speedLimit;
    NSString * _speedLimitText;
    unsigned int  _speedThreshold;
    long long  _type;
}

@property (nonatomic) bool isAboveSpeedThreshold;
@property (nonatomic, readonly) NSString *speedLimitText;
@property (nonatomic, readonly) unsigned int speedThreshold;
@property (nonatomic, readonly) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithTrafficCamera:(id)arg1;
- (bool)isAboveSpeedThreshold;
- (bool)isSpeedLimitCamera;
- (void)setIsAboveSpeedThreshold:(bool)arg1;
- (id)speedLimitText;
- (unsigned int)speedThreshold;
- (long long)type;

@end