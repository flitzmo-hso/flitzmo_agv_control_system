#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "menge::menge" for configuration "Release"
set_property(TARGET menge::menge APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(menge::menge PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmenge.so"
  IMPORTED_SONAME_RELEASE "libmenge.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS menge::menge )
list(APPEND _IMPORT_CHECK_FILES_FOR_menge::menge "${_IMPORT_PREFIX}/lib/libmenge.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
