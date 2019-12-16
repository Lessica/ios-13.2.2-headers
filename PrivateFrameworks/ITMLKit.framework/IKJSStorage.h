/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSStorage : IKJSObject <IKJSStorage> {
    <IKAppDataStoring> * _appStorage;
    struct { 
        bool usesExternalDataStore; 
        bool externalStorageHasDictionaryRepresentation; 
    }  _flags;
    NSMutableDictionary * _storageDict;
    NSObject<OS_dispatch_queue> * _storageQueue;
}

@property (nonatomic, readonly) <IKAppDataStoring> *appStorage;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, retain) NSMutableDictionary *storageDict;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *storageQueue;

- (void).cxx_destruct;
- (void)_verifyExternalDataStoreForKey:(id)arg1;
- (id)appStorage;
- (void)clear;
- (id)getItem:(id)arg1;
- (id)initWithAppContext:(id)arg1 appStorage:(id)arg2;
- (id)key:(unsigned long long)arg1;
- (id)keysAndValues;
- (unsigned long long)length;
- (void)removeItem:(id)arg1;
- (void)setItem:(id)arg1 :(id)arg2;
- (void)setStorageDict:(id)arg1;
- (void)setStorageQueue:(id)arg1;
- (id)storageDict;
- (id)storageQueue;

@end
