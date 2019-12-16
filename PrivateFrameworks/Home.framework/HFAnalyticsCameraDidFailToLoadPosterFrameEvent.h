/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAnalyticsCameraDidFailToLoadPosterFrameEvent : HFAnalyticsEvent {
    NSUUID * _cameraID;
    NSUUID * _clipID;
    NSDate * _clipStartDate;
    long long  _errorCode;
    NSString * _errorDomain;
    double  _posterFrameTimeOffset;
}

@property (nonatomic, retain) NSUUID *cameraID;
@property (nonatomic, retain) NSUUID *clipID;
@property (nonatomic, retain) NSDate *clipStartDate;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) double posterFrameTimeOffset;

- (void).cxx_destruct;
- (id)cameraID;
- (id)clipID;
- (id)clipStartDate;
- (long long)errorCode;
- (id)errorDomain;
- (id)initWithData:(id)arg1;
- (id)payload;
- (double)posterFrameTimeOffset;
- (void)setCameraID:(id)arg1;
- (void)setClipID:(id)arg1;
- (void)setClipStartDate:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setPosterFrameTimeOffset:(double)arg1;

@end
