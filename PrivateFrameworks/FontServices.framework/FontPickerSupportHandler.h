/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
 */

@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)activateFontsForFontPickerClient:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)locallyActivatedFontFiles:(id /* block */)arg1;
- (void)ping:(id)arg1 reply:(id /* block */)arg2;
- (void)setListener:(id)arg1;

@end
