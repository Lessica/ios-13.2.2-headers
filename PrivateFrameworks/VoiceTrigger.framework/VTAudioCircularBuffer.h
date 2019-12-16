/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTAudioCircularBuffer : NSObject {
    unsigned long long  _bufferLength;
    NSObject<OS_dispatch_queue> * _queue;
    struct unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > > { 
        struct __compressed_pair<voicetrigger::VTAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short> > > { 
            struct VTAudioCircularBufferImpl<unsigned short> {} *__value_; 
        } __ptr_; 
    }  _vtAudioCircularBufferImpl;
}

@property (nonatomic) unsigned long long bufferLength;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSamples:(void*)arg1 numSamples:(unsigned long long)arg2;
- (unsigned long long)bufferLength;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 withNumSamplesCopiedIn:(unsigned long long*)arg3;
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(unsigned long long)arg2 samplingRate:(unsigned long long)arg3;
- (id)queue;
- (void)reset;
- (unsigned long long)sampleCount;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
- (void)setBufferLength:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;

@end
