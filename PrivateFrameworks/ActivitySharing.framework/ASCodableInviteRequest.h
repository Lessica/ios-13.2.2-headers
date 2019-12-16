/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASCodableInviteRequest : PBRequest <NSCopying> {
    ASCodableActivityDataPreview * _activityDataPreview;
    NSString * _handshakeToken;
    struct { 
        unsigned int inviterVersion : 1; 
    }  _has;
    NSString * _inviterBuildNumber;
    NSString * _inviterCallerID;
    NSString * _inviterCloudKitAddress;
    unsigned int  _inviterVersion;
}

@property (nonatomic, retain) ASCodableActivityDataPreview *activityDataPreview;
@property (nonatomic, retain) NSString *handshakeToken;
@property (nonatomic, readonly) bool hasActivityDataPreview;
@property (nonatomic, readonly) bool hasHandshakeToken;
@property (nonatomic, readonly) bool hasInviterBuildNumber;
@property (nonatomic, readonly) bool hasInviterCallerID;
@property (nonatomic, readonly) bool hasInviterCloudKitAddress;
@property (nonatomic) bool hasInviterVersion;
@property (nonatomic, retain) NSString *inviterBuildNumber;
@property (nonatomic, retain) NSString *inviterCallerID;
@property (nonatomic, retain) NSString *inviterCloudKitAddress;
@property (nonatomic) unsigned int inviterVersion;

- (void).cxx_destruct;
- (id)activityDataPreview;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handshakeToken;
- (bool)hasActivityDataPreview;
- (bool)hasHandshakeToken;
- (bool)hasInviterBuildNumber;
- (bool)hasInviterCallerID;
- (bool)hasInviterCloudKitAddress;
- (bool)hasInviterVersion;
- (unsigned long long)hash;
- (id)inviterBuildNumber;
- (id)inviterCallerID;
- (id)inviterCloudKitAddress;
- (unsigned int)inviterVersion;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityDataPreview:(id)arg1;
- (void)setHandshakeToken:(id)arg1;
- (void)setHasInviterVersion:(bool)arg1;
- (void)setInviterBuildNumber:(id)arg1;
- (void)setInviterCallerID:(id)arg1;
- (void)setInviterCloudKitAddress:(id)arg1;
- (void)setInviterVersion:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
