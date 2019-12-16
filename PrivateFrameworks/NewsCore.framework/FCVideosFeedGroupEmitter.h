/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCVideosFeedGroupEmitter : NSObject <FCFeedGroupEmitting> {
    <FCFeedGroupInsertionDescriptor> * _insertionDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool emitsSingleRefreshSessionGroups;
@property (nonatomic, readonly) bool emitsSingletonGroups;
@property (nonatomic, readonly, copy) NSSet *emittableGroupTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <FCFeedGroupInsertionDescriptor> *insertionDescriptor;
@property (nonatomic, readonly) bool isRequiredByFollowingEmitters;
@property (nonatomic, readonly) long long requiredForYouContentTypes;
@property (nonatomic, readonly) bool requiresHeavyweightContent;
@property (readonly) Class superclass;

+ (id)groupEmitterIdentifier;

- (void).cxx_destruct;
- (id)backingChannelTagIDWithConfiguration:(id)arg1;
- (bool)emitsSingleRefreshSessionGroups;
- (id)emittableGroupTypes;
- (id)init;
- (id)initWithInsertionDescriptor:(id)arg1;
- (id)insertionDescriptor;
- (id)operationToEmitGroupWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (long long)requiredForYouContentTypes;
- (bool)wantsToEmitGroupInContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3;
- (bool)wantsToInsertGroupInContext:(id)arg1;

@end
