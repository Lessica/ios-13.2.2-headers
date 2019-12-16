/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTypeCodableDescription : INCodableDescription {
    NSString * _attributeKeyPrefix;
    NSString * _attributesKeyPrefix;
    NSString * _displayName;
    NSString * _displayNameLocID;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameLocID;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_attributeKeyPrefix;
- (id)_attributesKeyPrefix;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)displayName;
- (id)displayNameLocID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPrefix;
- (id)localizedDisplayName;
- (id)localizedDisplayNameForLanguage:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLocID:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_outputDisplayName;

@end
