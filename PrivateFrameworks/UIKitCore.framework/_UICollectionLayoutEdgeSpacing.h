/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionLayoutEdgeSpacing : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    _UICollectionLayoutSpacing * _bottom;
    _UICollectionLayoutSpacing * _leading;
    _UICollectionLayoutSpacing * _top;
    _UICollectionLayoutSpacing * _trailing;
}

@property (nonatomic, readonly) _UICollectionLayoutSpacing *bottom;
@property (nonatomic, readonly) _UICollectionLayoutSpacing *leading;
@property (nonatomic, readonly) _UICollectionLayoutSpacing *top;
@property (nonatomic, readonly) _UICollectionLayoutSpacing *trailing;

+ (id)defaultSpacing;
+ (id)fixedSpacing:(double)arg1;
+ (id)flexibleSpacing:(double)arg1;
+ (id)spacingForLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;

- (void).cxx_destruct;
- (id)_apiRepresentation;
- (id)bottom;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithLeading:(id)arg1 top:(id)arg2 trailing:(id)arg3 bottom:(id)arg4;
- (id)leading;
- (id)top;
- (id)trailing;

@end
