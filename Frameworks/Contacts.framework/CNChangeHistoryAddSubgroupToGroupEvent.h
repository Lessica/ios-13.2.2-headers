/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryAddSubgroupToGroupEvent : CNChangeHistoryEvent {
    CNGroup * _group;
    CNGroup * _subgroup;
}

@property (nonatomic, readonly) CNGroup *group;
@property (nonatomic, readonly) CNGroup *subgroup;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubgroup:(id)arg1 group:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)subgroup;

@end
