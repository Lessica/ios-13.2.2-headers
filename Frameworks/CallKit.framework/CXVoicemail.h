/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXVoicemail : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSURL * _audioFileURL;
    NSDate * _dateReceived;
    bool  _played;
    CXHandle * _sender;
    bool  _trashed;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, copy) NSURL *audioFileURL;
@property (nonatomic, copy) NSDate *dateReceived;
@property (getter=isPlayed, nonatomic) bool played;
@property (nonatomic, copy) CXHandle *sender;
@property (getter=isTrashed, nonatomic) bool trashed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)audioFileURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVoicemail:(id)arg1;
- (bool)isPlayed;
- (bool)isTrashed;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sender;
- (void)setAudioFileURL:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setPlayed:(bool)arg1;
- (void)setSender:(id)arg1;
- (void)setTrashed:(bool)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
