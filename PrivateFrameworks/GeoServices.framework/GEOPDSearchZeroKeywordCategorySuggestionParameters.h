/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_requestLocalTimestamp : 1; 
        unsigned int has_maxNumCategoriesPerEntry : 1; 
        unsigned int has_userPreferredTransportType : 1; 
        unsigned int has_shouldMatchNoQueryStateSuggestions : 1; 
    }  _flags;
    unsigned int  _maxNumCategoriesPerEntry;
    double  _requestLocalTimestamp;
    bool  _shouldMatchNoQueryStateSuggestions;
    GEOLatLng * _significantLocation;
    PBUnknownFields * _unknownFields;
    int  _userPreferredTransportType;
}

@property (nonatomic) bool hasMaxNumCategoriesPerEntry;
@property (nonatomic) bool hasRequestLocalTimestamp;
@property (nonatomic) bool hasShouldMatchNoQueryStateSuggestions;
@property (nonatomic, readonly) bool hasSignificantLocation;
@property (nonatomic) bool hasUserPreferredTransportType;
@property (nonatomic) unsigned int maxNumCategoriesPerEntry;
@property (nonatomic) double requestLocalTimestamp;
@property (nonatomic) bool shouldMatchNoQueryStateSuggestions;
@property (nonatomic, retain) GEOLatLng *significantLocation;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int userPreferredTransportType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsUserPreferredTransportType:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxNumCategoriesPerEntry;
- (bool)hasRequestLocalTimestamp;
- (bool)hasShouldMatchNoQueryStateSuggestions;
- (bool)hasSignificantLocation;
- (bool)hasUserPreferredTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxNumCategoriesPerEntry;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (double)requestLocalTimestamp;
- (void)setHasMaxNumCategoriesPerEntry:(bool)arg1;
- (void)setHasRequestLocalTimestamp:(bool)arg1;
- (void)setHasShouldMatchNoQueryStateSuggestions:(bool)arg1;
- (void)setHasUserPreferredTransportType:(bool)arg1;
- (void)setMaxNumCategoriesPerEntry:(unsigned int)arg1;
- (void)setRequestLocalTimestamp:(double)arg1;
- (void)setShouldMatchNoQueryStateSuggestions:(bool)arg1;
- (void)setSignificantLocation:(id)arg1;
- (void)setUserPreferredTransportType:(int)arg1;
- (bool)shouldMatchNoQueryStateSuggestions;
- (id)significantLocation;
- (id)unknownFields;
- (int)userPreferredTransportType;
- (id)userPreferredTransportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
