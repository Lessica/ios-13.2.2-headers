/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding> {
    NSArray * _additionalContactKeyDescriptors;
    NSString * _clientIdentifier;
    NSString * _containerIdentifier;
    bool  _enforceClientIdentifier;
    NSArray * _excludedTransactionAuthors;
    bool  _includeChangeAnchors;
    bool  _includeChangeIDs;
    bool  _includeExternalIDs;
    bool  _includeGroupChanges;
    bool  _includeImagesChanged;
    bool  _includeLabeledValueChanges;
    bool  _mutableObjects;
    bool  _shouldUnifyResults;
    NSData * _startingToken;
}

@property (nonatomic, copy) NSArray *additionalContactKeyDescriptors;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (getter=shouldEnforceClientIdentifer, nonatomic, readonly) bool enforceClientIdentifier;
@property (nonatomic, copy) NSArray *excludedTransactionAuthors;
@property (nonatomic) bool includeChangeAnchors;
@property (nonatomic) bool includeChangeIDs;
@property (nonatomic) bool includeExternalIDs;
@property (nonatomic) bool includeGroupChanges;
@property (nonatomic) bool includeImagesChanged;
@property (nonatomic) bool includeLabeledValueChanges;
@property (nonatomic) bool mutableObjects;
@property (nonatomic) bool shouldUnifyResults;
@property (nonatomic, readonly) CNChangeHistoryAnchor *startingAnchor;
@property (nonatomic, copy) NSData *startingToken;
@property (nonatomic) bool unifyResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalContactKeyDescriptors;
- (id)clientIdentifier;
- (id)containerIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedTransactionAuthors;
- (bool)includeChangeAnchors;
- (bool)includeChangeIDs;
- (bool)includeExternalIDs;
- (bool)includeGroupChanges;
- (bool)includeImagesChanged;
- (bool)includeLabeledValueChanges;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingAnchor:(id)arg1;
- (bool)mutableObjects;
- (void)setAdditionalContactKeyDescriptors:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setExcludedTransactionAuthors:(id)arg1;
- (void)setIncludeChangeAnchors:(bool)arg1;
- (void)setIncludeChangeIDs:(bool)arg1;
- (void)setIncludeExternalIDs:(bool)arg1;
- (void)setIncludeGroupChanges:(bool)arg1;
- (void)setIncludeImagesChanged:(bool)arg1;
- (void)setIncludeLabeledValueChanges:(bool)arg1;
- (void)setMutableObjects:(bool)arg1;
- (void)setShouldUnifyResults:(bool)arg1;
- (void)setStartingAnchor:(id)arg1;
- (void)setStartingToken:(id)arg1;
- (void)setUnifyResults:(bool)arg1;
- (bool)shouldEnforceClientIdentifer;
- (bool)shouldUnifyResults;
- (id)startingAnchor;
- (id)startingToken;
- (bool)unifyResults;

@end
