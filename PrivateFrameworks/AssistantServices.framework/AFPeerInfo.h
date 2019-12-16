/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPeerInfo : NSObject <NSSecureCoding> {
    NSString * _idsFirstRoutableInternetDestination;
    NSString * _idsIdentifier;
    bool  _isDeviceOwnedByCurrentUser;
    NSString * _mediaSystemIdentifier;
    NSString * _rapportEffectiveIdentifier;
}

@property (nonatomic, copy) NSString *idsFirstRoutableInternetDestination;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (setter=setDeviceOwnedByCurrentUser:, nonatomic) bool isDeviceOwnedByCurrentUser;
@property (nonatomic, copy) NSString *mediaSystemIdentifier;
@property (nonatomic, copy) NSString *rapportEffectiveIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)idsFirstRoutableInternetDestination;
- (id)idsIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isDeviceOwnedByCurrentUser;
- (id)mediaSystemIdentifier;
- (id)rapportEffectiveIdentifier;
- (void)setDeviceOwnedByCurrentUser:(bool)arg1;
- (void)setIdsFirstRoutableInternetDestination:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMediaSystemIdentifier:(id)arg1;
- (void)setRapportEffectiveIdentifier:(id)arg1;

@end
