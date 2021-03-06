/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFWeatherDataServiceParserMetadataV1 : NSObject {
    NSDate * _expireTime;
    NSString * _language;
    WFLocation * _location;
    NSDate * _readTime;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSDate *expireTime;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) WFLocation *location;
@property (nonatomic, retain) NSDate *readTime;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (id)expireTime;
- (id)language;
- (id)location;
- (id)readTime;
- (void)setExpireTime:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setReadTime:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
