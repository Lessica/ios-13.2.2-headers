/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXManager : NSObject <FLEXExplorerViewControllerDelegate, FLEXWindowEventDelegate> {
    NSMutableDictionary * _customContentTypeViewers;
    NSString * _defaultSqliteDatabasePassword;
    FLEXExplorerViewController * _explorerViewController;
    FLEXWindow * _explorerWindow;
    NSArray * _networkRequestHostBlacklist;
    NSMutableArray * _userGlobalEntries;
}

@property (nonatomic, readonly) NSMutableDictionary *customContentTypeViewers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultSqliteDatabasePassword;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FLEXExplorerViewController *explorerViewController;
@property (nonatomic, retain) FLEXWindow *explorerWindow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHidden;
@property (getter=isNetworkDebuggingEnabled, nonatomic) bool networkDebuggingEnabled;
@property (nonatomic, copy) NSArray *networkRequestHostBlacklist;
@property (nonatomic) unsigned long long networkResponseCacheByteLimit;
@property (nonatomic) bool simulatorShortcutsEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *userGlobalEntries;

+ (void)load;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)canBecomeKeyWindow;
- (id)customContentTypeViewers;
- (id)defaultSqliteDatabasePassword;
- (id)explorerViewController;
- (void)explorerViewControllerDidFinish:(id)arg1;
- (id)explorerWindow;
- (id)firstScrollView;
- (void)hideExplorer;
- (id)hostBlacklist;
- (id)init;
- (bool)isHidden;
- (bool)isNetworkDebuggingEnabled;
- (id)networkRequestHostBlacklist;
- (unsigned long long)networkResponseCacheByteLimit;
- (void)registerDefaultSimulatorShortcuts;
- (void)registerGlobalEntryWithName:(id)arg1 objectFutureBlock:(id /* block */)arg2;
- (void)registerGlobalEntryWithName:(id)arg1 viewControllerFutureBlock:(id /* block */)arg2;
- (void)registerSimulatorShortcutWithKey:(id)arg1 modifiers:(long long)arg2 action:(id /* block */)arg3 description:(id)arg4;
- (void)setCustomViewerForContentType:(id)arg1 viewControllerFutureBlock:(id /* block */)arg2;
- (void)setDefaultSqliteDatabasePassword:(id)arg1;
- (void)setExplorerViewController:(id)arg1;
- (void)setExplorerWindow:(id)arg1;
- (void)setNetworkDebuggingEnabled:(bool)arg1;
- (void)setNetworkRequestHostBlacklist:(id)arg1;
- (void)setNetworkResponseCacheByteLimit:(unsigned long long)arg1;
- (void)setSimulatorShortcutsEnabled:(bool)arg1;
- (bool)shouldHandleTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)showExplorer;
- (void)showExplorerFromScene:(id)arg1;
- (void)showExplorerIfNeeded;
- (bool)simulatorShortcutsEnabled;
- (void)toggleExplorer;
- (void)toggleTopViewControllerOfClass:(Class)arg1;
- (id)topViewController;
- (void)tryGoBack;
- (void)tryScrollDown;
- (void)tryScrollUp;
- (id)userGlobalEntries;

@end
