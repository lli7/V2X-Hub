/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_NodeSetLL_H_
#define	_NodeSetLL_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeLL;

/* NodeSetLL */
typedef struct NodeSetLL {
	A_SEQUENCE_OF(struct NodeLL) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeSetLL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeSetLL;
extern asn_SET_OF_specifics_t asn_SPC_NodeSetLL_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeSetLL_1[1];
extern asn_per_constraints_t asn_PER_type_NodeSetLL_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NodeLL.h"

#endif	/* _NodeSetLL_H_ */
#include "asn_internal.h"
