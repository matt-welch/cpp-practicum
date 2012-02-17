include(ExternalProject)
cmake_minimum_required(VERSION 2.8)
PROJECT(CSE394_VM)
SET(SOURCES main.cpp)
SET(CMAKE_CXX_FLAGS "-std=c++0x -O0 -g3 -ggdb -Wall -fopenmp ")


#Build the Application
include_directories(virtual-machine)
file(GLOB VMSources virtual-machine/*.cpp)
add_library(VM ${VMSources})

add_executable(K1 main.cpp)
target_link_libraries(K1 VM)


#Build the Unit Tests
ExternalProject_Add(
    GTest-1.6
    URL http://googletest.googlecode.com/files/gtest-1.6.0.zip  
    URL_MD5 4577b49f2973c90bf9ba69aa8166b786
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(GTest-1.6 SOURCE_DIR)
include_directories(${SOURCE_DIR}/include)
ExternalProject_Get_Property(GTest-1.6 BINARY_DIR)
link_directories(${BINARY_DIR})

add_custom_target(test
    COMMAND unit-test
    DEPENDS unit-test)
file(GLOB UnitTests Tests/*.cpp)
add_executable(unit-test ${UnitTests})
target_link_libraries(unit-test gtest gtest_main pthread VM)

