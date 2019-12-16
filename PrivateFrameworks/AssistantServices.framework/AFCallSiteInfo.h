/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFCallSiteInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _imagePath;
    NSString * _symbolName;
}

@property (nonatomic, readonly, copy) NSString *imagePath;
@property (nonatomic, readonly, copy) NSString *symbolName;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imagePath;
- (id)initWithCoder:(id)arg1;
- (id)initWithImagePath:(id)arg1 symbolName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)symbolName;

@end
