/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBGroupSwitcherModifierAction : SBSwitcherModifierAction {
    NSMutableArray * _actions;
}

+ (id)groupActionWithActions:(id)arg1;

- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (void)addActions:(id)arg1;
- (id)appendAction:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)enumerateActionsUsingBlock:(id /* block */)arg1;
- (void)enumerateLeafActionsUsingBlock:(id /* block */)arg1;
- (id)init;
- (unsigned long long)leafCount;
- (long long)type;

@end
