/* Generated by RuntimeBrowser.
 */

@protocol LAListener <NSObject>

@optional

- (void)activator:(LAActivator *)arg1 abortEvent:(LAEvent *)arg2;
- (void)activator:(LAActivator *)arg1 abortEvent:(LAEvent *)arg2 forListenerName:(NSString *)arg3;
- (void)activator:(LAActivator *)arg1 didChangeToEventMode:(NSString *)arg2;
- (void)activator:(LAActivator *)arg1 didSaveNewConfiguration:(id)arg2 forListenerWithName:(NSString *)arg3;
- (void)activator:(LAActivator *)arg1 otherListenerDidHandleEvent:(LAEvent *)arg2;
- (void)activator:(LAActivator *)arg1 receiveDeactivateEvent:(LAEvent *)arg2;
- (void)activator:(LAActivator *)arg1 receiveEvent:(LAEvent *)arg2;
- (void)activator:(LAActivator *)arg1 receiveEvent:(LAEvent *)arg2 forListenerName:(NSString *)arg3;
- (void)activator:(LAActivator *)arg1 receivePreviewEventForListenerName:(NSString *)arg2;
- (bool)activator:(LAActivator *)arg1 receiveUnlockingDeviceEvent:(LAEvent *)arg2 forListenerName:(NSString *)arg3;
- (id)activator:(LAActivator *)arg1 requestsConfigurationForListenerWithName:(NSString *)arg2;
- (void)activator:(LAActivator *)arg1 requestsRemovalForListenerWithName:(NSString *)arg2;
- (NSArray *)activator:(LAActivator *)arg1 requiresCompatibleEventModesForListenerWithName:(NSString *)arg2;
- (NSString *)activator:(LAActivator *)arg1 requiresConfigurationViewControllerClassNameForListenerWithName:(NSString *)arg2 bundle:(id*)arg3;
- (NSArray *)activator:(LAActivator *)arg1 requiresExclusiveAssignmentGroupsForListenerName:(NSString *)arg2;
- (id)activator:(LAActivator *)arg1 requiresGlyphImageDescriptorForListenerName:(NSString *)arg2;
- (NSData *)activator:(LAActivator *)arg1 requiresIconDataForListenerName:(NSString *)arg2;
- (NSData *)activator:(LAActivator *)arg1 requiresIconDataForListenerName:(NSString *)arg2 scale:(double*)arg3;
- (UIImage *)activator:(LAActivator *)arg1 requiresIconForListenerName:(NSString *)arg2 scale:(double)arg3;
- (id)activator:(LAActivator *)arg1 requiresInfoDictionaryValueOfKey:(NSString *)arg2 forListenerWithName:(NSString *)arg3;
- (NSNumber *)activator:(LAActivator *)arg1 requiresIsCompatibleWithEventName:(NSString *)arg2 listenerName:(NSString *)arg3;
- (NSString *)activator:(LAActivator *)arg1 requiresLocalizedDescriptionForListenerName:(NSString *)arg2;
- (NSString *)activator:(LAActivator *)arg1 requiresLocalizedGroupForListenerName:(NSString *)arg2;
- (NSString *)activator:(LAActivator *)arg1 requiresLocalizedTitleForListenerName:(NSString *)arg2;
- (bool)activator:(LAActivator *)arg1 requiresNeedsPoweredDisplayForListenerName:(NSString *)arg2;
- (NSNumber *)activator:(LAActivator *)arg1 requiresRequiresAssignmentForListenerName:(NSString *)arg2;
- (NSData *)activator:(LAActivator *)arg1 requiresSmallIconDataForListenerName:(NSString *)arg2;
- (NSData *)activator:(LAActivator *)arg1 requiresSmallIconDataForListenerName:(NSString *)arg2 scale:(double*)arg3;
- (UIImage *)activator:(LAActivator *)arg1 requiresSmallIconForListenerName:(NSString *)arg2 scale:(double)arg3;
- (bool)activator:(LAActivator *)arg1 requiresSupportsRemovalForListenerWithName:(NSString *)arg2;

@end
