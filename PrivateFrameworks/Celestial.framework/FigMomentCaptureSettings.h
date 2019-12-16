/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigMomentCaptureSettings : NSObject <NSCopying, NSSecureCoding> {
    int  _HDRMode;
    bool  _autoDeferredProcessingEnabled;
    bool  _autoOriginalPhotoDeliveryEnabled;
    bool  _autoRedEyeReductionEnabled;
    bool  _autoSpatialOverCaptureEnabled;
    int  _digitalFlashMode;
    int  _flashMode;
    int  _qualityPrioritization;
    long long  _settingsID;
    int  _torchMode;
    unsigned long long  _userInitiatedCaptureTime;
}

@property (nonatomic) int HDRMode;
@property (getter=isAutoDeferredProcessingEnabled, nonatomic) bool autoDeferredProcessingEnabled;
@property (getter=isAutoOriginalPhotoDeliveryEnabled, nonatomic) bool autoOriginalPhotoDeliveryEnabled;
@property (nonatomic) bool autoRedEyeReductionEnabled;
@property (getter=isAutoSpatialOverCaptureEnabled, nonatomic) bool autoSpatialOverCaptureEnabled;
@property (nonatomic) int digitalFlashMode;
@property (nonatomic) int flashMode;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic, readonly) long long settingsID;
@property (nonatomic) int torchMode;
@property (nonatomic, readonly) unsigned long long userInitiatedCaptureTime;

+ (bool)supportsSecureCoding;

- (int)HDRMode;
- (bool)autoRedEyeReductionEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)digitalFlashMode;
- (void)encodeWithCoder:(id)arg1;
- (int)flashMode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1 userInitiatedCaptureTime:(unsigned long long)arg2;
- (bool)isAutoDeferredProcessingEnabled;
- (bool)isAutoOriginalPhotoDeliveryEnabled;
- (bool)isAutoSpatialOverCaptureEnabled;
- (bool)isEqual:(id)arg1;
- (int)qualityPrioritization;
- (void)setAutoDeferredProcessingEnabled:(bool)arg1;
- (void)setAutoOriginalPhotoDeliveryEnabled:(bool)arg1;
- (void)setAutoRedEyeReductionEnabled:(bool)arg1;
- (void)setAutoSpatialOverCaptureEnabled:(bool)arg1;
- (void)setDigitalFlashMode:(int)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setQualityPrioritization:(int)arg1;
- (void)setTorchMode:(int)arg1;
- (long long)settingsID;
- (int)torchMode;
- (unsigned long long)userInitiatedCaptureTime;

@end
