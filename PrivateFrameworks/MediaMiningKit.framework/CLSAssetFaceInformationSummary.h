/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSAssetFaceInformationSummary : NSObject {
    double  _averageFaceQuality;
    double  _averageFaceQualityOfVerifiedPersons;
    unsigned short  _numberOfFaces;
    unsigned short  _numberOfFacesOfVerifiedPersons;
    unsigned short  _numberOfGoodFaces;
    unsigned short  _numberOfGoodFacesOfVerifiedPersons;
}

@property (nonatomic, readonly) double averageFaceQuality;
@property (nonatomic, readonly) double averageFaceQualityOfVerifiedPersons;
@property (nonatomic, readonly) unsigned short numberOfFaces;
@property (nonatomic, readonly) unsigned short numberOfFacesOfVerifiedPersons;
@property (nonatomic, readonly) unsigned short numberOfGoodFaces;
@property (nonatomic, readonly) unsigned short numberOfGoodFacesOfVerifiedPersons;

- (double)averageFaceQuality;
- (double)averageFaceQualityOfVerifiedPersons;
- (id)initWithNumberOfFaces:(unsigned long long)arg1 numberOfFacesOfVerifiedPersons:(unsigned long long)arg2 numberOfGoodFaces:(unsigned long long)arg3 numberOfGoodFacesOfVerifiedPersons:(unsigned long long)arg4 averageFaceQuality:(double)arg5 averageFaceQualityOfVerifiedPersons:(double)arg6;
- (unsigned short)numberOfFaces;
- (unsigned short)numberOfFacesOfVerifiedPersons;
- (unsigned short)numberOfGoodFaces;
- (unsigned short)numberOfGoodFacesOfVerifiedPersons;

@end