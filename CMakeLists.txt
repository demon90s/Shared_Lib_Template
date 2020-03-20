cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

# you should modify THIS
set(LIB testlib)
project(shared_lib_template)

include_directories(${PROJECT_SOURCE_DIR}/include/)

# library
file(GLOB_RECURSE LIB_FILES
    ${PROJECT_SOURCE_DIR}/src/lib/*.cpp
    ${PROJECT_SOURCE_DIR}/include/lib/*.hpp)
add_library(${LIB} SHARED ${LIB_FILES})
target_compile_definitions(${LIB} PRIVATE LIB_BUILD_DLL)

# application
file(GLOB_RECURSE APP_FILES
    ${PROJECT_SOURCE_DIR}/src/app/*.cpp
    ${PROJECT_SOURCE_DIR}/src/app/*.hpp)
add_executable(app ${APP_FILES})
target_link_libraries(app ${LIB})