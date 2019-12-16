/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageMetadata : TSPObject {
    TSPDataMetadataMap * _identifierToDataMetadataMap;
    struct PackageMetadata { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArena { 
            void *ptr_; 
        } _internal_metadata_; 
        struct HasBits<1> { 
            unsigned int has_bits_[1]; 
        } _has_bits_; 
        struct CachedSize { 
            struct atomic<int> { 
                int __a_; 
            } size_; 
        } _cached_size_; 
        struct RepeatedPtrField<TSP::ComponentInfo> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } components_; 
        struct RepeatedPtrField<TSP::DataInfo> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } datas_; 
        struct RepeatedField<unsigned int> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } read_version_; 
        int _read_version_cached_byte_size_; 
        struct RepeatedField<unsigned int> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } write_version_; 
        int _write_version_cached_byte_size_; 
        struct RepeatedField<unsigned int> { 
            int current_size_; 
            int total_size_; 
            union Pointer { 
                struct Arena {} *arena; 
                struct Rep {} *rep; 
            } ptr_; 
        } file_format_version_; 
        int _file_format_version_cached_byte_size_; 
        struct RepeatedPtrField<TSP::ComponentInfo> { 
            struct Arena {} *arena_; 
            int current_size_; 
            int total_size_; 
            struct Rep {} *rep_; 
        } versioned_components_; 
        struct DocumentRevision {} *revision_; 
        struct Reference {} *data_metadata_map_; 
        unsigned long long last_object_identifier_; 
        unsigned long long save_token_; 
        int preferred_package_type_; 
    }  _message;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (struct PackageMetadata { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::ComponentInfo> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct RepeatedPtrField<TSP::DataInfo> { struct Arena {} *x_6_1_1; int x_6_1_2; int x_6_1_3; struct Rep {} *x_6_1_4; } x6; struct RepeatedField<unsigned int> { int x_7_1_1; int x_7_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_7_1_3; } x7; int x8; struct RepeatedField<unsigned int> { int x_9_1_1; int x_9_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_9_1_3; } x9; int x10; struct RepeatedField<unsigned int> { int x_11_1_1; int x_11_1_2; union Pointer { struct Arena {} *x_3_2_1; struct Rep {} *x_3_2_2; } x_11_1_3; } x11; int x12; struct RepeatedPtrField<TSP::ComponentInfo> { struct Arena {} *x_13_1_1; int x_13_1_2; int x_13_1_3; struct Rep {} *x_13_1_4; } x13; }*)message;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (long long)tsp_identifier;

@end