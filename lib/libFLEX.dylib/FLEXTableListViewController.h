/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXTableListViewController : UITableViewController {
    NSString * _databasePath;
    <FLEXDatabaseManager> * _dbm;
    NSArray * _tables;
}

@property (nonatomic, retain) NSArray *tables;

+ (id)supportedRealmExtensions;
+ (id)supportedSQLiteExtensions;
+ (bool)supportsExtension:(id)arg1;

- (void).cxx_destruct;
- (id)databaseManagerForFileAtPath:(id)arg1;
- (void)getAllTables;
- (id)initWithPath:(id)arg1;
- (void)setTables:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tables;

@end