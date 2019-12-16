/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl {
    <RBSProcessIdentifier> * _identifier;
}

@property (nonatomic, readonly) <RBSProcessIdentifier> *identifier;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;

@end
