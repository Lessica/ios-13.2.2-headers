/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSURI : NSObject <NSCopying, NSSecureCoding> {
    NSString * _prefixedURI;
}

@property (nonatomic, retain) NSString *prefixedURI;
@property (nonatomic, readonly) NSString *unprefixedURI;

+ (id)URIWithPrefixedURI:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrefixedURI:(id)arg1;
- (id)initWithUnprefixedURI:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToURI:(id)arg1;
- (id)prefixedURI;
- (void)setPrefixedURI:(id)arg1;
- (id)unprefixedURI;

@end
