/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_TrailerData_H_
#define	_TrailerData_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SSPindex.h"
#include "PivotPointDescription.h"
#include "TrailerUnitDescriptionList.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TrailerData */
typedef struct TrailerData {
	SSPindex_t	 sspRights;
	PivotPointDescription_t	 connection;
	TrailerUnitDescriptionList_t	 units;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TrailerData_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TrailerData;
extern asn_SEQUENCE_specifics_t asn_SPC_TrailerData_specs_1;
extern asn_TYPE_member_t asn_MBR_TrailerData_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TrailerData_H_ */
#include "asn_internal.h"
