/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATransaction : NSObject

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)_implicitAnimationForLayer:(id)arg1 keyPath:(id)arg2;
+ (void)activate;
+ (void)activateBackground:(bool)arg1;
+ (void)addCommitHandler:(id /* block */)arg1 forPhase:(int)arg2;
+ (bool)animatesFromModelValues;
+ (double)animationDuration;
+ (id)animationTimingFunction;
+ (id /* block */)animator;
+ (void)assertInactive;
+ (void)begin;
+ (double)beginTime;
+ (void)commit;
+ (double)commitTime;
+ (id /* block */)completionBlock;
+ (int)currentPhase;
+ (unsigned int)currentState;
+ (bool)disableActions;
+ (bool)disableRunLoopObserverCommits;
+ (double)earliestAutomaticCommitTime;
+ (void)flush;
+ (unsigned int)generateSeed;
+ (double)inputTime;
+ (void)lock;
+ (bool)lowLatency;
+ (void)popAnimator;
+ (void)pushAnimator:(id /* block */)arg1;
+ (void)setAnimatesFromModelValues:(bool)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationTimingFunction:(id)arg1;
+ (void)setBeginTime:(double)arg1;
+ (void)setCommitHandler:(id /* block */)arg1;
+ (void)setCommitTime:(double)arg1;
+ (void)setCompletionBlock:(id /* block */)arg1;
+ (void)setDisableActions:(bool)arg1;
+ (void)setDisableRunLoopObserverCommits:(bool)arg1;
+ (void)setEarliestAutomaticCommitTime:(double)arg1;
+ (void)setInputTime:(double)arg1;
+ (void)setLowLatency:(bool)arg1;
+ (void)setPresentationHandler:(id /* block */)arg1 queue:(id)arg2;
+ (void)setValue:(id)arg1 forKey:(id)arg2;
+ (void)synchronize;
+ (void)unlock;
+ (id)valueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial

+ (void)mt_addCompletionBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (void)hk_performWithoutAnimations:(id /* block */)arg1;

@end