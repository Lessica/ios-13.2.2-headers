/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrinterUtilityTableViewController : UITableViewController {
    long long  _identifyPrinterSection;
    long long  _mainPrinterCellSection;
    PKPrinter * _printer;
    long long  _printerNameAndLocationSection;
    long long  _removeKeychainItemSection;
    bool  _showSupplyDataUnderPrinterName;
    NSArray * _supplyData;
}

@property (nonatomic, retain) NSArray *supplyData;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (void)didReceiveMemoryWarning;
- (id)initWithPrinter:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setShowContactingPrinter:(bool)arg1;
- (void)setSupplyData:(id)arg1;
- (id)supplyData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
