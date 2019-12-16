/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPLocation : NSObject <NSCopying, NSSecureCoding> {
    unsigned short  _category;
    PPLocationRecord * _mostRelevantRecord;
    CLPlacemark * _placemark;
}

@property (nonatomic, readonly) unsigned short category;
@property (nonatomic, readonly) PPLocationRecord *mostRelevantRecord;
@property (nonatomic, readonly) CLPlacemark *placemark;

+ (id)describeCategory:(unsigned short)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customizedDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLocation:(id)arg1;
- (id)mostRelevantRecord;
- (id)placemark;

@end
