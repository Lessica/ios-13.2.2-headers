/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

@interface POPAnimationTracer : NSObject {
    POPAnimation * _animation;
    bool  _animationHasVelocity;
    struct _POPAnimationState { int (**x1)(); id x2; id x3; double x4; double x5; double x6; id x7; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x8; id /* block */ x9; id /* block */ x10; id /* block */ x11; id x12; double x13; long long x14; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; } * _animationState;
    NSMutableArray * _events;
    bool  _shouldLogAndResetOnCompletion;
}

@property (nonatomic, readonly) NSArray *allEvents;
@property (nonatomic) bool shouldLogAndResetOnCompletion;
@property (nonatomic, readonly) NSArray *writeEvents;

- (void).cxx_destruct;
- (id)allEvents;
- (void)autoreversed;
- (void)didReachToValue:(id)arg1;
- (void)didStart;
- (void)didStop:(bool)arg1;
- (id)eventsWithType:(unsigned long long)arg1;
- (id)initWithAnimation:(id)arg1;
- (void)readPropertyValue:(id)arg1;
- (void)reset;
- (void)setShouldLogAndResetOnCompletion:(bool)arg1;
- (bool)shouldLogAndResetOnCompletion;
- (void)start;
- (void)stop;
- (void)updateBounciness:(float)arg1;
- (void)updateFriction:(float)arg1;
- (void)updateFromValue:(id)arg1;
- (void)updateMass:(float)arg1;
- (void)updateSpeed:(float)arg1;
- (void)updateTension:(float)arg1;
- (void)updateToValue:(id)arg1;
- (void)updateVelocity:(id)arg1;
- (id)writeEvents;
- (void)writePropertyValue:(id)arg1;

@end
