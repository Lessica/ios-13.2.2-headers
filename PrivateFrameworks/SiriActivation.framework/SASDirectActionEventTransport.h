/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SASDirectActionEventTransport : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _event;
}

@property (nonatomic, retain) NSNumber *event;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)directActionEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (id)initWithAFDirectActionEvent:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setEvent:(id)arg1;

@end
