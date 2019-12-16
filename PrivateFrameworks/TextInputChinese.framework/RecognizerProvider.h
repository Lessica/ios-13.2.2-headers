/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

@interface RecognizerProvider : NSObject {
    NSLocale * _recognitionLanguage;
    CHRecognizer * _recognizer;
    id /* block */  _recognizerDidLoadBlock;
}

@property (readonly) NSLocale *recognitionLanguage;
@property (readonly) CHRecognizer *recognizer;
@property (copy) id /* block */ recognizerDidLoadBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRecognitionLanguage:(id)arg1;
- (void)provideRecognizerToBlock:(id /* block */)arg1;
- (id)recognitionLanguage;
- (id)recognizer;
- (id /* block */)recognizerDidLoadBlock;
- (void)setRecognizerDidLoadBlock:(id /* block */)arg1;
- (void)unloadRecognizer;

@end
