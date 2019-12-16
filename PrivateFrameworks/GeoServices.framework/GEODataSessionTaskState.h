/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSessionTaskState : GEOCapturedState {
    long long  _completedSubtaskPointer;
    double  _endTime;
    double  _now;
    unsigned long long  _outgoingPayloadSize;
    long long  _rawPointer;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _requestKind;
    double  _startTime;
    unsigned int  _taskIdentifier;
    long long  _urlTaskPointer;
}

+ (const char *)decoderType;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end