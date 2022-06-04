cmake_minimum_required(VERSION 3.14)
project(Fakturant)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_subdirectory(lib/wxWidgets)
add_subdirectory(lib/googletest)

include_directories(src)
add_subdirectory(src)

add_subdirectory(test)
