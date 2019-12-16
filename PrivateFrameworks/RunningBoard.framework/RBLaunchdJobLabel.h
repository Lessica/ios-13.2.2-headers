/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBLaunchdJobLabel : NSObject <NSCopying> {
    RBSProcessIdentity * _identity;
    NSString * _prefix;
    unsigned short  _seed;
    NSString * _stringRepresentation;
}

@property (nonatomic, readonly, copy) RBSProcessIdentity *identity;
@property (nonatomic, readonly, copy) NSString *prefix;
@property (nonatomic, readonly) unsigned short seed;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

+ (id)labelFromStringRepresentation:(id)arg1;
+ (bool)mayMatchStringRepresentation:(id)arg1;
+ (id)newLabelWithIdentity:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDaemonIdentity:(id)arg1;
- (id)_initWithPrefix:(id)arg1 identity:(id)arg2 seed:(unsigned short)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identity;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)prefix;
- (unsigned short)seed;
- (id)stringRepresentation;

@end
