/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOnBodyStatusManager : NSObject {
    struct CLConnectionClient { id x1; unsigned char x2; unsigned long x3; unsigned char x4; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x5; long x6; long x7; unsigned int x8/* : ? */; void*x9; BOOL x10; void*x11; long doublex12; const out void*x13; void*x14; void*x15; in void*x16; void*x17; void*x18; const void*x19; int (**x20)(); struct shared_ptr<int> { int *x_21_1_1; struct __shared_weak_count {} *x_21_1_2; } x21; } * fLocationdConnection;
    id /* block */  fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> * fOnBodyStatusQueue;
    NSObject<OS_dispatch_queue> * fPrivateQueue;
    bool  fSubscribedToOnBodyStatusDetection;
}

+ (bool)isOnBodyStatusDetectionAvailable;
+ (id)sharedOnBodyStatusManager;

- (void)connect;
- (void)dealloc;
- (void)disconnect;
- (id)init;
- (void)setPropertiesWithDictionary:(id)arg1;
- (void)startOnBodyStatusDetectionPrivateToQueue:(id)arg1 withParameters:(id)arg2 handler:(id /* block */)arg3;
- (void)startOnBodyStatusDetectionToQueue:(id)arg1 withParameters:(id)arg2 handler:(id /* block */)arg3;
- (void)stopOnBodyStatusDetection;
- (void)stopOnBodyStatusDetectionPrivate;

@end
