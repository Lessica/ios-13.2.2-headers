/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHMomentShareParticipantChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (getter=isClientEntitled, nonatomic, readonly) bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) id /* block */ concurrentWorkBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (readonly) bool isNewRequest;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (getter=isMutated, readonly) bool mutated;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMomentShareParticipant;
@property (readonly) Class superclass;

+ (id)changeRequestForMomentShareParticipant:(id)arg1;
+ (id)creationRequestForMomentShareParticipantWithEmailAddress:(id)arg1;
+ (id)creationRequestForMomentShareParticipantWithPhoneNumber:(id)arg1;
+ (void)deleteMomentShareParticipants:(id)arg1;

- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)emailAddress;
- (void)encodeToXPCDict:(id)arg1;
- (id)initForNewObject;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)managedEntityName;
- (id)phoneNumber;
- (id)placeholderForCreatedMomentShareParticipant;
- (bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id*)arg2;
- (bool)prepareForServicePreflightCheck:(id*)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setType:(unsigned short)arg1;
- (unsigned short)type;

@end
