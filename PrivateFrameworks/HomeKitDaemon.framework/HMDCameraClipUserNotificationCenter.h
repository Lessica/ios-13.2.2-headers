/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraClipUserNotificationCenter : HMFObject <HMFLogging> {
    HMDBulletinBoard * _bulletinBoard;
    HMDHeroFrameDataSource * _dataSource;
    HMDDeviceFileManager * _fileManager;
    NSString * _heroFrameDirPath;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDBulletinBoard *bulletinBoard;
@property (readonly) HMDHeroFrameDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDeviceFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *heroFrameDirPath;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_copyHeroFrameAtURL:(id)arg1;
- (bool)_createDirectoryAtPathIfNonExistent:(id)arg1;
- (unsigned long long)_effectiveReasonForSignificantEvent:(id)arg1;
- (void)_removeFile:(id)arg1;
- (id)bulletinBoard;
- (id)dataSource;
- (id)fileManager;
- (id)heroFrameDirPath;
- (id)initWithBulletinBoard:(id)arg1 fileManager:(id)arg2 dataSource:(id)arg3 workQueue:(id)arg4;
- (void)postSignificantEventNotification:(id)arg1 forCameraProfile:(id)arg2;
- (void)removeEventNotificationForClipWithUUID:(id)arg1;
- (id)workQueue;

@end
