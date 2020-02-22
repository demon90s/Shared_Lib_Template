cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# you should modify THIS
set(LIBNAME testlib)
set(PREDIFINE_MACRO FUNC_EXPORTS)

project(${LIBNAME})

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB_RECURSE SRC_FILES
    ${PROJECT_SOURCE_DIR}/src/*.cpp
    ${PROJECT_SOURCE_DIR}/include/*.hpp)

add_definitions(-D ${PREDIFINE_MACRO})

if (CMAKE_SYSTEM_NAME STREQUAL "Linux")
    # Linux
elseif (CMAKE_SYSTEM_NAME STREQUAL "Windows")
    # Windows
endif()

add_library(${LIBNAME} SHARED ${SRC_FILES})
