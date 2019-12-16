/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBAssertionDescriptorValidator : NSObject <RBAssertionDescriptorValidating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_errorWithDescription:(id)arg1;
- (id)_flattenedAttributesFromAttribute:(id)arg1 context:(id)arg2;
- (id)_flattenedAttributesFromContext:(id)arg1;
- (bool)isAssertionValidForContext:(id)arg1 error:(out id*)arg2;

@end
