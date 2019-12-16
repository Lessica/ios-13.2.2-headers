/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXLibrariesTableViewController : FLEXTableViewController <FLEXGlobalsEntry> {
    NSArray * _filteredImageNames;
    Class  _foundClass;
    NSArray * _imageNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *filteredImageNames;
@property (nonatomic, retain) Class foundClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *imageNames;
@property (readonly) Class superclass;

+ (id)globalsEntryTitle:(unsigned long long)arg1;
+ (id)globalsEntryViewController:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)filteredImageNames;
- (Class)foundClass;
- (id)imageNames;
- (id)initWithStyle:(long long)arg1;
- (void)loadImageNames;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setFilteredImageNames:(id)arg1;
- (void)setFoundClass:(Class)arg1;
- (void)setImageNames:(id)arg1;
- (id)shortNameForImageName:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSearchResults:(id)arg1;
- (void)viewDidLoad;

@end