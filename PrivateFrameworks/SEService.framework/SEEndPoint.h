/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SEService.framework/SEService
 */

@interface SEEndPoint : NSObject <NSSecureCoding, SEEndPoint> {
    NSArray * _authorizedKeys;
    NSArray * _certificates;
    NSNumber * _confidentialMailBoxSize;
    SEEndPointConfiguration * _configuration;
    NSNumber * _counter;
    NSString * _identifier;
    NSString * _issuerIdentifier;
    NSData * _keyIdentifier;
    NSDictionary * _metaData;
    NSString * _privacyKeyIdentifier;
    NSNumber * _privateMailBoxSize;
    NSData * _publicKey;
    NSData * _publicKeyIdentifier;
    NSData * _readerIdentifier;
    NSData * _readerPublicKey;
    NSData * _revocationAttestation;
    NSString * _subjectIdentifier;
}

@property (nonatomic, retain) NSArray *authorizedKeys;
@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic, retain) NSNumber *confidentialMailBoxSize;
@property (nonatomic, retain) SEEndPointConfiguration *configuration;
@property (nonatomic, retain) NSNumber *counter;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *issuerIdentifier;
@property (nonatomic, retain) NSData *keyIdentifier;
@property (nonatomic, retain) NSDictionary *metaData;
@property (nonatomic, retain) NSString *privacyKeyIdentifier;
@property (nonatomic, retain) NSNumber *privateMailBoxSize;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSData *publicKeyIdentifier;
@property (nonatomic, retain) NSData *readerIdentifier;
@property (nonatomic, retain) NSData *readerPublicKey;
@property (nonatomic, retain) NSData *revocationAttestation;
@property (nonatomic, retain) NSString *subjectIdentifier;

+ (id)decodeWithData:(id)arg1 error:(id*)arg2;
+ (id)endPointWithIdentifier:(id)arg1 certificateData:(id)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCertificateChain:(id)arg1;
- (id)authorizedKeys;
- (id)certificates;
- (id)confidentialMailBoxSize;
- (id)configuration;
- (id)configurePrivateData:(id)arg1 confidentialData:(id)arg2 contaclessPersistentVisibility:(id)arg3 wiredPersistentVisibility:(id)arg4;
- (void)configurePrivateDataOffset:(unsigned short)arg1 privateDataLength:(unsigned short)arg2 confidentialDataOffset:(unsigned short)arg3 confidentialDataLength:(unsigned short)arg4 contaclessVisibility:(bool)arg5 wiredVisibility:(bool)arg6 contactlessLocalValidation:(bool)arg7 wiredLocalValidation:(bool)arg8;
- (id)counter;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodeWithError:(id*)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)issuerIdentifier;
- (id)keyIdentifier;
- (id)metaData;
- (id)privacyKeyIdentifier;
- (id)privateMailBoxSize;
- (id)publicKey;
- (id)publicKeyIdentifier;
- (id)readerIdentifier;
- (id)readerPublicKey;
- (id)revocationAttestation;
- (void)setAuthorizedKeys:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setConfidentialMailBoxSize:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCounter:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIssuerIdentifier:(id)arg1;
- (void)setKeyIdentifier:(id)arg1;
- (void)setMetaData:(id)arg1;
- (void)setPrivacyKeyIdentifier:(id)arg1;
- (void)setPrivateMailBoxSize:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyIdentifier:(id)arg1;
- (void)setReaderIdentifier:(id)arg1;
- (void)setReaderPublicKey:(id)arg1;
- (void)setRevocationAttestation:(id)arg1;
- (void)setSubjectIdentifier:(id)arg1;
- (id)subjectIdentifier;

@end
