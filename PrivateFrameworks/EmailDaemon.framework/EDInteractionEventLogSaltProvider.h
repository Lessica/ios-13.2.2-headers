/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDInteractionEventLogSaltProvider : NSObject <EFLoggable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSData * _salt;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSData *salt;
@property (readonly) Class superclass;

+ (id)log;
+ (id)saltProviderFromKeyChain;
+ (id)saltProviderWithString:(id)arg1;

- (void).cxx_destruct;
- (id)_createSalt;
- (void)_deleteSalt;
- (id)_findExistingSaltError:(out id*)arg1;
- (id)_findOrCreateSalt;
- (id)_queryKeychainError:(out id*)arg1;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)migrateAccessClass;
- (id)salt;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setSalt:(id)arg1;

@end
