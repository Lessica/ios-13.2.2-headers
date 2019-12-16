/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKBaseFormat : TSKFormat <NSCopying> {
    unsigned char  _base;
    unsigned char  _basePlaces;
    bool  _baseUseMinusSign;
}

@property (nonatomic, readonly) unsigned char base;
@property (nonatomic, readonly) unsigned char basePlaces;
@property (nonatomic, readonly) bool baseUseMinusSign;

+ (id)defaultHexadecimalFormat;

- (id)asBaseFormat;
- (unsigned char)base;
- (unsigned char)basePlaces;
- (bool)baseUseMinusSign;
- (unsigned long long)hash;
- (id)initWithBase:(unsigned char)arg1 basePlaces:(unsigned char)arg2 baseUseMinusSign:(bool)arg3;
- (id)initWithFormatType:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;

@end
