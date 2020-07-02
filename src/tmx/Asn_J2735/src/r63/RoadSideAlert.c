/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "RoadSideAlert.h"

static int
memb_description_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_regional_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_description_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_description_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_regional_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_description_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_description_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_description_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ITIScodes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_description_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_description_specs_5 = {
	sizeof(struct RoadSideAlert__description),
	offsetof(struct RoadSideAlert__description, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_description_5 = {
	"description",
	"description",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_description_tags_5,
	sizeof(asn_DEF_description_tags_5)
		/sizeof(asn_DEF_description_tags_5[0]) - 1, /* 1 */
	asn_DEF_description_tags_5,	/* Same as above */
	sizeof(asn_DEF_description_tags_5)
		/sizeof(asn_DEF_description_tags_5[0]), /* 2 */
	{ &asn_OER_type_description_constr_5, &asn_PER_type_description_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_description_5,
	1,	/* Single element */
	&asn_SPC_description_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_regional_12[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Reg_BasicSafetyMessage,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_12 = {
	sizeof(struct RoadSideAlert__regional),
	offsetof(struct RoadSideAlert__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_12 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_12,
	sizeof(asn_DEF_regional_tags_12)
		/sizeof(asn_DEF_regional_tags_12[0]) - 1, /* 1 */
	asn_DEF_regional_tags_12,	/* Same as above */
	sizeof(asn_DEF_regional_tags_12)
		/sizeof(asn_DEF_regional_tags_12[0]), /* 2 */
	{ &asn_OER_type_regional_constr_12, &asn_PER_type_regional_constr_12, SEQUENCE_OF_constraint },
	asn_MBR_regional_12,
	1,	/* Single element */
	&asn_SPC_regional_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RoadSideAlert_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSideAlert, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DSRC_MsgCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgCnt"
		},
	{ ATF_POINTER, 1, offsetof(struct RoadSideAlert, timeStamp),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYear,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeStamp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSideAlert, typeEvent),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ITIScodes,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typeEvent"
		},
	{ ATF_POINTER, 7, offsetof(struct RoadSideAlert, description),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_description_5,
		0,
		{ &asn_OER_memb_description_constr_5, &asn_PER_memb_description_constr_5,  memb_description_constraint_1 },
		0, 0, /* No default value */
		"description"
		},
	{ ATF_POINTER, 6, offsetof(struct RoadSideAlert, priority),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Priority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"priority"
		},
	{ ATF_POINTER, 5, offsetof(struct RoadSideAlert, heading),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeadingSlice,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heading"
		},
	{ ATF_POINTER, 4, offsetof(struct RoadSideAlert, extent),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Extent,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extent"
		},
	{ ATF_POINTER, 3, offsetof(struct RoadSideAlert, position),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FullPositionVector,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"position"
		},
	{ ATF_POINTER, 2, offsetof(struct RoadSideAlert, furtherInfoID),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FurtherInfoID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"furtherInfoID"
		},
	{ ATF_POINTER, 1, offsetof(struct RoadSideAlert, regional),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_regional_12,
		0,
		{ &asn_OER_memb_regional_constr_12, &asn_PER_memb_regional_constr_12,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_RoadSideAlert_oms_1[] = { 1, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_RoadSideAlert_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RoadSideAlert_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* typeEvent */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* description */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* priority */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* extent */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* position */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* furtherInfoID */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_RoadSideAlert_specs_1 = {
	sizeof(struct RoadSideAlert),
	offsetof(struct RoadSideAlert, _asn_ctx),
	asn_MAP_RoadSideAlert_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_RoadSideAlert_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	10,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RoadSideAlert = {
	"RoadSideAlert",
	"RoadSideAlert",
	&asn_OP_SEQUENCE,
	asn_DEF_RoadSideAlert_tags_1,
	sizeof(asn_DEF_RoadSideAlert_tags_1)
		/sizeof(asn_DEF_RoadSideAlert_tags_1[0]), /* 1 */
	asn_DEF_RoadSideAlert_tags_1,	/* Same as above */
	sizeof(asn_DEF_RoadSideAlert_tags_1)
		/sizeof(asn_DEF_RoadSideAlert_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RoadSideAlert_1,
	10,	/* Elements count */
	&asn_SPC_RoadSideAlert_specs_1	/* Additional specs */
};

