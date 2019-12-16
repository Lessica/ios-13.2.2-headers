/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSampleBufferDisplayLayerInternal : NSObject {
    bool  aboveHighWaterLevel;
    bool  addedToSynchronizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bounds;
    CALayer * contentLayer;
    struct OpaqueCMTimebase { } * controlTimebaseSetByUser;
    bool  controlTimebaseSetByUserIsInUse;
    NSError * error;
    NSObject<OS_dispatch_queue> * flushCallbackListQueue;
    NSObject<OS_dispatch_queue> * flushCallbackQueue;
    NSMutableArray * flushCallbacks;
    bool  isRequestingMediaData;
    AVMediaDataRequester * mediaDataRequester;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minimumUpcomingPTS;
    bool  outputObscured;
    id /* block */  pendingPrerollCompleteCallback;
    int  pendingPrerollRequestID;
    struct CGSize { 
        double width; 
        double height; 
    }  presentationSize;
    bool  preventsDisplaySleepDuringVideoPlayback;
    NSObject<OS_dispatch_queue> * queueForCallingPrerollCompleteCallback;
    NSObject<OS_dispatch_queue> * queueForProtectingPrerollCompleteCallback;
    struct OpaqueCMTimebase { } * readOnlyRenderingTimebase;
    struct OpaqueCMTimebase { } * readOnlyVideoQueueTimebase;
    NSObject<OS_dispatch_queue> * serialQueue;
    long long  status;
    int  upcomingPTSExpectation;
    NSString * videoGravity;
    struct OpaqueFigVideoQueue { } * videoQueue;
    AVWeakReference * weakReferenceToSelf;
    AVWeakReference * weakReferenceToSynchronizer;
}

@end