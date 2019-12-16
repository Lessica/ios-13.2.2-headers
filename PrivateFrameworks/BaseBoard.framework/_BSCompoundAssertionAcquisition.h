/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSCompoundAssertionAcquisition : NSObject <BSInvalidatable> {
    BSCompoundAssertion * _assertion;
    id  _context;
    struct atomic_flag { 
        bool _Value; 
    }  _invalid;
    NSString * _reason;
}

@property (nonatomic) BSCompoundAssertion *assertion;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assertion;
- (id)context;
- (void)dealloc;
- (void)invalidate;
- (id)reason;
- (void)setAssertion:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setReason:(id)arg1;

@end