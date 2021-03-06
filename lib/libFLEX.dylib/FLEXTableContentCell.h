/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXTableContentCell : UITableViewCell {
    <FLEXTableContentCellDelegate> * _delegate;
    NSArray * _labels;
}

@property (nonatomic) <FLEXTableContentCellDelegate> *delegate;
@property (nonatomic, retain) NSArray *labels;

+ (id)cellWithTableView:(id)arg1 columnNumber:(long long)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (void)labelDidTap:(id)arg1;
- (id)labels;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setLabels:(id)arg1;

@end
