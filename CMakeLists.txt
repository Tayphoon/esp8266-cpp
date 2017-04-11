cmake_minimum_required(VERSION 3.0)
cmake_policy(SET CMP0048 NEW)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_LIST_DIR}/external/esp8266-cmake/cmake/toolchain.ESP8266.cmake)
set(CMAKE_C_OUTPUT_EXTENSION_REPLACE 1)
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)
set(CMAKE_VERBOSE_MAKEFILE TRUE)

project("ProjectTemplate")

add_subdirectory(external)
add_subdirectory(user)
