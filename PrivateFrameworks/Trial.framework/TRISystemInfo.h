/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRISystemInfo : NSObject <NSSecureCoding> {
    bool  _isBetaUser;
}

@property bool isBetaUser;

+ (bool)_sysIsBetaUser;
+ (bool)_sysIsProfileInstalledWithIdentifier:(id)arg1;
+ (id)createSystemInfo;
+ (id)info;
+ (id)loadSystemInfo;
+ (bool)supportsSecureCoding;
+ (id)systemInfoFromFile:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initFromSystem;
- (id)initWithCoder:(id)arg1;
- (bool)isBetaUser;
- (bool)save;
- (bool)saveToFile:(id)arg1;
- (void)setIsBetaUser:(bool)arg1;

@end
