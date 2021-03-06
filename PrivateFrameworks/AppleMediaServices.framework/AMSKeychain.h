/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSKeychain : NSObject

+ (id)_certificatePrivateKeyLabelForOptions:(id)arg1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)_copyLegacyPrivateKeyForOptions:(id)arg1 error:(id*)arg2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)_copyLegacyPublicKeyForOptions:(id)arg1 error:(id*)arg2;
+ (id)_extendedConstraintsWithOptions:(id)arg1;
+ (bool)_generateLegacyKeypairForOptions:(id)arg1 error:(id*)arg2;
+ (id)_legacyAttestationForOptions:(id)arg1 error:(id*)arg2;
+ (id)_primaryConstraints;
+ (id)_primaryConstraintsForMac;
+ (id)_primaryConstraintsForWatch;
+ (id)_primaryConstraintsWithOptions:(id)arg1;
+ (void)_writeACLVersionForOptions:(id)arg1;
+ (id)certificateChainForOptions:(id)arg1 error:(id*)arg2;
+ (id)certificateKeychainLabelsForOptions:(id)arg1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPrivateKeyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPublicKeyForOptions:(id)arg1 error:(id*)arg2;
+ (struct __SecAccessControl { }*)createAccessControlRefWithOptions:(id)arg1 error:(id*)arg2;
+ (bool)deleteCertificateChainWithOptions:(id)arg1 error:(id*)arg2;
+ (bool)deleteKeyPairWithOptions:(id)arg1 error:(id*)arg2;
+ (id)keychainLabelForOptions:(id)arg1;
+ (id)legacyAttestationForOptions:(id)arg1 error:(id*)arg2;
+ (bool)storePrimaryCert:(struct __SecCertificate { }*)arg1 extendedCert:(struct __SecCertificate { }*)arg2 privateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3 options:(id)arg4 error:(id*)arg5;

@end
