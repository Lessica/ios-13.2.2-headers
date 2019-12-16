/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPhotoPickerProviderGroupsBuilder : NSObject {
    <AVTAvatarStore> * _avatarStore;
    CNMutableContact * _contact;
    CNContactViewCache * _contactViewCache;
    CNUIContactsEnvironment * _environment;
    bool  _includeAddAnimojiItem;
    bool  _includeAddPhotoItem;
    bool  _includeAnimoji;
    bool  _includeContactImage;
    bool  _includeFaces;
    bool  _includeMonograms;
    bool  _includeRecents;
    bool  _includeUnifiedContactImages;
}

@property (nonatomic, readonly) <AVTAvatarStore> *avatarStore;
@property (nonatomic, readonly) CNMutableContact *contact;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic) bool includeAddAnimojiItem;
@property (nonatomic) bool includeAddPhotoItem;
@property (nonatomic) bool includeAnimoji;
@property (nonatomic) bool includeContactImage;
@property (nonatomic) bool includeFaces;
@property (nonatomic) bool includeMonograms;
@property (nonatomic) bool includeRecents;
@property (nonatomic) bool includeUnifiedContactImages;
@property (nonatomic, readonly) bool includesAnyPhotoContent;

+ (id)builderWithContact:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4 photoPickerConfiguration:(id)arg5;

- (void).cxx_destruct;
- (id)animojiContentGroup;
- (id)avatarStore;
- (id)build;
- (id)contact;
- (id)contactViewCache;
- (id)environment;
- (bool)includeAddAnimojiItem;
- (bool)includeAddPhotoItem;
- (bool)includeAnimoji;
- (bool)includeContactImage;
- (bool)includeFaces;
- (bool)includeMonograms;
- (bool)includeRecents;
- (bool)includeUnifiedContactImages;
- (bool)includesAnyPhotoContent;
- (id)initWithContact:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4;
- (id)photoContentGroup;
- (void)setIncludeAddAnimojiItem:(bool)arg1;
- (void)setIncludeAddPhotoItem:(bool)arg1;
- (void)setIncludeAnimoji:(bool)arg1;
- (void)setIncludeContactImage:(bool)arg1;
- (void)setIncludeFaces:(bool)arg1;
- (void)setIncludeMonograms:(bool)arg1;
- (void)setIncludeRecents:(bool)arg1;
- (void)setIncludeUnifiedContactImages:(bool)arg1;

@end
