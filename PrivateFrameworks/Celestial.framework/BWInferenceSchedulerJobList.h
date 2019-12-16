/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSchedulerJobList : NSObject <NSFastEnumeration> {
    unsigned long long  _jobCount;
    NSMapTable * _jobIndexByProvider;
    unsigned long long  _mutations;
    struct { id x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; } * _orderedJobs;
}

@property (readonly) unsigned long long count;

- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (struct { id x1; unsigned int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; }*)jobAtIndex:(unsigned long long)arg1;

@end
