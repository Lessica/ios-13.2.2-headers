/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface WK_RTCVideoEncoderH264 : NSObject <WK_RTCVideoEncoder> {
    WK_RTCVideoCodecInfo * _codecInfo;
    NSMutableArray * _codecs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
- (id)implementationName;
- (id)initWithCodecInfo:(id)arg1;
- (long long)releaseEncoder;
- (id)scalingSettings;
- (int)setBitrate:(unsigned int)arg1 framerate:(unsigned int)arg2;
- (void)setCallback:(id /* block */)arg1;
- (int)setRateAllocation:(id)arg1 framerate:(unsigned int)arg2;
- (long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;

@end
