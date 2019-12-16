/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingUtilities : NSObject

+ (id)bundleIDForCategory:(id)arg1;
+ (bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 containsString:(id)arg2 locale:(id)arg3;
+ (bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 hasPrefix:(id)arg2 locale:(id)arg3;
+ (bool)caseAndDiacriticInsensitiveLocalizedString:(id)arg1 isEqualToString:(id)arg2;
+ (id)categoryForBundleID:(id)arg1;
+ (void)computeDateCountsForDates:(id)arg1 countLastYear:(unsigned long long*)arg2 countLastMonth:(unsigned long long*)arg3 countLastWeek:(unsigned long long*)arg4 countLastDay:(unsigned long long*)arg5 currentTime:(double)arg6;
+ (float)floatValue:(float)arg1 withSigFigs:(long long)arg2;
+ (void)initMappings;
+ (bool)multiWordString:(id)arg1 hasPrefix:(id)arg2;

@end
