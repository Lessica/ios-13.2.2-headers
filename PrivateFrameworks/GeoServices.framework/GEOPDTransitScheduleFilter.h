/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitScheduleFilter : PBCodable <NSCopying> {
    GEOPDDeparturePredicate * _departurePredicateCountdown;
    GEOPDDeparturePredicate * _departurePredicateStamp;
    struct { 
        unsigned int has_operatingHoursRange : 1; 
        unsigned int has_includeRealTimeDepartures : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_departurePredicateCountdown : 1; 
        unsigned int read_departurePredicateStamp : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_departurePredicateCountdown : 1; 
        unsigned int wrote_departurePredicateStamp : 1; 
        unsigned int wrote_operatingHoursRange : 1; 
        unsigned int wrote_includeRealTimeDepartures : 1; 
    }  _flags;
    bool  _includeRealTimeDepartures;
    struct GEOPDTimeRange { 
        unsigned int _duration; 
        unsigned int _startTime; 
        struct { 
            unsigned int duration : 1; 
            unsigned int startTime : 1; 
        } _has; 
    }  _operatingHoursRange;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDDeparturePredicate *departurePredicateCountdown;
@property (nonatomic, retain) GEOPDDeparturePredicate *departurePredicateStamp;
@property (nonatomic, readonly) bool hasDeparturePredicateCountdown;
@property (nonatomic, readonly) bool hasDeparturePredicateStamp;
@property (nonatomic) bool hasIncludeRealTimeDepartures;
@property (nonatomic) bool hasOperatingHoursRange;
@property (nonatomic) bool includeRealTimeDepartures;
@property (nonatomic) struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } operatingHoursRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readDeparturePredicateCountdown;
- (void)_readDeparturePredicateStamp;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departurePredicateCountdown;
- (id)departurePredicateStamp;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeparturePredicateCountdown;
- (bool)hasDeparturePredicateStamp;
- (bool)hasIncludeRealTimeDepartures;
- (bool)hasOperatingHoursRange;
- (unsigned long long)hash;
- (bool)includeRealTimeDepartures;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })operatingHoursRange;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeparturePredicateCountdown:(id)arg1;
- (void)setDeparturePredicateStamp:(id)arg1;
- (void)setHasIncludeRealTimeDepartures:(bool)arg1;
- (void)setHasOperatingHoursRange:(bool)arg1;
- (void)setIncludeRealTimeDepartures:(bool)arg1;
- (void)setOperatingHoursRange:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
