/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_AuxiliaryBrakeStatus_H_
#define	_AuxiliaryBrakeStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AuxiliaryBrakeStatus {
	AuxiliaryBrakeStatus_unavailable	= 0,
	AuxiliaryBrakeStatus_off	= 1,
	AuxiliaryBrakeStatus_on	= 2,
	AuxiliaryBrakeStatus_reserved	= 3
} e_AuxiliaryBrakeStatus;

/* AuxiliaryBrakeStatus */
typedef long	 AuxiliaryBrakeStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuxiliaryBrakeStatus;
asn_struct_free_f AuxiliaryBrakeStatus_free;
asn_struct_print_f AuxiliaryBrakeStatus_print;
asn_constr_check_f AuxiliaryBrakeStatus_constraint;
ber_type_decoder_f AuxiliaryBrakeStatus_decode_ber;
der_type_encoder_f AuxiliaryBrakeStatus_encode_der;
xer_type_decoder_f AuxiliaryBrakeStatus_decode_xer;
xer_type_encoder_f AuxiliaryBrakeStatus_encode_xer;
per_type_decoder_f AuxiliaryBrakeStatus_decode_uper;
per_type_encoder_f AuxiliaryBrakeStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AuxiliaryBrakeStatus_H_ */
#include "asn_internal.h"
