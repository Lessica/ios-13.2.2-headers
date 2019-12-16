/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPersonRelationshipAnalyzerProperties : NSObject {
    double  _calendarEventAttendanceRatio;
    double  _childScore;
    double  _coworkerScore;
    double  _familyHolidayAttendanceRatio;
    double  _familyScore;
    double  _friendNightOutAttendanceRatio;
    double  _friendScore;
    bool  _hasAnniversaryDate;
    bool  _hasParentContactName;
    bool  _hasSameFamilyNameAsMePerson;
    bool  _isTopPerson;
    bool  _isTopTwoPersonSocialGroup;
    double  _momentsAtWorkAppearancesRatio;
    unsigned long long  _numberOfLoveEmojisExchanged;
    unsigned long long  _numberOfMomentsAtHome;
    double  _oneOnOneTripAttendanceRatio;
    double  _parentScore;
    double  _partnerScore;
    bool  _personAgeDifferentThanMeNode;
    bool  _personOldEnoughToBeMeNodeParentOrGrandparent;
    bool  _personYoungEnoughToBeMeNodeChild;
    double  _tripAttendanceRatio;
    double  _weekendAppearanceRatio;
}

@property (nonatomic) double calendarEventAttendanceRatio;
@property (nonatomic, readonly) double childScore;
@property (nonatomic, readonly) double coworkerScore;
@property (nonatomic) double familyHolidayAttendanceRatio;
@property (nonatomic, readonly) double familyScore;
@property (nonatomic) double friendNightOutAttendanceRatio;
@property (nonatomic, readonly) double friendScore;
@property (nonatomic) bool hasAnniversaryDate;
@property (nonatomic) bool hasParentContactName;
@property (nonatomic) bool hasSameFamilyNameAsMePerson;
@property (nonatomic) bool isTopPerson;
@property (nonatomic) bool isTopTwoPersonSocialGroup;
@property (nonatomic) double momentsAtWorkAppearancesRatio;
@property (nonatomic) unsigned long long numberOfLoveEmojisExchanged;
@property (nonatomic) unsigned long long numberOfMomentsAtHome;
@property (nonatomic) double oneOnOneTripAttendanceRatio;
@property (nonatomic, readonly) double parentScore;
@property (nonatomic, readonly) double partnerScore;
@property (nonatomic) bool personAgeDifferentThanMeNode;
@property (nonatomic) bool personOldEnoughToBeMeNodeParentOrGrandparent;
@property (nonatomic) bool personYoungEnoughToBeMeNodeChild;
@property (nonatomic) double tripAttendanceRatio;
@property (nonatomic) double weekendAppearanceRatio;

- (double)calendarEventAttendanceRatio;
- (double)childScore;
- (double)coworkerScore;
- (id)description;
- (id)edgeProperties;
- (double)familyHolidayAttendanceRatio;
- (double)familyScore;
- (double)friendNightOutAttendanceRatio;
- (double)friendScore;
- (bool)hasAnniversaryDate;
- (bool)hasParentContactName;
- (bool)hasSameFamilyNameAsMePerson;
- (bool)isTopPerson;
- (bool)isTopTwoPersonSocialGroup;
- (double)momentsAtWorkAppearancesRatio;
- (unsigned long long)numberOfLoveEmojisExchanged;
- (unsigned long long)numberOfMomentsAtHome;
- (double)oneOnOneTripAttendanceRatio;
- (double)parentScore;
- (double)partnerScore;
- (void)penalizePersonAgeCategoryDifferentThanMeNode;
- (bool)personAgeDifferentThanMeNode;
- (bool)personOldEnoughToBeMeNodeParentOrGrandparent;
- (bool)personYoungEnoughToBeMeNodeChild;
- (void)registerAnniversaryDate;
- (void)registerAttendance:(unsigned long long)arg1 amongFamilyHolidays:(unsigned long long)arg2;
- (void)registerAttendance:(unsigned long long)arg1 amongWorkCalendarEvents:(unsigned long long)arg2;
- (void)registerNumberOfExchangedLoveEmojis:(unsigned long long)arg1 amongExchangedLoveEmojis:(unsigned long long)arg2;
- (void)registerNumberOfMomentsAtHome:(unsigned long long)arg1 amongMomentsAtHome:(unsigned long long)arg2;
- (void)registerNumberOfMomentsAtWork:(unsigned long long)arg1 amongMomentsAtWork:(unsigned long long)arg2;
- (void)registerNumberOfNightsOut:(unsigned long long)arg1 amongNightsOut:(unsigned long long)arg2;
- (void)registerNumberOfTrips:(unsigned long long)arg1 withTripsScore:(double)arg2 amongTrips:(unsigned long long)arg3;
- (void)registerNumberOfWeekendMoments:(unsigned long long)arg1 amongWeekends:(unsigned long long)arg2;
- (void)registerOneOnOneTripAppearance:(unsigned long long)arg1 amongOneOnOneTrips:(unsigned long long)arg2;
- (void)registerParentContactName;
- (void)registerPersonOldEnoughToBeMeNodeParentOrMyGrandparent;
- (void)registerPersonYoungEnoughToBeMeNodeChild;
- (void)registerSameFamilyNameAsMePerson;
- (void)registerTopPersonAmongTopPeople:(unsigned long long)arg1;
- (void)registerTopTwoPersonSocialGroup;
- (void)setCalendarEventAttendanceRatio:(double)arg1;
- (void)setFamilyHolidayAttendanceRatio:(double)arg1;
- (void)setFriendNightOutAttendanceRatio:(double)arg1;
- (void)setHasAnniversaryDate:(bool)arg1;
- (void)setHasParentContactName:(bool)arg1;
- (void)setHasSameFamilyNameAsMePerson:(bool)arg1;
- (void)setIsTopPerson:(bool)arg1;
- (void)setIsTopTwoPersonSocialGroup:(bool)arg1;
- (void)setMomentsAtWorkAppearancesRatio:(double)arg1;
- (void)setNumberOfLoveEmojisExchanged:(unsigned long long)arg1;
- (void)setNumberOfMomentsAtHome:(unsigned long long)arg1;
- (void)setOneOnOneTripAttendanceRatio:(double)arg1;
- (void)setPersonAgeDifferentThanMeNode:(bool)arg1;
- (void)setPersonOldEnoughToBeMeNodeParentOrGrandparent:(bool)arg1;
- (void)setPersonYoungEnoughToBeMeNodeChild:(bool)arg1;
- (void)setTripAttendanceRatio:(double)arg1;
- (void)setWeekendAppearanceRatio:(double)arg1;
- (double)tripAttendanceRatio;
- (double)weekendAppearanceRatio;

@end
