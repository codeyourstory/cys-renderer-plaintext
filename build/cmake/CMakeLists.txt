CMAKE_MINIMUM_REQUIRED( VERSION 2.8.5 )

SET(CMAKE_SYSTEM_NAME "Linux")

# Project Declaration

project(cys-engine)

# enable c++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_definitions(-m64 -Wall -Wno-unused-function)

# Get source files

file(
  GLOB_RECURSE source_files 
  # ngengine
  ../../src/*
)

include_directories(
  ../../include/
)

add_executable(cys-renderer-plaintext ${source_files})

target_link_libraries(cys-renderer-plaintext ${CMAKE_SOURCE_DIR}/../../externals/cys-engine/bin/libcysengine.a)

add_custom_command(TARGET cys-renderer-plaintext POST_BUILD 
  COMMAND ${CMAKE_COMMAND} -E copy cys-renderer-plaintext ../../bin/cys-renderer-plaintext
)

# TESTS AND TEST RUNNER

#MACRO( TEST _target _target_folder )
#  file(
#    GLOB_RECURSE _sources
#    ../../tests/tests/${_target_folder}/*.cpp
#  )
#  add_executable(${_target} ${_sources})
#  include_directories(../../tests/tests/)
#  
#
#  file(MAKE_DIRECTORY ../../bin/tests/${_target}) 
#
#  add_custom_command(TARGET ${_target} POST_BUILD 
#    COMMAND ${CMAKE_COMMAND} -E copy ${_target} ../../bin/tests/${_target_folder}/test
#  )
#
#ENDMACRO( TEST )
#
#TEST( 01Tmp 01Tmp )
#
## test runner
#
#file(
#    GLOB_RECURSE _sources_runner
#    ../../tests/runner/*.cpp
#  )
#add_executable( test_runner ${_sources_runner})

#add_custom_command(TARGET test_runner POST_BUILD 
#  COMMAND ${CMAKE_COMMAND} -E copy test_runner ../../bin/test-runner
#)

