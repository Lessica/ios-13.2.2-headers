/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFWorkflowReference : WFDatabaseObjectDescriptor <WFNaming> {
    NSString * _actionsDescription;
    NSString * _associatedAppBundleIdentifier;
    WFWorkflowIcon * _icon;
    bool  _isDeleted;
    NSString * _name;
    NSString * _subtitle;
}

@property (nonatomic, readonly, copy) NSString *actionsDescription;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly, copy) WFWorkflowIcon *icon;
@property (nonatomic, readonly) bool isDeleted;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;
+ (id)workflowReferenceConsumingSingleUseToken:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)actionsDescription;
- (id)associatedAppBundleIdentifier;
- (void)deleteAssociatedInteractions;
- (void)donateRunInteraction;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDictionary;
- (id)externalURLForRunningWithSource:(id)arg1;
- (id)externalURLForViewing;
- (id)generateSingleUseToken;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 subtitle:(id)arg3 actionsDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 icon:(id)arg6 isDeleted:(bool)arg7;
- (bool)isDeleted;
- (id)name;
- (id)speakableString;
- (id)subtitle;
- (id)wfName;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)searchableItemRepresentation;
- (unsigned long long)spotlightHash;

@end
