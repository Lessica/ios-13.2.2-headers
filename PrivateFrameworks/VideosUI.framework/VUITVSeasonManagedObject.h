/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUITVSeasonManagedObject : NSManagedObject

@property (nonatomic, copy) NSString *canonicalID;
@property (nonatomic, retain) NSSet *episodes;
@property (nonatomic, copy) NSNumber *seasonNumber;
@property (nonatomic, retain) VUITVSeriesManagedObject *series;
@property (nonatomic, copy) NSString *title;

+ (id)fetchRequest;

@end
