/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppLaunchHistogramManager : NSObject {
    long long  _SSIDPruningMethod;
    long long  _actionConfirmsRejectsPruningMethod;
    long long  _aprConfirmsRejectsPruningMethod;
    long long  _aprIntentDonationPruningMethod;
    NSObject<OS_dispatch_queue> * _backgroundSaverQueue;
    NSMutableDictionary * _categoricalHistograms;
    _ATXDataStore * _datastore;
    NSMutableDictionary * _histograms;
    int  _maxActionConfirmsRejectsActionCount;
    int  _maxAprConfirmsRejectsIntentCount;
    int  _maxAprIntentDonationIntentCount;
    int  _maxSSIDCount;
    NSDictionary * _parameters;
    bool  _persistentStore;
}

@property (nonatomic, readonly) bool persistentStore;

+ (void)releaseTemporarySharedInstance;
+ (void)resetSharedInstance;
+ (id)sharedInstance;
+ (void)useTemporarySharedInstance:(id)arg1;

- (void).cxx_destruct;
- (id)categoricalHistogramForLaunchType:(long long)arg1;
- (void)exchangeDatastore:(id)arg1;
- (int)getHistogramMaxCategoryCountFromAsset:(id)arg1;
- (unsigned long long)getHistogramPruningMethodFromAsset:(id)arg1;
- (id)histogramForLaunchType:(long long)arg1;
- (id)init;
- (id)initAndPersist:(bool)arg1;
- (id)initWithInMemoryStore;
- (id)initWithPersistentStore;
- (bool)persistentStore;

@end
