/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

@interface TMLSize : NSObject <NSCopying, TMLSizeJSExports> {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) double width;

+ (void)initializeJSContext:(id)arg1;

- (id)CGSizeValue;
- (id)asRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extend:(double)arg1 :(double)arg2;
- (double)height;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)max:(double)arg1 :(double)arg2;
- (id)min:(double)arg1 :(double)arg2;
- (id)scale:(double)arg1 :(double)arg2;
- (struct CGSize { double x1; double x2; })size;
- (double)width;

@end
