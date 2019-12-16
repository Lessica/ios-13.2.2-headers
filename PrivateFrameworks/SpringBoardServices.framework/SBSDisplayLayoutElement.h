/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSDisplayLayoutElement : FBSDisplayLayoutElement <SBSDisplayLayoutElement>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutRole;
@property (getter=isSpringBoardElement, nonatomic, readonly) bool springBoardElement;
@property (readonly) Class superclass;

- (id)initWithIdentifier:(id)arg1 layoutRole:(long long)arg2;
- (bool)isSpringBoardElement;
- (long long)layoutRole;
- (void)setLayoutRole:(long long)arg1;
- (id)succinctDescriptionBuilder;

@end
