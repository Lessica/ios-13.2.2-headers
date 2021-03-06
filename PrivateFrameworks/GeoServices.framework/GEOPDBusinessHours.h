/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBusinessHours : PBCodable <NSCopying> {
    unsigned long long  _end;
    struct { 
        unsigned int has_end : 1; 
        unsigned int has_start : 1; 
        unsigned int has_hoursType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_hoursThreshold : 1; 
        unsigned int read_message : 1; 
        unsigned int read_shortMessage : 1; 
        unsigned int read_weeklyHours : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_end : 1; 
        unsigned int wrote_hoursThreshold : 1; 
        unsigned int wrote_message : 1; 
        unsigned int wrote_shortMessage : 1; 
        unsigned int wrote_start : 1; 
        unsigned int wrote_weeklyHours : 1; 
        unsigned int wrote_hoursType : 1; 
    }  _flags;
    GEOPDHoursThreshold * _hoursThreshold;
    int  _hoursType;
    GEOLocalizedString * _message;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLocalizedString * _shortMessage;
    unsigned long long  _start;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _weeklyHours;
}

@property (nonatomic) unsigned long long end;
@property (nonatomic) bool hasEnd;
@property (nonatomic, readonly) bool hasHoursThreshold;
@property (nonatomic) bool hasHoursType;
@property (nonatomic, readonly) bool hasMessage;
@property (nonatomic, readonly) bool hasShortMessage;
@property (nonatomic) bool hasStart;
@property (nonatomic, retain) GEOPDHoursThreshold *hoursThreshold;
@property (nonatomic) int hoursType;
@property (nonatomic, retain) GEOLocalizedString *message;
@property (nonatomic, retain) GEOLocalizedString *shortMessage;
@property (nonatomic) unsigned long long start;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *weeklyHours;

+ (id)businessHoursForPlaceData:(id)arg1;
+ (bool)isValid:(id)arg1;
+ (Class)weeklyHoursType;

- (void).cxx_destruct;
- (int)StringAsHoursType:(id)arg1;
- (void)_addNoFlagsWeeklyHours:(id)arg1;
- (void)_readHoursThreshold;
- (void)_readMessage;
- (void)_readShortMessage;
- (void)_readWeeklyHours;
- (void)addWeeklyHours:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearWeeklyHours;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)end;
- (bool)hasEnd;
- (bool)hasHoursThreshold;
- (bool)hasHoursType;
- (bool)hasMessage;
- (bool)hasShortMessage;
- (bool)hasStart;
- (unsigned long long)hash;
- (id)hoursThreshold;
- (int)hoursType;
- (id)hoursTypeAsString:(int)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEnd:(unsigned long long)arg1;
- (void)setHasEnd:(bool)arg1;
- (void)setHasHoursType:(bool)arg1;
- (void)setHasStart:(bool)arg1;
- (void)setHoursThreshold:(id)arg1;
- (void)setHoursType:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)setShortMessage:(id)arg1;
- (void)setStart:(unsigned long long)arg1;
- (void)setWeeklyHours:(id)arg1;
- (id)shortMessage;
- (unsigned long long)start;
- (id)unknownFields;
- (id)weeklyHours;
- (id)weeklyHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)weeklyHoursCount;
- (void)writeTo:(id)arg1;

@end
