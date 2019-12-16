/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphUpdate : NSObject <PGGraphUpdateInventory> {
    NSSet * _additionalLocationsToPrefetch;
    NSSet * _consolidatedChanges;
    NSMutableSet * _deletedHighlightLocalIdentfiersForValidityCheck;
    NSMutableSet * _deletedMomentLocalIdentfiersForValidityCheck;
    PGGraph * _graph;
    bool  _hasDeletedHighlightNodes;
    bool  _hasDeletedMomentNodes;
    bool  _hasDeletedPersonNodes;
    bool  _hasUpdatedPersonNodes;
    NSMutableDictionary * _highlightByHighlightLocalIdentifier;
    NSMutableDictionary * _highlightsToInsertByHighlightKind;
    NSMutableArray * _inputChanges;
    NSSet * _insertedAndUpdatedPersonNodes;
    NSSet * _insertedHighlightDayGroupNodes;
    NSSet * _insertedHighlightNodes;
    NSSet * _insertedMomentNodes;
    bool  _isResumingFullAnalysis;
    NSMutableSet * _localIdentifiersOfDeletedHighlights;
    NSSet * _localIdentifiersOfHighlightsToDelete;
    NSSet * _localIdentifiersOfHighlightsToInsert;
    NSSet * _localIdentifiersOfHighlightsToUpdate;
    NSSet * _localIdentifiersOfMomentsToDelete;
    NSSet * _localIdentifiersOfMomentsToInsert;
    NSSet * _localIdentifiersOfMomentsToUpdate;
    NSSet * _localIdentifiersOfPersonsToDelete;
    NSSet * _localIdentifiersOfPersonsToInsert;
    NSSet * _localIdentifiersOfPersonsToUpdate;
    PGManager * _manager;
    NSMutableDictionary * _momentByMomentLocalIdentifier;
    unsigned long long  _momentUpdateTypes;
    NSSet * _momentsToIngest;
    NSMutableDictionary * _mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
    NSMutableDictionary * _registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
    NSMutableDictionary * _registeredResolvableItemsByBusinessItemMuid;
    PGGraphUpdateRelatedDetails * _relatedDetails;
    NSMutableDictionary * _updateHighlightNodesByUpdateType;
    NSMutableDictionary * _updateMomentNodesByUpdateType;
    long long  _updateType;
}

@property (nonatomic, copy) NSSet *additionalLocationsToPrefetch;
@property (nonatomic, readonly) NSSet *consolidatedChanges;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableSet *deletedHighlightLocalIdentfiersForValidityCheck;
@property (nonatomic, readonly) NSMutableSet *deletedMomentLocalIdentfiersForValidityCheck;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didProcessNodes;
@property (nonatomic, retain) PGGraph *graph;
@property (nonatomic, readonly) bool hasAnythingToDo;
@property (nonatomic) bool hasDeletedHighlightNodes;
@property (nonatomic) bool hasDeletedMomentNodes;
@property (nonatomic) bool hasDeletedPersonNodes;
@property (nonatomic, readonly) bool hasHighlightDayGroupsToInsert;
@property (nonatomic, readonly) bool hasHighlightsToDelete;
@property (nonatomic, readonly) bool hasHighlightsToInsert;
@property (nonatomic, readonly) bool hasHighlightsToUpdate;
@property (nonatomic, readonly) bool hasInsertedHighlightNodes;
@property (nonatomic, readonly) bool hasInsertedMomentNodes;
@property (nonatomic, readonly) bool hasMomentsToDelete;
@property (nonatomic, readonly) bool hasMomentsToInsert;
@property (nonatomic, readonly) bool hasMomentsToUpdate;
@property (nonatomic, readonly) bool hasPersonsToDelete;
@property (nonatomic, readonly) bool hasPersonsToInsert;
@property (nonatomic, readonly) bool hasPersonsToUpdate;
@property (nonatomic, readonly) bool hasUpdatedHighlightNodes;
@property (nonatomic, readonly) bool hasUpdatedMomentNodes;
@property (nonatomic) bool hasUpdatedPersonNodes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *highlightByHighlightLocalIdentifier;
@property (nonatomic, readonly) NSSet *highlightDayGroupsToIngest;
@property (nonatomic, readonly) NSSet *highlightDaysToIngest;
@property (nonatomic, readonly) NSMutableDictionary *highlightsToInsertByHighlightKind;
@property (nonatomic, readonly) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property (nonatomic, readonly) NSSet *identifiersForMomentRelatedToUpdatedPersons;
@property (nonatomic, readonly) NSMutableArray *inputChanges;
@property (nonatomic, readonly) NSSet *insertedAndUpdatedPersonNodes;
@property (nonatomic, copy) NSSet *insertedHighlightDayGroupNodes;
@property (nonatomic, copy) NSSet *insertedHighlightNodes;
@property (nonatomic, copy) NSSet *insertedMomentNodes;
@property (nonatomic) bool isResumingFullAnalysis;
@property (nonatomic, readonly) bool isSignificant;
@property (nonatomic, readonly) NSMutableSet *localIdentifiersOfDeletedHighlights;
@property (nonatomic, readonly) NSSet *localIdentifiersOfHighlightsToDelete;
@property (nonatomic, readonly) NSSet *localIdentifiersOfHighlightsToInsert;
@property (nonatomic, readonly) NSSet *localIdentifiersOfHighlightsToUpdate;
@property (nonatomic, readonly) NSSet *localIdentifiersOfMomentsToDelete;
@property (nonatomic, readonly) NSSet *localIdentifiersOfMomentsToInsert;
@property (nonatomic, readonly) NSSet *localIdentifiersOfMomentsToUpdate;
@property (nonatomic, readonly) NSSet *localIdentifiersOfPersonsToDelete;
@property (nonatomic, readonly) NSSet *localIdentifiersOfPersonsToInsert;
@property (nonatomic, readonly) NSSet *localIdentifiersOfPersonsToUpdate;
@property (nonatomic, readonly) PGManager *manager;
@property (nonatomic, readonly) NSMutableDictionary *momentByMomentLocalIdentifier;
@property (nonatomic, readonly) unsigned long long momentUpdateTypes;
@property (nonatomic, readonly) NSSet *momentsToIngest;
@property (nonatomic, readonly) NSMutableDictionary *mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
@property (nonatomic, readonly) NSDictionary *registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
@property (nonatomic, readonly) NSDictionary *registeredResolvableItemsByBusinessItemMuid;
@property (nonatomic, readonly) PGGraphUpdateRelatedDetails *relatedDetails;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableDictionary *updateHighlightNodesByUpdateType;
@property (nonatomic, readonly) NSMutableDictionary *updateMomentNodesByUpdateType;
@property (nonatomic) long long updateType;

- (void).cxx_destruct;
- (void)_consolidate;
- (void)_consolidateIfNeeded;
- (id)_fetchMomentsWithMomentLocalIdentifiers:(id)arg1;
- (id)_fetchedHighlightsWithHighlightLocalIdentifiers:(id)arg1;
- (void)_registerHighlights:(id)arg1;
- (void)_registerMoments:(id)arg1;
- (void)_unregisterHighlightsForHighlightLocalIdentifiers:(id)arg1;
- (void)_unregisterMomentsForMomentLocalIdentifiers:(id)arg1;
- (void)addChange:(id)arg1;
- (void)addChanges:(id)arg1;
- (id)additionalLocationsToPrefetch;
- (id)cachedDataModelObjectForGraphChange:(id)arg1;
- (void)clearInsertedAndUpdatedPersonNodes;
- (id)consolidatedChanges;
- (id)deletedHighlightLocalIdentfiersForValidityCheck;
- (id)deletedMomentLocalIdentfiersForValidityCheck;
- (id)description;
- (bool)didProcessNodes;
- (void)enumerateConsolidatedChanges:(id /* block */)arg1;
- (id)graph;
- (bool)hasAnythingToDo;
- (bool)hasDeletedHighlightNodes;
- (bool)hasDeletedMomentNodes;
- (bool)hasDeletedPersonNodes;
- (bool)hasHighlightDayGroupsToInsert;
- (bool)hasHighlightsToDelete;
- (bool)hasHighlightsToInsert;
- (bool)hasHighlightsToUpdate;
- (bool)hasInsertedHighlightNodes;
- (bool)hasInsertedMomentNodes;
- (bool)hasMomentsToDelete;
- (bool)hasMomentsToInsert;
- (bool)hasMomentsToUpdate;
- (bool)hasPersonsToDelete;
- (bool)hasPersonsToInsert;
- (bool)hasPersonsToUpdate;
- (bool)hasUpdatedHighlightNodes;
- (bool)hasUpdatedMomentNodes;
- (bool)hasUpdatedPersonNodes;
- (id)highlightByHighlightLocalIdentifier;
- (id)highlightDayGroupsToIngest;
- (id)highlightDaysToIngest;
- (id)highlightForHighlightLocalIdentifier:(id)arg1;
- (id)highlightsToInsertByHighlightKind;
- (id)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(bool)arg3;
- (id)identifiersForMomentRelatedToDeletedPersons;
- (id)identifiersForMomentRelatedToUpdatedPersons;
- (id)initWithManager:(id)arg1;
- (id)initWithManager:(id)arg1 updateType:(long long)arg2;
- (id)initWithManager:(id)arg1 updateType:(long long)arg2 graph:(id)arg3;
- (id)inputChanges;
- (id)insertedAndUpdatedPersonNodes;
- (id)insertedHighlightDayGroupNodes;
- (id)insertedHighlightNodes;
- (id)insertedMomentNodes;
- (bool)isResumingFullAnalysis;
- (bool)isSignificant;
- (id)localIdentifiersOfDeletedHighlights;
- (id)localIdentifiersOfHighlightsToDelete;
- (id)localIdentifiersOfHighlightsToInsert;
- (id)localIdentifiersOfHighlightsToUpdate;
- (id)localIdentifiersOfMomentsToDelete;
- (id)localIdentifiersOfMomentsToInsert;
- (id)localIdentifiersOfMomentsToUpdate;
- (id)localIdentifiersOfPersonsToDelete;
- (id)localIdentifiersOfPersonsToInsert;
- (id)localIdentifiersOfPersonsToUpdate;
- (id)manager;
- (id)momentByMomentLocalIdentifier;
- (id)momentNodesToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeInsertedNodes:(bool)arg2;
- (unsigned long long)momentUpdateTypes;
- (id)momentsToIngest;
- (id)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(bool)arg2;
- (id)mutableRegisteredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
- (void)prepareForPostProcessing;
- (void)registerInsertedAndUpdatedPersonNodes:(id)arg1;
- (void)registerLocationOfInterestVisitToResolve:(id)arg1 forMomentLocalIdentifier:(id)arg2;
- (void)registerPublicEventNode:(id)arg1 withConsolidatedAddress:(id)arg2 toResolveBusinessItemMuid:(unsigned long long)arg3;
- (id)registeredLocationOfInterestVisitsToResolveByMomentLocalIdentifier;
- (id)registeredResolvableItemsByBusinessItemMuid;
- (id)relatedDetails;
- (void)setAdditionalLocationsToPrefetch:(id)arg1;
- (void)setGraph:(id)arg1;
- (void)setHasDeletedHighlightNodes:(bool)arg1;
- (void)setHasDeletedMomentNodes:(bool)arg1;
- (void)setHasDeletedPersonNodes:(bool)arg1;
- (void)setHasUpdatedPersonNodes:(bool)arg1;
- (void)setInsertedHighlightDayGroupNodes:(id)arg1;
- (void)setInsertedHighlightNodes:(id)arg1;
- (void)setInsertedMomentNodes:(id)arg1;
- (void)setIsResumingFullAnalysis:(bool)arg1;
- (void)setUpdateType:(long long)arg1;
- (id)updateHighlightNodesByUpdateType;
- (id)updateMomentNodesByUpdateType;
- (long long)updateType;
- (void)updatedHighlightNode:(id)arg1 forUpdateChangeType:(unsigned long long)arg2;
- (void)updatedMomentNode:(id)arg1 forUpdateChangeType:(unsigned long long)arg2;

@end
