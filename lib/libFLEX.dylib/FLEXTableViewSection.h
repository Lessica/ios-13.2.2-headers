/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXTableViewSection : NSObject {
    NSArray * _rows;
    long long  _section;
    NSString * _title;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSArray *rows;
@property (nonatomic, readonly) long long section;
@property (nonatomic, readonly) NSString *title;

+ (id)section:(long long)arg1 title:(id)arg2 rows:(id)arg3;

- (void).cxx_destruct;
- (long long)count;
- (id)newSectionWithRowsMatchingQuery:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)rows;
- (long long)section;
- (id)title;

@end
