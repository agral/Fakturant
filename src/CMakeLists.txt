set(BINARY_NAME ${CMAKE_PROJECT_NAME})
set(LIBRARY_NAME lib_${CMAKE_PROJECT_NAME})
file(GLOB_RECURSE SRC_SOURCES LIST_DIRECTORIES true
  *.hpp
  *.cpp
)
set(SOURCES ${SRC_SOURCES})
add_executable(${BINARY_NAME} ${SOURCES})

add_library(${LIBRARY_NAME} STATIC ${SOURCES})
# Disable auto-prepending of "lib" to the library name
# (want: "lib_Fakturant", with CMake's prefix get: "liblib_Fakturant"):
SET_TARGET_PROPERTIES(${LIBRARY_NAME} PROPERTIES PREFIX "")
