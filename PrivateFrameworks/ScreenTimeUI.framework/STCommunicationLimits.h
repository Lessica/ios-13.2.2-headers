/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STCommunicationLimits : NSObject <NSCopying> {
    long long  _contactManagementState;
    bool  _contactsEditable;
    long long  _downtimeCommunicationLimit;
    long long  _screenTimeCommunicationLimit;
}

@property long long contactManagementState;
@property bool contactsEditable;
@property long long downtimeCommunicationLimit;
@property long long screenTimeCommunicationLimit;

- (long long)contactManagementState;
- (bool)contactsEditable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)downtimeCommunicationLimit;
- (long long)screenTimeCommunicationLimit;
- (void)setContactManagementState:(long long)arg1;
- (void)setContactsEditable:(bool)arg1;
- (void)setDowntimeCommunicationLimit:(long long)arg1;
- (void)setScreenTimeCommunicationLimit:(long long)arg1;

@end