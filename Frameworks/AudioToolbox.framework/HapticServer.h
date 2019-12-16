/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface HapticServer : NSObject <NSXPCListenerDelegate> {
    unsigned long long  _SSSClientID;
    struct WatchdogTimer { char *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; int x3; unsigned long long x4; id x5; /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; struct _opaque_pthread_mutex_t { long long x_12_1_1; BOOL x_12_1_2[56]; } x12; } * _SSSCompletionWatchDogTimer;
    unsigned long long  _audioPrewarmCount;
    unsigned long long  _audioRunningCount;
    unsigned long long  _hapticsPrewarmCount;
    unsigned long long  _hapticsRunningCount;
    unsigned long long  _initCount;
    struct map<unsigned int, NSMutableArray<ServerWrapper *> *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSMutableArray<ServerWrapper *> *> > > { 
        struct __tree<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, NSMutableArray<ServerWrapper *> *>, std::__1::less<unsigned int>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _instanceMap;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _instanceMutex;
    NSXPCListener * _listener;
    struct ServerManager { struct RTLocked<std::map, unsigned long, std::__1::shared_ptr<ClientEntry> > { struct map<unsigned long, std::__1::shared_ptr<ClientEntry>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; } * _manager;
    struct map<int, std::__1::bitset<255>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::bitset<255> > > > { 
        struct __tree<std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::bitset<255> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::bitset<255> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::bitset<255> >, std::__1::less<int>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _processIndexMap;
    unsigned long long  _runningChannelIDCount;
    NSError * _savedError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long initCount;
@property (readonly) /* Warning: unhandled struct encoding: '{ServerManager={RTLocked<std::map' */ struct *manager; /* unknown property attribute:  void *> >=^{memory_resource}}}}^{HapticSynth}{HapticMutex=^^?*^{_opaque_pthread_t}{_opaque_pthread_mutex_t=q[56c]}}^{VibeConfiguration}d^{opaqueCMSession}iBBBBBBI@Q} */
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)HandleInterruptionForSessionID:(unsigned int)arg1 command:(unsigned int)arg2 dictionary:(const struct __CFDictionary { }*)arg3;
- (void)addListener:(id)arg1 forAudioSessionID:(unsigned int)arg2;
- (unsigned long long)addProcessEntry:(int)arg1;
- (int)cancelPatternWithOptions:(struct __CFDictionary { }*)arg1;
- (void)cleanup;
- (void)dealloc;
- (void)decrementInit;
- (void)decrementPrewarmCountAndStopAudio:(bool)arg1 stopHaptics:(bool)arg2;
- (void)decrementRunningCountAndStopAudio:(bool)arg1 stopHaptics:(bool)arg2;
- (int)doPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)doReleaseClientResources:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (int)doStartRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)doStopPrewarm:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)doStopRunning:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)doStopRunningForInterrupt:(struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<ClientEntry> { struct ClientEntry {} *x1; struct __shared_weak_count {} *x2; })entryWithID:(unsigned long long)arg1;
- (unsigned long long)getChannelID;
- (void)incrementChannelID;
- (bool)incrementInit:(id*)arg1;
- (void)incrementPrewarmCountForAudio:(bool)arg1 haptics:(bool)arg2;
- (void)incrementRunningCountForAudio:(bool)arg1 haptics:(bool)arg2;
- (id)init;
- (unsigned long long)initCount;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (int)loadSynthPreset;
- (struct ServerManager { struct RTLocked<std::map, unsigned long, std::__1::shared_ptr<ClientEntry> > { struct map<unsigned long, std::__1::shared_ptr<ClientEntry>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::shared_ptr<ClientEntry> >, std::__1::less<unsigned long>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)manager;
- (int)playVibePattern:(struct __CFDictionary { }*)arg1 gain:(float)arg2 synchronizer:(struct SSPlayerSynchronizer { }*)arg3 flags:(unsigned int)arg4 atTime:(double)arg5 completionHandler:(id /* block */)arg6;
- (void)removeListener:(id)arg1 withAudioSessionID:(unsigned int)arg2;
- (void)removeProcessEntry:(unsigned long long)arg1;
- (bool)setupSSSClient;
- (int)startPrewarm;
- (int)stopPrewarm;

@end
