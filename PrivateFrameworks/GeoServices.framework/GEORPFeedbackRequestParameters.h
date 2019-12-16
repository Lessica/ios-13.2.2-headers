/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeedbackRequestParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_idLookupParameters : 1; 
        unsigned int read_imageUploadParameters : 1; 
        unsigned int read_layoutConfigParameters : 1; 
        unsigned int read_queryParameters : 1; 
        unsigned int read_submissionParameters : 1; 
        unsigned int wrote_unknownFields : 1; 
        unsigned int wrote_idLookupParameters : 1; 
        unsigned int wrote_imageUploadParameters : 1; 
        unsigned int wrote_layoutConfigParameters : 1; 
        unsigned int wrote_queryParameters : 1; 
        unsigned int wrote_submissionParameters : 1; 
    }  _flags;
    GEORPFeedbackIdLookupParameters * _idLookupParameters;
    GEORPFeedbackImageUploadParameters * _imageUploadParameters;
    GEORPFeedbackLayoutConfigParameters * _layoutConfigParameters;
    GEORPFeedbackQueryParameters * _queryParameters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPFeedbackSubmissionParameters * _submissionParameters;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIdLookupParameters;
@property (nonatomic, readonly) bool hasImageUploadParameters;
@property (nonatomic, readonly) bool hasLayoutConfigParameters;
@property (nonatomic, readonly) bool hasQueryParameters;
@property (nonatomic, readonly) bool hasSubmissionParameters;
@property (nonatomic, retain) GEORPFeedbackIdLookupParameters *idLookupParameters;
@property (nonatomic, retain) GEORPFeedbackImageUploadParameters *imageUploadParameters;
@property (nonatomic, retain) GEORPFeedbackLayoutConfigParameters *layoutConfigParameters;
@property (nonatomic, retain) GEORPFeedbackQueryParameters *queryParameters;
@property (nonatomic, retain) GEORPFeedbackSubmissionParameters *submissionParameters;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)_readIdLookupParameters;
- (void)_readImageUploadParameters;
- (void)_readLayoutConfigParameters;
- (void)_readQueryParameters;
- (void)_readSubmissionParameters;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdLookupParameters;
- (bool)hasImageUploadParameters;
- (bool)hasLayoutConfigParameters;
- (bool)hasQueryParameters;
- (bool)hasSubmissionParameters;
- (unsigned long long)hash;
- (id)idLookupParameters;
- (id)imageUploadParameters;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithMerchantIndustryCode:(long long)arg1 mapsIdentifier:(unsigned long long)arg2 merchantName:(id)arg3 merchantRawName:(id)arg4 merchantIndustryCategory:(id)arg5 merchantURL:(id)arg6 merchantFormattedAddress:(id)arg7 transactionTime:(double)arg8 transactionType:(id)arg9 transactionLocation:(struct { double x1; double x2; })arg10;
- (bool)isEqual:(id)arg1;
- (id)layoutConfigParameters;
- (void)mergeFrom:(id)arg1;
- (id)queryParameters;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdLookupParameters:(id)arg1;
- (void)setImageUploadParameters:(id)arg1;
- (void)setLayoutConfigParameters:(id)arg1;
- (void)setQueryParameters:(id)arg1;
- (void)setSubmissionParameters:(id)arg1;
- (id)submissionParameters;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
