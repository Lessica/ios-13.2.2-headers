/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STRootViewModel : NSObject {
    bool  _canStopScreenTimeWithoutPasscode;
    NSArray * _children;
    NSArray * _devices;
    NSSet * _installedBundleIDs;
    NSDictionary * _installedBundleIDsByCategoryIdentifier;
    bool  _isCloudSyncEnabled;
    STUIUser * _me;
}

@property (nonatomic, readonly) bool canSetUpFamily;
@property (nonatomic, readonly) bool canSignIn;
@property (nonatomic, readonly) bool canStartScreenTime;
@property (nonatomic, readonly) bool canStopScreenTime;
@property (nonatomic) bool canStopScreenTimeWithoutPasscode;
@property (nonatomic, readonly) bool canStopSharingScreenTime;
@property (nonatomic, readonly) bool canToggleCloudSyncData;
@property (nonatomic, readonly) bool canToggleWebsiteData;
@property (nonatomic, readonly) bool canViewAskForTimeRequests;
@property (nonatomic, copy) NSArray *children;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, readonly) bool forceParentalControls;
@property (nonatomic, copy) NSSet *installedBundleIDs;
@property (nonatomic, copy) NSDictionary *installedBundleIDsByCategoryIdentifier;
@property (nonatomic) bool isCloudSyncEnabled;
@property (nonatomic, readonly) bool isRemotelyManagedUserWithPasscode;
@property (nonatomic, readonly) bool isSharingUsageData;
@property (nonatomic, copy) STUIUser *me;
@property (getter=isScreenTimeEnabled, nonatomic, readonly) bool screenTimeEnabled;
@property (getter=isWebUsageEnabled, nonatomic, readonly) bool webUsageEnabled;

+ (id)keyPathsForValuesAffectingCanSetUpFamily;
+ (id)keyPathsForValuesAffectingCanSignIn;
+ (id)keyPathsForValuesAffectingCanStartScreenTime;
+ (id)keyPathsForValuesAffectingCanStopScreenTime;
+ (id)keyPathsForValuesAffectingCanStopSharingScreenTime;
+ (id)keyPathsForValuesAffectingCanToggleCloudSyncData;
+ (id)keyPathsForValuesAffectingCanToggleWebsiteData;
+ (id)keyPathsForValuesAffectingCanViewAskForTimeRequests;
+ (id)keyPathsForValuesAffectingForceParentalControls;
+ (id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;
+ (id)keyPathsForValuesAffectingIsSharingUsageData;
+ (id)keyPathsForValuesAffectingScreenTimeEnabled;
+ (id)keyPathsForValuesAffectingWebUsageEnabled;

- (void).cxx_destruct;
- (bool)canSetUpFamily;
- (bool)canSignIn;
- (bool)canStartScreenTime;
- (bool)canStopScreenTime;
- (bool)canStopScreenTimeWithoutPasscode;
- (bool)canStopSharingScreenTime;
- (bool)canToggleCloudSyncData;
- (bool)canToggleWebsiteData;
- (bool)canViewAskForTimeRequests;
- (id)children;
- (id)devices;
- (bool)forceParentalControls;
- (id)init;
- (id)installedBundleIDs;
- (id)installedBundleIDsByCategoryIdentifier;
- (bool)isCloudSyncEnabled;
- (bool)isRemotelyManagedUserWithPasscode;
- (bool)isScreenTimeEnabled;
- (bool)isSharingUsageData;
- (bool)isWebUsageEnabled;
- (id)me;
- (void)setCanStopScreenTimeWithoutPasscode:(bool)arg1;
- (void)setChildren:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setInstalledBundleIDs:(id)arg1;
- (void)setInstalledBundleIDsByCategoryIdentifier:(id)arg1;
- (void)setIsCloudSyncEnabled:(bool)arg1;
- (void)setMe:(id)arg1;

@end
