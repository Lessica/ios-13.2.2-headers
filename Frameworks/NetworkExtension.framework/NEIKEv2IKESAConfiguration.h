/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2IKESAConfiguration : NSObject <NSCopying> {
    bool  _allowRedirect;
    bool  _allowTCPEncapsulation;
    NSArray * _customIKESAInitPayloads;
    NSArray * _customIKESAInitVendorPayloads;
    bool  _disableSwitchToNATTPorts;
    NSSet * _extraSupportedSignatureHashes;
    bool  _forceUDPEncapsulation;
    NWEndpoint * _localEndpoint;
    unsigned int  _nonceSize;
    NSString * _outgoingInterfaceName;
    NSArray * _proposals;
    bool  _randomizeLocalPort;
    NWAddressEndpoint * _redirectedFromServer;
    NWEndpoint * _remoteEndpoint;
    bool  _serverMode;
    unsigned short  _tcpEncapsulationPort;
    bool  _useTLSForTCPEncapsulation;
}

@property bool allowRedirect;
@property bool allowTCPEncapsulation;
@property (retain) NSArray *customIKESAInitPayloads;
@property (retain) NSArray *customIKESAInitVendorPayloads;
@property bool disableSwitchToNATTPorts;
@property (retain) NSSet *extraSupportedSignatureHashes;
@property bool forceUDPEncapsulation;
@property (retain) NWEndpoint *localEndpoint;
@property unsigned int nonceSize;
@property (retain) NSString *outgoingInterfaceName;
@property (nonatomic, copy) NSArray *proposals;
@property bool randomizeLocalPort;
@property (retain) NWAddressEndpoint *redirectedFromServer;
@property (retain) NWEndpoint *remoteEndpoint;
@property bool serverMode;
@property unsigned short tcpEncapsulationPort;
@property bool useTLSForTCPEncapsulation;

- (void).cxx_destruct;
- (bool)allowRedirect;
- (bool)allowTCPEncapsulation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customIKESAInitPayloads;
- (id)customIKESAInitVendorPayloads;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)disableSwitchToNATTPorts;
- (id)extraSupportedSignatureHashes;
- (bool)forceUDPEncapsulation;
- (id)init;
- (id)localEndpoint;
- (unsigned int)nonceSize;
- (id)outgoingInterfaceName;
- (id)proposals;
- (bool)randomizeLocalPort;
- (id)redirectedFromServer;
- (id)remoteEndpoint;
- (bool)serverMode;
- (void)setAllowRedirect:(bool)arg1;
- (void)setAllowTCPEncapsulation:(bool)arg1;
- (void)setCustomIKESAInitPayloads:(id)arg1;
- (void)setCustomIKESAInitVendorPayloads:(id)arg1;
- (void)setDisableSwitchToNATTPorts:(bool)arg1;
- (void)setExtraSupportedSignatureHashes:(id)arg1;
- (void)setForceUDPEncapsulation:(bool)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setNonceSize:(unsigned int)arg1;
- (void)setOutgoingInterfaceName:(id)arg1;
- (void)setProposals:(id)arg1;
- (void)setRandomizeLocalPort:(bool)arg1;
- (void)setRedirectedFromServer:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1;
- (void)setServerMode:(bool)arg1;
- (void)setTcpEncapsulationPort:(unsigned short)arg1;
- (void)setUseTLSForTCPEncapsulation:(bool)arg1;
- (unsigned short)tcpEncapsulationPort;
- (bool)useTLSForTCPEncapsulation;

@end
