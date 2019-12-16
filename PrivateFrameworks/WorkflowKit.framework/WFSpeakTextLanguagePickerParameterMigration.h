/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFSpeakTextLanguagePickerParameterMigration : WFWorkflowMigration

+ (bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;

- (id)availableLanguageCodes;
- (void)migrateSpeakTextLanguageParameterInParametersDictionary:(id)arg1;
- (void)migrateWorkflow;

@end
