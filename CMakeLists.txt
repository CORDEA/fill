cmake_minimum_required(VERSION 3.15)
project(fill)

set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(fill main.cpp)
target_link_libraries(fill ${CONAN_LIBS})
