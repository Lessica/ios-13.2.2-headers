/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SMBClientEngine.framework/SMBClientEngine
 */

@interface SMB_rq : NSObject {
    unsigned int  _onEncryptedShare;
    int  _replyError;
    unsigned short * _sr_bcount;
    id /* block */  _sr_callback;
    unsigned short  _sr_command;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _sr_credit_timesent;
    unsigned short  _sr_creditcharge;
    unsigned short * _sr_creditchargep;
    unsigned short * _sr_creditreqp;
    unsigned short  _sr_creditsrequested;
    unsigned int  _sr_extflags;
    unsigned int  _sr_flags;
    unsigned int * _sr_flagsp;
    unsigned int * _sr_lcount;
    unsigned long long  _sr_messageid;
    unsigned long long * _sr_messageidp;
    SMB_rq * _sr_next_rqp;
    unsigned int  _sr_nextcmd;
    unsigned int * _sr_nextcmdp;
    unsigned int  _sr_ntstatus;
    SMBPiston * _sr_pd;
    unsigned int  _sr_rqflags;
    unsigned long long  _sr_rqsessionid;
    char * _sr_rqsigp;
    unsigned int  _sr_rqtreeid;
    unsigned long long  _sr_rspasyncid;
    unsigned short  _sr_rspcreditsgranted;
    unsigned int  _sr_rspflags;
    unsigned int  _sr_rspnextcmd;
    unsigned int  _sr_rsppid;
    unsigned long long  _sr_rspsessionid;
    unsigned int  _sr_rsptreeid;
    struct smb_session { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10[16]; unsigned short x11; unsigned int x12; struct gss_ctx_id_t_desc_struct {} *x13; struct gss_cred_id_t_desc_struct {} *x14; struct gss_buffer_desc_struct { unsigned long long x_15_1_1; void *x_15_1_2; } x15; struct gss_buffer_desc_struct { unsigned long long x_16_1_1; void *x_16_1_2; } x16; unsigned int x17; unsigned int x18; unsigned char x19[16]; unsigned short x20; unsigned short x21; unsigned short x22[8]; char *x23; unsigned int x24; char *x25; unsigned int x26; unsigned char x27[16]; unsigned int x28; unsigned char x29[16]; unsigned int x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; char *x39; struct _opaque_pthread_mutex_t { long long x_40_1_1; BOOL x_40_1_2[56]; } x40; } * _sr_sessionp;
    unsigned int  _sr_timeout;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _sr_timesent;
    NSData * _writeData;
    unsigned int  _writeLen;
    struct { 
        struct smb_rq {} *tqe_next; 
        struct smb_rq {} **tqe_prev; 
    }  sr_link;
    struct mdchain { 
        struct piston_mbuf {} *md_top; 
        struct piston_mbuf {} *md_cur; 
        char *md_pos; 
        unsigned long long md_len; 
    }  sr_rp;
    struct mbchain { 
        struct piston_mbuf {} *mb_top; 
        struct piston_mbuf {} *mb_cur; 
        unsigned long long mb_mleft; 
        unsigned long long mb_count; 
        unsigned long long mb_len; 
    }  sr_rq;
}

@property unsigned int onEncryptedShare;
@property int replyError;
@property unsigned short*sr_bcount;
@property (copy) id /* block */ sr_callback;
@property unsigned short sr_command;
@property struct timespec { long long x1; long long x2; } sr_credit_timesent;
@property unsigned short sr_creditcharge;
@property unsigned short*sr_creditchargep;
@property unsigned short*sr_creditreqp;
@property unsigned short sr_creditsrequested;
@property unsigned int sr_extflags;
@property unsigned int sr_flags;
@property unsigned int*sr_flagsp;
@property unsigned int*sr_lcount;
@property unsigned long long sr_messageid;
@property unsigned long long*sr_messageidp;
@property (retain) SMB_rq *sr_next_rqp;
@property unsigned int sr_nextcmd;
@property unsigned int*sr_nextcmdp;
@property unsigned int sr_ntstatus;
@property (retain) SMBPiston *sr_pd;
@property unsigned int sr_rqflags;
@property unsigned long long sr_rqsessionid;
@property char *sr_rqsigp;
@property unsigned int sr_rqtreeid;
@property unsigned long long sr_rspasyncid;
@property unsigned short sr_rspcreditsgranted;
@property unsigned int sr_rspflags;
@property unsigned int sr_rspnextcmd;
@property unsigned int sr_rsppid;
@property unsigned long long sr_rspsessionid;
@property unsigned int sr_rsptreeid;
@property struct smb_session { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10[16]; unsigned short x11; unsigned int x12; struct gss_ctx_id_t_desc_struct {} *x13; struct gss_cred_id_t_desc_struct {} *x14; struct gss_buffer_desc_struct { unsigned long long x_15_1_1; void *x_15_1_2; } x15; struct gss_buffer_desc_struct { unsigned long long x_16_1_1; void *x_16_1_2; } x16; unsigned int x17; unsigned int x18; unsigned char x19[16]; unsigned short x20; unsigned short x21; unsigned short x22[8]; char *x23; unsigned int x24; char *x25; unsigned int x26; unsigned char x27[16]; unsigned int x28; unsigned char x29[16]; unsigned int x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; char *x39; struct _opaque_pthread_mutex_t { long long x_40_1_1; BOOL x_40_1_2[56]; } x40; }*sr_sessionp;
@property unsigned int sr_timeout;
@property struct timespec { long long x1; long long x2; } sr_timesent;
@property (retain) NSData *writeData;
@property unsigned int writeLen;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)onEncryptedShare;
- (int)replyError;
- (void)setOnEncryptedShare:(unsigned int)arg1;
- (void)setReplyError:(int)arg1;
- (void)setSr_bcount:(unsigned short*)arg1;
- (void)setSr_callback:(id /* block */)arg1;
- (void)setSr_command:(unsigned short)arg1;
- (void)setSr_credit_timesent:(struct timespec { long long x1; long long x2; })arg1;
- (void)setSr_creditcharge:(unsigned short)arg1;
- (void)setSr_creditchargep:(unsigned short*)arg1;
- (void)setSr_creditreqp:(unsigned short*)arg1;
- (void)setSr_creditsrequested:(unsigned short)arg1;
- (void)setSr_extflags:(unsigned int)arg1;
- (void)setSr_flags:(unsigned int)arg1;
- (void)setSr_flagsp:(unsigned int*)arg1;
- (void)setSr_lcount:(unsigned int*)arg1;
- (void)setSr_messageid:(unsigned long long)arg1;
- (void)setSr_messageidp:(unsigned long long*)arg1;
- (void)setSr_next_rqp:(id)arg1;
- (void)setSr_nextcmd:(unsigned int)arg1;
- (void)setSr_nextcmdp:(unsigned int*)arg1;
- (void)setSr_ntstatus:(unsigned int)arg1;
- (void)setSr_pd:(id)arg1;
- (void)setSr_rqflags:(unsigned int)arg1;
- (void)setSr_rqsessionid:(unsigned long long)arg1;
- (void)setSr_rqsigp:(char *)arg1;
- (void)setSr_rqtreeid:(unsigned int)arg1;
- (void)setSr_rspasyncid:(unsigned long long)arg1;
- (void)setSr_rspcreditsgranted:(unsigned short)arg1;
- (void)setSr_rspflags:(unsigned int)arg1;
- (void)setSr_rspnextcmd:(unsigned int)arg1;
- (void)setSr_rsppid:(unsigned int)arg1;
- (void)setSr_rspsessionid:(unsigned long long)arg1;
- (void)setSr_rsptreeid:(unsigned int)arg1;
- (void)setSr_sessionp:(struct smb_session { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10[16]; unsigned short x11; unsigned int x12; struct gss_ctx_id_t_desc_struct {} *x13; struct gss_cred_id_t_desc_struct {} *x14; struct gss_buffer_desc_struct { unsigned long long x_15_1_1; void *x_15_1_2; } x15; struct gss_buffer_desc_struct { unsigned long long x_16_1_1; void *x_16_1_2; } x16; unsigned int x17; unsigned int x18; unsigned char x19[16]; unsigned short x20; unsigned short x21; unsigned short x22[8]; char *x23; unsigned int x24; char *x25; unsigned int x26; unsigned char x27[16]; unsigned int x28; unsigned char x29[16]; unsigned int x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; char *x39; struct _opaque_pthread_mutex_t { long long x_40_1_1; BOOL x_40_1_2[56]; } x40; }*)arg1;
- (void)setSr_timeout:(unsigned int)arg1;
- (void)setSr_timesent:(struct timespec { long long x1; long long x2; })arg1;
- (void)setWriteData:(id)arg1;
- (void)setWriteLen:(unsigned int)arg1;
- (void)smb_rq_callback:(int)arg1;
- (void)smb_rq_done;
- (struct mdchain { struct piston_mbuf {} *x1; struct piston_mbuf {} *x2; char *x3; unsigned long long x4; }*)smb_rq_getreply;
- (struct mbchain { struct piston_mbuf {} *x1; struct piston_mbuf {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)smb_rq_getrequest;
- (void)smb_rq_set_extflag:(unsigned int)arg1;
- (void)smb_rq_set_sr_nextcmdp:(unsigned long long)arg1;
- (void)smb_rq_set_srflags:(unsigned int)arg1;
- (void)smb_rq_set_srflagsp:(unsigned int)arg1;
- (unsigned short*)sr_bcount;
- (id /* block */)sr_callback;
- (unsigned short)sr_command;
- (struct timespec { long long x1; long long x2; })sr_credit_timesent;
- (unsigned short)sr_creditcharge;
- (unsigned short*)sr_creditchargep;
- (unsigned short*)sr_creditreqp;
- (unsigned short)sr_creditsrequested;
- (unsigned int)sr_extflags;
- (unsigned int)sr_flags;
- (unsigned int*)sr_flagsp;
- (unsigned int*)sr_lcount;
- (unsigned long long)sr_messageid;
- (unsigned long long*)sr_messageidp;
- (id)sr_next_rqp;
- (unsigned int)sr_nextcmd;
- (unsigned int*)sr_nextcmdp;
- (unsigned int)sr_ntstatus;
- (id)sr_pd;
- (unsigned int)sr_rqflags;
- (unsigned long long)sr_rqsessionid;
- (char *)sr_rqsigp;
- (unsigned int)sr_rqtreeid;
- (unsigned long long)sr_rspasyncid;
- (unsigned short)sr_rspcreditsgranted;
- (unsigned int)sr_rspflags;
- (unsigned int)sr_rspnextcmd;
- (unsigned int)sr_rsppid;
- (unsigned long long)sr_rspsessionid;
- (unsigned int)sr_rsptreeid;
- (struct smb_session { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10[16]; unsigned short x11; unsigned int x12; struct gss_ctx_id_t_desc_struct {} *x13; struct gss_cred_id_t_desc_struct {} *x14; struct gss_buffer_desc_struct { unsigned long long x_15_1_1; void *x_15_1_2; } x15; struct gss_buffer_desc_struct { unsigned long long x_16_1_1; void *x_16_1_2; } x16; unsigned int x17; unsigned int x18; unsigned char x19[16]; unsigned short x20; unsigned short x21; unsigned short x22[8]; char *x23; unsigned int x24; char *x25; unsigned int x26; unsigned char x27[16]; unsigned int x28; unsigned char x29[16]; unsigned int x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; char *x39; struct _opaque_pthread_mutex_t { long long x_40_1_1; BOOL x_40_1_2[56]; } x40; }*)sr_sessionp;
- (unsigned int)sr_timeout;
- (struct timespec { long long x1; long long x2; })sr_timesent;
- (id)writeData;
- (unsigned int)writeLen;

@end
