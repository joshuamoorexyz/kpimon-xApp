/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v01.02.asn"
 * 	`asn1c -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_Trigger_ConditionIE_Item_H_
#define	_Trigger_ConditionIE_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RT-Period-IE.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Trigger-ConditionIE-Item */
typedef struct Trigger_ConditionIE_Item {
	RT_Period_IE_t	 report_Period_IE;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Trigger_ConditionIE_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Trigger_ConditionIE_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_Trigger_ConditionIE_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_Trigger_ConditionIE_Item_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Trigger_ConditionIE_Item_H_ */
#include <asn_internal.h>
