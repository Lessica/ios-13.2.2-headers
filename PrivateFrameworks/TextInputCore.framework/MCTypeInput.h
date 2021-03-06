/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface MCTypeInput : MCKeyboardInput {
    NSString * _characters;
    NSArray * _nearbyKeys;
}

@property (nonatomic, readonly, copy) NSString *characters;
@property (nonatomic, readonly, copy) NSArray *nearbyKeys;

- (void).cxx_destruct;
- (bool)canComposeNew:(id)arg1;
- (id)characters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCharacters:(id)arg1 nearbyKeys:(id)arg2;
- (id)nearbyKeys;

@end
