
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/


#include <string.h>

#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif

#ifndef osapi_type_h
  #include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
  #include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
  #include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
  #include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
  #include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
  #include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
  #include "cdr/cdr_stream.h"
#endif

#ifndef pres_typePlugin_h
  #include "pres/pres_typePlugin.h"
#endif



#include "FileQueueSamplePlugin.h"


namespace rapid{

/* --------------------------------------------------------------------------------------
 *  Type FileQueueSample
 * -------------------------------------------------------------------------------------- */

/* --------------------------------------------------------------------------------------
    Support functions:
 * -------------------------------------------------------------------------------------- */

FileQueueSample*
FileQueueSamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params){
    FileQueueSample *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, FileQueueSample);

    if(sample != NULL) {
        if (!::rapid::FileQueueSample_initialize_w_params(sample,alloc_params)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


FileQueueSample *
FileQueueSamplePluginSupport_create_data_ex(RTIBool allocate_pointers){
    FileQueueSample *sample = NULL;

    RTIOsapiHeap_allocateStructure(
        &sample, FileQueueSample);

    if(sample != NULL) {
        if (!::rapid::FileQueueSample_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
            RTIOsapiHeap_freeStructure(sample);
            return NULL;
        }
    }        
    return sample; 
}


FileQueueSample *
FileQueueSamplePluginSupport_create_data(void)
{
    return ::rapid::FileQueueSamplePluginSupport_create_data_ex(RTI_TRUE);
}


void 
FileQueueSamplePluginSupport_destroy_data_w_params(
    FileQueueSample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {

    ::rapid::FileQueueSample_finalize_w_params(sample,dealloc_params);

    RTIOsapiHeap_freeStructure(sample);
}


void 
FileQueueSamplePluginSupport_destroy_data_ex(
    FileQueueSample *sample,RTIBool deallocate_pointers) {

    ::rapid::FileQueueSample_finalize_ex(sample,deallocate_pointers);

    RTIOsapiHeap_freeStructure(sample);
}


void 
FileQueueSamplePluginSupport_destroy_data(
    FileQueueSample *sample) {

    ::rapid::FileQueueSamplePluginSupport_destroy_data_ex(sample,RTI_TRUE);

}


RTIBool 
FileQueueSamplePluginSupport_copy_data(
    FileQueueSample *dst,
    const FileQueueSample *src)
{
    return ::rapid::FileQueueSample_copy(dst,src);
}


void 
FileQueueSamplePluginSupport_print_data(
    const FileQueueSample *sample,
    const char *desc,
    unsigned int indent_level)
{


    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
      RTILog_debug("%s:\n", desc);
    } else {
      RTILog_debug("\n");
    }

    if (sample == NULL) {
      RTILog_debug("NULL\n");
      return;
    }

    rapid::MessagePluginSupport_print_data((const rapid::Message*)sample,"",indent_level);

    rapid::String64PluginSupport_print_data(
        &sample->fileUuid, "fileUuid", indent_level + 1);
            

    RTICdrType_printLong(
        &sample->chunkId, "chunkId", indent_level + 1);
            

    RTICdrType_printLong(
        &sample->numChunks, "numChunks", indent_level + 1);
            

    rapid::OctetSequence1KPluginSupport_print_data(
        &sample->chunkData, "chunkData", indent_level + 1);
            


}

FileQueueSample *
FileQueueSamplePluginSupport_create_key_ex(RTIBool allocate_pointers){
    FileQueueSample *key = NULL;

    RTIOsapiHeap_allocateStructure(
        &key, FileQueueSampleKeyHolder);

    ::rapid::FileQueueSample_initialize_ex(key,allocate_pointers,RTI_TRUE);
    return key;
}


FileQueueSample *
FileQueueSamplePluginSupport_create_key(void)
{
    return  ::rapid::FileQueueSamplePluginSupport_create_key_ex(RTI_TRUE);
}


void 
FileQueueSamplePluginSupport_destroy_key_ex(
    FileQueueSampleKeyHolder *key,RTIBool deallocate_pointers)
{
    ::rapid::FileQueueSample_finalize_ex(key,deallocate_pointers);

    RTIOsapiHeap_freeStructure(key);
}


void 
FileQueueSamplePluginSupport_destroy_key(
    FileQueueSampleKeyHolder *key) {

  ::rapid::FileQueueSamplePluginSupport_destroy_key_ex(key,RTI_TRUE);

}


/* ----------------------------------------------------------------------------
    Callback functions:
 * ---------------------------------------------------------------------------- */



PRESTypePluginParticipantData 
FileQueueSamplePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);

}


void 
FileQueueSamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{

  PRESTypePluginDefaultParticipantData_delete(participant_data);
}


PRESTypePluginEndpointData
FileQueueSamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;

    unsigned int serializedSampleMaxSize;

    unsigned int serializedKeyMaxSize;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */


    epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            ::rapid::FileQueueSamplePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            ::rapid::FileQueueSamplePluginSupport_destroy_data,
            (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
            ::rapid::FileQueueSamplePluginSupport_create_key,
            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
            ::rapid::FileQueueSamplePluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    }
   
    serializedKeyMaxSize = ::rapid::FileQueueSamplePlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    
    if (!PRESTypePluginDefaultEndpointData_createMD5Stream(
            epd,serializedKeyMaxSize)) 
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }
    
    

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = ::rapid::FileQueueSamplePlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
            
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                ::rapid::FileQueueSamplePlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            ::rapid::FileQueueSamplePlugin_get_serialized_sample_size,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }
    


    return epd;    
}


void 
FileQueueSamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  

    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}


void    
FileQueueSamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *sample,
    void *handle)
{
    
    FileQueueSample_finalize_optional_members(sample, RTI_TRUE);
           
    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}
 


RTIBool 
FileQueueSamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *dst,
    const FileQueueSample *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return ::rapid::FileQueueSamplePluginSupport_copy_data(dst,src);
}

/* --------------------------------------------------------------------------------------
    (De)Serialize functions:
 * -------------------------------------------------------------------------------------- */

unsigned int 
FileQueueSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);


RTIBool 
FileQueueSamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueSample *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;
    RTIBool retval = RTI_TRUE;


    if(serialize_encapsulation) {
  
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }


    if(serialize_sample) {
        if (!rapid::MessagePlugin_serialize(endpoint_data,(const rapid::Message*)sample,stream,RTI_FALSE,encapsulation_id,RTI_TRUE,endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!rapid::String64Plugin_serialize(
            endpoint_data,
            &sample->fileUuid, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeLong(
        stream, &sample->chunkId)) {
        return RTI_FALSE;
    }
            

    if (!RTICdrStream_serializeLong(
        stream, &sample->numChunks)) {
        return RTI_FALSE;
    }
            

    if (!rapid::OctetSequence1KPlugin_serialize(
            endpoint_data,
            &sample->chunkData, 
            stream, 
            RTI_FALSE, encapsulation_id, 
            RTI_TRUE, 
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
            

    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


  return retval;
}


RTIBool 
FileQueueSamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }
    
    
    if(deserialize_sample) {
        ::rapid::FileQueueSample_initialize_ex(sample, RTI_FALSE, RTI_FALSE);
            if (!rapid::MessagePlugin_deserialize_sample(endpoint_data,( rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    if (!rapid::String64Plugin_deserialize_sample(
            endpoint_data,
            &sample->fileUuid,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_deserializeLong(
        stream, &sample->chunkId)) {
        goto fin;
    }

    if (!RTICdrStream_deserializeLong(
        stream, &sample->numChunks)) {
        goto fin;
    }

    if (!rapid::OctetSequence1KPlugin_deserialize_sample(
            endpoint_data,
            &sample->chunkData,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}

 
 

RTIBool 
FileQueueSamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;

    result = ::rapid::FileQueueSamplePlugin_deserialize_sample( 
        endpoint_data, (sample != NULL)?*sample:NULL,
        stream, deserialize_encapsulation, deserialize_sample, 
        endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
 
}




RTIBool FileQueueSamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;


    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (skip_sample) {
    if (!rapid::MessagePlugin_skip(endpoint_data,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!rapid::String64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!rapid::OctetSequence1KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            


    }
    

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


unsigned int 
FileQueueSamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }

    current_alignment += rapid::MessagePlugin_get_serialized_sample_max_size(endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=  rapid::String64Plugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::OctetSequence1KPlugin_get_serialized_sample_max_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


unsigned int 
FileQueueSamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }

    current_alignment += rapid::MessagePlugin_get_serialized_sample_min_size(endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);

    current_alignment +=  rapid::String64Plugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment +=  rapid::OctetSequence1KPlugin_get_serialized_sample_min_size(
        endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


/* Returns the size of the sample in its serialized form (in bytes).
 * It can also be an estimation in excess of the real buffer needed 
 * during a call to the serialize() function.
 * The value reported does not have to include the space for the
 * encapsulation flags.
 */
unsigned int
FileQueueSamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const FileQueueSample * sample) 
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;


    if (include_encapsulation) {

        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }

        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }

    current_alignment += rapid::MessagePlugin_get_serialized_sample_size(endpoint_data,RTI_FALSE,encapsulation_id,current_alignment,(const rapid::Message*)sample);

    current_alignment += rapid::String64Plugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->fileUuid);
            

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += RTICdrType_getLongMaxSizeSerialized(
        current_alignment);
            

    current_alignment += rapid::OctetSequence1KPlugin_get_serialized_sample_size(
        endpoint_data,RTI_FALSE, encapsulation_id, 
        current_alignment, &sample->chunkData);
            

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}







/* --------------------------------------------------------------------------------------
    Key Management functions:
 * -------------------------------------------------------------------------------------- */


PRESTypePluginKeyKind 
FileQueueSamplePlugin_get_key_kind(void)
{

    return PRES_TYPEPLUGIN_USER_KEY;
     
}


RTIBool 
FileQueueSamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const FileQueueSample *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(serialize_encapsulation) {
    
        if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream, encapsulation_id)) {
            return RTI_FALSE;
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if(serialize_key) {
        if (!rapid::MessagePlugin_serialize_key(endpoint_data, (const rapid::Message*)sample, stream, RTI_FALSE, encapsulation_id,RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }


    if(serialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


RTIBool FileQueueSamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    char * position = NULL;


    if(deserialize_encapsulation) {
        /* Deserialize encapsulation */
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;  
        }


        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {
        if (!rapid::MessagePlugin_deserialize_key_sample(endpoint_data,(rapid::Message*)sample,stream,RTI_FALSE,RTI_TRUE,endpoint_plugin_qos)) {
            return RTI_FALSE;
        }
    }


    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}


 
RTIBool FileQueueSamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    
    stream->_xTypesState.unassignable = RTI_FALSE;
    
    result = ::rapid::FileQueueSamplePlugin_deserialize_key_sample(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    
    return result;
}



unsigned int
FileQueueSamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int encapsulation_size = current_alignment;


    unsigned int initial_alignment = current_alignment;



    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }


        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;

    }
        
    current_alignment += rapid::MessagePlugin_get_serialized_key_max_size(
        endpoint_data,
        RTI_FALSE, encapsulation_id,
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }

    return current_alignment - initial_alignment;
}


RTIBool 
FileQueueSamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)
{
    char * position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);

    }

    if (deserialize_key) {
        if (!rapid::MessagePlugin_serialized_sample_to_key(endpoint_data,
                (rapid::Message *)sample,
                stream, RTI_FALSE, RTI_TRUE,
                endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    if (!rapid::String64Plugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!RTICdrStream_skipLong(stream)) {
        goto fin;
    }
            

    if (!rapid::OctetSequence1KPlugin_skip(
            endpoint_data,
            stream, 
            RTI_FALSE, RTI_TRUE, 
            endpoint_plugin_qos)) {
        goto fin;
    }
            

    }


    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    return RTI_TRUE;
}





RTIBool 
FileQueueSamplePlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSampleKeyHolder *dst, 
    const FileQueueSample *src)
{  
    if (!rapid::MessagePlugin_instance_to_key(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}


RTIBool 
FileQueueSamplePlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    FileQueueSample *dst, const
    FileQueueSampleKeyHolder *src)
{
    if (!rapid::MessagePlugin_key_to_instance(endpoint_data,(rapid::Message *)dst,(const rapid::Message*)src)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}


RTIBool 
FileQueueSamplePlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const FileQueueSample *instance)
{
    struct RTICdrStream * md5Stream = NULL;

    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(
        RTICdrStream_getBuffer(md5Stream),
        RTICdrStream_getBufferLength(md5Stream));
    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!::rapid::FileQueueSamplePlugin_serialize_key(
            endpoint_data,instance,md5Stream, RTI_FALSE, RTI_CDR_ENCAPSULATION_ID_CDR_BE, RTI_TRUE,NULL)) {
        return RTI_FALSE;
    }
    
    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data) > (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;
    return RTI_TRUE;
}


RTIBool 
FileQueueSamplePlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    char * position = NULL;

    RTIBool done = RTI_FALSE;
    FileQueueSample * sample = NULL;

    if (endpoint_plugin_qos) {} /* To avoid warnings */


    if (stream == NULL) goto fin; /* To avoid warnings */


    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        position = RTICdrStream_resetAlignment(stream);
    }


    sample = (FileQueueSample *)
                PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);

    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!rapid::MessagePlugin_serialized_sample_to_key(endpoint_data,
            (rapid::Message *)sample,
            stream, RTI_FALSE, RTI_TRUE,
            endpoint_plugin_qos)) {
        return RTI_FALSE;
    }

    done = RTI_TRUE;
fin:
    if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
            RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,position);
    }


    if (!::rapid::FileQueueSamplePlugin_instance_to_keyhash(
            endpoint_data, keyhash, sample)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}


/* ------------------------------------------------------------------------
 * Plug-in Installation Methods
 * ------------------------------------------------------------------------ */
 
struct PRESTypePlugin *FileQueueSamplePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
        PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
       return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
        (PRESTypePluginOnParticipantAttachedCallback)
        ::rapid::FileQueueSamplePlugin_on_participant_attached;
    plugin->onParticipantDetached =
        (PRESTypePluginOnParticipantDetachedCallback)
        ::rapid::FileQueueSamplePlugin_on_participant_detached;
    plugin->onEndpointAttached =
        (PRESTypePluginOnEndpointAttachedCallback)
        ::rapid::FileQueueSamplePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
        (PRESTypePluginOnEndpointDetachedCallback)
        ::rapid::FileQueueSamplePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
        (PRESTypePluginCopySampleFunction)
        ::rapid::FileQueueSamplePlugin_copy_sample;
    plugin->createSampleFnc =
        (PRESTypePluginCreateSampleFunction)
        FileQueueSamplePlugin_create_sample;
    plugin->destroySampleFnc =
        (PRESTypePluginDestroySampleFunction)
        FileQueueSamplePlugin_destroy_sample;

    plugin->serializeFnc =
        (PRESTypePluginSerializeFunction)
        ::rapid::FileQueueSamplePlugin_serialize;
    plugin->deserializeFnc =
        (PRESTypePluginDeserializeFunction)
        ::rapid::FileQueueSamplePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
        ::rapid::FileQueueSamplePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
        (PRESTypePluginGetSerializedSampleMinSizeFunction)
        ::rapid::FileQueueSamplePlugin_get_serialized_sample_min_size;


    plugin->getSampleFnc =
        (PRESTypePluginGetSampleFunction)
        FileQueueSamplePlugin_get_sample;
    plugin->returnSampleFnc =
        (PRESTypePluginReturnSampleFunction)
        FileQueueSamplePlugin_return_sample;

    plugin->getKeyKindFnc =
        (PRESTypePluginGetKeyKindFunction)
        ::rapid::FileQueueSamplePlugin_get_key_kind;


    plugin->getSerializedKeyMaxSizeFnc =   
        (PRESTypePluginGetSerializedKeyMaxSizeFunction)
        ::rapid::FileQueueSamplePlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
        (PRESTypePluginSerializeKeyFunction)
        ::rapid::FileQueueSamplePlugin_serialize_key;
    plugin->deserializeKeyFnc =
        (PRESTypePluginDeserializeKeyFunction)
        ::rapid::FileQueueSamplePlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
        (PRESTypePluginDeserializeKeySampleFunction)
        ::rapid::FileQueueSamplePlugin_deserialize_key_sample;

    plugin->instanceToKeyHashFnc = 
        (PRESTypePluginInstanceToKeyHashFunction)
        ::rapid::FileQueueSamplePlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
        (PRESTypePluginSerializedSampleToKeyHashFunction)
        ::rapid::FileQueueSamplePlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
        (PRESTypePluginGetKeyFunction)
        FileQueueSamplePlugin_get_key;
    plugin->returnKeyFnc =
        (PRESTypePluginReturnKeyFunction)
        FileQueueSamplePlugin_return_key;

    plugin->instanceToKeyFnc =
        (PRESTypePluginInstanceToKeyFunction)
        ::rapid::FileQueueSamplePlugin_instance_to_key;
    plugin->keyToInstanceFnc =
        (PRESTypePluginKeyToInstanceFunction)
        ::rapid::FileQueueSamplePlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    
    plugin->typeCode =  (struct RTICdrTypeCode *)::rapid::FileQueueSample_get_typecode();
    
    plugin->languageKind = PRES_TYPEPLUGIN_DDS_TYPE; 

    /* Serialized buffer */
    plugin->getBuffer = 
        (PRESTypePluginGetBufferFunction)
        FileQueueSamplePlugin_get_buffer;
    plugin->returnBuffer = 
        (PRESTypePluginReturnBufferFunction)
        FileQueueSamplePlugin_return_buffer;
    plugin->getSerializedSampleSizeFnc =
        (PRESTypePluginGetSerializedSampleSizeFunction)
        ::rapid::FileQueueSamplePlugin_get_serialized_sample_size;

    plugin->endpointTypeName = FileQueueSampleTYPENAME;

    return plugin;
}

void
FileQueueSamplePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

} /* namespace rapid */
