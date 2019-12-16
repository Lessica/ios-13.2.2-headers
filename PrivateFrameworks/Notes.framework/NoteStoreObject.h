/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteStoreObject : NoteCollectionObject <ICLegacyFolder>

@property (nonatomic, retain) NoteAccountObject *account;
@property (nonatomic, retain) NSSet *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *syncAnchor;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesForServerIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1 ascending:(bool)arg2 limit:(unsigned long long)arg3;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ascending:(bool)arg2 limit:(unsigned long long)arg3;
- (id)predicateForNotes;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)addNotesObject:(id)arg1;
- (bool)isDeletedOrInTrash;
- (id)newNoteInContext:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg1;
- (id)parentFolder;
- (id)title;

@end
