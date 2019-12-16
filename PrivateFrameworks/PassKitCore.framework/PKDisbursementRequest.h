/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDisbursementRequest : NSObject <NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _countryCode;
    NSString * _currencyCode;
    long long  _requestSchedule;
    NSArray * _summaryItems;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) long long requestSchedule;
@property (nonatomic, copy) NSArray *summaryItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)amount;
- (id)countryCode;
- (id)currencyCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDisbursementRequest:(id)arg1;
- (long long)requestSchedule;
- (void)setAmount:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setRequestSchedule:(long long)arg1;
- (void)setSummaryItems:(id)arg1;
- (id)summaryItems;

@end
