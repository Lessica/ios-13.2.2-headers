/* Generated by RuntimeBrowser
   Image: /Library/MobileSubstrate/DynamicLibraries/libFLEX.dylib
 */

@interface FLEXNetworkTransactionTableViewCell : UITableViewCell {
    UILabel * _nameLabel;
    UILabel * _pathLabel;
    UIImageView * _thumbnailImageView;
    FLEXNetworkTransaction * _transaction;
    UILabel * _transactionDetailsLabel;
}

@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *pathLabel;
@property (nonatomic, retain) UIImageView *thumbnailImageView;
@property (nonatomic, retain) FLEXNetworkTransaction *transaction;
@property (nonatomic, retain) UILabel *transactionDetailsLabel;

+ (double)preferredCellHeight;
+ (id)timestampStringFromRequestDate:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)nameLabel;
- (id)nameLabelText;
- (id)pathLabel;
- (id)pathLabelText;
- (void)setNameLabel:(id)arg1;
- (void)setPathLabel:(id)arg1;
- (void)setThumbnailImageView:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransactionDetailsLabel:(id)arg1;
- (id)thumbnailImageView;
- (id)transaction;
- (id)transactionDetailsLabel;
- (id)transactionDetailsLabelText;

@end
