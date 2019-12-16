/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDebugMetricsEventViewController : UITableViewController {
    VUIDebugMetricsEvent * _event;
}

@property (nonatomic, retain) VUIDebugMetricsEvent *event;

- (void).cxx_destruct;
- (id)event;
- (id)initWithEvent:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)performValidation;
- (void)setEvent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
