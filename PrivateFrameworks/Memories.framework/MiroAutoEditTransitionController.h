/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAutoEditTransitionController : NSObject {
    MiroBlueprint * _activeBlueprint;
    MiroMemory * _activeMemory;
    NSMutableDictionary * _groupingTransitions;
    MiroAutoEditKenBurnsController * _kbController;
    NSMutableArray * _kenBurnsPanZoomPatterns;
    NSMutableArray * _layoutClips;
    NSMutableArray * _multiTransitions;
    int  _numberOfPotentialTransitionPoints;
    Project * _project;
    NSMutableArray * _specialTransitions;
    NSMutableArray * _transitions;
}

@property (nonatomic, retain) MiroBlueprint *activeBlueprint;
@property (nonatomic) MiroMemory *activeMemory;
@property (nonatomic, retain) NSMutableDictionary *groupingTransitions;
@property (nonatomic, retain) MiroAutoEditKenBurnsController *kbController;
@property (nonatomic, retain) NSMutableArray *kenBurnsPanZoomPatterns;
@property (nonatomic, retain) NSMutableArray *layoutClips;
@property (nonatomic, retain) NSMutableArray *multiTransitions;
@property (nonatomic) int numberOfPotentialTransitionPoints;
@property (nonatomic, retain) Project *project;
@property (nonatomic, retain) NSMutableArray *specialTransitions;
@property (nonatomic, retain) NSMutableArray *transitions;

- (void).cxx_destruct;
- (id)_everyTransitionDEBUG;
- (id)activeBlueprint;
- (id)activeMemory;
- (void)adjustChosenTransitionsToAdhereToContentRules:(id)arg1;
- (void)applyClipEffectsBasedOnTransitions;
- (void)applyDeterminedKenBurnsTreatments:(id)arg1 forAspect:(id)arg2;
- (void)applyKenBurnsForBurstClip:(id)arg1;
- (void)applyKenBurnsOrEffectForKenBurnsClip:(id)arg1;
- (void)applyMultiUpTransitionTreatmentToLayoutClip:(id)arg1;
- (void)applyPanoStyleToClip:(id)arg1;
- (void)applyTransitionToLayoutClip:(id)arg1;
- (void)applyTransitions;
- (void)assignFirstAppropriateTransitionTo:(id)arg1;
- (void)assignRemainingKenBurnsAnyClipTreatments;
- (void)assignRequiredCutsAndMultiTransitionsIn:(id)arg1;
- (void)assignTransitionsToLayoutClips;
- (bool)attemptToTransitionFromClip:(id)arg1 toClip:(id)arg2 withSettingsFromLayoutClip:(id)arg3;
- (id)clipBeforeClip:(id)arg1;
- (bool)clipHasMediaLimitations:(id)arg1;
- (bool)clipShouldTrimToSelection:(id)arg1;
- (id)convertMultiTransitionDictionary:(id)arg1 basedOnMultiLayout:(int)arg2;
- (void)establishPanAndZoomPatterns;
- (bool)findAndAssignConsecutiveClipsIn:(id)arg1 supportingTransitionGroup:(id)arg2;
- (id)groupingTransitions;
- (id)kbController;
- (unsigned long long)kenBurnsPaceForBlueprint;
- (id)kenBurnsPanZoomPatterns;
- (unsigned long long)kenBurnsPreferredMovementForClip:(id)arg1;
- (id)layoutClips;
- (int)maxTransitionDurationFromClip:(id)arg1 toClip:(id)arg2 transitionName:(id)arg3;
- (id)multiTransitions;
- (id)nextKBPanAndZoomSetForNumberOfEdits:(int)arg1 following:(id)arg2 forAspect:(id)arg3;
- (int)numberOfMultiTransitionsNeeded;
- (int)numberOfPotentialTransitionPoints;
- (int)numberOfTransitionClipsInLayoutClips;
- (void)prepareTransitionsForBlueprint;
- (id)prepareTransitionsFromBlueprint:(id)arg1 forNumberOfEditPoints:(int)arg2 numberOfMultiTransitions:(int)arg3;
- (id)project;
- (unsigned long long)safeInsertIndexForTransition:(id)arg1 inTransitions:(id)arg2;
- (void)setActiveBlueprint:(id)arg1;
- (void)setActiveMemory:(id)arg1;
- (void)setGroupingTransitions:(id)arg1;
- (void)setKbController:(id)arg1;
- (void)setKenBurnsPanZoomPatterns:(id)arg1;
- (void)setLayoutClips:(id)arg1;
- (void)setMultiTransitions:(id)arg1;
- (void)setNumberOfPotentialTransitionPoints:(int)arg1;
- (void)setProject:(id)arg1;
- (void)setSpecialTransitions:(id)arg1;
- (void)setTransitions:(id)arg1;
- (void)shuffleTransitionsInArray:(id)arg1;
- (id)specialTransitions;
- (bool)transitionAcceptableBetween:(id)arg1 secondClip:(id)arg2;
- (bool)transitionCandidate:(id)arg1 validForLayoutClip:(id)arg2;
- (bool)transitionDictatesKenBurnsMotion:(id)arg1;
- (id)transitionDictionaryForMultiFromBlueprint:(id)arg1;
- (id)transitionForLayoutClip:(id)arg1;
- (id)transitionFromTransitions:(id)arg1 leadingClipType:(int)arg2 followingClipType:(int)arg3 includesPano:(bool)arg4;
- (id)transitions;
- (void)updateNumberOfTransitionsToInclude:(int)arg1;

@end