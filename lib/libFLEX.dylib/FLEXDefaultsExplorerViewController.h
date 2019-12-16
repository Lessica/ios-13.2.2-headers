/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXDefaultsExplorerViewController : FLEXObjectExplorerViewController {
    NSArray * _keyWhitelist;
    NSArray * _keys;
    bool  _onlyShowKeysForAppPrefs;
}

@property (nonatomic, readonly) NSUserDefaults *defaults;
@property (nonatomic, retain) NSArray *keyWhitelist;
@property (nonatomic, retain) NSArray *keys;
@property (nonatomic) bool onlyShowKeysForAppPrefs;

- (void).cxx_destruct;
- (id)customSectionDrillInViewControllerForRowCookie:(id)arg1;
- (id)customSectionRowCookies;
- (id)customSectionSubtitleForRowCookie:(id)arg1;
- (id)customSectionTitle;
- (id)customSectionTitleForRowCookie:(id)arg1;
- (id)defaults;
- (id)keyWhitelist;
- (id)keys;
- (bool)onlyShowKeysForAppPrefs;
- (void)setKeyWhitelist:(id)arg1;
- (void)setKeys:(id)arg1;
- (void)setOnlyShowKeysForAppPrefs:(bool)arg1;
- (void)viewDidLoad;

@end