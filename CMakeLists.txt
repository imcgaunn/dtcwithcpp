cmake_minimum_required(VERSION 3.5)

project(dtc_with_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello_world exp/hello/main.cpp "exp/classes/friends.cpp" "exp/classes/simple.cpp")

if(MSVC)
  target_compile_options(hello_world PUBLIC "/ZI")
  target_link_options(hello_world PUBLIC "/INCREMENTAL")
endif()

