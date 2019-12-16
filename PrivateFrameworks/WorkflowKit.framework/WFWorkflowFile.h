/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFWorkflowFile : NSObject <NSItemProviderWriting, WFRecordStorage> {
    NSDate * _creationDate;
    WFFileRepresentation * _file;
    NSDate * _modificationDate;
    NSString * _name;
    WFWorkflowQuarantine * _quarantine;
    NSMutableDictionary * _rootObject;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFFileRepresentation *file;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFWorkflowIcon *icon;
@property (nonatomic, copy) NSArray *importQuestions;
@property (nonatomic, copy) NSArray *inputClasses;
@property (nonatomic, copy) NSString *lastMigratedClientVersion;
@property (nonatomic, copy) NSString *minimumClientVersion;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) WFWorkflowQuarantine *quarantine;
@property (nonatomic, readonly) NSMutableDictionary *rootObject;
@property (nonatomic, readonly) NSDictionary *rootObjectForExport;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *workflowTypes;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (id)actions;
- (id)creationDate;
- (id)descriptor;
- (id)file;
- (id)fileDataWithError:(id*)arg1;
- (id)icon;
- (id)importQuestions;
- (id)init;
- (id)initWithDescriptor:(id)arg1 performMigration:(bool)arg2 error:(id*)arg3;
- (id)initWithDictionary:(id)arg1 name:(id)arg2;
- (id)initWithDictionary:(id)arg1 name:(id)arg2 performMigration:(bool)arg3;
- (id)initWithFileData:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)inputClasses;
- (bool)isEqual:(id)arg1;
- (id)lastMigratedClientVersion;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (bool)migrateRootObject;
- (void)migrateTypesForImport;
- (id)minimumClientVersion;
- (id)modificationDate;
- (id)name;
- (id)quarantine;
- (id)recordRepresentationWithError:(id*)arg1;
- (id)rootObject;
- (id)rootObjectForExport;
- (void)setActions:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImportQuestions:(id)arg1;
- (void)setInputClasses:(id)arg1;
- (void)setLastMigratedClientVersion:(id)arg1;
- (void)setMinimumClientVersion:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQuarantine:(id)arg1;
- (void)setWorkflowTypes:(id)arg1;
- (id)workflowTypes;
- (id)writeToDiskWithError:(id*)arg1;
- (bool)writeToOutputStream:(id)arg1 error:(id*)arg2;

@end