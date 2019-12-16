/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WiFi3BarsNetwork : NSObject <WiFiCandidateNetwork> {
    NSString * _SSID;
    NSSet * _attributes;
    <TBNetwork> * _network;
    <TBScore> * _popularityScore;
    <TBScore> * _qualityScore;
    NSString * _uniqueIdentifier;
    bool  _unwantedNetworkName;
    bool  matched;
    NSString * password;
}

@property (nonatomic, copy) NSString *SSID;
@property (nonatomic, readonly) NSSet *accessPoints;
@property (nonatomic, readonly) NSSet *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool matched;
@property (nonatomic, retain) <TBNetwork> *network;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly) <TBScore> *popularityScore;
@property (nonatomic, readonly) <TBScore> *qualityScore;
@property (nonatomic, readonly) long long source;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic) bool unwantedNetworkName;

- (void).cxx_destruct;
- (id)SSID;
- (id)accessPoints;
- (id)attributes;
- (bool)containsAccessPointMatchingBSSIDs:(id)arg1;
- (id)description;
- (id)initWithNetwork:(id)arg1;
- (bool)matched;
- (id)network;
- (id)password;
- (id)popularityScore;
- (id)qualityScore;
- (void)setMatched:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setSSID:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUnwantedNetworkName:(bool)arg1;
- (long long)source;
- (id)uniqueIdentifier;
- (bool)unwantedNetworkName;

@end
