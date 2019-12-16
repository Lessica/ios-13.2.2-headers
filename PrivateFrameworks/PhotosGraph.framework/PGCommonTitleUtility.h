/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGCommonTitleUtility : NSObject

+ (id)_closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(id /* block */)arg3 reverse:(bool)arg4;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_closestSpaceMatchFromMatches:(id)arg1 withUsedNameRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 searchForward:(bool)arg3;
+ (id)_locationLabelForDimension:(unsigned long long)arg1;
+ (id)addressNodesFromMomentNodes:(id)arg1;
+ (id)bestAddressNodeForMomentNodes:(id)arg1;
+ (id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(id /* block */)arg3;
+ (id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 reverse:(bool)arg3;
+ (bool)containsCelebrationForDateNodes:(id)arg1 holidayName:(id*)arg2;
+ (id)dateNodesFromMomentNodes:(id)arg1;
+ (unsigned long long)dimensionForLabel:(id)arg1;
+ (id)holidayNameForDateNodes:(id)arg1;
+ (bool)isLargeCountryForAddressNode:(id)arg1;
+ (bool)locationIsInSupersetCategoryForAddressNode:(id)arg1 dimension:(unsigned long long)arg2;
+ (bool)locationIsInSupersetCategoryForLocationNode:(id)arg1;
+ (id)locationNodeWithDimension:(unsigned long long)arg1 rootNode:(id)arg2;
+ (void)startAndEndDateNodeFromDateNodes:(id)arg1 startDateNode:(id*)arg2 endDateNode:(id*)arg3;
+ (id)titleWithLineBreakForTitle:(id)arg1;
+ (id)titleWithLineBreakForTitle:(id)arg1 andUsedNames:(id)arg2;
+ (id)titleWithNoLineBreakSpaceForTitle:(id)arg1 andUsedNames:(id)arg2;

@end
