cmake_minimum_required(VERSION 3.21)
project(runTests)

option(IS_CONAN_BUILD OFF)
if (IS_CONAN_BUILD)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
endif ()
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests Test.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)