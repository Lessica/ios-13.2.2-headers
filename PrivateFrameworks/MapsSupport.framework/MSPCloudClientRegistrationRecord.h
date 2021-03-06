/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudClientRegistrationRecord : NSObject {
    NSUUID * _clientIdentifier;
    unsigned long long  _desiredEpoch;
    unsigned long long  _earliestCompatibleEpoch;
    bool  _isChanged;
    NSDate * _lastRegistrationDate;
}

@property (nonatomic, retain) NSUUID *clientIdentifier;
@property (nonatomic) unsigned long long desiredEpoch;
@property (nonatomic) unsigned long long earliestCompatibleEpoch;
@property (nonatomic, readonly) bool isChanged;
@property (nonatomic, retain) NSDate *lastRegistrationDate;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (unsigned long long)desiredEpoch;
- (unsigned long long)earliestCompatibleEpoch;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isChanged;
- (id)lastRegistrationDate;
- (id)recordRepresentation;
- (void)setClientIdentifier:(id)arg1;
- (void)setDesiredEpoch:(unsigned long long)arg1;
- (void)setEarliestCompatibleEpoch:(unsigned long long)arg1;
- (void)setLastRegistrationDate:(id)arg1;

@end
