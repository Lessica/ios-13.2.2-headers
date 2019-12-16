/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRoutingSessionManager : NSObject {
    AVRoutingSessionManagerInternal * _ivars;
}

@property (readonly) NSArray *allLikelyDestinations;
@property (readonly) AVRoutingSession *currentRoutingSession;
@property (readonly) NSArray *likelyExternalDestinations;
@property (readonly) bool prefersLikelyDestinationsOverCurrentRoutingSession;

+ (void)initialize;
+ (id)longFormVideoRoutingSessionManager;

- (id)allLikelyDestinations;
- (id)currentRoutingSession;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithFigRoutingSessionManager:(struct OpaqueFigRoutingSessionManager { }*)arg1;
- (id)likelyExternalDestinations;
- (bool)prefersLikelyDestinationsOverCurrentRoutingSession;
- (void)startRoutingSessionForHighConfidenceExternalDestinationIfPresentWithCompletionHandler:(id /* block */)arg1;
- (bool)startRoutingSessionWithOutputDeviceDescriptions:(id)arg1 error:(id*)arg2;
- (bool)startSuppressingLikelyDestinationsUntilNextPlayEventAndReturnError:(id*)arg1;
- (bool)stopSuppressingLikelyDestinationsAndReturnError:(id*)arg1;
- (void)updateCurrentRoutingSessionFromLikelyDestinationsWithCompletionHandler:(id /* block */)arg1;

@end
