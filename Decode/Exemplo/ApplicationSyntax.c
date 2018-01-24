/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SNMPv2-PDU"
 * 	found in "../RFC3416.asn1"
 */

#include "ApplicationSyntax.h"

static asn_oer_constraints_t asn_OER_type_ApplicationSyntax_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_ApplicationSyntax_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_ApplicationSyntax_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ApplicationSyntax, choice.ipAddress_value),
		(ASN_TAG_CLASS_APPLICATION | (0 << 2)),
		0,
		&asn_DEF_IpAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ipAddress-value"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ApplicationSyntax, choice.counter_value),
		(ASN_TAG_CLASS_APPLICATION | (1 << 2)),
		0,
		&asn_DEF_Counter32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"counter-value"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ApplicationSyntax, choice.timeticks_value),
		(ASN_TAG_CLASS_APPLICATION | (3 << 2)),
		0,
		&asn_DEF_TimeTicks,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeticks-value"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ApplicationSyntax, choice.arbitrary_value),
		(ASN_TAG_CLASS_APPLICATION | (4 << 2)),
		0,
		&asn_DEF_Opaque,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"arbitrary-value"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ApplicationSyntax, choice.big_counter_value),
		(ASN_TAG_CLASS_APPLICATION | (6 << 2)),
		0,
		&asn_DEF_Counter64,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"big-counter-value"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ApplicationSyntax, choice.unsigned_integer_value),
		(ASN_TAG_CLASS_APPLICATION | (2 << 2)),
		0,
		&asn_DEF_Unsigned32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"unsigned-integer-value"
		},
};
static const unsigned asn_MAP_ApplicationSyntax_to_canonical_1[] = { 0, 1, 5, 2, 3, 4 };
static const unsigned asn_MAP_ApplicationSyntax_from_canonical_1[] = { 0, 1, 3, 4, 5, 2 };
static const asn_TYPE_tag2member_t asn_MAP_ApplicationSyntax_tag2el_1[] = {
    { (ASN_TAG_CLASS_APPLICATION | (0 << 2)), 0, 0, 0 }, /* ipAddress-value */
    { (ASN_TAG_CLASS_APPLICATION | (1 << 2)), 1, 0, 0 }, /* counter-value */
    { (ASN_TAG_CLASS_APPLICATION | (2 << 2)), 5, 0, 0 }, /* unsigned-integer-value */
    { (ASN_TAG_CLASS_APPLICATION | (3 << 2)), 2, 0, 0 }, /* timeticks-value */
    { (ASN_TAG_CLASS_APPLICATION | (4 << 2)), 3, 0, 0 }, /* arbitrary-value */
    { (ASN_TAG_CLASS_APPLICATION | (6 << 2)), 4, 0, 0 } /* big-counter-value */
};
asn_CHOICE_specifics_t asn_SPC_ApplicationSyntax_specs_1 = {
	sizeof(struct ApplicationSyntax),
	offsetof(struct ApplicationSyntax, _asn_ctx),
	offsetof(struct ApplicationSyntax, present),
	sizeof(((struct ApplicationSyntax *)0)->present),
	asn_MAP_ApplicationSyntax_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_ApplicationSyntax_to_canonical_1,
	asn_MAP_ApplicationSyntax_from_canonical_1,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_ApplicationSyntax = {
	"ApplicationSyntax",
	"ApplicationSyntax",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_ApplicationSyntax_constr_1, &asn_PER_type_ApplicationSyntax_constr_1, CHOICE_constraint },
	asn_MBR_ApplicationSyntax_1,
	6,	/* Elements count */
	&asn_SPC_ApplicationSyntax_specs_1	/* Additional specs */
};

