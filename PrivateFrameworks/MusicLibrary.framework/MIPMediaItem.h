/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPMediaItem : PBCodable <NSCopying> {
    long long  _accountId;
    NSString * _artworkId;
    long long  _bookmarkTimeMilliseconds;
    NSString * _chapterMetadataUrl;
    bool  _cloudAssetAvailable;
    int  _cloudMatchedStatus;
    int  _cloudPlaybackEndpointType;
    int  _cloudStatus;
    NSString * _cloudUniversalLibraryId;
    NSString * _comment;
    int  _contentRating;
    int  _contentRatingLevel;
    NSString * _copyright;
    long long  _creationDateTime;
    long long  _drmKey1IdCode;
    long long  _drmKey2IdCode;
    long long  _drmPlatformIdCode;
    int  _drmVersionsCode;
    long long  _duration;
    bool  _explicitContent;
    NSString * _extrasUrl;
    long long  _familyAccountId;
    int  _fileKind;
    long long  _fileSize;
    NSData * _flattenedChapterData;
    NSString * _grouping;
    struct { 
        unsigned int accountId : 1; 
        unsigned int bookmarkTimeMilliseconds : 1; 
        unsigned int creationDateTime : 1; 
        unsigned int drmKey1IdCode : 1; 
        unsigned int drmKey2IdCode : 1; 
        unsigned int drmPlatformIdCode : 1; 
        unsigned int duration : 1; 
        unsigned int familyAccountId : 1; 
        unsigned int fileSize : 1; 
        unsigned int lastPlayedDateTime : 1; 
        unsigned int lastSkippedDateTime : 1; 
        unsigned int modificationDateTime : 1; 
        unsigned int purchaseDateTime : 1; 
        unsigned int purchaseHistoryId : 1; 
        unsigned int releaseDateTime : 1; 
        unsigned int sagaId : 1; 
        unsigned int storeId : 1; 
        unsigned int storePlaylistId : 1; 
        unsigned int storefrontId : 1; 
        unsigned int subscriptionStoreItemId : 1; 
        unsigned int cloudMatchedStatus : 1; 
        unsigned int cloudPlaybackEndpointType : 1; 
        unsigned int cloudStatus : 1; 
        unsigned int contentRating : 1; 
        unsigned int contentRatingLevel : 1; 
        unsigned int drmVersionsCode : 1; 
        unsigned int fileKind : 1; 
        unsigned int likedState : 1; 
        unsigned int mediaType : 1; 
        unsigned int playCount : 1; 
        unsigned int playCountDelta : 1; 
        unsigned int playbackEndpointType : 1; 
        unsigned int purchaseHistoryToken : 1; 
        unsigned int secondaryArtworkSourceType : 1; 
        unsigned int skipCount : 1; 
        unsigned int skipCountDelta : 1; 
        unsigned int storeProtectionType : 1; 
        unsigned int year : 1; 
        unsigned int cloudAssetAvailable : 1; 
        unsigned int explicitContent : 1; 
        unsigned int hasChapterData : 1; 
        unsigned int hasLocalAsset : 1; 
        unsigned int hidden : 1; 
        unsigned int inUsersCloudLibrary : 1; 
        unsigned int isInUsersLibrary : 1; 
        unsigned int likedStateChanged : 1; 
        unsigned int needsReporting : 1; 
        unsigned int rememberBookmark : 1; 
        unsigned int userDisabled : 1; 
    }  _has;
    bool  _hasChapterData;
    bool  _hasLocalAsset;
    bool  _hidden;
    bool  _inUsersCloudLibrary;
    bool  _isInUsersLibrary;
    long long  _lastPlayedDateTime;
    long long  _lastSkippedDateTime;
    NSMutableArray * _libraryIdentifiers;
    int  _likedState;
    bool  _likedStateChanged;
    NSString * _longDescription;
    int  _mediaType;
    long long  _modificationDateTime;
    MIPMovie * _movie;
    bool  _needsReporting;
    int  _playCount;
    int  _playCountDelta;
    int  _playbackEndpointType;
    MIPPodcast * _podcast;
    long long  _purchaseDateTime;
    long long  _purchaseHistoryId;
    NSString * _purchaseHistoryRedownloadParams;
    int  _purchaseHistoryToken;
    long long  _releaseDateTime;
    bool  _rememberBookmark;
    long long  _sagaId;
    NSString * _sagaRedownloadParams;
    NSString * _secondaryArtworkId;
    int  _secondaryArtworkSourceType;
    NSString * _shortDescription;
    int  _skipCount;
    int  _skipCountDelta;
    MIPSong * _song;
    NSString * _sortTitle;
    NSString * _storeAssetFlavor;
    long long  _storeId;
    long long  _storePlaylistId;
    int  _storeProtectionType;
    NSString * _storeXID;
    long long  _storefrontId;
    long long  _subscriptionStoreItemId;
    NSString * _title;
    MIPTVShow * _tvShow;
    bool  _userDisabled;
    int  _year;
}

@property (nonatomic) long long accountId;
@property (nonatomic, retain) NSString *artworkId;
@property (nonatomic) long long bookmarkTimeMilliseconds;
@property (nonatomic, retain) NSString *chapterMetadataUrl;
@property (nonatomic) bool cloudAssetAvailable;
@property (nonatomic) int cloudMatchedStatus;
@property (nonatomic) int cloudPlaybackEndpointType;
@property (nonatomic) int cloudStatus;
@property (nonatomic, retain) NSString *cloudUniversalLibraryId;
@property (nonatomic, retain) NSString *comment;
@property (nonatomic) int contentRating;
@property (nonatomic) int contentRatingLevel;
@property (nonatomic, retain) NSString *copyright;
@property (nonatomic) long long creationDateTime;
@property (nonatomic) long long drmKey1IdCode;
@property (nonatomic) long long drmKey2IdCode;
@property (nonatomic) long long drmPlatformIdCode;
@property (nonatomic) int drmVersionsCode;
@property (nonatomic) long long duration;
@property (nonatomic) bool explicitContent;
@property (nonatomic, retain) NSString *extrasUrl;
@property (nonatomic) long long familyAccountId;
@property (nonatomic) int fileKind;
@property (nonatomic) long long fileSize;
@property (nonatomic, retain) NSData *flattenedChapterData;
@property (nonatomic, retain) NSString *grouping;
@property (nonatomic) bool hasAccountId;
@property (nonatomic, readonly) bool hasArtworkId;
@property (nonatomic) bool hasBookmarkTimeMilliseconds;
@property (nonatomic) bool hasChapterData;
@property (nonatomic, readonly) bool hasChapterMetadataUrl;
@property (nonatomic) bool hasCloudAssetAvailable;
@property (nonatomic) bool hasCloudMatchedStatus;
@property (nonatomic) bool hasCloudPlaybackEndpointType;
@property (nonatomic) bool hasCloudStatus;
@property (nonatomic, readonly) bool hasCloudUniversalLibraryId;
@property (nonatomic, readonly) bool hasComment;
@property (nonatomic) bool hasContentRating;
@property (nonatomic) bool hasContentRatingLevel;
@property (nonatomic, readonly) bool hasCopyright;
@property (nonatomic) bool hasCreationDateTime;
@property (nonatomic) bool hasDrmKey1IdCode;
@property (nonatomic) bool hasDrmKey2IdCode;
@property (nonatomic) bool hasDrmPlatformIdCode;
@property (nonatomic) bool hasDrmVersionsCode;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasExplicitContent;
@property (nonatomic, readonly) bool hasExtrasUrl;
@property (nonatomic) bool hasFamilyAccountId;
@property (nonatomic) bool hasFileKind;
@property (nonatomic) bool hasFileSize;
@property (nonatomic, readonly) bool hasFlattenedChapterData;
@property (nonatomic, readonly) bool hasGrouping;
@property (nonatomic) bool hasHasChapterData;
@property (nonatomic) bool hasHasLocalAsset;
@property (nonatomic) bool hasHidden;
@property (nonatomic) bool hasInUsersCloudLibrary;
@property (nonatomic) bool hasIsInUsersLibrary;
@property (nonatomic) bool hasLastPlayedDateTime;
@property (nonatomic) bool hasLastSkippedDateTime;
@property (nonatomic) bool hasLikedState;
@property (nonatomic) bool hasLikedStateChanged;
@property (nonatomic) bool hasLocalAsset;
@property (nonatomic, readonly) bool hasLongDescription;
@property (nonatomic) bool hasMediaType;
@property (nonatomic) bool hasModificationDateTime;
@property (nonatomic, readonly) bool hasMovie;
@property (nonatomic) bool hasNeedsReporting;
@property (nonatomic) bool hasPlayCount;
@property (nonatomic) bool hasPlayCountDelta;
@property (nonatomic) bool hasPlaybackEndpointType;
@property (nonatomic, readonly) bool hasPodcast;
@property (nonatomic) bool hasPurchaseDateTime;
@property (nonatomic) bool hasPurchaseHistoryId;
@property (nonatomic, readonly) bool hasPurchaseHistoryRedownloadParams;
@property (nonatomic) bool hasPurchaseHistoryToken;
@property (nonatomic) bool hasReleaseDateTime;
@property (nonatomic) bool hasRememberBookmark;
@property (nonatomic) bool hasSagaId;
@property (nonatomic, readonly) bool hasSagaRedownloadParams;
@property (nonatomic, readonly) bool hasSecondaryArtworkId;
@property (nonatomic) bool hasSecondaryArtworkSourceType;
@property (nonatomic, readonly) bool hasShortDescription;
@property (nonatomic) bool hasSkipCount;
@property (nonatomic) bool hasSkipCountDelta;
@property (nonatomic, readonly) bool hasSong;
@property (nonatomic, readonly) bool hasSortTitle;
@property (nonatomic, readonly) bool hasStoreAssetFlavor;
@property (nonatomic) bool hasStoreId;
@property (nonatomic) bool hasStorePlaylistId;
@property (nonatomic) bool hasStoreProtectionType;
@property (nonatomic, readonly) bool hasStoreXID;
@property (nonatomic) bool hasStorefrontId;
@property (nonatomic) bool hasSubscriptionStoreItemId;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasTvShow;
@property (nonatomic) bool hasUserDisabled;
@property (nonatomic) bool hasYear;
@property (nonatomic) bool hidden;
@property (nonatomic) bool inUsersCloudLibrary;
@property (nonatomic) bool isInUsersLibrary;
@property (nonatomic) long long lastPlayedDateTime;
@property (nonatomic) long long lastSkippedDateTime;
@property (nonatomic, retain) NSMutableArray *libraryIdentifiers;
@property (nonatomic) int likedState;
@property (nonatomic) bool likedStateChanged;
@property (nonatomic, retain) NSString *longDescription;
@property (nonatomic) int mediaType;
@property (nonatomic) long long modificationDateTime;
@property (nonatomic, retain) MIPMovie *movie;
@property (nonatomic) bool needsReporting;
@property (nonatomic) int playCount;
@property (nonatomic) int playCountDelta;
@property (nonatomic) int playbackEndpointType;
@property (nonatomic, retain) MIPPodcast *podcast;
@property (nonatomic) long long purchaseDateTime;
@property (nonatomic) long long purchaseHistoryId;
@property (nonatomic, retain) NSString *purchaseHistoryRedownloadParams;
@property (nonatomic) int purchaseHistoryToken;
@property (nonatomic) long long releaseDateTime;
@property (nonatomic) bool rememberBookmark;
@property (nonatomic) long long sagaId;
@property (nonatomic, retain) NSString *sagaRedownloadParams;
@property (nonatomic, retain) NSString *secondaryArtworkId;
@property (nonatomic) int secondaryArtworkSourceType;
@property (nonatomic, retain) NSString *shortDescription;
@property (nonatomic) int skipCount;
@property (nonatomic) int skipCountDelta;
@property (nonatomic, retain) MIPSong *song;
@property (nonatomic, retain) NSString *sortTitle;
@property (nonatomic, retain) NSString *storeAssetFlavor;
@property (nonatomic) long long storeId;
@property (nonatomic) long long storePlaylistId;
@property (nonatomic) int storeProtectionType;
@property (nonatomic, retain) NSString *storeXID;
@property (nonatomic) long long storefrontId;
@property (nonatomic) long long subscriptionStoreItemId;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) MIPTVShow *tvShow;
@property (nonatomic) bool userDisabled;
@property (nonatomic) int year;

+ (Class)libraryIdentifiersType;

- (void).cxx_destruct;
- (int)StringAsMediaType:(id)arg1;
- (long long)accountId;
- (void)addLibraryIdentifiers:(id)arg1;
- (id)artworkId;
- (long long)bookmarkTimeMilliseconds;
- (id)chapterMetadataUrl;
- (void)clearLibraryIdentifiers;
- (bool)cloudAssetAvailable;
- (int)cloudMatchedStatus;
- (int)cloudPlaybackEndpointType;
- (int)cloudStatus;
- (id)cloudUniversalLibraryId;
- (id)comment;
- (int)contentRating;
- (int)contentRatingLevel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyright;
- (long long)creationDateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)drmKey1IdCode;
- (long long)drmKey2IdCode;
- (long long)drmPlatformIdCode;
- (int)drmVersionsCode;
- (long long)duration;
- (bool)explicitContent;
- (id)extrasUrl;
- (long long)familyAccountId;
- (int)fileKind;
- (long long)fileSize;
- (id)flattenedChapterData;
- (id)grouping;
- (bool)hasAccountId;
- (bool)hasArtworkId;
- (bool)hasBookmarkTimeMilliseconds;
- (bool)hasChapterData;
- (bool)hasChapterMetadataUrl;
- (bool)hasCloudAssetAvailable;
- (bool)hasCloudMatchedStatus;
- (bool)hasCloudPlaybackEndpointType;
- (bool)hasCloudStatus;
- (bool)hasCloudUniversalLibraryId;
- (bool)hasComment;
- (bool)hasContentRating;
- (bool)hasContentRatingLevel;
- (bool)hasCopyright;
- (bool)hasCreationDateTime;
- (bool)hasDrmKey1IdCode;
- (bool)hasDrmKey2IdCode;
- (bool)hasDrmPlatformIdCode;
- (bool)hasDrmVersionsCode;
- (bool)hasDuration;
- (bool)hasExplicitContent;
- (bool)hasExtrasUrl;
- (bool)hasFamilyAccountId;
- (bool)hasFileKind;
- (bool)hasFileSize;
- (bool)hasFlattenedChapterData;
- (bool)hasGrouping;
- (bool)hasHasChapterData;
- (bool)hasHasLocalAsset;
- (bool)hasHidden;
- (bool)hasInUsersCloudLibrary;
- (bool)hasIsInUsersLibrary;
- (bool)hasLastPlayedDateTime;
- (bool)hasLastSkippedDateTime;
- (bool)hasLikedState;
- (bool)hasLikedStateChanged;
- (bool)hasLocalAsset;
- (bool)hasLongDescription;
- (bool)hasMediaType;
- (bool)hasModificationDateTime;
- (bool)hasMovie;
- (bool)hasNeedsReporting;
- (bool)hasPlayCount;
- (bool)hasPlayCountDelta;
- (bool)hasPlaybackEndpointType;
- (bool)hasPodcast;
- (bool)hasPurchaseDateTime;
- (bool)hasPurchaseHistoryId;
- (bool)hasPurchaseHistoryRedownloadParams;
- (bool)hasPurchaseHistoryToken;
- (bool)hasReleaseDateTime;
- (bool)hasRememberBookmark;
- (bool)hasSagaId;
- (bool)hasSagaRedownloadParams;
- (bool)hasSecondaryArtworkId;
- (bool)hasSecondaryArtworkSourceType;
- (bool)hasShortDescription;
- (bool)hasSkipCount;
- (bool)hasSkipCountDelta;
- (bool)hasSong;
- (bool)hasSortTitle;
- (bool)hasStoreAssetFlavor;
- (bool)hasStoreId;
- (bool)hasStorePlaylistId;
- (bool)hasStoreProtectionType;
- (bool)hasStoreXID;
- (bool)hasStorefrontId;
- (bool)hasSubscriptionStoreItemId;
- (bool)hasTitle;
- (bool)hasTvShow;
- (bool)hasUserDisabled;
- (bool)hasYear;
- (unsigned long long)hash;
- (bool)hidden;
- (bool)inUsersCloudLibrary;
- (bool)isEqual:(id)arg1;
- (bool)isInUsersLibrary;
- (long long)lastPlayedDateTime;
- (long long)lastSkippedDateTime;
- (id)libraryIdentifiers;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (int)likedState;
- (bool)likedStateChanged;
- (id)longDescription;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)modificationDateTime;
- (id)movie;
- (bool)needsReporting;
- (int)playCount;
- (int)playCountDelta;
- (int)playbackEndpointType;
- (id)podcast;
- (long long)purchaseDateTime;
- (long long)purchaseHistoryId;
- (id)purchaseHistoryRedownloadParams;
- (int)purchaseHistoryToken;
- (bool)readFrom:(id)arg1;
- (long long)releaseDateTime;
- (bool)rememberBookmark;
- (long long)sagaId;
- (id)sagaRedownloadParams;
- (id)secondaryArtworkId;
- (int)secondaryArtworkSourceType;
- (void)setAccountId:(long long)arg1;
- (void)setArtworkId:(id)arg1;
- (void)setBookmarkTimeMilliseconds:(long long)arg1;
- (void)setChapterMetadataUrl:(id)arg1;
- (void)setCloudAssetAvailable:(bool)arg1;
- (void)setCloudMatchedStatus:(int)arg1;
- (void)setCloudPlaybackEndpointType:(int)arg1;
- (void)setCloudStatus:(int)arg1;
- (void)setCloudUniversalLibraryId:(id)arg1;
- (void)setComment:(id)arg1;
- (void)setContentRating:(int)arg1;
- (void)setContentRatingLevel:(int)arg1;
- (void)setCopyright:(id)arg1;
- (void)setCreationDateTime:(long long)arg1;
- (void)setDrmKey1IdCode:(long long)arg1;
- (void)setDrmKey2IdCode:(long long)arg1;
- (void)setDrmPlatformIdCode:(long long)arg1;
- (void)setDrmVersionsCode:(int)arg1;
- (void)setDuration:(long long)arg1;
- (void)setExplicitContent:(bool)arg1;
- (void)setExtrasUrl:(id)arg1;
- (void)setFamilyAccountId:(long long)arg1;
- (void)setFileKind:(int)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setFlattenedChapterData:(id)arg1;
- (void)setGrouping:(id)arg1;
- (void)setHasAccountId:(bool)arg1;
- (void)setHasBookmarkTimeMilliseconds:(bool)arg1;
- (void)setHasChapterData:(bool)arg1;
- (void)setHasCloudAssetAvailable:(bool)arg1;
- (void)setHasCloudMatchedStatus:(bool)arg1;
- (void)setHasCloudPlaybackEndpointType:(bool)arg1;
- (void)setHasCloudStatus:(bool)arg1;
- (void)setHasContentRating:(bool)arg1;
- (void)setHasContentRatingLevel:(bool)arg1;
- (void)setHasCreationDateTime:(bool)arg1;
- (void)setHasDrmKey1IdCode:(bool)arg1;
- (void)setHasDrmKey2IdCode:(bool)arg1;
- (void)setHasDrmPlatformIdCode:(bool)arg1;
- (void)setHasDrmVersionsCode:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasExplicitContent:(bool)arg1;
- (void)setHasFamilyAccountId:(bool)arg1;
- (void)setHasFileKind:(bool)arg1;
- (void)setHasFileSize:(bool)arg1;
- (void)setHasHasChapterData:(bool)arg1;
- (void)setHasHasLocalAsset:(bool)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasInUsersCloudLibrary:(bool)arg1;
- (void)setHasIsInUsersLibrary:(bool)arg1;
- (void)setHasLastPlayedDateTime:(bool)arg1;
- (void)setHasLastSkippedDateTime:(bool)arg1;
- (void)setHasLikedState:(bool)arg1;
- (void)setHasLikedStateChanged:(bool)arg1;
- (void)setHasLocalAsset:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasModificationDateTime:(bool)arg1;
- (void)setHasNeedsReporting:(bool)arg1;
- (void)setHasPlayCount:(bool)arg1;
- (void)setHasPlayCountDelta:(bool)arg1;
- (void)setHasPlaybackEndpointType:(bool)arg1;
- (void)setHasPurchaseDateTime:(bool)arg1;
- (void)setHasPurchaseHistoryId:(bool)arg1;
- (void)setHasPurchaseHistoryToken:(bool)arg1;
- (void)setHasReleaseDateTime:(bool)arg1;
- (void)setHasRememberBookmark:(bool)arg1;
- (void)setHasSagaId:(bool)arg1;
- (void)setHasSecondaryArtworkSourceType:(bool)arg1;
- (void)setHasSkipCount:(bool)arg1;
- (void)setHasSkipCountDelta:(bool)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setHasStorePlaylistId:(bool)arg1;
- (void)setHasStoreProtectionType:(bool)arg1;
- (void)setHasStorefrontId:(bool)arg1;
- (void)setHasSubscriptionStoreItemId:(bool)arg1;
- (void)setHasUserDisabled:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInUsersCloudLibrary:(bool)arg1;
- (void)setIsInUsersLibrary:(bool)arg1;
- (void)setLastPlayedDateTime:(long long)arg1;
- (void)setLastSkippedDateTime:(long long)arg1;
- (void)setLibraryIdentifiers:(id)arg1;
- (void)setLikedState:(int)arg1;
- (void)setLikedStateChanged:(bool)arg1;
- (void)setLongDescription:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)setModificationDateTime:(long long)arg1;
- (void)setMovie:(id)arg1;
- (void)setNeedsReporting:(bool)arg1;
- (void)setPlayCount:(int)arg1;
- (void)setPlayCountDelta:(int)arg1;
- (void)setPlaybackEndpointType:(int)arg1;
- (void)setPodcast:(id)arg1;
- (void)setPurchaseDateTime:(long long)arg1;
- (void)setPurchaseHistoryId:(long long)arg1;
- (void)setPurchaseHistoryRedownloadParams:(id)arg1;
- (void)setPurchaseHistoryToken:(int)arg1;
- (void)setReleaseDateTime:(long long)arg1;
- (void)setRememberBookmark:(bool)arg1;
- (void)setSagaId:(long long)arg1;
- (void)setSagaRedownloadParams:(id)arg1;
- (void)setSecondaryArtworkId:(id)arg1;
- (void)setSecondaryArtworkSourceType:(int)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setSkipCount:(int)arg1;
- (void)setSkipCountDelta:(int)arg1;
- (void)setSong:(id)arg1;
- (void)setSortTitle:(id)arg1;
- (void)setStoreAssetFlavor:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setStorePlaylistId:(long long)arg1;
- (void)setStoreProtectionType:(int)arg1;
- (void)setStoreXID:(id)arg1;
- (void)setStorefrontId:(long long)arg1;
- (void)setSubscriptionStoreItemId:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTvShow:(id)arg1;
- (void)setUserDisabled:(bool)arg1;
- (void)setYear:(int)arg1;
- (id)shortDescription;
- (int)skipCount;
- (int)skipCountDelta;
- (id)song;
- (id)sortTitle;
- (id)storeAssetFlavor;
- (long long)storeId;
- (long long)storePlaylistId;
- (int)storeProtectionType;
- (id)storeXID;
- (long long)storefrontId;
- (long long)subscriptionStoreItemId;
- (id)title;
- (id)tvShow;
- (bool)userDisabled;
- (void)writeTo:(id)arg1;
- (int)year;

@end
