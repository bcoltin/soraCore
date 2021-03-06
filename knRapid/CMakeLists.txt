project(knRapid)
cmake_minimum_required(VERSION 2.6)

set( CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/../cmake/Modules ${CMAKE_MODULE_PATH} )

if( CMAKE_COMPILER_IS_GNUCXX )
  message( STATUS "****************************************************")
  message( STATUS "** Manually setting compiler flags to prevent")
  message( STATUS "** strict-aliasing warnings in DDS generated files")
  message( STATUS "****************************************************")
  set( WARN_FLAGS "-fno-strict-aliasing -Wall -Woverloaded-virtual -Wno-write-strings" )
 
  if( NOT SETUP_WARN_LEVEL_HAS_RUN )
    message( STATUS "** disable --as-needed because k10controller *wants* 'unecessary' shared libs to be linked **")
    set( CMAKE_EXE_LINKER_FLAGS    "-Wl,--no-as-needed" CACHE STRING "" FORCE )
  endif( NOT SETUP_WARN_LEVEL_HAS_RUN )
  
endif( CMAKE_COMPILER_IS_GNUCXX )

include( SetArchitecture )
include( SetupBuildSwitch )
include( SetupConfigureFile )
include( SetupInstall )
include( SetupRPATH )
include( SetupUtilities )
include( SetupWarnLevel )
include( UserOptions )

## we have to play some tricks to get install
## path to "stick" in Windows
##------------------------------------------------
set( RAPID_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}" CACHE PATH "RAPID install path")


#---------------------------------------------
# make RTI DDS optional
add_build_var( WITH_DDS NOT APPLE )
find_package_if( RtiDds KNRAPID_BUILD_WITH_DDS  )
link_directories( ${RTIDDS_LIBRARY_DIR} )

find_package( ACE )
find_package( Qt4 )
find_package( PThreads-win32 )

find_package( Boost 1.50.0 COMPONENTS program_options filesystem system thread chrono)
find_package( Eigen3 )
find_package( Threads )

find_package( IrgUtil )
find_package( Miro )
find_package( kn )
find_package( knDds )

build_with_var( WITH_DDS  RTIDDS_FOUND )

## We must add the in-source and out-of-source
## include paths 
## Boost include path is also required everywhere
##--------------------------------------------
include_directories(
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_BINARY_DIR}/src
  ${Boost_INCLUDE_DIR}
)

## Set up RPATH and *Config.h
## Call these after we've made all our 
## find_package calls
##--------------------------------------------
setup_rpath()
setup_configure_file()

# Defaults
#-----------------------------------
link_libraries( ${CMAKE_THREAD_LIBS_INIT} )

if( WIN32 )
  link_directories( ${Boost_LIBRARY_DIRS} )
endif( WIN32 )

#-----------------------------------
add_subdirectory( etc )
add_subdirectory( src )

add_build_switch( examples BUILD_DEFAULT_FALSE )

# install the export file
#------------------------------------
install_export()

# package script
#------------------------------------
include( CMakePack.txt )

#------------------------------------
print_build_switches()
