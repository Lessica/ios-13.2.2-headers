/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSAction : NSObject {
    SBFLockScreenActionContext * _context;
    long long  _type;
}

@property (nonatomic, retain) SBFLockScreenActionContext *context;
@property (nonatomic) long long type;

+ (id)actionWithContext:(id)arg1;
+ (id)actionWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setType:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;

@end