/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPredictedPose : NSObject {
    unsigned long long  _frameNumber;
    ARPose * _pose;
    double  _predictionTime;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long frameNumber;
@property (nonatomic, readonly) ARPose *pose;
@property (nonatomic, readonly) double predictionTime;
@property (nonatomic, readonly) unsigned long long type;

+ (id)predictedPoseAsDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)frameNumber;
- (id)initWithType:(unsigned long long)arg1 pose:(id)arg2 frameNumber:(unsigned long long)arg3 predictionTime:(double)arg4;
- (id)pose;
- (double)predictionTime;
- (unsigned long long)type;

@end
