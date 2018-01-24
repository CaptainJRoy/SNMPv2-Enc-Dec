/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SNMPv2-PDU"
 * 	found in "../RFC3416/RFC3416.asn1"
 */

#include "SNMPv2-Trap-PDU.h"

/*
 * This type is implemented using PDU,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_SNMPv2_Trap_PDU_tags_1[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SNMPv2_Trap_PDU = {
	"SNMPv2-Trap-PDU",
	"SNMPv2-Trap-PDU",
	&asn_OP_SEQUENCE,
	asn_DEF_SNMPv2_Trap_PDU_tags_1,
	sizeof(asn_DEF_SNMPv2_Trap_PDU_tags_1)
		/sizeof(asn_DEF_SNMPv2_Trap_PDU_tags_1[0]) - 1, /* 1 */
	asn_DEF_SNMPv2_Trap_PDU_tags_1,	/* Same as above */
	sizeof(asn_DEF_SNMPv2_Trap_PDU_tags_1)
		/sizeof(asn_DEF_SNMPv2_Trap_PDU_tags_1[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PDU_1,
	4,	/* Elements count */
	&asn_SPC_PDU_specs_1	/* Additional specs */
};

