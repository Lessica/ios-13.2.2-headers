/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

@interface HapticDictionaryReader : NSObject {
    unsigned long long  _urlIndex;
}

- (id)parseEvent:(id)arg1;
- (id)parseEventParams:(id)arg1;
- (bool)parseEventsAndParameters:(id)arg1 reply:(id /* block */)arg2;
- (id)parseParam:(id)arg1;
- (id)parseParamCurve:(id)arg1;
- (id)parseParamCurveControlPoints:(id)arg1;
- (id)scanForEmbeddedURLs:(id)arg1;
- (bool)verifyVersion:(id)arg1;

@end
