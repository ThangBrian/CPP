# CMakeList.txt : CMake project for Week 1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.2)

# Add source to this project's executable.
add_executable (QuocThangTran_Lab1 "Week 1.cpp" "Week 1.h")

set_property(TARGET QuocThangTran_Lab1 PROPERTY CXX_STANDARD 11)
set_property(TARGET QuocThangTran_Lab1 PROPERTY CXX_STANDARD_REQUIRED ON)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET QuocThangTran_Lab1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
