/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

@interface TVPMediaItemSkipInfo : NSObject {
    double  _duration;
    double  _start;
    double  _target;
    unsigned long long  _type;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double start;
@property (nonatomic, readonly) double target;
@property (nonatomic, readonly) unsigned long long type;

- (id)_typeDescription;
- (id)description;
- (double)duration;
- (id)initWithType:(unsigned long long)arg1 start:(double)arg2 duration:(double)arg3 target:(double)arg4;
- (double)start;
- (double)target;
- (unsigned long long)type;

@end
