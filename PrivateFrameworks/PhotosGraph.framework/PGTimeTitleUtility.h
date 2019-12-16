/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGTimeTitleUtility : NSObject

+ (id)_commonLocationLabelForLocationNodes:(id)arg1;
+ (unsigned long long)_dateIntervalFormatterTypeWithEventNodes:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)_dateNodesFromEventNodes:(id)arg1 eventsStartDate:(id*)arg2 eventsEndDate:(id*)arg3;
+ (void)_enumerateNeighborNodesOfEventNodes:(id)arg1 usingBlock:(id /* block */)arg2;
+ (bool)_eventNodes:(id)arg1 coverCompleteTimeWithEdgeLabel:(id)arg2;
+ (bool)_eventNodesCoverCompleteMonth:(id)arg1;
+ (bool)_eventNodesCoverCompleteYear:(id)arg1;
+ (bool)_hasReachedNumberVisitsPerMonth:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5;
+ (bool)_hasReachedNumberVisitsPerYear:(unsigned long long)arg1 inEvents:(id)arg2 withLocationNodes:(id)arg3 startDateNode:(id)arg4 endDateNode:(id)arg5;
+ (id)_locationNodesForTimeTitleFromLocationNodes:(id)arg1;
+ (id)_numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2;
+ (id)_significantDateNodesFromEventNodes:(id)arg1 dateFormatterType:(unsigned long long)arg2;
+ (id)_splitTimeTitleWithLocalStartDate:(id)arg1 endDate:(id)arg2 startDateNode:(id)arg3 endDateNode:(id)arg4 allowedFormats:(unsigned long long)arg5 locale:(id)arg6;
+ (bool)_yearIsNeededForDisplayingDate:(id)arg1;
+ (id)babyGrowingUpTimeTitleWithEventNodes:(id)arg1;
+ (id)numberOfYearsAgoWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 useOrdinal:(bool)arg3;
+ (id)peopleTimeTitleWithEventNodes:(id)arg1;
+ (id)peopleTimeTitleWithEventNodes:(id)arg1 requireMultipleYears:(bool)arg2;
+ (id)splitTimeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)splitTimeTitleWithOptions:(id)arg1;
+ (id)timeTitleWithDateInterval:(id)arg1 allowedFormats:(unsigned long long)arg2;
+ (id)timeTitleWithOptions:(id)arg1;
+ (bool)yearIsNeededForDisplayingDate:(id)arg1;

@end
