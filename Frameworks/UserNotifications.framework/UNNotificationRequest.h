/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding> {
    UNNotificationContent * _content;
    unsigned long long  _destinations;
    NSString * _identifier;
    UNNotificationTrigger * _trigger;
}

@property (nonatomic, readonly, copy) UNNotificationContent *content;
@property (nonatomic) unsigned long long destinations;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) UNNotificationTrigger *trigger;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;
+ (id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)destinations;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDestinations:(unsigned long long)arg1;
- (id)trigger;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (id)_hkmc_notificationRequestWithCategory:(id)arg1 body:(id)arg2 title:(id)arg3 expirationDate:(id)arg4;
+ (id)_hkmc_notificationRequestWithContent:(id)arg1;
+ (id)_hkmc_requestForCategoryIdentifier:(id)arg1 startDate:(id)arg2;
+ (id)hkmc_requestForCategoryIdentifier:(id)arg1;

@end
