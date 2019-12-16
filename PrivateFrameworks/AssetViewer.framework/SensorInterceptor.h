/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

@interface SensorInterceptor : NSObject <ARSensorDelegate> {
    void _acceleration;
    <ARSensorDelegate> * _originalDelegate;
    <ARSensor> * _targetSensor;
}

@property (nonatomic) void acceleration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <ARSensorDelegate> *originalDelegate;
@property (readonly) Class superclass;
@property (nonatomic) <ARSensor> *targetSensor;

- (void).cxx_destruct;
- (void)acceleration;
- (id)originalDelegate;
- (void)sensor:(id)arg1 didFailWithError:(id)arg2;
- (void)sensor:(id)arg1 didOutputSensorData:(id)arg2;
- (void)sensorDidPause:(id)arg1;
- (void)sensorDidRestart:(id)arg1;
- (void)sensorDidStart:(id)arg1;
- (void)setAcceleration;
- (void)setOriginalDelegate:(id)arg1;
- (void)setTargetSensor:(id)arg1;
- (id)targetSensor;

@end
