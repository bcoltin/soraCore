
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from FileQueueReceiverSample.idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/

#ifndef FileQueueReceiverSampleSupport_1894773302_h
#define FileQueueReceiverSampleSupport_1894773302_h

/* Uses */
#include "FileQueueReceiverSample.h"



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
DDS_TYPESUPPORT_CPP(FileQueueReceiverSampleTypeSupport, FileQueueReceiverSample);

DDS_DATAWRITER_CPP(FileQueueReceiverSampleDataWriter, FileQueueReceiverSample);
DDS_DATAREADER_CPP(FileQueueReceiverSampleDataReader, FileQueueReceiverSampleSeq, FileQueueReceiverSample);
#undef RTI_VALUETYPE

#else

DDS_TYPESUPPORT_C(FileQueueReceiverSampleTypeSupport, FileQueueReceiverSample);
DDS_DATAWRITER_C(FileQueueReceiverSampleDataWriter, FileQueueReceiverSample);
DDS_DATAREADER_C(FileQueueReceiverSampleDataReader, FileQueueReceiverSampleSeq, FileQueueReceiverSample);

#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
  /* If the code is building on Windows, stop exporting symbols.
   */
  #undef NDDSUSERDllExport
  #define NDDSUSERDllExport
#endif


} /* namespace rapid */


#endif  /* FileQueueReceiverSampleSupport_1894773302_h */
