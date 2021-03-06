
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from RosMarkerArraySample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef RosMarkerArraySampleSupport_1253988555_h
#define RosMarkerArraySampleSupport_1253988555_h

/* Uses */
#include "RosMarkerArraySample.h"



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

namespace arc{
        

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

DDS_TYPESUPPORT_CPP(MarkerTypeSupport, Marker);

DDS_DATAWRITER_CPP(MarkerDataWriter, Marker);
DDS_DATAREADER_CPP(MarkerDataReader, MarkerSeq, Marker);


#else

DDS_TYPESUPPORT_C(MarkerTypeSupport, Marker);
DDS_DATAWRITER_C(MarkerDataWriter, Marker);
DDS_DATAREADER_C(MarkerDataReader, MarkerSeq, Marker);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif

        

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
DDS_TYPESUPPORT_CPP(RosMarkerArraySampleTypeSupport, RosMarkerArraySample);

DDS_DATAWRITER_CPP(RosMarkerArraySampleDataWriter, RosMarkerArraySample);
DDS_DATAREADER_CPP(RosMarkerArraySampleDataReader, RosMarkerArraySampleSeq, RosMarkerArraySample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(RosMarkerArraySampleTypeSupport, RosMarkerArraySample);
DDS_DATAWRITER_C(RosMarkerArraySampleDataWriter, RosMarkerArraySample);
DDS_DATAREADER_C(RosMarkerArraySampleDataReader, RosMarkerArraySampleSeq, RosMarkerArraySample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace arc */

} /* namespace ext */

} /* namespace rapid */


#endif  /* RosMarkerArraySampleSupport_1253988555_h */
