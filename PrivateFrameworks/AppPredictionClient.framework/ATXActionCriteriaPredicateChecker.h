/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor> {
    bool  _ok;
    NSSet * _propertyNames;
}

- (void).cxx_destruct;
- (id)initWithObject:(id)arg1;
- (bool)isValid:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
