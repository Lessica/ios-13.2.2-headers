/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPThreadKeyExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {
    unsigned long long  _key;
}

+ (id)tokenWithKey:(unsigned long long)arg1;

- (id)_init;
- (void)assertHasExclusiveAccess;

@end
