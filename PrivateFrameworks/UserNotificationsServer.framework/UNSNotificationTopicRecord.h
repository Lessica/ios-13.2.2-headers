/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationTopicRecord : NSObject {
    NSString * _displayName;
    NSString * _displayNameLocalizationKey;
    NSString * _identifier;
    bool  _modalAlertStyle;
    unsigned long long  _priority;
    NSString * _sortIdentifier;
    bool  _supportsAlerts;
    bool  _supportsBadges;
    bool  _supportsCarPlay;
    bool  _supportsCriticalAlerts;
    bool  _supportsLockScreen;
    bool  _supportsNotificationCenter;
    bool  _supportsSounds;
    bool  _supportsSpoken;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *displayNameLocalizationKey;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool modalAlertStyle;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, copy) NSString *sortIdentifier;
@property (nonatomic) bool supportsAlerts;
@property (nonatomic) bool supportsBadges;
@property (nonatomic) bool supportsCarPlay;
@property (nonatomic) bool supportsCriticalAlerts;
@property (nonatomic) bool supportsLockScreen;
@property (nonatomic) bool supportsNotificationCenter;
@property (nonatomic) bool supportsSounds;
@property (nonatomic) bool supportsSpoken;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)displayNameLocalizationKey;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)modalAlertStyle;
- (unsigned long long)priority;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayNameLocalizationKey:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModalAlertStyle:(bool)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setSortIdentifier:(id)arg1;
- (void)setSupportsAlerts:(bool)arg1;
- (void)setSupportsBadges:(bool)arg1;
- (void)setSupportsCarPlay:(bool)arg1;
- (void)setSupportsCriticalAlerts:(bool)arg1;
- (void)setSupportsLockScreen:(bool)arg1;
- (void)setSupportsNotificationCenter:(bool)arg1;
- (void)setSupportsSounds:(bool)arg1;
- (void)setSupportsSpoken:(bool)arg1;
- (id)sortIdentifier;
- (bool)supportsAlerts;
- (bool)supportsBadges;
- (bool)supportsCarPlay;
- (bool)supportsCriticalAlerts;
- (bool)supportsLockScreen;
- (bool)supportsNotificationCenter;
- (bool)supportsSounds;
- (bool)supportsSpoken;

@end
