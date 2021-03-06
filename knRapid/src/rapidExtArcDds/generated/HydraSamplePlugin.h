
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from HydraSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef HydraSamplePlugin_1983579152_h
#define HydraSamplePlugin_1983579152_h

#include "HydraSample.h"

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
 * HydraSample.
 *
 * By default, this type is struct HydraSample
 * itself. However, if for some reason this choice is not practical for your
 * system (e.g. if sizeof(struct HydraSample)
 * is very large), you may redefine this typedef in terms of another type of
 * your choosing. HOWEVER, if you define the KeyHolder type to be something
 * other than struct HydraSample, the
 * following restriction applies: the key of struct
 * HydraSample must consist of a
 * single field of your redefined KeyHolder type and that field must be the
 * first field in struct HydraSample.
*/
typedef  class HydraSample HydraSampleKeyHolder;


#define HydraSamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample  
#define HydraSamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define HydraSamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

#define HydraSamplePlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
#define HydraSamplePlugin_return_key PRESTypePluginDefaultEndpointData_returnKey
 

#define HydraSamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define HydraSamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern HydraSample*
HydraSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern HydraSample*
HydraSamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HydraSample*
HydraSamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
HydraSamplePluginSupport_copy_data(
    HydraSample *out,
    const HydraSample *in);

NDDSUSERDllExport extern void 
HydraSamplePluginSupport_destroy_data_w_params(
    HydraSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
HydraSamplePluginSupport_destroy_data_ex(
    HydraSample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HydraSamplePluginSupport_destroy_data(
    HydraSample *sample);

NDDSUSERDllExport extern void 
HydraSamplePluginSupport_print_data(
    const HydraSample *sample,
    const char *desc,
    unsigned int indent);


NDDSUSERDllExport extern HydraSample*
HydraSamplePluginSupport_create_key_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern HydraSample*
HydraSamplePluginSupport_create_key(void);

NDDSUSERDllExport extern void 
HydraSamplePluginSupport_destroy_key_ex(
    HydraSampleKeyHolder *key,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
HydraSamplePluginSupport_destroy_key(
    HydraSampleKeyHolder *key);

/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
HydraSamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
HydraSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);
    
NDDSUSERDllExport extern PRESTypePluginEndpointData 
HydraSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
HydraSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);
    
NDDSUSERDllExport extern void    
HydraSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *sample,
    void *handle);    
 

NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *out,
    const HydraSample *in);

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const HydraSample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);




NDDSUSERDllExport extern RTIBool
HydraSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
HydraSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
HydraSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
HydraSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const HydraSample * sample);



/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginKeyKind 
HydraSamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
HydraSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const HydraSample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);


NDDSUSERDllExport extern RTIBool
HydraSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

 
NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    HydraSampleKeyHolder *key, 
    const HydraSample *instance);

NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    HydraSample *instance, 
    const HydraSampleKeyHolder *key);

NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const HydraSample *instance);

NDDSUSERDllExport extern RTIBool 
HydraSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos); 
     
/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
HydraSamplePlugin_new(void);

NDDSUSERDllExport extern void
HydraSamplePlugin_delete(struct PRESTypePlugin *);

} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */

        
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif        

#endif /* HydraSamplePlugin_1983579152_h */
