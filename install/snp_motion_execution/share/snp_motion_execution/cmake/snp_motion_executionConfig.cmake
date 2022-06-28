# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_snp_motion_execution_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED snp_motion_execution_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(snp_motion_execution_FOUND FALSE)
  elseif(NOT snp_motion_execution_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(snp_motion_execution_FOUND FALSE)
  endif()
  return()
endif()
set(_snp_motion_execution_CONFIG_INCLUDED TRUE)

# output package information
if(NOT snp_motion_execution_FIND_QUIETLY)
  message(STATUS "Found snp_motion_execution: 0.1.0 (${snp_motion_execution_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'snp_motion_execution' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${snp_motion_execution_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(snp_motion_execution_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${snp_motion_execution_DIR}/${_extra}")
endforeach()
