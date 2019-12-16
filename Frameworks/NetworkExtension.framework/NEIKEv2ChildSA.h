/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2ChildSA : NSObject {
    unsigned int  _childID;
    NEIKEv2ChildSAProposal * _chosenProposal;
    NEIKEv2ChildSAConfiguration * _configuration;
    struct OpaqueSecDHContext { } * _dhContext;
    union { 
        union { 
            struct ccec_full_ctx { 
                struct ccec_cp {} *cp; 
                unsigned char pad[8]; 
                struct ccec_projective_point { 
                    unsigned long long xyz[1]; 
                } point[0]; 
            } dhECPKey256[9]; 
            struct ccec_full_ctx { 
                struct ccec_cp {} *cp; 
                unsigned char pad[8]; 
                struct ccec_projective_point { 
                    unsigned long long xyz[1]; 
                } point[0]; 
            } dhECPKey384[13]; 
            struct ccec_full_ctx { 
                struct ccec_cp {} *cp; 
                unsigned char pad[8]; 
                struct ccec_projective_point { 
                    unsigned long long xyz[1]; 
                } point[0]; 
            } dhECPKey521[19]; 
        } dhECPKey; 
        union { 
            unsigned char dhCurveKey25519[32]; 
        } dhCurveKey; 
    }  _dhECKey;
    struct NSMutableData { Class x1; } * _dhPublicKey;
    unsigned long long  _dhPublicKeySize;
    NSData * _dhRemotePublicKey;
    NSError * _error;
    NEIKEv2IKESA * _ikeSA;
    unsigned short  _incomingDatabaseReqID;
    struct NSMutableData { Class x1; } * _incomingEncryptionKey;
    struct NSMutableData { Class x1; } * _incomingIntegrityKey;
    NEIKEv2ChildSAProposal * _initiatorRekeyNonPFSProposal;
    NEIKEv2ChildSAProposal * _initiatorRekeyProposal;
    bool  _isFirstChild;
    bool  _isInitiator;
    NSData * _localNonce;
    NSArray * _localTrafficSelectors;
    unsigned short  _outgoingDatabaseReqID;
    struct NSMutableData { Class x1; } * _outgoingEncryptionKey;
    struct NSMutableData { Class x1; } * _outgoingIntegrityKey;
    NSData * _remoteNonce;
    NSArray * _remoteTrafficSelectors;
    NEIKEv2ChildSAProposal * _responderRekeyProposal;
    bool  _sequencePerTrafficClassSupported;
    bool  _shouldSendStateUpdate;
    unsigned long long  _state;
}

@property unsigned int childID;
@property (retain) NEIKEv2ChildSAProposal *chosenProposal;
@property (retain) NEIKEv2ChildSAConfiguration *configuration;
@property (readonly) NSArray *configuredInitiatorTrafficSelectors;
@property (readonly) NSArray *configuredResponderTrafficSelectors;
@property struct OpaqueSecDHContext { }*dhContext;
@property (retain) NSMutableData *dhPublicKey;
@property unsigned long long dhPublicKeySize;
@property (retain) NSData *dhRemotePublicKey;
@property (retain) NSError *error;
@property NEIKEv2IKESA *ikeSA;
@property unsigned short incomingDatabaseReqID;
@property (retain) NSMutableData *incomingEncryptionKey;
@property (retain) NSMutableData *incomingIntegrityKey;
@property (retain) NSData *initiatorNonce;
@property (retain) NEIKEv2ChildSAProposal *initiatorRekeyNonPFSProposal;
@property (retain) NEIKEv2ChildSAProposal *initiatorRekeyProposal;
@property (retain) NSMutableData *initiatorSendEncryptionKey;
@property (retain) NSMutableData *initiatorSendIntegrityKey;
@property (retain) NSArray *initiatorTrafficSelectors;
@property bool isFirstChild;
@property bool isInitiator;
@property (readonly) bool isRekeying;
@property (retain) NSData *localNonce;
@property (retain) NSArray *localTrafficSelectors;
@property unsigned short outgoingDatabaseReqID;
@property (retain) NSMutableData *outgoingEncryptionKey;
@property (retain) NSMutableData *outgoingIntegrityKey;
@property (retain) NSData *remoteNonce;
@property (retain) NSArray *remoteTrafficSelectors;
@property (retain) NSData *responderNonce;
@property (retain) NEIKEv2ChildSAProposal *responderRekeyProposal;
@property (retain) NSMutableData *responderSendEncryptionKey;
@property (retain) NSMutableData *responderSendIntegrityKey;
@property (retain) NSArray *responderTrafficSelectors;
@property bool sequencePerTrafficClassSupported;
@property bool shouldSendStateUpdate;
@property unsigned long long state;

+ (unsigned short)nextDatabaseReqID;

- (void).cxx_destruct;
- (unsigned int)childID;
- (id)chosenProposal;
- (id)configuration;
- (id)configuredInitiatorTrafficSelectors;
- (id)configuredResponderTrafficSelectors;
- (void)dealloc;
- (id)description;
- (struct OpaqueSecDHContext { }*)dhContext;
- (unsigned char*)dhCurveKeyForDesc:(int)arg1;
- (struct ccec_full_ctx { struct ccec_cp {} *x1; unsigned char x2[8]; struct ccec_projective_point { unsigned long long x_3_1_1[1]; } x3[0]; }*)dhECPKeyForDesc:(int)arg1;
- (struct NSMutableData { Class x1; }*)dhPublicKey;
- (unsigned long long)dhPublicKeySize;
- (id)dhRemotePublicKey;
- (id)error;
- (bool)generateAllValues;
- (bool)generateLocalDHValues;
- (bool)generateLocalNonce;
- (bool)generateLocalValues;
- (id)ikeSA;
- (unsigned short)incomingDatabaseReqID;
- (struct NSMutableData { Class x1; }*)incomingEncryptionKey;
- (struct NSMutableData { Class x1; }*)incomingIntegrityKey;
- (id)initWithConfiguration:(id)arg1 childID:(unsigned int)arg2 isFirstChild:(bool)arg3 ikeSA:(id)arg4;
- (id)initiatorNonce;
- (id)initiatorRekeyNonPFSProposal;
- (id)initiatorRekeyProposal;
- (struct NSMutableData { Class x1; }*)initiatorSendEncryptionKey;
- (struct NSMutableData { Class x1; }*)initiatorSendIntegrityKey;
- (id)initiatorTrafficSelectors;
- (bool)isFirstChild;
- (bool)isInitiator;
- (bool)isRekeying;
- (id)localNonce;
- (id)localTrafficSelectors;
- (unsigned short)outgoingDatabaseReqID;
- (struct NSMutableData { Class x1; }*)outgoingEncryptionKey;
- (struct NSMutableData { Class x1; }*)outgoingIntegrityKey;
- (id)remoteNonce;
- (id)remoteTrafficSelectors;
- (void)reset;
- (void)resetIKESA:(id)arg1;
- (id)responderNonce;
- (id)responderRekeyProposal;
- (struct NSMutableData { Class x1; }*)responderSendEncryptionKey;
- (struct NSMutableData { Class x1; }*)responderSendIntegrityKey;
- (id)responderTrafficSelectors;
- (void)sentStateUpdate;
- (bool)sequencePerTrafficClassSupported;
- (void)setChildID:(unsigned int)arg1;
- (void)setChosenProposal:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDhContext:(struct OpaqueSecDHContext { }*)arg1;
- (void)setDhPublicKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setDhPublicKeySize:(unsigned long long)arg1;
- (void)setDhRemotePublicKey:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIkeSA:(id)arg1;
- (void)setIncomingDatabaseReqID:(unsigned short)arg1;
- (void)setIncomingEncryptionKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setIncomingIntegrityKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setInitiatorNonce:(id)arg1;
- (void)setInitiatorRekeyNonPFSProposal:(id)arg1;
- (void)setInitiatorRekeyProposal:(id)arg1;
- (void)setInitiatorSendEncryptionKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setInitiatorSendIntegrityKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setInitiatorTrafficSelectors:(id)arg1;
- (void)setIsFirstChild:(bool)arg1;
- (void)setIsInitiator:(bool)arg1;
- (void)setLocalNonce:(id)arg1;
- (void)setLocalTrafficSelectors:(id)arg1;
- (void)setOutgoingDatabaseReqID:(unsigned short)arg1;
- (void)setOutgoingEncryptionKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setOutgoingIntegrityKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setRemoteNonce:(id)arg1;
- (void)setRemoteTrafficSelectors:(id)arg1;
- (void)setResponderNonce:(id)arg1;
- (void)setResponderRekeyProposal:(id)arg1;
- (void)setResponderSendEncryptionKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setResponderSendIntegrityKey:(struct NSMutableData { Class x1; }*)arg1;
- (void)setResponderTrafficSelectors:(id)arg1;
- (void)setSequencePerTrafficClassSupported:(bool)arg1;
- (void)setShouldSendStateUpdate:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1 error:(id)arg2;
- (bool)shouldGenerateNewDHKeys;
- (bool)shouldSendStateUpdate;
- (unsigned long long)state;

@end
