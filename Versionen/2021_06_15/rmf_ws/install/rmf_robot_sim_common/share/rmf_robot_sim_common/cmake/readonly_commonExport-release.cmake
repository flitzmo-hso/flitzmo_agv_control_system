#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rmf_robot_sim_common::readonly_common" for configuration "Release"
set_property(TARGET rmf_robot_sim_common::readonly_common APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rmf_robot_sim_common::readonly_common PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libreadonly_common.so"
  IMPORTED_SONAME_RELEASE "libreadonly_common.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rmf_robot_sim_common::readonly_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_rmf_robot_sim_common::readonly_common "${_IMPORT_PREFIX}/lib/libreadonly_common.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
