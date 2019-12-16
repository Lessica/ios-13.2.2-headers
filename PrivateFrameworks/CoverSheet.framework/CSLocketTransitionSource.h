/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

@interface CSLocketTransitionSource : NSObject <CSCoverSheetViewTransitionSource, CSExternalAppearanceProviding, CSExternalBehaviorProviding> {
    CSComponent * _scalableContent;
    struct { 
        double value; 
        struct { 
            struct { 
                double value; 
                bool inclusive; 
            } start; 
            struct { 
                double value; 
                bool inclusive; 
            } end; 
        } interval; 
        long long mode; 
    }  _transitionContext;
    long long  _transitionType;
    <CSLocketTransitionDelegate> * _transitioningDelegate;
}

@property (nonatomic, readonly, copy) NSString *appearanceIdentifier;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly, copy) NSSet *components;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, retain) CSComponent *scalableContent;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; } transitionContext;
@property (nonatomic) long long transitionType;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;
@property (nonatomic) <CSLocketTransitionDelegate> *transitioningDelegate;

- (void).cxx_destruct;
- (id)appearanceIdentifier;
- (id)backgroundColor;
- (long long)backgroundStyle;
- (void)cancelTransition;
- (void)cleanupPresentation;
- (id)components;
- (id)coverSheetIdentifier;
- (bool)isTransitioning;
- (id)legibilitySettings;
- (long long)notificationBehavior;
- (long long)participantState;
- (void)prepareForPresentation;
- (long long)proximityDetectionMode;
- (unsigned long long)restrictedCapabilities;
- (id)scalableContent;
- (long long)scrollingStrategy;
- (void)setScalableContent:(id)arg1;
- (void)setTransitionType:(long long)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (struct { double x1; struct { struct { double x_1_2_1; bool x_1_2_2; } x_2_1_1; struct { double x_2_2_1; bool x_2_2_2; } x_2_1_2; } x2; long long x3; })transitionContext;
- (long long)transitionType;
- (id)transitioningDelegate;
- (void)updatePresentationWithProgress:(double)arg1;

@end
