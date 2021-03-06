
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from Float32Config.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#ifndef NDDS_STANDALONE_TYPE
    #ifdef __cplusplus
        #ifndef ndds_cpp_h
            #include "ndds/ndds_cpp.h"
        #endif
        #ifndef dds_c_log_impl_h              
            #include "dds_c/dds_c_log_impl.h"                                
        #endif        
    #else
        #ifndef ndds_c_h
            #include "ndds/ndds_c.h"
        #endif
    #endif
    
    #ifndef cdr_type_h
        #include "cdr/cdr_type.h"
    #endif    

    #ifndef osapi_heap_h
        #include "osapi/osapi_heap.h" 
    #endif
#else
    #include "ndds_standalone_type.h"
#endif



#include "Float32Config.h"


namespace rapid{

namespace ext{

namespace arc{
/* ========================================================================= */
const char *Float32ConfigTYPENAME = "rapid::ext::arc::Float32Config";

DDS_TypeCode* Float32Config_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;


    static DDS_TypeCode_Member Float32Config_g_tc_members[3]=
    {
        {
            (char *)"category",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 1),/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"metaData",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 2),/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        },
        {
            (char *)"dataKeys",/* Member name */
            {
                (rapid_Message_LAST_MEMBER_ID + 3),/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Member flags */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode Float32Config_g_tc =
    {{
        DDS_TK_VALUE,/* Kind */
        DDS_BOOLEAN_FALSE, /* Ignored */
        -1,/* Ignored */
        (char *)"rapid::ext::arc::Float32Config", /* Name */
        NULL, /* Base class type code is assigned later */
        0, /* Ignored */
        0, /* Ignored */
        NULL, /* Ignored */
        3, /* Number of members */
        Float32Config_g_tc_members, /* Members */
        DDS_VM_NONE /* Type Modifier */
    }}; /* Type code for Float32Config*/

    if (is_initialized) {
        return &Float32Config_g_tc;
    }


    Float32Config_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rapid::String32_get_typecode();
    Float32Config_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)rapid::KeyTypeValueSequence16_get_typecode();
    Float32Config_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)rapid::String32Sequence32_get_typecode();

    Float32Config_g_tc._data._typeCode = (RTICdrTypeCode *)rapid::Message_get_typecode(); /* Base class */

    is_initialized = RTI_TRUE;

    return &Float32Config_g_tc;
}


RTIBool Float32Config_initialize(
    Float32Config* sample) {
  return ::rapid::ext::arc::Float32Config_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}
        
RTIBool Float32Config_initialize_ex(
    Float32Config* sample,RTIBool allocatePointers,RTIBool allocateMemory)
{
    struct DDS_TypeAllocationParams_t allocParams =
        DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;
        
    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;
    
    return ::rapid::ext::arc::Float32Config_initialize_w_params(
        sample,&allocParams);
}

RTIBool Float32Config_initialize_w_params(
        Float32Config* sample,
        const struct DDS_TypeAllocationParams_t * allocParams)
{
        
    
    if (allocParams) {} /* To avoid warnings */
        
    if (!rapid::Message_initialize_w_params((rapid::Message*)sample,allocParams)) {
        return RTI_FALSE;
    }
    if (!rapid::String32_initialize_w_params(&sample->category,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_initialize_w_params(&sample->metaData,allocParams)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32Sequence32_initialize_w_params(&sample->dataKeys,allocParams)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}

void Float32Config_finalize(
    Float32Config* sample)
{
    ::rapid::ext::arc::Float32Config_finalize_ex(sample,RTI_TRUE);
}
        
void Float32Config_finalize_ex(
    Float32Config* sample,RTIBool deletePointers)
{        
    struct DDS_TypeDeallocationParams_t deallocParams =
            DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample) { } /* To avoid warnings */
    
    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ::rapid::ext::arc::Float32Config_finalize_w_params(
        sample,&deallocParams);
}

void Float32Config_finalize_w_params(
        Float32Config* sample,
        const struct DDS_TypeDeallocationParams_t * deallocParams)
{    
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_w_params((rapid::Message*)sample,deallocParams);

    rapid::String32_finalize_w_params(&sample->category, deallocParams);
            

    rapid::KeyTypeValueSequence16_finalize_w_params(&sample->metaData, deallocParams);
            

    rapid::String32Sequence32_finalize_w_params(&sample->dataKeys, deallocParams);
            

}

void Float32Config_finalize_optional_members(
    Float32Config* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
        DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
        &deallocParamsTmp;
    if (sample) { } /* To avoid warnings */
    if (deallocParams) {} /* To avoid warnings */

    rapid::Message_finalize_optional_members((rapid::Message*)sample, deletePointers);
        

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;    
             

    rapid::String32_finalize_optional_members(&sample->category, deallocParams->delete_pointers);
            

    rapid::KeyTypeValueSequence16_finalize_optional_members(&sample->metaData, deallocParams->delete_pointers);
            

    rapid::String32Sequence32_finalize_optional_members(&sample->dataKeys, deallocParams->delete_pointers);
            

}

RTIBool Float32Config_copy(
    Float32Config* dst,
    const Float32Config* src)
{
    if(!rapid::Message_copy((rapid::Message*)dst,(rapid::Message*)src)) {
        return RTI_FALSE;
    }

    if (!rapid::String32_copy(
        &dst->category, &src->category)) {
        return RTI_FALSE;
    }
            

    if (!rapid::KeyTypeValueSequence16_copy(
        &dst->metaData, &src->metaData)) {
        return RTI_FALSE;
    }
            

    if (!rapid::String32Sequence32_copy(
        &dst->dataKeys, &src->dataKeys)) {
        return RTI_FALSE;
    }
            


    return RTI_TRUE;
}


/**
 * <<IMPLEMENTATION>>
 *
 * Defines:  TSeq, T
 *
 * Configure and implement 'Float32Config' sequence class.
 */
#define T Float32Config
#define TSeq Float32ConfigSeq
#define T_initialize_w_params ::rapid::ext::arc::Float32Config_initialize_w_params
#define T_finalize_w_params   ::rapid::ext::arc::Float32Config_finalize_w_params
#define T_copy       ::rapid::ext::arc::Float32Config_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#endif
#else
#include "dds_c_sequence_TSeq.gen"
#ifdef __cplusplus
#include "dds_cpp_sequence_TSeq.gen"
#endif
#endif

#undef T_copy
#undef T_finalize_w_params
#undef T_initialize_w_params
#undef TSeq
#undef T


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */
