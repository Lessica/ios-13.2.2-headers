/* Generated by RuntimeBrowser.
 */

@protocol TSEntitlementJSHandlerDelegate <NSObject>

@required

- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)didPurchasePlanSuccessfullyWithEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 alternateSDMP:(NSString *)arg5;
- (void)didTransferPlanSuccessfullyWithEid:(NSString *)arg1 imei:(NSString *)arg2 meid:(NSString *)arg3 iccid:(NSString *)arg4 alternateSDMP:(NSString *)arg5 state:(NSString *)arg6;

@end
