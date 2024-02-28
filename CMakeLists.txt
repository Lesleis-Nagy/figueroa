cmake_minimum_required(VERSION 3.27)
project(linalg)

set(CMAKE_CXX_STANDARD 20)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

set(FIGUEROA_INCLUDE_DIR  "${CMAKE_SOURCE_DIR}/include")
set(FIGUEROA_SRC_TEST_DIR "${CMAKE_SOURCE_DIR}/src-test")
set(FIGUEROA_THIRD_PARTY_DIR "${CMAKE_SOURCE_DIR}/third-party")
set(FIGUEROA_TOYS_DIR "${CMAKE_SOURCE_DIR}/toys")

set(FIGUEROA_CATCH_INCLUDE_DIR "${FIGUEROA_THIRD_PARTY_DIR}/catch2-v2.13.9/include")

####################################################################################
# Threading library                                                                #
####################################################################################

if (WIN32)
    find_package(PThreads4W REQUIRED)
else()
    find_package(Threads REQUIRED)
endif()

####################################################################################
# Cairo                                                                            #
####################################################################################

find_package(Cairo REQUIRED)

add_subdirectory(${FIGUEROA_SRC_TEST_DIR})
add_subdirectory(${FIGUEROA_TOYS_DIR})
