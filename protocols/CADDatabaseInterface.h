/* Generated by RuntimeBrowser.
 */

@protocol CADDatabaseInterface

@required

- (void)CADDatabaseCanModifyCalendarDatabase:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, void*
- (void)CADDatabaseCommitWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, NSDictionary *, void*
- (void)CADDatabaseExportICSDataForCalendarItems:(void *)arg1 preventLineFolding:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSData *, void*
- (void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 13: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, long long, NSData *, int, int, int, void*
- (void)CADDatabaseFetchObjectChangesForEntityTypes:(void *)arg1 insideObject:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 11: NSArray *, CADObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, long long, NSArray *, void*
- (void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 10: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, bool, NSArray *, double, void*
- (void)CADDatabaseGetChangesSinceSequenceNumber:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDictionary *, void*
- (void)CADDatabaseGetNextAssignableColorWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSString *, void*
- (void)CADDatabaseGetSequenceNumber:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, int, void*
- (void)CADDatabaseGetUUID:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSString *, void*
- (void)CADDatabaseImportICSData:(void *)arg1 intoCalendarsWithIDs:(void *)arg2 optionsMask:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, void*
- (void)CADDatabaseLastConfirmedSplashScreenVersion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, unsigned long long, void*
- (void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseMarkIndividualChangesConsumed:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseRebuildOccurrenceCacheWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseRegisterForDetailedChangeTracking:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, long long, void*
- (void)CADDatabaseResetWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseRollbackWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseSaveWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseSetShowsDeclinedEvents:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseUnregisterForDetailedChangeTracking:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end