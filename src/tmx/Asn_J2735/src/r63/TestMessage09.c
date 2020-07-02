/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "TestMessage09.h"

asn_TYPE_member_t asn_MBR_TestMessage09_1[] = {
	{ ATF_POINTER, 2, offsetof(struct TestMessage09, header),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Header,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"header"
		},
	{ ATF_POINTER, 1, offsetof(struct TestMessage09, regional),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Reg_BasicSafetyMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_TestMessage09_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_TestMessage09_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TestMessage09_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* header */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_TestMessage09_specs_1 = {
	sizeof(struct TestMessage09),
	offsetof(struct TestMessage09, _asn_ctx),
	asn_MAP_TestMessage09_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_TestMessage09_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TestMessage09 = {
	"TestMessage09",
	"TestMessage09",
	&asn_OP_SEQUENCE,
	asn_DEF_TestMessage09_tags_1,
	sizeof(asn_DEF_TestMessage09_tags_1)
		/sizeof(asn_DEF_TestMessage09_tags_1[0]), /* 1 */
	asn_DEF_TestMessage09_tags_1,	/* Same as above */
	sizeof(asn_DEF_TestMessage09_tags_1)
		/sizeof(asn_DEF_TestMessage09_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TestMessage09_1,
	2,	/* Elements count */
	&asn_SPC_TestMessage09_specs_1	/* Additional specs */
};

