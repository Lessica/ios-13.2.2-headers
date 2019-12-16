/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDPETInteractionEventLog : NSObject <EDInteractionEventLog, EDPBHasher, EFLoggable> {
    EFLazyCache * _contactIDCache;
    CNContactStore * _contactStore;
    NSURL * _currentLogFile;
    EFMutableInt64Set * _currentLogMessageIDs;
    long long  _deviceID;
    NSURL * _directory;
    NSFileHandle * _logFileHandle;
    NSString * _meContactIdentifier;
    <EMUserProfileProvider> * _profileProvider;
    NSData * _rotatingSalt;
    EDInteractionEventLogSaltProvider * _saltProvider;
    unsigned int  _sequenceNumber;
    bool  _shouldLog;
    long long  _userID;
    <EMVIPManager> * _vipManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) EFLazyCache *contactIDCache;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, retain) NSURL *currentLogFile;
@property (nonatomic, retain) EFMutableInt64Set *currentLogMessageIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceID;
@property (nonatomic, readonly) NSURL *directory;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSFileHandle *logFileHandle;
@property (nonatomic, retain) NSString *meContactIdentifier;
@property (nonatomic, readonly) <EMUserProfileProvider> *profileProvider;
@property (nonatomic, retain) NSData *rotatingSalt;
@property (nonatomic, readonly) EDInteractionEventLogSaltProvider *saltProvider;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) bool shouldLog;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) <EMVIPManager> *vipManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (void)enumerateFramesInData:(id)arg1 block:(id /* block */)arg2;
+ (id)log;

- (void).cxx_destruct;
- (id)_buildLogFileURLInDir:(id)arg1;
- (void)_compressFramedMessagesIntoBatch:(id)arg1;
- (id)_currentLocaleIdentifier;
- (unsigned long long)_estimateStopCount:(id)arg1;
- (id)_eventForName:(int)arg1 date:(id)arg2;
- (int)_eventNameFromString:(id)arg1;
- (id)_framedMessage:(id)arg1;
- (bool)_isLogQuotaReached;
- (id)_messageDataEventForMessage:(id)arg1 account:(id)arg2;
- (bool)_openCurrentLogfile;
- (int)_openFileForAppending:(id)arg1;
- (unsigned int)_persistentBits;
- (void)_resetIdentifiers;
- (void)_rotateLogWithCompressedData:(id)arg1;
- (id)_salt;
- (id)_scanForMessageIDs:(id)arg1 logVersion:(out long long*)arg2;
- (int)_timezoneOffset;
- (long long)_truncatedSHA256:(id)arg1;
- (unsigned long long)_truncatedUNIXTimestampFromDate:(id)arg1;
- (void)_writeEvent:(id)arg1;
- (void)_writeHeader;
- (void)_writeMessageDataIfNecessary:(id)arg1;
- (void)_writeMessageDataIfNecessary:(id)arg1 account:(id)arg2;
- (void)_writeQuotaReachedEvent;
- (id)batchedEventsForSubmission;
- (id)contactIDCache;
- (id)contactStore;
- (id)currentLogFile;
- (id)currentLogMessageIDs;
- (long long)deviceID;
- (id)directory;
- (long long)hashedAccountID:(id)arg1;
- (long long)hashedContactIDForAddress:(id)arg1;
- (long long)hashedConversationID:(long long)arg1;
- (long long)hashedMailboxID:(id)arg1;
- (id)hashedMessageHeadersForMessage:(id)arg1;
- (long long)hashedString:(id)arg1;
- (struct { long long *x1; unsigned long long x2; unsigned long long x3; })hashedSubject:(id)arg1;
- (id)initWithDirectory:(id)arg1 userProfileProvider:(id)arg2 saltProvider:(id)arg3 contactStore:(id)arg4 vipManager:(id)arg5;
- (id)logFileHandle;
- (id)meContactIdentifier;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3;
- (void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4;
- (id)profileProvider;
- (id)rotatingSalt;
- (id)saltProvider;
- (unsigned int)sequenceNumber;
- (void)setCurrentLogFile:(id)arg1;
- (void)setCurrentLogMessageIDs:(id)arg1;
- (void)setLogFileHandle:(id)arg1;
- (void)setMeContactIdentifier:(id)arg1;
- (void)setRotatingSalt:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setShouldLog:(bool)arg1;
- (bool)shouldLog;
- (long long)userID;
- (id)vipManager;
- (void)waitForPendingWrites;
- (id)workQueue;

@end
