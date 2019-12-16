/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlaybackArchive : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned long long  _copyOptions;
    MPPlaybackArchiveDisplayProperties * _displayProperties;
    NSData * _playbackSessionData;
    NSString * _playbackSessionIdentifier;
    NSString * _playbackSessionType;
    unsigned long long  _queueControlOptions;
    NSMutableDictionary * _storage;
    unsigned long long  _supportedOptions;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long copyOptions;
@property (nonatomic, readonly) MPPlaybackArchiveDisplayProperties *displayProperties;
@property (nonatomic, readonly, copy) NSData *playbackSessionData;
@property (nonatomic, readonly, copy) NSString *playbackSessionIdentifier;
@property (nonatomic, readonly, copy) NSString *playbackSessionType;
@property (nonatomic) unsigned long long queueControlOptions;
@property (nonatomic, retain) NSMutableDictionary *storage;
@property (nonatomic, readonly) unsigned long long supportedOptions;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)boolValueForOption:(long long)arg1;
- (id)bundleIdentifier;
- (unsigned long long)copyOptions;
- (id)copyWithOptions:(unsigned long long)arg1;
- (id)description;
- (id)displayProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaybackSessionIdentifier:(id)arg1 playbackSessionData:(id)arg2 playbackSessionType:(id)arg3 bundleIdentifier:(id)arg4 displayProperties:(id)arg5;
- (id)initWithType:(long long)arg1 sessionIdentifier:(id)arg2 data:(id)arg3 dataType:(id)arg4 bundleIdentifier:(id)arg5 supportedOptions:(unsigned long long)arg6 displayProperties:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)playbackSessionData;
- (id)playbackSessionIdentifier;
- (id)playbackSessionType;
- (unsigned long long)queueControlOptions;
- (void)setBOOLValue:(bool)arg1 forOption:(long long)arg2;
- (void)setCopyOptions:(unsigned long long)arg1;
- (void)setQueueControlOptions:(unsigned long long)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;
- (unsigned long long)supportedOptions;
- (long long)type;

@end
