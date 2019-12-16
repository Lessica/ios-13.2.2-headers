/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _downloadAssetDictionary;
    NSDictionary * _downloadMetadataDictionary;
    NSDate * _expirationDate;
    bool  _hasOverrideChildStorePlatformDictionaries;
    NSNumber * _hasSubscriptionOffer;
    NSArray * _overrideChildStorePlatformDictionaries;
    MPStoreItemMetadata * _parentStoreItemMetadata;
    NSDictionary * _storeMusicAPIDictionary;
    NSDictionary * _storePlatformDictionary;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *artistName;
@property (nonatomic, readonly, copy) id artistStoreID;
@property (nonatomic, readonly, copy) NSString *artistUploadedContentType;
@property (nonatomic, readonly) MPStoreArtworkRequestToken *artworkRequestToken;
@property (nonatomic, readonly, copy) NSArray *artworkTrackIDs;
@property (getter=isBeats1, nonatomic, readonly) bool beats1;
@property (nonatomic, readonly, copy) NSString *cacheableItemIdentifier;
@property (nonatomic, readonly, copy) NSArray *childStoreItemMetadatas;
@property (nonatomic, readonly, copy) NSArray *childrenStoreIDs;
@property (nonatomic, readonly, copy) NSString *cloudAlbumID;
@property (nonatomic, readonly) unsigned long long cloudID;
@property (nonatomic, readonly, copy) NSString *cloudUniversalLibraryID;
@property (nonatomic, readonly, copy) NSString *collectionName;
@property (nonatomic, readonly, copy) id collectionStoreID;
@property (getter=isCompilation, nonatomic, readonly) bool compilation;
@property (nonatomic, readonly, copy) NSString *composerName;
@property (nonatomic, readonly, copy) MPUContentItemIdentifierCollection *contentItemIdentifierCollection;
@property (nonatomic, readonly, copy) NSString *copyrightText;
@property (nonatomic, readonly, copy) id curatorID;
@property (nonatomic, readonly, copy) NSString *curatorName;
@property (nonatomic, readonly, copy) NSString *descriptionText;
@property (nonatomic, readonly) long long discCount;
@property (nonatomic, readonly) long long discNumber;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSString *editorNotes;
@property (nonatomic, readonly, copy) NSDictionary *effectiveStorePlatformDictionary;
@property (nonatomic, readonly) long long episodeCount;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (nonatomic, readonly) long long explicitRating;
@property (nonatomic, readonly, copy) NSArray *formerStoreAdamIDs;
@property (nonatomic, readonly, copy) NSArray *genreNames;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) bool hasArtistBiography;
@property (nonatomic, readonly) bool hasLyrics;
@property (nonatomic, readonly) bool hasSocialPosts;
@property (nonatomic, readonly) bool hasSubscriptionOffer;
@property (nonatomic, readonly) bool hasTimeSyncedLyrics;
@property (nonatomic, readonly, copy) NSString *iTunesBrandType;
@property (nonatomic, readonly) bool isChart;
@property (nonatomic, readonly) bool isPreorder;
@property (nonatomic, readonly, copy) NSString *itemKind;
@property (nonatomic, readonly, copy) NSDate *lastModifiedDate;
@property (nonatomic, readonly) MPStoreArtworkRequestToken *latestAlbumArtworkRequestToken;
@property (nonatomic, readonly) long long movementCount;
@property (nonatomic, readonly, copy) NSString *movementName;
@property (nonatomic, readonly) long long movementNumber;
@property (nonatomic, readonly, copy) NSArray *movieClips;
@property (nonatomic, readonly) long long movieClipsCount;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameRaw;
@property (nonatomic, readonly, copy) NSArray *offers;
@property (nonatomic, readonly, copy) MPStoreItemMetadata *parentStoreItemMetadata;
@property (nonatomic, readonly, copy) NSArray *playlistIdentifiers;
@property (nonatomic, readonly, copy) NSString *playlistType;
@property (nonatomic, readonly, copy) NSNumber *popularity;
@property (getter=isPrivatePerson, nonatomic, readonly) bool privatePerson;
@property (nonatomic, readonly) long long purchasedAdamID;
@property (nonatomic, readonly, copy) NSString *radioStationProviderName;
@property (nonatomic, readonly) long long radioStationTypeID;
@property (nonatomic, readonly, copy) NSDate *releaseDate;
@property (nonatomic, readonly) long long seasonNumber;
@property (nonatomic, readonly, copy) NSString *shortEditorNotes;
@property (nonatomic, readonly, copy) NSString *shortName;
@property (nonatomic, readonly, copy) NSURL *shortURL;
@property (nonatomic, readonly, copy) NSNumber *shouldBookmarkPlayPosition;
@property (nonatomic, readonly) bool shouldReportPlayEvents;
@property (nonatomic, readonly) bool showComposer;
@property (nonatomic, readonly, copy) id socialProfileID;
@property (nonatomic, readonly, copy) id storeID;
@property (getter=isStoreRedownloadable, nonatomic, readonly) bool storeRedownloadable;
@property (nonatomic, readonly) long long subscriptionAdamID;
@property (nonatomic, readonly) long long trackCount;
@property (nonatomic, readonly) long long trackNumber;
@property (getter=isVerifiedPerson, nonatomic, readonly) bool verifiedPerson;
@property (nonatomic, readonly, copy) NSString *versionHash;
@property (nonatomic, readonly, copy) NSString *videoSubtype;
@property (nonatomic, readonly, copy) NSString *workName;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)artworkRequestTokenForStorePlatformArtworkValue:(id)arg1;
+ (id)storeServerCalendar;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_musicAPIDateFormatter;
- (id)_storePlatformLastModifiedDateFormatter;
- (id)_storePlatformReleaseDateFormatter;
- (id)artistName;
- (id)artistStoreID;
- (id)artistUploadedContentType;
- (id)artworkRequestToken;
- (id)artworkRequestTokenForEditorialArtworkKind:(id)arg1;
- (id)artworkRequestTokenForScreenshotArtwork;
- (id)artworkRequestTokenForStorePlatformDictionary:(id)arg1;
- (id)artworkRequestTokenForUberArtworkKind:(id)arg1;
- (id)artworkTrackIDs;
- (id)avatarArtworkRequestToken;
- (id)brickEditorialArtworkRequestToken;
- (id)cacheableItemIdentifier;
- (id)childStoreItemMetadatas;
- (id)childStorePlatformDictionaryForArtworkTrackID:(id)arg1;
- (id)childStorePlatformDictionaryForStoreID:(id)arg1;
- (id)childrenStoreIDs;
- (id)cloudAlbumID;
- (unsigned long long)cloudID;
- (id)cloudUniversalLibraryID;
- (id)collectionName;
- (id)collectionStoreID;
- (id)composerName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyrightText;
- (id)curatorID;
- (id)curatorName;
- (id)description;
- (id)descriptionText;
- (id)descriptionTextWithStyle:(id)arg1;
- (long long)discCount;
- (long long)discNumber;
- (double)duration;
- (id)editorNotes;
- (id)editorNotesWithStyle:(id)arg1;
- (id)effectiveStorePlatformDictionary;
- (void)encodeWithCoder:(id)arg1;
- (long long)episodeCount;
- (id)expirationDate;
- (long long)explicitRating;
- (id)flowcaseEditorialArtworkRequestToken;
- (id)formerStoreAdamIDs;
- (id)genreNames;
- (id)handle;
- (bool)hasArtistBiography;
- (bool)hasLyrics;
- (bool)hasMetadataForRequestReason:(unsigned long long)arg1;
- (bool)hasSocialPosts;
- (bool)hasSubscriptionOffer;
- (bool)hasTimeSyncedLyrics;
- (id)iTunesBrandType;
- (id)initWithCoder:(id)arg1;
- (id)initWithDownloadAssetDictionary:(id)arg1;
- (id)initWithStoreMusicAPIDictionary:(id)arg1;
- (id)initWithStorePlatformDictionary:(id)arg1;
- (id)initWithStorePlatformDictionary:(id)arg1 expirationDate:(id)arg2;
- (id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2;
- (id)initWithStorePlatformDictionary:(id)arg1 parentStoreItemMetadata:(id)arg2 expirationDate:(id)arg3;
- (bool)isBeats1;
- (bool)isChart;
- (bool)isCompilation;
- (bool)isExpired;
- (bool)isExplicitContent;
- (bool)isMasteredForITunes;
- (bool)isPreorder;
- (bool)isPrivatePerson;
- (bool)isStoreRedownloadable;
- (bool)isVerifiedPerson;
- (id)itemKind;
- (id)lastModifiedDate;
- (id)latestAlbumArtworkRequestToken;
- (id)metadataByAppendingMetadata:(id)arg1;
- (id)metadataWithChildStorePlatformDictionaries:(id)arg1;
- (id)metadataWithParentMetadata:(id)arg1;
- (long long)movementCount;
- (id)movementName;
- (long long)movementNumber;
- (id)movieArtworkRequestToken;
- (id)movieClips;
- (long long)movieClipsCount;
- (id)name;
- (id)nameRaw;
- (id)offers;
- (id)parentStoreItemMetadata;
- (id)playlistIdentifiers;
- (id)playlistType;
- (id)popularity;
- (long long)purchasedAdamID;
- (id)radioStationProviderName;
- (long long)radioStationTypeID;
- (id)releaseDate;
- (long long)seasonNumber;
- (id)shortEditorNotes;
- (id)shortName;
- (id)shortURL;
- (id)shouldBookmarkPlayPosition;
- (bool)shouldReportPlayEvents;
- (bool)showComposer;
- (id)socialProfileID;
- (id)storeID;
- (long long)subscriptionAdamID;
- (long long)trackCount;
- (long long)trackNumber;
- (id)tvEpisodeArtworkRequestToken;
- (id)tvShowArtworkRequestToken;
- (id)versionHash;
- (id)videoSubtype;
- (id)workName;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)contentItemIdentifierCollection;

@end
