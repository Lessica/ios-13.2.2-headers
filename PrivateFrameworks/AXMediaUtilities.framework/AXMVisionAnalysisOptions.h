/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding> {
    long long  _clientID;
    bool  _detectAesthetics;
    bool  _detectCaptions;
    bool  _detectFaceAttributes;
    bool  _detectFaceExpressions;
    bool  _detectFaceLandmarks;
    bool  _detectFaceNames;
    bool  _detectFacePose;
    bool  _detectFaceRectangles;
    bool  _detectHorizon;
    bool  _detectIconClass;
    bool  _detectModelClassifications;
    bool  _detectProminentObjects;
    bool  _detectRectangles;
    bool  _detectScenes;
    bool  _detectText;
    bool  _detectTraits;
    NSArray * _ignoredLayerContextIDs;
    bool  _includeImageInResult;
    AXMTextDetectionOptions * _textDetectionOptions;
}

@property (nonatomic) long long clientID;
@property (nonatomic) bool detectAesthetics;
@property (nonatomic) bool detectCaptions;
@property (nonatomic) bool detectFaceAttributes;
@property (nonatomic) bool detectFaceExpressions;
@property (nonatomic) bool detectFaceLandmarks;
@property (nonatomic) bool detectFaceNames;
@property (nonatomic) bool detectFacePose;
@property (nonatomic) bool detectFaceRectangles;
@property (nonatomic, readonly) bool detectFaces;
@property (nonatomic) bool detectHorizon;
@property (nonatomic) bool detectIconClass;
@property (nonatomic) bool detectModelClassifications;
@property (nonatomic) bool detectProminentObjects;
@property (nonatomic) bool detectRectangles;
@property (nonatomic) bool detectScenes;
@property (nonatomic) bool detectText;
@property (nonatomic) bool detectTraits;
@property (nonatomic, readonly) bool hasDetectionsEnabled;
@property (nonatomic, retain) NSArray *ignoredLayerContextIDs;
@property (nonatomic) bool includeImageInResult;
@property (nonatomic, retain) AXMTextDetectionOptions *textDetectionOptions;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;
+ (id)voiceOverOptions;

- (void).cxx_destruct;
- (long long)clientID;
- (id)description;
- (bool)detectAesthetics;
- (bool)detectCaptions;
- (bool)detectFaceAttributes;
- (bool)detectFaceExpressions;
- (bool)detectFaceLandmarks;
- (bool)detectFaceNames;
- (bool)detectFacePose;
- (bool)detectFaceRectangles;
- (bool)detectFaces;
- (bool)detectHorizon;
- (bool)detectIconClass;
- (bool)detectModelClassifications;
- (bool)detectProminentObjects;
- (bool)detectRectangles;
- (bool)detectScenes;
- (bool)detectText;
- (bool)detectTraits;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDetectionsEnabled;
- (id)ignoredLayerContextIDs;
- (bool)includeImageInResult;
- (id)initWithCoder:(id)arg1;
- (void)setClientID:(long long)arg1;
- (void)setDetectAesthetics:(bool)arg1;
- (void)setDetectCaptions:(bool)arg1;
- (void)setDetectFaceAttributes:(bool)arg1;
- (void)setDetectFaceExpressions:(bool)arg1;
- (void)setDetectFaceLandmarks:(bool)arg1;
- (void)setDetectFaceNames:(bool)arg1;
- (void)setDetectFacePose:(bool)arg1;
- (void)setDetectFaceRectangles:(bool)arg1;
- (void)setDetectHorizon:(bool)arg1;
- (void)setDetectIconClass:(bool)arg1;
- (void)setDetectModelClassifications:(bool)arg1;
- (void)setDetectProminentObjects:(bool)arg1;
- (void)setDetectRectangles:(bool)arg1;
- (void)setDetectScenes:(bool)arg1;
- (void)setDetectText:(bool)arg1;
- (void)setDetectTraits:(bool)arg1;
- (void)setIgnoredLayerContextIDs:(id)arg1;
- (void)setIncludeImageInResult:(bool)arg1;
- (void)setTextDetectionOptions:(id)arg1;
- (id)textDetectionOptions;

@end
