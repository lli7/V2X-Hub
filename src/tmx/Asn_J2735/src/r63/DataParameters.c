/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "J2735_201603_ASN_CC.asn"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "DataParameters.h"

static int check_permitted_alphabet_2(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int check_permitted_alphabet_3(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int check_permitted_alphabet_4(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int check_permitted_alphabet_5(const void *sptr) {
	/* The underlying type is IA5String */
	const IA5String_t *st = (const IA5String_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!(cv <= 127)) return -1;
	}
	return 0;
}

static int
memb_processMethod_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 255)
		 && !check_permitted_alphabet_2(st)) {
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
memb_processAgency_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 255)
		 && !check_permitted_alphabet_3(st)) {
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
memb_lastCheckedDate_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 255)
		 && !check_permitted_alphabet_4(st)) {
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
memb_geoidUsed_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const IA5String_t *st = (const IA5String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 255)
		 && !check_permitted_alphabet_5(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_processMethod_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_processMethod_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER character map necessary */
};
static asn_oer_constraints_t asn_OER_memb_processAgency_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_processAgency_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER character map necessary */
};
static asn_oer_constraints_t asn_OER_memb_lastCheckedDate_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_lastCheckedDate_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER character map necessary */
};
static asn_oer_constraints_t asn_OER_memb_geoidUsed_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_geoidUsed_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER character map necessary */
};
asn_TYPE_member_t asn_MBR_DataParameters_1[] = {
	{ ATF_POINTER, 4, offsetof(struct DataParameters, processMethod),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_processMethod_constr_2, &asn_PER_memb_processMethod_constr_2,  memb_processMethod_constraint_1 },
		0, 0, /* No default value */
		"processMethod"
		},
	{ ATF_POINTER, 3, offsetof(struct DataParameters, processAgency),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_processAgency_constr_3, &asn_PER_memb_processAgency_constr_3,  memb_processAgency_constraint_1 },
		0, 0, /* No default value */
		"processAgency"
		},
	{ ATF_POINTER, 2, offsetof(struct DataParameters, lastCheckedDate),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_lastCheckedDate_constr_4, &asn_PER_memb_lastCheckedDate_constr_4,  memb_lastCheckedDate_constraint_1 },
		0, 0, /* No default value */
		"lastCheckedDate"
		},
	{ ATF_POINTER, 1, offsetof(struct DataParameters, geoidUsed),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IA5String,
		0,
		{ &asn_OER_memb_geoidUsed_constr_5, &asn_PER_memb_geoidUsed_constr_5,  memb_geoidUsed_constraint_1 },
		0, 0, /* No default value */
		"geoidUsed"
		},
};
static const int asn_MAP_DataParameters_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_DataParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DataParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* processMethod */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* processAgency */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lastCheckedDate */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* geoidUsed */
};
asn_SEQUENCE_specifics_t asn_SPC_DataParameters_specs_1 = {
	sizeof(struct DataParameters),
	offsetof(struct DataParameters, _asn_ctx),
	asn_MAP_DataParameters_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_DataParameters_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DataParameters = {
	"DataParameters",
	"DataParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_DataParameters_tags_1,
	sizeof(asn_DEF_DataParameters_tags_1)
		/sizeof(asn_DEF_DataParameters_tags_1[0]), /* 1 */
	asn_DEF_DataParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_DataParameters_tags_1)
		/sizeof(asn_DEF_DataParameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DataParameters_1,
	4,	/* Elements count */
	&asn_SPC_DataParameters_specs_1	/* Additional specs */
};

