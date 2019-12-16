/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXGlobals : NSObject {
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_anchorModelWhitelistHelper:(id)arg1;
- (int)actionExperienceHighConfidenceAppActionCountThreshold;
- (double)actionExperienceHighConfidenceThreshold;
- (int)actionExperienceMediumConfidenceAppActionCountThreshold;
- (double)actionExperienceMediumConfidenceThreshold;
- (int)actionPredictionFirstStageBeamWidth;
- (double)actionPredictionInternalBuildSessionLogSamplingRate;
- (double)actionPredictionInternalBuildShadowLogSamplingRate;
- (double)actionPredictionSessionLogSamplingRate;
- (int)actionPredictionSessionLoggingBottomBlockMaxItemsToLog;
- (double)actionPredictionSessionLoggingDurationResolutionSec;
- (double)actionPredictionShadowLogSamplingRate;
- (int)actionSpotlightCaptureRateActionAppLaunchThresholdSeconds;
- (int)actionSpotlightCaptureRateForwardQueryThresholdSeconds;
- (int)actionSpotlightCaptureRateSecondsAfterSessionEnd;
- (double)airplaneModeLaunchDecayHalflife;
- (bool)allowBehavioralPredictionsOnLockscreen;
- (double)appActionAirplaneModeLaunchDecayHalflife;
- (double)appActionCoreMotionLaunchDecayHalflife;
- (double)appActionDayOfWeekLaunchDecayHalflife;
- (double)appActionLaunchDecayHalflife;
- (double)appActionLaunchSequenceDecayHalflife;
- (double)appActionTrendingLaunchDecayHalflife;
- (double)appActionUnlockTimeDecayHalflife;
- (double)appActionWifiSSIDLaunchDecayHalflife;
- (int)appConnectionMinAverageLaunches;
- (int)appConnectionMinTotalLaunches;
- (double)appConnectionSessionObjectLogSamplingRate;
- (double)appLaunchDecayHalflife;
- (double)appPredictionBlendedScoreNormalizationConstant;
- (double)appPredictionGlobalScoreMultiplierPerApp;
- (id)approvedSiriKitIntents;
- (id)blacklistedAppActions;
- (id)blacklistedAppActionsForPredictions;
- (id)blacklistedAppActionsForPrimaryShortcuts;
- (id)blacklistedAppActionsForShortcuts;
- (id)blacklistedAppActionsHelper:(id)arg1;
- (id)blacklistedAppsForLockscreenPredictions;
- (double)clippingThresholdForGaussianDist;
- (double)coreMotionLaunchDecayHalflife;
- (int)currentLocationUpdateInterval;
- (double)dayOfWeekLaunchDecayHalflife;
- (double)defaultPeriodicLoggerEnrollmentPeriodSeconds;
- (double)defaultPeriodicLoggerEnrollmentRate;
- (double)defaultPeriodicLoggerUploadIntervalSeconds;
- (double)defaultPredictionRefreshRate;
- (int)donationWeighingScheme;
- (double)donationWeighingStrength;
- (int)extraAppsToLog;
- (int)extraIntentsToLog;
- (int)extraSASAppsToLog;
- (double)heuristicActionExperienceHighConfidenceThreshold;
- (double)heuristicActionExperienceMediumConfidenceThreshold;
- (double)heuristicsBaseScore;
- (int)heuristicsEngagementPriorAlpha;
- (int)heuristicsEngagementPriorBeta;
- (id)init;
- (id)initWithAssetClass:(Class)arg1;
- (bool)isCrashReporterEnabledForActionPredictions;
- (bool)isCrashReporterEnabledForAppPredictions;
- (double)launchSequenceDecayHalflife;
- (int)locationOfInterestSearchRadius;
- (int)locationOfInterestUpdateInterval;
- (int)lockscreenMaxValidCacheAge;
- (id)magicalMomentsEnabledPredictionExperts;
- (int)maxDistanceToDropOffLocationInMetersForRequestRideIntent;
- (int)maxHeuristicAppActionCount;
- (int)maxMagicalMomentsPredictions;
- (int)maxNumberOfActionTypesPerApp;
- (int)maxValidATXActionResponseCacheAgeSec;
- (double)maximumActionFeedbackMeanCalculationEntryAge;
- (int)maximumParameterCombinations;
- (double)maximumSlotFeedbackDatabaseEntryAge;
- (double)maximumSlotResolutionDatabaseEntryAge;
- (int)maximumSpotlightPredictions;
- (id)messageContentBlacklist;
- (int)messageContentTimeElapsed;
- (int)minDistanceToDropOffLocationInMetersForRequestRideIntent;
- (int)minimumTimespanForOnceOffActions;
- (double)notificationsAppSamplingRate;
- (double)notificationsCustomerSamplingRate;
- (double)notificationsHistoryDecayHalflife;
- (double)notificationsInternalSamplingRate;
- (double)notificationsPromotingEngageRateStd;
- (double)notificationsPromotingEngageRateThreshold;
- (double)notificationsQuietingEngageRateStd;
- (double)notificationsQuietingEngageRateThreshold;
- (double)notificationsQuietingProbabilityThreshold;
- (bool)notificationsQuietingUseLogisticRegression;
- (double)notificationsSeedSamplingRate;
- (double)notificationsUserSamplingRate;
- (double)nsuaDonationWeight;
- (int)numberOfActionsToKeepForLogging;
- (int)numberOfRandomAppActionTypesToKeepForLogging;
- (int)numberOfRandomSlotsToKeepForLogging;
- (int)numberOfTopSASAppsToLog;
- (bool)onlyUseEligibleForPrediction;
- (double)penaltyForMultipleActionsPerApp;
- (id)personalizationBlacklistedBundleIds;
- (unsigned long long)personalizationRequiredActionHistorySeconds;
- (unsigned long long)personalizationRequiredCountForRelevance;
- (int)predictedExitTimesUpdateInterval;
- (int)predictedLocationsOfInterestUpdateInterval;
- (double)predictedRouteAcceptThreshold;
- (double)predictionsForMultiStageLoggingLimit;
- (double)predictionsPerAppActionLimit;
- (int)previousAppActionCompareCount;
- (int)previousLOIExpirationTime;
- (id)sasEnabledIntents;
- (id)sasOOBEHighConfidenceApps;
- (int)sessionLoggingAppSequenceLength;
- (bool)sessionLoggingCurrentLOITypeEnable;
- (double)sessionLoggingDistanceAccuracy;
- (bool)sessionLoggingGymDistanceEnable;
- (bool)sessionLoggingHomeDistanceEnable;
- (double)sessionLoggingLatLongAccuracy;
- (bool)sessionLoggingLatLongEnable;
- (bool)sessionLoggingSchoolDistanceEnable;
- (int)sessionLoggingUniqueAppActionSequenceLength;
- (bool)sessionLoggingWorkDistanceEnable;
- (double)sessionObjectLogSamplingRate;
- (double)shadowLogSamplingRate;
- (double)shouldIgnoreUpcomingMediaExpirationDateForTV;
- (int)siriExperienceHighConfidenceIntentCountThreshold;
- (int)siriExperienceHighConfidenceLaunchCountThreshold;
- (double)siriExperienceHighConfidenceThreshold;
- (int)siriExperienceMediumConfidenceIntentCountThreshold;
- (int)siriExperienceMediumConfidenceLaunchCountThreshold;
- (double)siriExperienceMediumConfidenceThreshold;
- (double)slotResolutionDayOfWeekLaunchDecayHalflife;
- (double)slotResolutionLaunchDecayHalflife;
- (double)slotResolutionLocationLaunchDecayHalflife;
- (double)slotResolutionMotionTypeLaunchDecayHalflife;
- (double)slotResolutionPartOfWeekLaunchDecayHalflife;
- (double)slotResolutionPreviousLocationLaunchDecayHalflife;
- (double)slotResolutionRatioSmoothingThreshold;
- (double)slotResolutionTimeOfDayLaunchDecayHalflife;
- (double)smartAppSelectionSessionObjectLogSamplingRate;
- (double)smartAppSelectionShadowLogSamplingRate;
- (double)smoothedBudgetForTimeOfDayStd;
- (double)smoothedCountForCoarseTimeOfDayStd;
- (double)smoothedCountForTimeOfDayStd;
- (double)spotlightLaunchDecayHalflife;
- (int)spotlightMaxValidCacheAge;
- (double)timeAndDayAppLaunchesDecayHalflife;
- (unsigned long long)transitionLookaheadMaxSeconds;
- (unsigned long long)transitionLookaheadMinSeconds;
- (double)trendingLaunchDecayHalflife;
- (id)triggerPresetMinutes;
- (double)unlockTimeDecayHalflife;
- (bool)useOriginalScreenLockStateStream;
- (id)whitelistedActionTypesForAnchorModelLogging;
- (id)whitelistedBundlesForAnchorModelLogging;
- (id)whitelistedDonationDaemonBundleIds;
- (double)wifiSSIDLaunchDecayHalflife;

@end
