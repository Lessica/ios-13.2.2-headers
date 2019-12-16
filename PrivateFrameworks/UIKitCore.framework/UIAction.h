/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAction : UIMenuElement <_UIMenuLeaf> {
    unsigned long long  _attributes;
    NSString * _discoverabilityTitle;
    id /* block */  _handler;
    NSString * _identifier;
    long long  _state;
}

@property (nonatomic) unsigned long long attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *discoverabilityTitle;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (id)_immutableCopy;
- (id)_leafAlternates;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (void)_performAction;
- (void)_performWithTarget:(id)arg1;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (id)_spiRepresentation;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (unsigned long long)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoverabilityTitle;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(id /* block */)arg7;
- (bool)isEqual:(id)arg1;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)state;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

+ (id)swiftUI__actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(id /* block */)arg4;

@end
