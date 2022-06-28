# Install script for directory: /home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/snp_support

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/install/snp_support")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/snp_support" TYPE FILE FILES "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/snp_support/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/snp_support" TYPE FILE FILES
    "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/build/snp_support/snp_support-config.cmake"
    "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/build/snp_support/snp_support-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/build/snp_support/share/ament_index/resource_index/packages/snp_support")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/snp_support/hook" TYPE FILE FILES "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/build/snp_support/share/snp_support/hook/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/snp_support/hook" TYPE FILE FILES "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/build/snp_support/share/snp_support/hook/ros_package_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/snp_support/" TYPE DIRECTORY FILES
    "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/snp_support/config"
    "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/snp_support/launch"
    "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/snp_support/urdf"
    "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/snp_support/meshes"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/D10.US.SWRI.ORG/dspielman/snp/snp_ws/src/scan_n_plan_workshop/build/snp_support/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
