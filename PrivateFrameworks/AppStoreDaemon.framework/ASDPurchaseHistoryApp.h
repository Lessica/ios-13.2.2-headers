/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding> {
    NSString * _bundleID;
    NSString * _circularIconURLString;
    long long  _contentRatingFlags;
    NSDate * _datePurchased;
    NSString * _developerName;
    bool  _familyShared;
    bool  _firstParty;
    long long  _genreID;
    NSString * _genreName;
    bool  _hasMessagesExtension;
    bool  _hasP3;
    bool  _hidden;
    bool  _hiddenFromSpringboard;
    NSString * _iconURLString;
    bool  _is32BitOnly;
    bool  _isPreorder;
    unsigned long long  _lockerItemID;
    NSString * _longTitle;
    NSString * _ovalIconURLString;
    NSURL * _preflightPackageURL;
    NSURL * _productURL;
    unsigned int  _purchaseToken;
    long long  _purchaserDSID;
    NSString * _redownloadParams;
    NSArray * _requiredCapabilities;
    long long  _storeItemID;
    bool  _supportsIPad;
    bool  _supportsIPhone;
    bool  _supportsLayeredImage;
    NSString * _title;
    bool  _watchAppDeliveredIniOSApp;
    bool  _watchAppRunsIndependently;
    bool  _watchOnly;
}

@property (copy) NSString *bundleID;
@property (copy) NSString *circularIconURLString;
@property long long contentRatingFlags;
@property (copy) NSDate *datePurchased;
@property (copy) NSString *developerName;
@property (getter=isFamilyShared) bool familyShared;
@property (getter=isFirstParty) bool firstParty;
@property long long genreID;
@property (copy) NSString *genreName;
@property bool hasMessagesExtension;
@property bool hasP3;
@property (getter=isHidden) bool hidden;
@property (getter=isHiddenFromSpringboard) bool hiddenFromSpringboard;
@property (copy) NSString *iconURLString;
@property bool is32BitOnly;
@property bool isPreorder;
@property unsigned long long lockerItemID;
@property (copy) NSString *longTitle;
@property (copy) NSString *ovalIconURLString;
@property (copy) NSURL *preflightPackageURL;
@property (copy) NSURL *productURL;
@property unsigned int purchaseToken;
@property long long purchaserDSID;
@property (copy) NSString *redownloadParams;
@property (copy) NSArray *requiredCapabilities;
@property long long storeItemID;
@property bool supportsIPad;
@property bool supportsIPhone;
@property bool supportsLayeredImage;
@property (copy) NSString *title;
@property bool watchAppDeliveredIniOSApp;
@property bool watchAppRunsIndependently;
@property bool watchOnly;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)_bitfieldForBooleanProperties;
- (void)_setBooleanPropertiesForBitfield:(int)arg1;
- (id)bundleID;
- (id)circularIconURLString;
- (long long)contentRatingFlags;
- (id)datePurchased;
- (id)developerName;
- (void)encodeWithCoder:(id)arg1;
- (long long)genreID;
- (id)genreName;
- (bool)hasMessagesExtension;
- (bool)hasP3;
- (id)iconURLString;
- (id)initWithCoder:(id)arg1;
- (bool)is32BitOnly;
- (bool)isEqual:(id)arg1;
- (bool)isFamilyShared;
- (bool)isFirstParty;
- (bool)isHidden;
- (bool)isHiddenFromSpringboard;
- (bool)isPreorder;
- (unsigned long long)lockerItemID;
- (id)longTitle;
- (id)ovalIconURLString;
- (id)preflightPackageURL;
- (id)productURL;
- (unsigned int)purchaseToken;
- (long long)purchaserDSID;
- (id)redownloadParams;
- (id)requiredCapabilities;
- (void)setBundleID:(id)arg1;
- (void)setCircularIconURLString:(id)arg1;
- (void)setContentRatingFlags:(long long)arg1;
- (void)setDatePurchased:(id)arg1;
- (void)setDeveloperName:(id)arg1;
- (void)setFamilyShared:(bool)arg1;
- (void)setFirstParty:(bool)arg1;
- (void)setGenreID:(long long)arg1;
- (void)setGenreName:(id)arg1;
- (void)setHasMessagesExtension:(bool)arg1;
- (void)setHasP3:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHiddenFromSpringboard:(bool)arg1;
- (void)setIconURLString:(id)arg1;
- (void)setIs32BitOnly:(bool)arg1;
- (void)setIsPreorder:(bool)arg1;
- (void)setLockerItemID:(unsigned long long)arg1;
- (void)setLongTitle:(id)arg1;
- (void)setOvalIconURLString:(id)arg1;
- (void)setPreflightPackageURL:(id)arg1;
- (void)setProductURL:(id)arg1;
- (void)setPurchaseToken:(unsigned int)arg1;
- (void)setPurchaserDSID:(long long)arg1;
- (void)setRedownloadParams:(id)arg1;
- (void)setRequiredCapabilities:(id)arg1;
- (void)setStoreItemID:(long long)arg1;
- (void)setSupportsIPad:(bool)arg1;
- (void)setSupportsIPhone:(bool)arg1;
- (void)setSupportsLayeredImage:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setWatchAppDeliveredIniOSApp:(bool)arg1;
- (void)setWatchAppRunsIndependently:(bool)arg1;
- (void)setWatchOnly:(bool)arg1;
- (long long)storeItemID;
- (bool)supportsIPad;
- (bool)supportsIPhone;
- (bool)supportsLayeredImage;
- (id)title;
- (bool)watchAppDeliveredIniOSApp;
- (bool)watchAppRunsIndependently;
- (bool)watchOnly;

@end
