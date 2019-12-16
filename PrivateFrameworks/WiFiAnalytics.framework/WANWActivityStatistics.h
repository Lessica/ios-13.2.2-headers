/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

@interface WANWActivityStatistics : NSObject {
    NSArray * _activityUUIDs;
    unsigned int  _awdMetricID;
    PBCodable * _awdReport;
    NSArray * _externallyVisibleActivityUUIDs;
    WAMessage * _message;
}

@property (retain) NSArray *activityUUIDs;
@property (nonatomic) unsigned int awdMetricID;
@property (nonatomic, retain) PBCodable *awdReport;
@property (retain) NSArray *externallyVisibleActivityUUIDs;
@property (nonatomic, retain) WAMessage *message;

- (void).cxx_destruct;
- (id)activityUUIDs;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (id)externallyVisibleActivityUUIDs;
- (id)initWithWAActivityReport:(const void*)arg1 length:(unsigned long long)arg2;
- (id)message;
- (void)setActivityUUIDs:(id)arg1;
- (void)setAwdMetricID:(unsigned int)arg1;
- (void)setAwdReport:(id)arg1;
- (void)setExternallyVisibleActivityUUIDs:(id)arg1;
- (void)setMessage:(id)arg1;

@end