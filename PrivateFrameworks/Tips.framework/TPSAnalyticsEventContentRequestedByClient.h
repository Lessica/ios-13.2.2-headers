/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventContentRequestedByClient : TPSAnalyticsEvent {
    NSString * _bundleID;
    NSString * _context;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *context;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (id)bundleID;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithBundleID:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setContext:(id)arg1;

@end
