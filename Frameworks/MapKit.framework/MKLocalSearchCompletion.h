/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchCompletion : NSObject {
    bool  _alreadySentFeedback;
    MKLocalSearchCompletion * _directionIntentDestination;
    MKLocalSearchCompletion * _directionIntentOrigin;
    <GEOCompletionItem> * _item;
    NSString * _localizedSectionHeader;
    MKMapItem * _mapItem;
    unsigned long long  _serverItemIndexInSection;
    unsigned long long  _serverSectionIndex;
    bool  _shouldDisplayNoResults;
    bool  _shouldEnableRAPForNoResults;
    NSString * _sourceID;
}

@property (getter=_alreadySentFeedback, nonatomic, readonly) bool alreadySentFeedback;
@property (nonatomic, readonly) long long autocompleteCellType;
@property (nonatomic, readonly) GEOSearchCategory *category;
@property (nonatomic, readonly) GEOResolvedItem *clientResolved;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, retain) MKLocalSearchCompletion *directionIntentDestination;
@property (nonatomic, retain) MKLocalSearchCompletion *directionIntentOrigin;
@property (getter=_disambiguationRadiusMeters, nonatomic, readonly) float disambiguationRadiusMeters;
@property (nonatomic, readonly) NSArray *displayLines;
@property (nonatomic, readonly) long long entryTapBehavior;
@property (nonatomic, readonly) <GEOCompletionItem> *geoCompletionItem;
@property (getter=_hasDisambiguationRadiusMeters, nonatomic, readonly) bool hasDisambiguationRadiusMeters;
@property (nonatomic, readonly) bool hasQueryAcceleratorAffordanceEnabled;
@property (nonatomic, readonly) bool hasSortPriority;
@property (nonatomic, copy) NSString *localizedSectionHeader;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (getter=_placeType, nonatomic, readonly) int placeType;
@property (nonatomic, readonly) NSString *queryAcceleratorCompletionString;
@property (nonatomic, readonly) GEORetainedSearchMetadata *retainedSearchMetadata;
@property (nonatomic, readonly) unsigned long long serverItemIndexInSection;
@property (nonatomic, readonly) GEOServerResultScoreMetadata *serverResultScoreMetadata;
@property (nonatomic, readonly) unsigned long long serverSectionIndex;
@property (nonatomic, readonly) long long sortPriority;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSArray *subtitleHighlightRanges;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *titleHighlightRanges;
@property (getter=_type, nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (bool)_alreadySentFeedback;
- (float)_disambiguationRadiusMeters;
- (id)_geoCompletionItem;
- (bool)_hasDisambiguationRadiusMeters;
- (int)_placeType;
- (long long)_type;
- (long long)autocompleteCellType;
- (id)calloutTitle;
- (id)category;
- (id)clientResolved;
- (id)copyStorage;
- (id)description;
- (id)directionIntent;
- (id)directionIntentDestination;
- (id)directionIntentOrigin;
- (id)displayLines;
- (long long)entryTapBehavior;
- (id)geoCompletionItem;
- (bool)getCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; }*)arg1;
- (bool)hasQueryAcceleratorAffordanceEnabled;
- (bool)hasSortPriority;
- (unsigned long long)hash;
- (id)highlightsForLine:(unsigned long long)arg1;
- (id)iconWithScale:(double)arg1;
- (id)initWithGeoCompletionItem:(id)arg1 serverSectionIndex:(unsigned long long)arg2 serverItemIndexInSection:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)localizedSectionHeader;
- (id)mapItem;
- (id)queryAcceleratorCompletionString;
- (id)queryLine;
- (id)retainedSearchMetadata;
- (void)sendFeedback;
- (unsigned long long)serverItemIndexInSection;
- (id)serverResultScoreMetadata;
- (unsigned long long)serverSectionIndex;
- (void)setDirectionIntentDestination:(id)arg1;
- (void)setDirectionIntentOrigin:(id)arg1;
- (void)setLocalizedSectionHeader:(id)arg1;
- (void)setSourceID:(id)arg1;
- (long long)sortPriority;
- (id)sourceID;
- (id)subtitle;
- (id)subtitleHighlightRanges;
- (id)title;
- (id)titleHighlightRanges;

@end
