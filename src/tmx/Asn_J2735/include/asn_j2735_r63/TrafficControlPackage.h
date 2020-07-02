/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_TrafficControlPackage_H_
#define	_TrafficControlPackage_H_


#include "asn_application.h"

/* Including external dependencies */
#include "IA5String.h"
#include "OCTET_STRING.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TrafficControlPackage */
typedef struct TrafficControlPackage {
	IA5String_t	*label;	/* OPTIONAL */
	struct TrafficControlPackage__cmids {
		A_SEQUENCE_OF(OCTET_STRING_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cmids;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrafficControlPackage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrafficControlPackage;
extern asn_SEQUENCE_specifics_t asn_SPC_TrafficControlPackage_specs_1;
extern asn_TYPE_member_t asn_MBR_TrafficControlPackage_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TrafficControlPackage_H_ */
#include "asn_internal.h"