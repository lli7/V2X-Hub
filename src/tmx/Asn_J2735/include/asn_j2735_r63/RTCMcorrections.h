/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_RTCMcorrections_H_
#define	_RTCMcorrections_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DSRC_MsgCount.h"
#include "RTCM-Revision.h"
#include "MinuteOfTheYear.h"
#include "RTCMmessageList.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FullPositionVector;
struct RTCMheader;
struct Reg_BasicSafetyMessage;

/* RTCMcorrections */
typedef struct RTCMcorrections {
	DSRC_MsgCount_t	 msgCnt;
	RTCM_Revision_t	 rev;
	MinuteOfTheYear_t	*timeStamp;	/* OPTIONAL */
	struct FullPositionVector	*anchorPoint;	/* OPTIONAL */
	struct RTCMheader	*rtcmHeader;	/* OPTIONAL */
	RTCMmessageList_t	 msgs;
	struct RTCMcorrections__regional {
		A_SEQUENCE_OF(struct Reg_BasicSafetyMessage) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RTCMcorrections_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RTCMcorrections;
extern asn_SEQUENCE_specifics_t asn_SPC_RTCMcorrections_specs_1;
extern asn_TYPE_member_t asn_MBR_RTCMcorrections_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FullPositionVector.h"
#include "RTCMheader.h"
#include "RegionalExtension.h"

#endif	/* _RTCMcorrections_H_ */
#include "asn_internal.h"
