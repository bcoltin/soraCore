
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from SpectrumSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef SpectrumSamplePlugin_1145706081_h
#define SpectrumSamplePlugin_1145706081_h

#include "SpectrumSample.h"

#include "MessagePlugin.h"




struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif


#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif


namespace rapid{

namespace ext{

namespace arc{

/* The type used to store keys for instances of type struct
 * SpectrumSample.
 *
 * By default, this type is struct SpectrumSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct SpectrumSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct SpectrumSample, the
 * following restriction applies: the key of struct
 * SpectrumSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct SpectrumSample.
*/
typedef  class SpectrumSample SpectrumSampleKeyHolder;


#define SpectrumSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define SpectrumSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SpectrumSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define SpectrumSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define SpectrumSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define SpectrumSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SpectrumSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SpectrumSample*
SpectrumSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SpectrumSample*
SpectrumSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SpectrumSample*
SpectrumSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePluginSupport_copy_data(
    SpectrumSample *out,
    const SpectrumSample *in);

NDDSUSERDllExport extern void 
SpectrumSamplePluginSupport_destroy_data_w_params(
    SpectrumSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SpectrumSamplePluginSupport_destroy_data_ex(
    SpectrumSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SpectrumSamplePluginSupport_destroy_data(
    SpectrumSample *sample);

NDDSUSERDllExport extern void 
SpectrumSamplePluginSupport_print_data(
    const SpectrumSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern SpectrumSample*
SpectrumSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SpectrumSample*
SpectrumSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
SpectrumSamplePluginSupport_destroy_key_ex(
    SpectrumSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SpectrumSamplePluginSupport_destroy_key(
    SpectrumSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SpectrumSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SpectrumSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
SpectrumSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SpectrumSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
SpectrumSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSample *out,
    const SpectrumSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SpectrumSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
SpectrumSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SpectrumSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SpectrumSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SpectrumSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SpectrumSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
SpectrumSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SpectrumSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SpectrumSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
SpectrumSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSampleKeyHolder *key, 
    const SpectrumSample *instance);

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    SpectrumSample *instance, 
    const SpectrumSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const SpectrumSample *instance);

NDDSUSERDllExport extern RTIBool 
SpectrumSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SpectrumSamplePlugin_new(void);

NDDSUSERDllExport extern void
SpectrumSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* SpectrumSamplePlugin_1145706081_h */
