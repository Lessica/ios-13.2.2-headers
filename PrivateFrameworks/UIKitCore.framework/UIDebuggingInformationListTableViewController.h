/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingInformationListTableViewController : UITableViewController <UIDebuggingInformationViewController> {
    NSMutableArray * topLevelViewControllerNames;
    NSMutableArray * topLevelViewControllers;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)addTopLevelViewController:(id)arg1 forName:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toggleOverlayFullscreen;
- (void)toggleOverlayVisibility;
- (id)topLevelViewControllerForName:(id)arg1;
- (void)viewDidLoad;

@end