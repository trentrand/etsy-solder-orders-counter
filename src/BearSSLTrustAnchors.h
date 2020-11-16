#ifndef _CERTIFICATES_H_
#define _CERTIFICATES_H_

#ifdef __cplusplus
extern "C"
{
#endif

/* This file is auto-generated by the pycert_bearssl tool.  Do not change it manually.
 * Certificates are BearSSL br_x509_trust_anchor format.  Included certs:
 *
 * Index:    0
 * Label:    DigiCert Global Root CA
 * Subject:  CN=DigiCert Global Root CA,OU=www.digicert.com,O=DigiCert Inc,C=US
 * Domain(s): openapi.etsy.com
 */

#define TAs_NUM 1

static const unsigned char TA_DN0[] = {
    0x30, 0x61, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
    0x02, 0x55, 0x53, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04, 0x0a,
    0x13, 0x0c, 0x44, 0x69, 0x67, 0x69, 0x43, 0x65, 0x72, 0x74, 0x20, 0x49,
    0x6e, 0x63, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x13,
    0x10, 0x77, 0x77, 0x77, 0x2e, 0x64, 0x69, 0x67, 0x69, 0x63, 0x65, 0x72,
    0x74, 0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x20, 0x30, 0x1e, 0x06, 0x03, 0x55,
    0x04, 0x03, 0x13, 0x17, 0x44, 0x69, 0x67, 0x69, 0x43, 0x65, 0x72, 0x74,
    0x20, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x20, 0x52, 0x6f, 0x6f, 0x74,
    0x20, 0x43, 0x41,
};

static const unsigned char TA_RSA_N0[] = {
    0xe2, 0x3b, 0xe1, 0x11, 0x72, 0xde, 0xa8, 0xa4, 0xd3, 0xa3, 0x57, 0xaa,
    0x50, 0xa2, 0x8f, 0x0b, 0x77, 0x90, 0xc9, 0xa2, 0xa5, 0xee, 0x12, 0xce,
    0x96, 0x5b, 0x01, 0x09, 0x20, 0xcc, 0x01, 0x93, 0xa7, 0x4e, 0x30, 0xb7,
    0x53, 0xf7, 0x43, 0xc4, 0x69, 0x00, 0x57, 0x9d, 0xe2, 0x8d, 0x22, 0xdd,
    0x87, 0x06, 0x40, 0x00, 0x81, 0x09, 0xce, 0xce, 0x1b, 0x83, 0xbf, 0xdf,
    0xcd, 0x3b, 0x71, 0x46, 0xe2, 0xd6, 0x66, 0xc7, 0x05, 0xb3, 0x76, 0x27,
    0x16, 0x8f, 0x7b, 0x9e, 0x1e, 0x95, 0x7d, 0xee, 0xb7, 0x48, 0xa3, 0x08,
    0xda, 0xd6, 0xaf, 0x7a, 0x0c, 0x39, 0x06, 0x65, 0x7f, 0x4a, 0x5d, 0x1f,
    0xbc, 0x17, 0xf8, 0xab, 0xbe, 0xee, 0x28, 0xd7, 0x74, 0x7f, 0x7a, 0x78,
    0x99, 0x59, 0x85, 0x68, 0x6e, 0x5c, 0x23, 0x32, 0x4b, 0xbf, 0x4e, 0xc0,
    0xe8, 0x5a, 0x6d, 0xe3, 0x70, 0xbf, 0x77, 0x10, 0xbf, 0xfc, 0x01, 0xf6,
    0x85, 0xd9, 0xa8, 0x44, 0x10, 0x58, 0x32, 0xa9, 0x75, 0x18, 0xd5, 0xd1,
    0xa2, 0xbe, 0x47, 0xe2, 0x27, 0x6a, 0xf4, 0x9a, 0x33, 0xf8, 0x49, 0x08,
    0x60, 0x8b, 0xd4, 0x5f, 0xb4, 0x3a, 0x84, 0xbf, 0xa1, 0xaa, 0x4a, 0x4c,
    0x7d, 0x3e, 0xcf, 0x4f, 0x5f, 0x6c, 0x76, 0x5e, 0xa0, 0x4b, 0x37, 0x91,
    0x9e, 0xdc, 0x22, 0xe6, 0x6d, 0xce, 0x14, 0x1a, 0x8e, 0x6a, 0xcb, 0xfe,
    0xcd, 0xb3, 0x14, 0x64, 0x17, 0xc7, 0x5b, 0x29, 0x9e, 0x32, 0xbf, 0xf2,
    0xee, 0xfa, 0xd3, 0x0b, 0x42, 0xd4, 0xab, 0xb7, 0x41, 0x32, 0xda, 0x0c,
    0xd4, 0xef, 0xf8, 0x81, 0xd5, 0xbb, 0x8d, 0x58, 0x3f, 0xb5, 0x1b, 0xe8,
    0x49, 0x28, 0xa2, 0x70, 0xda, 0x31, 0x04, 0xdd, 0xf7, 0xb2, 0x16, 0xf2,
    0x4c, 0x0a, 0x4e, 0x07, 0xa8, 0xed, 0x4a, 0x3d, 0x5e, 0xb5, 0x7f, 0xa3,
    0x90, 0xc3, 0xaf, 0x27,
};

static const unsigned char TA_RSA_E0[] = {
    0x01, 0x00, 0x01,
};

static const br_x509_trust_anchor TAs[] = {
    {
        { (unsigned char *)TA_DN0, sizeof TA_DN0 },
        BR_X509_TA_CA,
        {
            BR_KEYTYPE_RSA,
            { .rsa = {
                (unsigned char *)TA_RSA_N0, sizeof TA_RSA_N0,
                (unsigned char *)TA_RSA_E0, sizeof TA_RSA_E0,
            } }
        }
    },
};

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* ifndef _CERTIFICATES_H_ */
