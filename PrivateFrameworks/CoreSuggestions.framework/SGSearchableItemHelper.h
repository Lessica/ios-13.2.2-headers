/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSearchableItemHelper : NSObject

+ (id)deserializeAttributes:(id)arg1;
+ (id)deserializeAttributes:(id)arg1 andBody:(id)arg2;
+ (id)deserializeAttributesAndBody:(id)arg1;
+ (bool)mailItemIsFromSupportedAccount:(id)arg1;
+ (bool)mailItemIsInDrafts:(id)arg1;
+ (bool)mailItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (bool)mailItemIsInSent:(id)arg1;
+ (bool)mailItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (bool)mailItemIsInTrash:(id)arg1;
+ (bool)mailItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (bool)mailItemIsRecent:(id)arg1;
+ (bool)mailItemIsRecent:(id)arg1 emailHeaders:(id)arg2;
+ (bool)mailItemIsSPAM:(id)arg1;
+ (bool)mailItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (bool)mailItemIsTooBig:(id)arg1;
+ (bool)mailItemIsValid:(id)arg1;
+ (bool)mailItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (id)mailItemMessageIdHeaderValues:(id)arg1;
+ (bool)searchableItemIsEmpty:(id)arg1;
+ (bool)searchableItemIsOutgoing:(id)arg1;
+ (id)serializeAttributes:(id)arg1;
+ (id)serializeAttributesAndBody:(id)arg1;

@end
