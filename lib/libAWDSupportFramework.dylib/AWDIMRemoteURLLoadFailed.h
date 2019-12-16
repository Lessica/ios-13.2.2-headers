/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIMRemoteURLLoadFailed : PBCodable <NSCopying> {
    unsigned long long  _connectEndToRequestStartMillis;
    unsigned long long  _connectStartToConnectEndMillis;
    unsigned long long  _connectStartToSecureConnectionStartMillis;
    unsigned long long  _domainLookupEndToConnectStartMillis;
    unsigned long long  _domainLookupStartToDomainLookupEndMillis;
    long long  _errorCode;
    unsigned long long  _fetchStartToDomainLookupStartMillis;
    struct { 
        unsigned int connectEndToRequestStartMillis : 1; 
        unsigned int connectStartToConnectEndMillis : 1; 
        unsigned int connectStartToSecureConnectionStartMillis : 1; 
        unsigned int domainLookupEndToConnectStartMillis : 1; 
        unsigned int domainLookupStartToDomainLookupEndMillis : 1; 
        unsigned int errorCode : 1; 
        unsigned int fetchStartToDomainLookupStartMillis : 1; 
        unsigned int navigationStartToRedirectStartMillis : 1; 
        unsigned int redirectEndToFetchStartMillis : 1; 
        unsigned int redirectStartToRedirectEndMillis : 1; 
        unsigned int requestStartToResponseStartMillis : 1; 
        unsigned int responseStartToResponseEndMillis : 1; 
        unsigned int secureConnectionStartToConnectEndMillis : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _navigationStartToRedirectStartMillis;
    unsigned long long  _redirectEndToFetchStartMillis;
    unsigned long long  _redirectStartToRedirectEndMillis;
    unsigned long long  _requestStartToResponseStartMillis;
    unsigned long long  _responseStartToResponseEndMillis;
    unsigned long long  _secureConnectionStartToConnectEndMillis;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long connectEndToRequestStartMillis;
@property (nonatomic) unsigned long long connectStartToConnectEndMillis;
@property (nonatomic) unsigned long long connectStartToSecureConnectionStartMillis;
@property (nonatomic) unsigned long long domainLookupEndToConnectStartMillis;
@property (nonatomic) unsigned long long domainLookupStartToDomainLookupEndMillis;
@property (nonatomic) long long errorCode;
@property (nonatomic) unsigned long long fetchStartToDomainLookupStartMillis;
@property (nonatomic) bool hasConnectEndToRequestStartMillis;
@property (nonatomic) bool hasConnectStartToConnectEndMillis;
@property (nonatomic) bool hasConnectStartToSecureConnectionStartMillis;
@property (nonatomic) bool hasDomainLookupEndToConnectStartMillis;
@property (nonatomic) bool hasDomainLookupStartToDomainLookupEndMillis;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasFetchStartToDomainLookupStartMillis;
@property (nonatomic) bool hasNavigationStartToRedirectStartMillis;
@property (nonatomic) bool hasRedirectEndToFetchStartMillis;
@property (nonatomic) bool hasRedirectStartToRedirectEndMillis;
@property (nonatomic) bool hasRequestStartToResponseStartMillis;
@property (nonatomic) bool hasResponseStartToResponseEndMillis;
@property (nonatomic) bool hasSecureConnectionStartToConnectEndMillis;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long navigationStartToRedirectStartMillis;
@property (nonatomic) unsigned long long redirectEndToFetchStartMillis;
@property (nonatomic) unsigned long long redirectStartToRedirectEndMillis;
@property (nonatomic) unsigned long long requestStartToResponseStartMillis;
@property (nonatomic) unsigned long long responseStartToResponseEndMillis;
@property (nonatomic) unsigned long long secureConnectionStartToConnectEndMillis;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)connectEndToRequestStartMillis;
- (unsigned long long)connectStartToConnectEndMillis;
- (unsigned long long)connectStartToSecureConnectionStartMillis;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)domainLookupEndToConnectStartMillis;
- (unsigned long long)domainLookupStartToDomainLookupEndMillis;
- (long long)errorCode;
- (unsigned long long)fetchStartToDomainLookupStartMillis;
- (bool)hasConnectEndToRequestStartMillis;
- (bool)hasConnectStartToConnectEndMillis;
- (bool)hasConnectStartToSecureConnectionStartMillis;
- (bool)hasDomainLookupEndToConnectStartMillis;
- (bool)hasDomainLookupStartToDomainLookupEndMillis;
- (bool)hasErrorCode;
- (bool)hasFetchStartToDomainLookupStartMillis;
- (bool)hasNavigationStartToRedirectStartMillis;
- (bool)hasRedirectEndToFetchStartMillis;
- (bool)hasRedirectStartToRedirectEndMillis;
- (bool)hasRequestStartToResponseStartMillis;
- (bool)hasResponseStartToResponseEndMillis;
- (bool)hasSecureConnectionStartToConnectEndMillis;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)navigationStartToRedirectStartMillis;
- (bool)readFrom:(id)arg1;
- (unsigned long long)redirectEndToFetchStartMillis;
- (unsigned long long)redirectStartToRedirectEndMillis;
- (unsigned long long)requestStartToResponseStartMillis;
- (unsigned long long)responseStartToResponseEndMillis;
- (unsigned long long)secureConnectionStartToConnectEndMillis;
- (void)setConnectEndToRequestStartMillis:(unsigned long long)arg1;
- (void)setConnectStartToConnectEndMillis:(unsigned long long)arg1;
- (void)setConnectStartToSecureConnectionStartMillis:(unsigned long long)arg1;
- (void)setDomainLookupEndToConnectStartMillis:(unsigned long long)arg1;
- (void)setDomainLookupStartToDomainLookupEndMillis:(unsigned long long)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setFetchStartToDomainLookupStartMillis:(unsigned long long)arg1;
- (void)setHasConnectEndToRequestStartMillis:(bool)arg1;
- (void)setHasConnectStartToConnectEndMillis:(bool)arg1;
- (void)setHasConnectStartToSecureConnectionStartMillis:(bool)arg1;
- (void)setHasDomainLookupEndToConnectStartMillis:(bool)arg1;
- (void)setHasDomainLookupStartToDomainLookupEndMillis:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasFetchStartToDomainLookupStartMillis:(bool)arg1;
- (void)setHasNavigationStartToRedirectStartMillis:(bool)arg1;
- (void)setHasRedirectEndToFetchStartMillis:(bool)arg1;
- (void)setHasRedirectStartToRedirectEndMillis:(bool)arg1;
- (void)setHasRequestStartToResponseStartMillis:(bool)arg1;
- (void)setHasResponseStartToResponseEndMillis:(bool)arg1;
- (void)setHasSecureConnectionStartToConnectEndMillis:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNavigationStartToRedirectStartMillis:(unsigned long long)arg1;
- (void)setRedirectEndToFetchStartMillis:(unsigned long long)arg1;
- (void)setRedirectStartToRedirectEndMillis:(unsigned long long)arg1;
- (void)setRequestStartToResponseStartMillis:(unsigned long long)arg1;
- (void)setResponseStartToResponseEndMillis:(unsigned long long)arg1;
- (void)setSecureConnectionStartToConnectEndMillis:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
