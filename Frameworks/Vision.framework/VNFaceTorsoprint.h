/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceTorsoprint : VNEspressoModelImageprint {
    VNFaceprint * _faceprint;
    VNTorsoprint * _torsoprint;
}

@property (nonatomic, readonly) VNFaceprint *faceprint;
@property (nonatomic, readonly) VNTorsoprint *torsoprint;
@property (getter=isValidTorsoprint, nonatomic, readonly) bool validTorsoprint;

+ (id)codingTypesToCodingKeys;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)faceprint;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 validTorsoprint:(bool)arg6 requestRevision:(unsigned long long)arg7;
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithState:(id)arg1 error:(id*)arg2;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isValidTorsoprint;
- (id)serializeStateAndReturnError:(id*)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (id)torsoprint;

@end
