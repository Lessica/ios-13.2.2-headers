/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSEvent : ICSCalendarItem

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) NSArray *conferences;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property bool forcedAllDay;
@property (readonly) bool isAllDay;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property unsigned long long sequence;
@property int status;
@property (retain) NSString *summary;
@property (nonatomic) int transp;
@property (retain) NSString *uid;
@property (retain) NSURL *url;
@property (nonatomic) bool x_apple_dontschedule;
@property (retain) NSString *x_apple_dropbox;
@property (retain) ICSStructuredLocation *x_apple_end_location;
@property (nonatomic) int x_apple_ews_busystatus;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property bool x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property bool x_apple_ignore_on_restore;
@property (nonatomic) bool x_apple_needs_reply;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (retain) ICSTravelAdvisoryBehavior *x_apple_travel_advisory_behavior;
@property (retain) ICSTravelDuration *x_apple_travel_duration;
@property (retain) ICSStructuredLocation *x_apple_travel_start;
@property (nonatomic, retain) NSArray *x_calendarserver_attendee_comment;
@property (nonatomic, retain) NSString *x_calendarserver_private_comment;
@property (nonatomic) bool x_wr_itipalreadysent;
@property (nonatomic) bool x_wr_itipstatusattendeeml;
@property (nonatomic) bool x_wr_itipstatusml;
@property (nonatomic) bool x_wr_rsvpneeded;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

+ (id)name;

- (void)fixAttendeeComments;
- (void)fixComponent;
- (bool)isDefaultAlarmDeleted;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)setTransp:(int)arg1;
- (void)setX_apple_dontschedule:(bool)arg1;
- (void)setX_apple_ews_busystatus:(int)arg1;
- (void)setX_apple_needs_reply:(bool)arg1;
- (void)setX_calendarserver_attendee_comment:(id)arg1;
- (void)setX_calendarserver_private_comment:(id)arg1;
- (void)setX_wr_itipalreadysent:(bool)arg1;
- (void)setX_wr_itipstatusattendeeml:(bool)arg1;
- (void)setX_wr_itipstatusml:(bool)arg1;
- (void)setX_wr_rsvpneeded:(bool)arg1;
- (int)transp;
- (bool)validate:(id*)arg1;
- (bool)x_apple_dontschedule;
- (int)x_apple_ews_busystatus;
- (bool)x_apple_needs_reply;
- (id)x_calendarserver_attendee_comment;
- (id)x_calendarserver_private_comment;
- (bool)x_wr_itipalreadysent;
- (bool)x_wr_itipstatusattendeeml;
- (bool)x_wr_itipstatusml;
- (bool)x_wr_rsvpneeded;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (id)attendeeEmailAddresses;
- (id)entityWithParentEntity:(id)arg1 withCalendar:(id)arg2;
- (id)entityWithParentEntity:(id)arg1 withCalendar:(id)arg2 withCorrectnessFlag:(bool*)arg3;
- (id)firstValueOfPropertyForName:(id)arg1;
- (int)method;

@end