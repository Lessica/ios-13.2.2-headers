/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFPDFTextContainer : NSObject {
    NSMutableString * _string;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic, retain) NSMutableString *string;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

- (void).cxx_destruct;
- (void)addOperator:(id)arg1;
- (long long)compareTransformToTextContainer:(id)arg1;
- (id)init;
- (void)setString:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)string;
- (id)text;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
