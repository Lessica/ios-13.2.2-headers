/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallUpdate : NSObject <CXCopying, NSCopying, NSSecureCoding> {
    NSString * _ISOCountryCode;
    NSUUID * _UUID;
    NSSet * _activeRemoteParticipantHandles;
    NSString * _audioCategory;
    long long  _audioInterruptionOperationMode;
    long long  _audioInterruptionProvider;
    NSString * _audioMode;
    bool  _blocked;
    NSDictionary * _context;
    NSString * _crossDeviceIdentifier;
    bool  _emergency;
    CXHandoffContext * _handoffContext;
    struct CXCallUpdateHasSet { 
        unsigned int remoteHandle : 1; 
        unsigned int localizedCallerName : 1; 
        unsigned int emergency : 1; 
        unsigned int usingBaseband : 1; 
        unsigned int blocked : 1; 
        unsigned int ttyType : 1; 
        unsigned int supportsTTYWithVoice : 1; 
        unsigned int mayRequireBreakBeforeMake : 1; 
        unsigned int hasVideo : 1; 
        unsigned int audioCategory : 1; 
        unsigned int audioMode : 1; 
        unsigned int audioInterruptionProvider : 1; 
        unsigned int audioInterruptionOperationMode : 1; 
        unsigned int verificationStatus : 1; 
        unsigned int priority : 1; 
        unsigned int requiresInCallSounds : 1; 
        unsigned int inCallSoundRegion : 1; 
        unsigned int supportsHolding : 1; 
        unsigned int supportsGrouping : 1; 
        unsigned int supportsUngrouping : 1; 
        unsigned int supportsDTMF : 1; 
        unsigned int supportsUnambiguousMultiPartyState : 1; 
        unsigned int supportsAddCall : 1; 
        unsigned int supportsSendingToVoicemail : 1; 
        unsigned int videoStreamToken : 1; 
        unsigned int crossDeviceIdentifier : 1; 
        unsigned int ISOCountryCode : 1; 
        unsigned int localSenderIdentityUUID : 1; 
        unsigned int localSenderIdentityAccountUUID : 1; 
        unsigned int remoteParticipantHandles : 1; 
        unsigned int activeRemoteParticipantHandles : 1; 
        unsigned int handoffContext : 1; 
        unsigned int context : 1; 
        unsigned int prefersExclusiveAccessToCellularNetwork : 1; 
        unsigned int remoteUplinkMuted : 1; 
        unsigned int shouldSuppressInCallUI : 1; 
        unsigned int requiresAuthentication : 1; 
        unsigned int mutuallyExclusiveCall : 1; 
    }  _hasSet;
    bool  _hasVideo;
    long long  _inCallSoundRegion;
    NSUUID * _localSenderIdentityAccountUUID;
    NSUUID * _localSenderIdentityUUID;
    NSString * _localizedCallerName;
    bool  _mayRequireBreakBeforeMake;
    bool  _mutuallyExclusiveCall;
    bool  _prefersExclusiveAccessToCellularNetwork;
    long long  _priority;
    CXHandle * _remoteHandle;
    NSSet * _remoteParticipantHandles;
    bool  _remoteUplinkMuted;
    bool  _requiresAuthentication;
    bool  _requiresInCallSounds;
    bool  _shouldSuppressInCallUI;
    bool  _supportsAddCall;
    bool  _supportsDTMF;
    bool  _supportsGrouping;
    bool  _supportsHolding;
    bool  _supportsSendingToVoicemail;
    bool  _supportsTTYWithVoice;
    bool  _supportsUnambiguousMultiPartyState;
    bool  _supportsUngrouping;
    long long  _ttyType;
    bool  _usingBaseband;
    long long  _verificationStatus;
    long long  _videoStreamToken;
}

@property (nonatomic, copy) NSString *ISOCountryCode;
@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, copy) NSSet *activeRemoteParticipantHandles;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic) long long audioInterruptionOperationMode;
@property (nonatomic) long long audioInterruptionProvider;
@property (nonatomic, copy) NSString *audioMode;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic, copy) NSString *crossDeviceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmergency, nonatomic) bool emergency;
@property (nonatomic, retain) CXHandoffContext *handoffContext;
@property (nonatomic) struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; } hasSet;
@property (nonatomic) bool hasVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inCallSoundRegion;
@property (nonatomic, copy) NSUUID *localSenderIdentityAccountUUID;
@property (nonatomic, copy) NSUUID *localSenderIdentityUUID;
@property (nonatomic, copy) NSString *localizedCallerName;
@property (nonatomic) bool mayRequireBreakBeforeMake;
@property (getter=isMutuallyExclusiveCall, nonatomic) bool mutuallyExclusiveCall;
@property (nonatomic) bool prefersExclusiveAccessToCellularNetwork;
@property (nonatomic) long long priority;
@property (nonatomic, copy) CXHandle *remoteHandle;
@property (nonatomic, copy) NSSet *remoteParticipantHandles;
@property (getter=isRemoteUplinkMuted, nonatomic) bool remoteUplinkMuted;
@property (nonatomic) bool requiresAuthentication;
@property (nonatomic) bool requiresInCallSounds;
@property (nonatomic) bool shouldSuppressInCallUI;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAddCall;
@property (nonatomic) bool supportsDTMF;
@property (nonatomic) bool supportsGrouping;
@property (nonatomic) bool supportsHolding;
@property (nonatomic) bool supportsSendingToVoicemail;
@property (nonatomic) bool supportsTTYWithVoice;
@property (nonatomic) bool supportsUnambiguousMultiPartyState;
@property (nonatomic) bool supportsUngrouping;
@property (setter=setTTYType:, nonatomic) long long ttyType;
@property (getter=isUsingBaseband, nonatomic) bool usingBaseband;
@property (nonatomic) long long verificationStatus;
@property (nonatomic) long long videoStreamToken;

+ (id)callUpdateWithDefaultValuesSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ISOCountryCode;
- (id)UUID;
- (id)activeRemoteParticipantHandles;
- (id)audioCategory;
- (long long)audioInterruptionOperationMode;
- (long long)audioInterruptionProvider;
- (id)audioMode;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossDeviceIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handoffContext;
- (struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; })hasSet;
- (bool)hasVideo;
- (long long)inCallSoundRegion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBlocked;
- (bool)isEmergency;
- (bool)isMutuallyExclusiveCall;
- (bool)isRemoteUplinkMuted;
- (bool)isUsingBaseband;
- (id)localSenderIdentityAccountUUID;
- (id)localSenderIdentityUUID;
- (id)localizedCallerName;
- (bool)mayRequireBreakBeforeMake;
- (bool)prefersExclusiveAccessToCellularNetwork;
- (long long)priority;
- (id)remoteHandle;
- (id)remoteParticipantHandles;
- (bool)requiresAuthentication;
- (bool)requiresInCallSounds;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActiveRemoteParticipantHandles:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioInterruptionOperationMode:(long long)arg1;
- (void)setAudioInterruptionProvider:(long long)arg1;
- (void)setAudioMode:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setCrossDeviceIdentifier:(id)arg1;
- (void)setEmergency:(bool)arg1;
- (void)setHandoffContext:(id)arg1;
- (void)setHasSet:(struct CXCallUpdateHasSet { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; })arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setISOCountryCode:(id)arg1;
- (void)setInCallSoundRegion:(long long)arg1;
- (void)setLocalSenderIdentityAccountUUID:(id)arg1;
- (void)setLocalSenderIdentityUUID:(id)arg1;
- (void)setLocalizedCallerName:(id)arg1;
- (void)setMayRequireBreakBeforeMake:(bool)arg1;
- (void)setMutuallyExclusiveCall:(bool)arg1;
- (void)setPrefersExclusiveAccessToCellularNetwork:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRemoteHandle:(id)arg1;
- (void)setRemoteParticipantHandles:(id)arg1;
- (void)setRemoteUplinkMuted:(bool)arg1;
- (void)setRequiresAuthentication:(bool)arg1;
- (void)setRequiresInCallSounds:(bool)arg1;
- (void)setShouldSuppressInCallUI:(bool)arg1;
- (void)setSupportsAddCall:(bool)arg1;
- (void)setSupportsDTMF:(bool)arg1;
- (void)setSupportsGrouping:(bool)arg1;
- (void)setSupportsHolding:(bool)arg1;
- (void)setSupportsSendingToVoicemail:(bool)arg1;
- (void)setSupportsTTYWithVoice:(bool)arg1;
- (void)setSupportsUnambiguousMultiPartyState:(bool)arg1;
- (void)setSupportsUngrouping:(bool)arg1;
- (void)setTTYType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUsingBaseband:(bool)arg1;
- (void)setVerificationStatus:(long long)arg1;
- (void)setVideoStreamToken:(long long)arg1;
- (bool)shouldSuppressInCallUI;
- (bool)supportsAddCall;
- (bool)supportsDTMF;
- (bool)supportsGrouping;
- (bool)supportsHolding;
- (bool)supportsSendingToVoicemail;
- (bool)supportsTTYWithVoice;
- (bool)supportsUnambiguousMultiPartyState;
- (bool)supportsUngrouping;
- (long long)ttyType;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateWithUpdate:(id)arg1;
- (long long)verificationStatus;
- (long long)videoStreamToken;

@end
