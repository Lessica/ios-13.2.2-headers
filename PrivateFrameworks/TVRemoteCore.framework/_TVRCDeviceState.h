/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCDeviceState : NSObject <NSSecureCoding> {
    NSDictionary * _alternateIdentifiers;
    long long  _connectionState;
    long long  _connectionType;
    NSError * _disconnectError;
    long long  _disconnectReason;
    NSString * _identifier;
    _TVRCKeyboardState * _keyboardState;
    NSString * _model;
    NSString * _name;
    bool  _paired;
    unsigned long long  _pairingCapability;
    NSSet * _supportedButtons;
    bool  _supportsTouchEvents;
}

@property (nonatomic, copy) NSDictionary *alternateIdentifiers;
@property (nonatomic) long long connectionState;
@property (nonatomic) long long connectionType;
@property (nonatomic, copy) NSError *disconnectError;
@property (nonatomic) long long disconnectReason;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) _TVRCKeyboardState *keyboardState;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (getter=isPaired, nonatomic) bool paired;
@property (nonatomic) unsigned long long pairingCapability;
@property (nonatomic, copy) NSSet *supportedButtons;
@property (nonatomic) bool supportsTouchEvents;

+ (id)deviceStateFromDevice:(id)arg1;
+ (id)setOfStatesFromDevices:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternateIdentifiers;
- (long long)connectionState;
- (long long)connectionType;
- (id)description;
- (id)disconnectError;
- (long long)disconnectReason;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (bool)isPaired;
- (id)keyboardState;
- (id)model;
- (id)name;
- (unsigned long long)pairingCapability;
- (void)setAlternateIdentifiers:(id)arg1;
- (void)setConnectionState:(long long)arg1;
- (void)setConnectionType:(long long)arg1;
- (void)setDisconnectError:(id)arg1;
- (void)setDisconnectReason:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardState:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setPairingCapability:(unsigned long long)arg1;
- (void)setSupportedButtons:(id)arg1;
- (void)setSupportsTouchEvents:(bool)arg1;
- (id)supportedButtons;
- (bool)supportsTouchEvents;

@end
