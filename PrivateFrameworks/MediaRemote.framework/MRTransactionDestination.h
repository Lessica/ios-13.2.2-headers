/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionDestination : NSObject {
    unsigned long long  _name;
    MRTransactionPacketizer * _packetizer;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;

- (void).cxx_destruct;
- (id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2;
- (unsigned long long)name;
- (void)packetsFromMessage:(id)arg1 completion:(id /* block */)arg2;
- (id)playerPath;
- (void)unpacketize:(id)arg1 completion:(id /* block */)arg2;

@end
