/* Generated by RuntimeBrowser.
 */

@protocol RMSPairingSession <NSObject>

@required

- (NSString *)advertisedAppName;
- (NSString *)advertisedDeviceModel;
- (NSString *)advertisedDeviceName;
- (void)beginPairing;
- (<RMSPairingSessionDelegate> *)delegate;
- (void)endPairing;
- (NSString *)passcode;
- (void)setAdvertisedAppName:(NSString *)arg1;
- (void)setAdvertisedDeviceModel:(NSString *)arg1;
- (void)setAdvertisedDeviceName:(NSString *)arg1;
- (void)setDelegate:(id <RMSPairingSessionDelegate>)arg1;
- (void)setPasscode:(NSString *)arg1;
- (void)unpairService:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: RMSService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
