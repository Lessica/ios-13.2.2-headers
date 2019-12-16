/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

@interface TIWordSearchChinesePhonetic : TIWordSearch {
    id /* block */  _contactObserver;
    bool  _fuzzyPinyinEnabled;
    NSArray * _fuzzyPinyinPairs;
    int  _shuangpinType;
    bool  _tenKeyPinyinEnabled;
}

@property (nonatomic) bool fuzzyPinyinEnabled;
@property (nonatomic, retain) NSArray *fuzzyPinyinPairs;
@property (nonatomic) int shuangpinType;
@property (nonatomic) bool tenKeyPinyinEnabled;

+ (id)pinyinCharacterSetWithTones;

- (void).cxx_destruct;
- (void)addContact:(id)arg1 toVocabulary:(void*)arg2 toReadingPairs:(id)arg3;
- (id)candidatesCacheKeyForOperation:(id)arg1;
- (void)clearCacheForInputString:(id)arg1 keyboardInput:(id)arg2 selectedDisambiguationCandidateIndex:(unsigned long long)arg3;
- (void)clearObservers;
- (void)dealloc;
- (bool)fuzzyPinyinEnabled;
- (id)fuzzyPinyinPairs;
- (unsigned long long)mecabraAnalysisOptionsWithAutocorrectionEnabled:(bool)arg1 firstSyllableLocked:(bool)arg2 reanalysisMode:(bool)arg3 hardwareKeyboardMode:(bool)arg4 predictionEnabled:(bool)arg5;
- (int)mecabraInputMethodType;
- (void)setFuzzyPinyinEnabled:(bool)arg1;
- (void)setFuzzyPinyinPairs:(id)arg1;
- (void)setShuangpinType:(int)arg1;
- (void)setTenKeyPinyinEnabled:(bool)arg1;
- (int)shuangpinType;
- (bool)tenKeyPinyinEnabled;
- (id)transLiterateReading:(id)arg1 withName:(id)arg2;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (void)updateAddressBook;
- (void)updateFuzzyPinyinSettings;
- (void)updateMecabraState;
- (void)updateShuangpinTypeWithReanalysisMode:(bool)arg1;

@end
