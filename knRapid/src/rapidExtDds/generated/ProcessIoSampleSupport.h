
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from ProcessIoSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef ProcessIoSampleSupport_1382961988_h
#define ProcessIoSampleSupport_1382961988_h

/* Uses */
#include "ProcessIoSample.h"



#ifdef __cplusplus
#ifndef ndds_cpp_h
  #include "ndds/ndds_cpp.h"
#endif
#else
#ifndef ndds_c_h
  #include "ndds/ndds_c.h"
#endif
#endif


namespace rapid{

namespace ext{
        

/* ========================================================================= */
/**
   Uses:     T

   Defines:  TTypeSupport, TDataWriter, TDataReader

   Organized using the well-documented "Generics Pattern" for
   implementing generics in C and C++.
*/

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, start exporting symbols.
  */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifdef __cplusplus
#define RTI_VALUETYPE
DDS_TYPESUPPORT_CPP(ProcessIoSampleTypeSupport, ProcessIoSample);

DDS_DATAWRITER_CPP(ProcessIoSampleDataWriter, ProcessIoSample);
DDS_DATAREADER_CPP(ProcessIoSampleDataReader, ProcessIoSampleSeq, ProcessIoSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(ProcessIoSampleTypeSupport, ProcessIoSample);
DDS_DATAWRITER_C(ProcessIoSampleDataWriter, ProcessIoSample);
DDS_DATAREADER_C(ProcessIoSampleDataReader, ProcessIoSampleSeq, ProcessIoSample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace ext */

} /* namespace rapid */


#endif  /* ProcessIoSampleSupport_1382961988_h */
