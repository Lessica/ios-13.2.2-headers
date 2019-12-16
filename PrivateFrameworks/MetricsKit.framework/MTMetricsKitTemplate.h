/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTMetricsKitTemplate : NSObject {
    MTConfig * _config;
    <MTDelegatePackage> * _delegatePackage;
    MTEventHandlers * _eventHandlers;
    MTSystem * _system;
    NSString * _topic;
    MTUtils * _utils;
}

@property (nonatomic, retain) MTConfig *config;
@property (nonatomic, retain) <MTDelegatePackage> *delegatePackage;
@property (nonatomic, retain) MTEventHandlers *eventHandlers;
@property (nonatomic, retain) MTSystem *system;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, retain) MTUtils *utils;

+ (id)kitWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3;

- (void).cxx_destruct;
- (id)config;
- (id)delegatePackage;
- (id)eventHandlers;
- (id)initWithTopic:(id)arg1;
- (id)initWithTopic:(id)arg1 bagProfile:(id)arg2 profileVersion:(id)arg3;
- (id)initWithTopic:(id)arg1 delegatePackage:(id)arg2;
- (void)setConfig:(id)arg1;
- (void)setDelegatePackage:(id)arg1;
- (void)setEventHandlers:(id)arg1;
- (void)setSystem:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUtils:(id)arg1;
- (id)system;
- (id)topic;
- (id)utils;

@end
