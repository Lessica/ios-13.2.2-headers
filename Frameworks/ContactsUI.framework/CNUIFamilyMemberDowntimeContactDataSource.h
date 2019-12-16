/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIFamilyMemberDowntimeContactDataSource : NSObject {
    NSArray * _familyMembers;
    NSString * _filterString;
    NSArray * _filteredSections;
    CNContact * _meContact;
    bool  _meContactNeedsUpdate;
    NSArray * _requiredKeys;
    NSArray * _sections;
    CNContactStore * _store;
}

@property (nonatomic, retain) NSArray *familyMembers;
@property (nonatomic, copy) NSString *filterString;
@property (nonatomic, retain) NSArray *filteredSections;
@property (nonatomic, retain) CNContact *meContact;
@property (nonatomic) bool meContactNeedsUpdate;
@property (nonatomic, readonly) NSArray *requiredKeys;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) CNContactStore *store;

+ (bool)isErrorPossiblyRelatedToExtraStores:(id)arg1;

- (void).cxx_destruct;
- (void)_loadAllContactsIfNeeded;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(bool)arg2 keysToFetch:(id)arg3;
- (id)contactItemForIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)familyMembers;
- (void)filterSectionsForString:(id)arg1;
- (id)filterString;
- (id)filteredSections;
- (id)initWithStore:(id)arg1 familyMembers:(id)arg2 requiredKeys:(id)arg3;
- (id)labelForFamilyMember:(id)arg1;
- (id)meContact;
- (bool)meContactNeedsUpdate;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)postProcessForFamilyMembersWithContacts:(id)arg1;
- (id)preferredForNameMeContactIdentifier;
- (id)preferredForNameMeContactWithKeysToFetch:(id)arg1;
- (id)requiredKeys;
- (id)sections;
- (void)setFamilyMembers:(id)arg1;
- (void)setFilterString:(id)arg1;
- (void)setFilteredSections:(id)arg1;
- (void)setMeContact:(id)arg1;
- (void)setMeContactNeedsUpdate:(bool)arg1;
- (void)setSections:(id)arg1;
- (void)setStore:(id)arg1;
- (long long)sortOrder;
- (id)store;
- (id)titleForSection:(long long)arg1;

@end
