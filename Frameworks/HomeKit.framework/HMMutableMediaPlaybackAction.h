/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMutableMediaPlaybackAction : HMMediaPlaybackAction <NSCopying>

@property (nonatomic, copy) NSSet *mediaProfiles;
@property (nonatomic, retain) MPPlaybackArchive *playbackArchive;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSNumber *volume;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setMediaProfiles:(id)arg1;
- (void)setPlaybackArchive:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setVolume:(id)arg1;

@end
