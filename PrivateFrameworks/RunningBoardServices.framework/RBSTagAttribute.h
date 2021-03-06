/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSTagAttribute : RBSAttribute {
    NSString * _tag;
}

@property (nonatomic, readonly, copy) NSString *tag;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)attributeWithTag:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithTag:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)tag;

// Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

- (void)applyToAssertionTransientState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
