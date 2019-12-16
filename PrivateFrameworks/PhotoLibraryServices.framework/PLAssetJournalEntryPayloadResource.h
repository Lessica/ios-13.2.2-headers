/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetJournalEntryPayloadResource : NSObject {
    NSDictionary * _payloadAttributes;
}

@property (nonatomic, readonly) NSData *bookmarkData;
@property (nonatomic, readonly) NSString *bookmarkPath;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) unsigned int dataStoreClassID;
@property (nonatomic, readonly) NSDictionary *payloadAttributes;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) unsigned int resourceType;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) NSString *volumeUuidString;

- (void).cxx_destruct;
- (id)bookmarkData;
- (id)bookmarkPath;
- (unsigned long long)cplType;
- (unsigned int)dataStoreClassID;
- (id)description;
- (id)fourCharCodeName;
- (id)initWithPayloadAttributes:(id)arg1;
- (bool)isAdjusted;
- (bool)isOriginalResource;
- (bool)isReferenceResource;
- (id)payloadAttributes;
- (unsigned int)recipeID;
- (unsigned int)resourceType;
- (short)trashedState;
- (id)uniformTypeIdentifier;
- (void)updateStoredResource:(id)arg1;
- (id)validatedExternalResourceWithAsset:(id)arg1 isCPLEnabled:(bool)arg2;
- (unsigned int)version;
- (id)volumeUuidString;

@end
