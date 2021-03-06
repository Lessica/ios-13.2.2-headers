/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXRealmDatabaseManager : NSObject <FLEXDatabaseManager> {
    NSString * _path;
    RLMRealm * _realm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, retain) RLMRealm *realm;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (bool)open;
- (id)path;
- (id)queryAllColumnsWithTableName:(id)arg1;
- (id)queryAllDataWithTableName:(id)arg1;
- (id)queryAllTables;
- (id)realm;
- (void)setPath:(id)arg1;
- (void)setRealm:(id)arg1;

@end
