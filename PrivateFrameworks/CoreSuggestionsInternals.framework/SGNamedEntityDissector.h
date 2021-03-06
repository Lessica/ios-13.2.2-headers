/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGNamedEntityDissector : SGPipelineDissector {
    int  _linguisticDataNotificationToken;
    _PASLock * _lock;
    bool  _significanceCheckEnabled;
}

- (void).cxx_destruct;
- (void)_collectCustomTaggerResultsWithText:(id)arg1 eligibleRegions:(id)arg2 isMessagesSource:(bool)arg3 addNamedEntity:(id /* block */)arg4;
- (id)_collectDataDetectorsWithText:(id)arg1 algorithms:(id)arg2 dataDetections:(id)arg3 isMessagesSource:(bool)arg4 lookupQids:(id)arg5 addNamedEntity:(id /* block */)arg6;
- (void)_collectNLPTaggerResultsWithText:(id)arg1 ddMatches:(id)arg2 eligibleRegions:(id)arg3 isMessagesSource:(bool)arg4 addNamedEntity:(id /* block */)arg5;
- (id)_entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 dataDetections:(id)arg3 source:(id)arg4 cloudSync:(bool)arg5 algorithms:(id)arg6;
- (void)_harvestLocationFromEntity:(id)arg1 category:(unsigned long long)arg2 enrichment:(id)arg3 algorithm:(unsigned short)arg4;
- (void)_registerForNotifications;
- (void)dealloc;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)entitiesInPlainText:(id)arg1 withEligibleRegions:(id)arg2 source:(id)arg3 cloudSync:(bool)arg4 algorithms:(id)arg5;
- (id)init;
- (id)initWithSignificanceCheckEnabled:(bool)arg1;

@end
