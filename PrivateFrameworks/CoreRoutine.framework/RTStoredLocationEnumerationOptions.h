/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTStoredLocationEnumerationOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _batchSize;
    NSDateInterval * _dateInterval;
    double  _horizontalAccuracy;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, copy) NSDateInterval *dateInterval;
@property (nonatomic) double horizontalAccuracy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)horizontalAccuracy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 horizontalAccuracy:(double)arg2 batchSize:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOptions:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setDateInterval:(id)arg1;
- (void)setHorizontalAccuracy:(double)arg1;

@end
