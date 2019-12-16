/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
 */

@interface PREResponsesExperiment : NSObject {
    _PASLock * _cacheLock;
    PREResponsesGeneratedEvent * _cachedResponsesGeneratedEvent;
    NSObject<PREResponsesMetricsProtocol> * _metrics;
    bool  _registerDisplayed;
    RKMessageResponseManager * _rkClient;
    NSObject<PREResponsesTrialProtocol> * _trial;
    NSObject<PREResponsesProtocol> * _xpcClient;
}

@property (nonatomic) bool registerDisplayed;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)activeExperimentName;
- (id)cacheKeyForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 time:(id)arg3 language:(id)arg4;
- (id)clippedMessageIfNecessary:(id)arg1;
- (id)init;
- (id)initWithTrialClient:(id)arg1 metricsClient:(id)arg2 xpcClient:(id)arg3 rkClient:(id)arg4;
- (id)inputMethodStringFrom:(int)arg1;
- (bool)isStringEmpty:(id)arg1;
- (int)preInputMethodFrom:(id)arg1;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 completionBlock:(id /* block */)arg8;
- (void)primeResponsesExperimentsIfNeeded;
- (bool)registerDisplayed;
- (void)registerImpressionWithPreResponseItems:(id)arg1 language:(id)arg2 isCached:(bool)arg3 responseTimePerf:(unsigned long long)arg4 promptMessage:(id)arg5 generationStatus:(int)arg6;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 time:(id)arg3 metadata:(id)arg4 withLanguage:(id)arg5;
- (id)responsesCacheLock;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 completionBlock:(id /* block */)arg8;
- (void)setRegisterDisplayed:(bool)arg1;
- (bool)shouldUseDefaultRKTreatment;
- (id)stringArrayFromConversationTurns:(id)arg1;
- (id)stringArrayFromPreResponseItems:(id)arg1;
- (id)waitForPreResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7;

@end