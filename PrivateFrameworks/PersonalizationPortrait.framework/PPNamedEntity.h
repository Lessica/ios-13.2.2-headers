/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPNamedEntity : _PASZonedObject <NSCopying, NSSecureCoding> {
    NSString * _bestLanguage;
    unsigned long long  _category;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *bestLanguage;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) PPNamedEntityRecord *mostRelevantRecord;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double sentimentScore;

+ (id)describeCategory:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestLanguage;
- (unsigned long long)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNamedEntity:(id)arg1;
- (id)mostRelevantRecord;
- (id)name;
- (double)sentimentScore;

@end
