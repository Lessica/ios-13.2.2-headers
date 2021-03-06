/* Generated by RuntimeBrowser.
 */

@protocol SISchemaDialogOutput <NSObject>

@required

- (SISchemaRedactableString *)displayedDialogOutput;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setDisplayedDialogOutput:(SISchemaRedactableString *)arg1;
- (void)setSpokenDialogOutput:(SISchemaRedactableString *)arg1;
- (void)setViewID:(NSString *)arg1;
- (SISchemaRedactableString *)spokenDialogOutput;
- (NSString *)viewID;

@end
