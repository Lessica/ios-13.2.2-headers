/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDGradientFill : EDFill {
    double  mDegree;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFocusRect;
    NSMutableDictionary * mStops;
    int  mType;
}

+ (id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 stops:(id)arg4 resources:(id)arg5;
+ (id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;

- (void).cxx_destruct;
- (id)colorForStopAtPosition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)degree;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })focusRect;
- (unsigned long long)hash;
- (id)initWithResources:(id)arg1;
- (id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 stops:(id)arg4 resources:(id)arg5;
- (id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToGradientFill:(id)arg1;
- (void)setDegree:(double)arg1;
- (void)setFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStopColor:(id)arg1 atPosition:(id)arg2;
- (void)setStops:(id)arg1;
- (void)setType:(int)arg1;
- (id)stops;
- (int)type;

@end
