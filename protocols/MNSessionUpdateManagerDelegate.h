/* Generated by RuntimeBrowser.
 */

@protocol MNSessionUpdateManagerDelegate <NSObject>

@required

- (MNActiveRouteInfo *)routeInfoForUpdateManager:(MNSessionUpdateManager *)arg1;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveETAError:(NSError *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveETAResponse:(GEOETATrafficUpdateResponse *)arg2 toRequest:(GEOETATrafficUpdateRequest *)arg3;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitError:(NSError *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitUpdateResponse:(GEOTransitRouteUpdateResponse *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didReceiveTransitUpdates:(NSSet *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 didUpdateETAForRouteInfo:(MNActiveRouteInfo *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendETARequest:(GEOETATrafficUpdateRequest *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendTransitUpdateRequestForRouteIDs:(NSSet *)arg2;
- (void)updateManager:(MNSessionUpdateManager *)arg1 willSendTransitUpdateRequests:(NSSet *)arg2;
- (MNLocation *)userLocationForUpdateManager:(MNSessionUpdateManager *)arg1;
- (bool)wantsETAUpdates;

@end
