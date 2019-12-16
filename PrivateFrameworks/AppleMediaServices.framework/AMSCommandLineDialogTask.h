/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSCommandLineDialogTask : AMSTask {
    double  _dialogPadding;
    double  _maximumDialogWidth;
    double  _minimumDialogWidth;
    AMSDialogRequest * _request;
}

@property (nonatomic) double dialogPadding;
@property (nonatomic) double maximumDialogWidth;
@property (nonatomic) double minimumDialogWidth;
@property (nonatomic, readonly) AMSDialogRequest *request;

- (void).cxx_destruct;
- (id)_createHorizontolLineWithWidth:(long long)arg1;
- (id)_createLinesFromText:(id)arg1 width:(long long)arg2;
- (id)_createText:(id)arg1 width:(long long)arg2 centered:(bool)arg3 omitLeftPipe:(bool)arg4;
- (id)_createTextfieldWithTextfield:(id)arg1 width:(long long)arg2;
- (long long)_gatherButtonInput;
- (id)_gatherTextfieldInput;
- (id)_getUserInput;
- (void)_printMessage:(id)arg1;
- (double)dialogPadding;
- (id)initWithRequest:(id)arg1;
- (double)maximumDialogWidth;
- (double)minimumDialogWidth;
- (id)present;
- (id)request;
- (void)setDialogPadding:(double)arg1;
- (void)setMaximumDialogWidth:(double)arg1;
- (void)setMinimumDialogWidth:(double)arg1;

@end
