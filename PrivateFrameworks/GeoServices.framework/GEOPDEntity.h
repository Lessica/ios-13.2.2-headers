/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDEntity : PBCodable <NSCopying> {
    NSMutableArray * _altFaxs;
    bool  _altTelephoneAdsOptOut;
    NSMutableArray * _altTelephones;
    NSMutableArray * _altUrls;
    unsigned long long  _brandMuid;
    int  _capacity;
    int  _displayStyle;
    bool  _enableRapLightweightFeedback;
    NSString * _fax;
    struct { 
        unsigned int has_brandMuid : 1; 
        unsigned int has_capacity : 1; 
        unsigned int has_displayStyle : 1; 
        unsigned int has_placeDisplayType : 1; 
        unsigned int has_searchSection : 1; 
        unsigned int has_type : 1; 
        unsigned int has_altTelephoneAdsOptOut : 1; 
        unsigned int has_enableRapLightweightFeedback : 1; 
        unsigned int has_isDisputed : 1; 
        unsigned int has_isPermanentlyClosed : 1; 
        unsigned int has_isStandaloneBrand : 1; 
        unsigned int has_telephoneAdsOptOut : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_placeLookupCategorys : 1; 
        unsigned int read_altFaxs : 1; 
        unsigned int read_altTelephones : 1; 
        unsigned int read_altUrls : 1; 
        unsigned int read_fax : 1; 
        unsigned int read_localizedCategorys : 1; 
        unsigned int read_mapsCategoryId : 1; 
        unsigned int read_names : 1; 
        unsigned int read_secondaryName : 1; 
        unsigned int read_secondarySpokenName : 1; 
        unsigned int read_spokenNames : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int read_telephone : 1; 
        unsigned int read_url : 1; 
        unsigned int read_walletCategoryId : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_placeLookupCategorys : 1; 
        unsigned int wrote_altFaxs : 1; 
        unsigned int wrote_altTelephones : 1; 
        unsigned int wrote_altUrls : 1; 
        unsigned int wrote_brandMuid : 1; 
        unsigned int wrote_fax : 1; 
        unsigned int wrote_localizedCategorys : 1; 
        unsigned int wrote_mapsCategoryId : 1; 
        unsigned int wrote_names : 1; 
        unsigned int wrote_secondaryName : 1; 
        unsigned int wrote_secondarySpokenName : 1; 
        unsigned int wrote_spokenNames : 1; 
        unsigned int wrote_styleAttributes : 1; 
        unsigned int wrote_telephone : 1; 
        unsigned int wrote_url : 1; 
        unsigned int wrote_walletCategoryId : 1; 
        unsigned int wrote_capacity : 1; 
        unsigned int wrote_displayStyle : 1; 
        unsigned int wrote_placeDisplayType : 1; 
        unsigned int wrote_searchSection : 1; 
        unsigned int wrote_type : 1; 
        unsigned int wrote_altTelephoneAdsOptOut : 1; 
        unsigned int wrote_enableRapLightweightFeedback : 1; 
        unsigned int wrote_isDisputed : 1; 
        unsigned int wrote_isPermanentlyClosed : 1; 
        unsigned int wrote_isStandaloneBrand : 1; 
        unsigned int wrote_telephoneAdsOptOut : 1; 
    }  _flags;
    bool  _isDisputed;
    bool  _isPermanentlyClosed;
    bool  _isStandaloneBrand;
    NSMutableArray * _localizedCategorys;
    NSString * _mapsCategoryId;
    NSMutableArray * _names;
    int  _placeDisplayType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _placeLookupCategorys;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _searchSection;
    GEOLocalizedString * _secondaryName;
    GEOLocalizedString * _secondarySpokenName;
    NSMutableArray * _spokenNames;
    GEOStyleAttributes * _styleAttributes;
    NSString * _telephone;
    bool  _telephoneAdsOptOut;
    int  _type;
    PBUnknownFields * _unknownFields;
    NSString * _url;
    NSString * _walletCategoryId;
}

@property (nonatomic, retain) NSMutableArray *altFaxs;
@property (nonatomic) bool altTelephoneAdsOptOut;
@property (nonatomic, retain) NSMutableArray *altTelephones;
@property (nonatomic, retain) NSMutableArray *altUrls;
@property (nonatomic) unsigned long long brandMuid;
@property (nonatomic) int capacity;
@property (nonatomic) int displayStyle;
@property (nonatomic) bool enableRapLightweightFeedback;
@property (nonatomic, retain) NSString *fax;
@property (nonatomic) bool hasAltTelephoneAdsOptOut;
@property (nonatomic) bool hasBrandMuid;
@property (nonatomic) bool hasCapacity;
@property (nonatomic) bool hasDisplayStyle;
@property (nonatomic) bool hasEnableRapLightweightFeedback;
@property (nonatomic, readonly) bool hasFax;
@property (nonatomic) bool hasIsDisputed;
@property (nonatomic) bool hasIsPermanentlyClosed;
@property (nonatomic) bool hasIsStandaloneBrand;
@property (nonatomic, readonly) bool hasMapsCategoryId;
@property (nonatomic) bool hasPlaceDisplayType;
@property (nonatomic) bool hasSearchSection;
@property (nonatomic, readonly) bool hasSecondaryName;
@property (nonatomic, readonly) bool hasSecondarySpokenName;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, readonly) bool hasTelephone;
@property (nonatomic) bool hasTelephoneAdsOptOut;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, readonly) bool hasWalletCategoryId;
@property (nonatomic) bool isDisputed;
@property (nonatomic) bool isPermanentlyClosed;
@property (nonatomic) bool isStandaloneBrand;
@property (nonatomic, retain) NSMutableArray *localizedCategorys;
@property (nonatomic, retain) NSString *mapsCategoryId;
@property (nonatomic, retain) NSMutableArray *names;
@property (nonatomic) int placeDisplayType;
@property (nonatomic, readonly) int*placeLookupCategorys;
@property (nonatomic, readonly) unsigned long long placeLookupCategorysCount;
@property (nonatomic) int searchSection;
@property (nonatomic, retain) GEOLocalizedString *secondaryName;
@property (nonatomic, retain) GEOLocalizedString *secondarySpokenName;
@property (nonatomic, retain) NSMutableArray *spokenNames;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) NSString *telephone;
@property (nonatomic) bool telephoneAdsOptOut;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *walletCategoryId;

+ (Class)altFaxType;
+ (Class)altTelephoneType;
+ (Class)altUrlType;
+ (id)entityForPlaceData:(id)arg1;
+ (bool)isValid:(id)arg1;
+ (Class)localizedCategoryType;
+ (Class)nameType;
+ (Class)spokenNameType;

- (void).cxx_destruct;
- (int)StringAsDisplayStyle:(id)arg1;
- (int)StringAsPlaceDisplayType:(id)arg1;
- (int)StringAsPlaceLookupCategorys:(id)arg1;
- (int)StringAsSearchSection:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)_addNoFlagsAltFax:(id)arg1;
- (void)_addNoFlagsAltTelephone:(id)arg1;
- (void)_addNoFlagsAltUrl:(id)arg1;
- (void)_addNoFlagsLocalizedCategory:(id)arg1;
- (void)_addNoFlagsName:(id)arg1;
- (void)_addNoFlagsPlaceLookupCategory:(int)arg1;
- (void)_addNoFlagsSpokenName:(id)arg1;
- (void)_readAltFaxs;
- (void)_readAltTelephones;
- (void)_readAltUrls;
- (void)_readFax;
- (void)_readLocalizedCategorys;
- (void)_readMapsCategoryId;
- (void)_readNames;
- (void)_readPlaceLookupCategorys;
- (void)_readSecondaryName;
- (void)_readSecondarySpokenName;
- (void)_readSpokenNames;
- (void)_readStyleAttributes;
- (void)_readTelephone;
- (void)_readUrl;
- (void)_readWalletCategoryId;
- (void)addAltFax:(id)arg1;
- (void)addAltTelephone:(id)arg1;
- (void)addAltUrl:(id)arg1;
- (void)addLocalizedCategory:(id)arg1;
- (void)addName:(id)arg1;
- (void)addPlaceLookupCategory:(int)arg1;
- (void)addSpokenName:(id)arg1;
- (id)altFaxAtIndex:(unsigned long long)arg1;
- (id)altFaxs;
- (unsigned long long)altFaxsCount;
- (bool)altTelephoneAdsOptOut;
- (id)altTelephoneAtIndex:(unsigned long long)arg1;
- (id)altTelephones;
- (unsigned long long)altTelephonesCount;
- (id)altUrlAtIndex:(unsigned long long)arg1;
- (id)altUrls;
- (unsigned long long)altUrlsCount;
- (id)bestLocalizedName;
- (unsigned long long)brandMuid;
- (int)capacity;
- (void)clearAltFaxs;
- (void)clearAltTelephones;
- (void)clearAltUrls;
- (void)clearLocalizedCategorys;
- (void)clearNames;
- (void)clearPlaceLookupCategorys;
- (void)clearSpokenNames;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)displayStyle;
- (id)displayStyleAsString:(int)arg1;
- (bool)enableRapLightweightFeedback;
- (id)fax;
- (bool)hasAltTelephoneAdsOptOut;
- (bool)hasBrandMuid;
- (bool)hasCapacity;
- (bool)hasDisplayStyle;
- (bool)hasEnableRapLightweightFeedback;
- (bool)hasFax;
- (bool)hasIsDisputed;
- (bool)hasIsPermanentlyClosed;
- (bool)hasIsStandaloneBrand;
- (bool)hasMapsCategoryId;
- (bool)hasPlaceDisplayType;
- (bool)hasSearchSection;
- (bool)hasSecondaryName;
- (bool)hasSecondarySpokenName;
- (bool)hasStyleAttributes;
- (bool)hasTelephone;
- (bool)hasTelephoneAdsOptOut;
- (bool)hasType;
- (bool)hasUrl;
- (bool)hasWalletCategoryId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isDisputed;
- (bool)isEqual:(id)arg1;
- (bool)isPermanentlyClosed;
- (bool)isStandaloneBrand;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (id)localizedCategorys;
- (unsigned long long)localizedCategorysCount;
- (id)mapsCategoryId;
- (void)mergeFrom:(id)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (id)names;
- (unsigned long long)namesCount;
- (int)placeDisplayType;
- (id)placeDisplayTypeAsString:(int)arg1;
- (int)placeLookupCategoryAtIndex:(unsigned long long)arg1;
- (int*)placeLookupCategorys;
- (id)placeLookupCategorysAsString:(int)arg1;
- (unsigned long long)placeLookupCategorysCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)searchSection;
- (id)searchSectionAsString:(int)arg1;
- (id)secondaryName;
- (id)secondarySpokenName;
- (void)setAltFaxs:(id)arg1;
- (void)setAltTelephoneAdsOptOut:(bool)arg1;
- (void)setAltTelephones:(id)arg1;
- (void)setAltUrls:(id)arg1;
- (void)setBrandMuid:(unsigned long long)arg1;
- (void)setCapacity:(int)arg1;
- (void)setDisplayStyle:(int)arg1;
- (void)setEnableRapLightweightFeedback:(bool)arg1;
- (void)setFax:(id)arg1;
- (void)setHasAltTelephoneAdsOptOut:(bool)arg1;
- (void)setHasBrandMuid:(bool)arg1;
- (void)setHasCapacity:(bool)arg1;
- (void)setHasDisplayStyle:(bool)arg1;
- (void)setHasEnableRapLightweightFeedback:(bool)arg1;
- (void)setHasIsDisputed:(bool)arg1;
- (void)setHasIsPermanentlyClosed:(bool)arg1;
- (void)setHasIsStandaloneBrand:(bool)arg1;
- (void)setHasPlaceDisplayType:(bool)arg1;
- (void)setHasSearchSection:(bool)arg1;
- (void)setHasTelephoneAdsOptOut:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsDisputed:(bool)arg1;
- (void)setIsPermanentlyClosed:(bool)arg1;
- (void)setIsStandaloneBrand:(bool)arg1;
- (void)setLocalizedCategorys:(id)arg1;
- (void)setMapsCategoryId:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setPlaceDisplayType:(int)arg1;
- (void)setPlaceLookupCategorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSearchSection:(int)arg1;
- (void)setSecondaryName:(id)arg1;
- (void)setSecondarySpokenName:(id)arg1;
- (void)setSpokenNames:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setTelephone:(id)arg1;
- (void)setTelephoneAdsOptOut:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)setWalletCategoryId:(id)arg1;
- (id)spokenNameAtIndex:(unsigned long long)arg1;
- (id)spokenNames;
- (unsigned long long)spokenNamesCount;
- (id)styleAttributes;
- (id)telephone;
- (bool)telephoneAdsOptOut;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (id)url;
- (id)walletCategoryId;
- (void)writeTo:(id)arg1;

@end
