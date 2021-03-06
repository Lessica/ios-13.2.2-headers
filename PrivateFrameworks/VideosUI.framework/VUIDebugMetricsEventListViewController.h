/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIDebugMetricsEventListViewController : UITableViewController {
    NSArray * _events;
}

@property (nonatomic, retain) NSArray *events;

- (void).cxx_destruct;
- (id)_imageFromPageContext:(id)arg1;
- (id)events;
- (void)finishValidation;
- (id)initWithEvents:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEvents:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)toggleValidationMode;
- (void)viewDidLoad;

@end
