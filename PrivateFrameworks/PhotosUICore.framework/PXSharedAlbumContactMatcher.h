/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharedAlbumContactMatcher : NSObject {
    NSCache * _contactIdentifiersBySubscriberIdentifiers;
    NSCache * _contactPhotosCache;
    CNContactStore * _contactStore;
    NSCache * _monogrammersByContactImageDiameter;
}

+ (id)sharedMatcher;

- (void).cxx_destruct;
- (id)_fetchContactMatchingIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)_fetchContactMatchingSubscriberInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)_fetchContactsMatchingIdentifiers:(id)arg1 keysToFetch:(id)arg2;
- (void)_observeContactStoreNotifications;
- (id)contactPhotoForContact:(id)arg1 diameter:(double)arg2;
- (void)contactsDidChange:(id)arg1;
- (id)contactsMatchingSubscriberInfos:(id)arg1 keysToFetch:(id)arg2;
- (id)init;

@end
