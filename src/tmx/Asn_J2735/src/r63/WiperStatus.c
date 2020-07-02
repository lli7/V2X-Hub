/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "WiperStatus.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_WiperStatus_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_WiperStatus_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  6 }	/* (0..6,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_WiperStatus_value2enum_1[] = {
	{ 0,	11,	"unavailable" },
	{ 1,	3,	"off" },
	{ 2,	12,	"intermittent" },
	{ 3,	3,	"low" },
	{ 4,	4,	"high" },
	{ 5,	11,	"washerInUse" },
	{ 6,	16,	"automaticPresent" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_WiperStatus_enum2value_1[] = {
	6,	/* automaticPresent(6) */
	4,	/* high(4) */
	2,	/* intermittent(2) */
	3,	/* low(3) */
	1,	/* off(1) */
	0,	/* unavailable(0) */
	5	/* washerInUse(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_WiperStatus_specs_1 = {
	asn_MAP_WiperStatus_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_WiperStatus_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	8,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_WiperStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_WiperStatus = {
	"WiperStatus",
	"WiperStatus",
	&asn_OP_NativeEnumerated,
	asn_DEF_WiperStatus_tags_1,
	sizeof(asn_DEF_WiperStatus_tags_1)
		/sizeof(asn_DEF_WiperStatus_tags_1[0]), /* 1 */
	asn_DEF_WiperStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_WiperStatus_tags_1)
		/sizeof(asn_DEF_WiperStatus_tags_1[0]), /* 1 */
	{ &asn_OER_type_WiperStatus_constr_1, &asn_PER_type_WiperStatus_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_WiperStatus_specs_1	/* Additional specs */
};

