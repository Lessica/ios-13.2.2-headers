/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraRecordingMediaContainerParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSNumber * _fragmentLength;
}

@property (nonatomic, readonly, copy) NSNumber *fragmentLength;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)fragmentLength;
- (id)initWithCoder:(id)arg1;
- (id)initWithFragmentLength:(id)arg1;
- (id)tlvData;

@end
