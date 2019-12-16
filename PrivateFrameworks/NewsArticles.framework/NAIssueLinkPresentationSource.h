/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
 */

@interface NAIssueLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource> {
    LPImage * _linkPresentationImage;
    NSString * _subtitle;
    NSString * _title;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LPImage *linkPresentationImage;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithIssue:(id)arg1;
- (id)linkPresentationImage;
- (id)linkPresentationImageFromIssue:(id)arg1;
- (id)subtitle;
- (id)subtitleFromIssue:(id)arg1;
- (id)title;
- (id)titleFromIssue:(id)arg1;
- (id)url;
- (id)urlFromIssue:(id)arg1;

@end
