/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "COMMUNITY-BASED-SNMPv2"
 * 	found in "../RFC1901.asn1"
 */

#ifndef	_Message_H_
#define	_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <ANY.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum version {
	version_version	= 1
} e_version;

/* Message */
typedef struct Message {
	long	 version;
	OCTET_STRING_t	 community;
	ANY_t	 data;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _Message_H_ */
#include <asn_internal.h>
