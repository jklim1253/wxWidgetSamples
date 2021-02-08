cmake_minimum_required(VERSION 3.10)
project(BaseApp)

set(VCPKG_ROOT "D:/home/vcpkg" CACHE PATH "vcpkg root path")
set(wxWidget_lib_platform "x64-windows-static" CACHE STRING "wxWidget library platform")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(SRCS
  "app.main.cpp"
  "frame.main.cpp"
)
set(HEADERS
  "app.common.hpp"
  "app.main.hpp"
  "frame.main.hpp"
)

add_link_options("/SUBSYSTEM:WINDOWS")

include_directories("${VCPKG_ROOT}/installed/${wxWidget_lib_platform}/include")
link_directories("${VCPKG_ROOT}/installed/${wxWidget_lib_platform}/lib")

add_executable(${PROJECT_NAME}
  ${SRCS}
  ${HEADERS}
)

target_compile_options(${PROJECT_NAME} PUBLIC /MT)
target_link_options(${PROJECT_NAME} PUBLIC /INCREMENTAL:NO /NODEFAULTLIB:MSVCRT)

target_link_libraries(${PROJECT_NAME} jpeg)
target_link_libraries(${PROJECT_NAME} libpng16)
target_link_libraries(${PROJECT_NAME} lzma)
target_link_libraries(${PROJECT_NAME} tiff)
target_link_libraries(${PROJECT_NAME} zlib)

# for windows, wxbase31u must be added at last.
target_link_libraries(${PROJECT_NAME} wxregexu)
target_link_libraries(${PROJECT_NAME} rpcrt4)
target_link_libraries(${PROJECT_NAME} comctl32)
target_link_libraries(${PROJECT_NAME} wxmsw31u_core)
target_link_libraries(${PROJECT_NAME} wxbase31u)