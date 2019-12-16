/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

@interface CWFLinkQualityMetric : NSObject <NSCopying, NSSecureCoding> {
    float  _CCA;
    long long  _RSSI;
    double  _txRate;
    NSDate * _updatedAt;
}

@property (nonatomic) float CCA;
@property (nonatomic) long long RSSI;
@property (nonatomic) double txRate;
@property (nonatomic, copy) NSDate *updatedAt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)CCA;
- (long long)RSSI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLinkQualityMetric:(id)arg1;
- (void)setCCA:(float)arg1;
- (void)setRSSI:(long long)arg1;
- (void)setTxRate:(double)arg1;
- (void)setUpdatedAt:(id)arg1;
- (double)txRate;
- (id)updatedAt;

@end
