/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "TrafficControlBounds.h"

static int
memb_oldest_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(asn_INTEGER2long(st, &value)) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value too large (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((value >= 0 && value <= 9223372036854775807)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_lon_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1800000000 && value <= 1799999999)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_lat_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -900000000 && value <= 900000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_offsets_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 3)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_offsets_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_type_offsets_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_oldest_constr_2 CC_NOTUSED = {
	{ 8, 1 }	/* (0..9223372036854775807) */,
	-1};
static asn_per_constraints_t asn_PER_memb_oldest_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 63, -1,  0,  9223372036854775807 }	/* (0..9223372036854775807) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_lon_constr_3 CC_NOTUSED = {
	{ 4, 0 }	/* (-1800000000..1799999999) */,
	-1};
static asn_per_constraints_t asn_PER_memb_lon_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 32, -1, -1800000000,  1799999999 }	/* (-1800000000..1799999999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_lat_constr_4 CC_NOTUSED = {
	{ 4, 0 }	/* (-900000000..900000000) */,
	-1};
static asn_per_constraints_t asn_PER_memb_lat_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 31, -1, -900000000,  900000000 }	/* (-900000000..900000000) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_offsets_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	3	/* (SIZE(3..3)) */};
static asn_per_constraints_t asn_PER_memb_offsets_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_offsets_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_OffsetPoint,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_offsets_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_offsets_specs_5 = {
	sizeof(struct TrafficControlBounds__offsets),
	offsetof(struct TrafficControlBounds__offsets, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_offsets_5 = {
	"offsets",
	"offsets",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_offsets_tags_5,
	sizeof(asn_DEF_offsets_tags_5)
		/sizeof(asn_DEF_offsets_tags_5[0]) - 1, /* 1 */
	asn_DEF_offsets_tags_5,	/* Same as above */
	sizeof(asn_DEF_offsets_tags_5)
		/sizeof(asn_DEF_offsets_tags_5[0]), /* 2 */
	{ &asn_OER_type_offsets_constr_5, &asn_PER_type_offsets_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_offsets_5,
	1,	/* Single element */
	&asn_SPC_offsets_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_TrafficControlBounds_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlBounds, oldest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_INTEGER,
		0,
		{ &asn_OER_memb_oldest_constr_2, &asn_PER_memb_oldest_constr_2,  memb_oldest_constraint_1 },
		0, 0, /* No default value */
		"oldest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlBounds, lon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_lon_constr_3, &asn_PER_memb_lon_constr_3,  memb_lon_constraint_1 },
		0, 0, /* No default value */
		"lon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlBounds, lat),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_lat_constr_4, &asn_PER_memb_lat_constr_4,  memb_lat_constraint_1 },
		0, 0, /* No default value */
		"lat"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficControlBounds, offsets),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_offsets_5,
		0,
		{ &asn_OER_memb_offsets_constr_5, &asn_PER_memb_offsets_constr_5,  memb_offsets_constraint_1 },
		0, 0, /* No default value */
		"offsets"
		},
};
static const ber_tlv_tag_t asn_DEF_TrafficControlBounds_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrafficControlBounds_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oldest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lon */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lat */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* offsets */
};
asn_SEQUENCE_specifics_t asn_SPC_TrafficControlBounds_specs_1 = {
	sizeof(struct TrafficControlBounds),
	offsetof(struct TrafficControlBounds, _asn_ctx),
	asn_MAP_TrafficControlBounds_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TrafficControlBounds = {
	"TrafficControlBounds",
	"TrafficControlBounds",
	&asn_OP_SEQUENCE,
	asn_DEF_TrafficControlBounds_tags_1,
	sizeof(asn_DEF_TrafficControlBounds_tags_1)
		/sizeof(asn_DEF_TrafficControlBounds_tags_1[0]), /* 1 */
	asn_DEF_TrafficControlBounds_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrafficControlBounds_tags_1)
		/sizeof(asn_DEF_TrafficControlBounds_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TrafficControlBounds_1,
	4,	/* Elements count */
	&asn_SPC_TrafficControlBounds_specs_1	/* Additional specs */
};
