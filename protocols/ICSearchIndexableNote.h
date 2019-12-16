/* Generated by RuntimeBrowser.
 */

@protocol ICSearchIndexableNote <ICSearchIndexable>

@required

- (NSString *)accountName;
- (NSString *)contentInfoText;
- (NSDate *)dateForCurrentSortType;
- (NSString *)folderName;
- (NSString *)folderNameForNoteList;
- (NSString *)identifier;
- (bool)isModernNote;
- (bool)isPasswordProtected;
- (bool)isSharedReadOnly;
- (bool)isSharedViaICloud;
- (bool)isSharedViaICloudFolder;
- (NSString *)noteAsPlainTextWithoutTitle;
- (NSArray *)noteCellKeyPaths;
- (NSString *)title;
- (NSString *)trimmedTitle;

@end
