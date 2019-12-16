/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {
    FCFeedDescriptor * _L2FeedDescriptor;
    FCColorGradient * _backgroundGradient;
    FCColor * _cardBackgroundColor;
    NSDate * _creationDate;
    NSString * _ctaText;
    FCColorGradient * _darkStyleBackgroundGradient;
    FCColor * _darkStyleCardBackgroundColor;
    FCColorGradient * _darkStyleSauceGradient;
    FCColor * _darkStyleTitleColor;
    NTPBDiscoverMoreVideosInfo * _discoverMoreVideosInfo;
    FCFeedEdition * _edition;
    NSArray * _elements;
    NSString * _eyebrowText;
    long long  _groupType;
    NSArray * _headlines;
    NSString * _identifier;
    bool  _isFirstFromEdition;
    NSArray * _issueIDs;
    <FCForYouMagazineFeedGroup> * _magazineGroup;
    unsigned long long  _mergeID;
    unsigned long long  _options;
    FCColorGradient * _sauceGradient;
    NSString * _sourceIdentifier;
    NSString * _subtitle;
    NSString * _title;
    FCColor * _titleColor;
    NSArray * _videoPlaylistHeadlines;
}

@property (nonatomic, readonly, copy) FCFeedDescriptor *L2FeedDescriptor;
@property (nonatomic, readonly, copy) FCColorGradient *backgroundGradient;
@property (nonatomic, readonly, copy) NSString *backingTagID;
@property (nonatomic, readonly) bool canBeExtended;
@property (nonatomic, readonly, copy) FCColor *cardBackgroundColor;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *ctaText;
@property (nonatomic, readonly, copy) FCColorGradient *darkStyleBackgroundGradient;
@property (nonatomic, readonly, copy) FCColor *darkStyleCardBackgroundColor;
@property (nonatomic, readonly, copy) FCColorGradient *darkStyleSauceGradient;
@property (nonatomic, readonly, copy) FCColor *darkStyleTitleColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, readonly, copy) FCFeedEdition *edition;
@property (nonatomic, readonly, copy) NSArray *elements;
@property (nonatomic, readonly, copy) NSString *eyebrowText;
@property (nonatomic, readonly) long long feedElementType;
@property (nonatomic, readonly) long long groupType;
@property (nonatomic, readonly) bool hasStrictHeadlineOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *headlines;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isFirstFromEdition;
@property (nonatomic, readonly, copy) NSArray *issueIDs;
@property (nonatomic, readonly) <FCForYouMagazineFeedGroup> *magazineGroup;
@property (nonatomic, readonly) unsigned long long mergeID;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) FCColorGradient *sauceGradient;
@property (nonatomic, readonly) bool shouldPresentCollapsed;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) FCColor *titleColor;
@property (nonatomic, readonly, copy) NSArray *videoPlaylistHeadlines;

+ (id)_pbHeadlinesFromHeadlines:(id)arg1 sharedStringIndex:(id)arg2;
+ (id)pbGroupFromGroup:(id)arg1 sharedStringIndex:(id)arg2;

- (void).cxx_destruct;
- (id)L2FeedDescriptor;
- (id)backgroundGradient;
- (id)backingTagID;
- (bool)canBeExtended;
- (id)cardBackgroundColor;
- (id)copyWithEdition:(id)arg1 isFirst:(bool)arg2;
- (id)copyWithElements:(id)arg1;
- (id)copyWithMergeID:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)ctaText;
- (id)darkStyleBackgroundGradient;
- (id)darkStyleCardBackgroundColor;
- (id)darkStyleSauceGradient;
- (id)darkStyleTitleColor;
- (id)description;
- (id)discoverMoreVideosInfo;
- (id)edition;
- (id)elements;
- (id)eyebrowText;
- (long long)feedElementType;
- (long long)groupType;
- (bool)hasStrictHeadlineOrder;
- (unsigned long long)hash;
- (id)headlines;
- (id)identifier;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 elements:(id)arg3 options:(unsigned long long)arg4;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 magazineGroup:(id)arg3;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 L2FeedDescriptor:(id)arg4 issueIDs:(id)arg5;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 eyebrowText:(id)arg5 ctaText:(id)arg6 titleColor:(id)arg7 darkStyleTitleColor:(id)arg8 sauceGradient:(id)arg9 darkStyleSauceGradient:(id)arg10 backgroundGradient:(id)arg11 darkStyleBackgroundGradient:(id)arg12 cardBackgroundColor:(id)arg13 darkStyleCardBackgroundColor:(id)arg14 elements:(id)arg15 options:(unsigned long long)arg16;
- (id)initWithGroupType:(long long)arg1 sourceIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleColor:(id)arg5 darkStyleTitleColor:(id)arg6 backgroundGradient:(id)arg7 darkStyleBackgroundGradient:(id)arg8 discoverMoreVideosInfo:(id)arg9 videoPlaylistHeadlines:(id)arg10 L2FeedDescriptor:(id)arg11 elements:(id)arg12 options:(unsigned long long)arg13;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 creationDate:(id)arg4 title:(id)arg5 subtitle:(id)arg6 eyebrowText:(id)arg7 ctaText:(id)arg8 titleColor:(id)arg9 darkStyleTitleColor:(id)arg10 cardBackgroundColor:(id)arg11 darkStyleCardBackgroundColor:(id)arg12 sauceGradient:(id)arg13 darkStyleSauceGradient:(id)arg14 backgroundGradient:(id)arg15 darkStyleBackgroundGradient:(id)arg16 discoverMoreVideosInfo:(id)arg17 videoPlaylistHeadlines:(id)arg18 L2FeedDescriptor:(id)arg19 edition:(id)arg20 isFirstFromEdition:(bool)arg21 elements:(id)arg22 issueIDs:(id)arg23 magazineGroup:(id)arg24 options:(unsigned long long)arg25 mergeID:(unsigned long long)arg26;
- (id)initWithIdentifier:(id)arg1 groupType:(long long)arg2 sourceIdentifier:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleColor:(id)arg6 darkStyleTitleColor:(id)arg7 backgroundGradient:(id)arg8 darkStyleBackgroundGradient:(id)arg9 discoverMoreVideosInfo:(id)arg10 videoPlaylistHeadlines:(id)arg11 L2FeedDescriptor:(id)arg12 elements:(id)arg13 options:(unsigned long long)arg14;
- (bool)isEqual:(id)arg1;
- (bool)isFirstFromEdition;
- (bool)isGap;
- (id)issueIDs;
- (id)magazineGroup;
- (unsigned long long)mergeID;
- (unsigned long long)options;
- (id)sauceGradient;
- (bool)shouldPresentCollapsed;
- (id)sourceIdentifier;
- (id)subtitle;
- (id)title;
- (id)titleColor;
- (id)videoPlaylistHeadlines;

@end
