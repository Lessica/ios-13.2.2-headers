/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
 */

@interface SBSDefaults : NSObject {
    NSUserDefaults * _defaults;
    NSDictionary * _defaultsInfo;
}

@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) NSDictionary *defaultsInfo;

+ (bool)boolForDefault:(unsigned long long)arg1;
+ (id)defaultsInfo;
+ (id)defaultsKeys;
+ (double)doubleForDefault:(unsigned long long)arg1;
+ (id)getHumanReadable;
+ (id)getHumanReadable:(unsigned long long)arg1;
+ (long long)integerForDefault:(unsigned long long)arg1;
+ (bool)isDefaultSet:(unsigned long long)arg1;
+ (void)resetAllDefaults;
+ (void)resetDefault:(unsigned long long)arg1;
+ (void)setBool:(bool)arg1 forDefault:(unsigned long long)arg2;
+ (void)setInteger:(long long)arg1 forDefault:(unsigned long long)arg2;
+ (void)setString:(id)arg1 forDefault:(unsigned long long)arg2;
+ (id)sharedDefaults;
+ (id)sharedInstance;
+ (id)stringForDefault:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)defaults;
- (id)defaultsInfo;
- (id)getDefaults;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDefaults:(id)arg1;
- (void)setDefaultsInfo:(id)arg1;

@end
