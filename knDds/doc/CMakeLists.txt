
if(DOXYGEN_FOUND)
  
  doxygen_set_working_dir( )
  doxygen_create_tagfile_list( irgUtil kn )
  doxygen_create_doc_target( )
  
endif(DOXYGEN_FOUND)
