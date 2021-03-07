add_library(LibraryName "")
target_sources(LibraryName PRIVATE Library.cpp)
target_include_directories(LibraryName
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)
target_compile_features(LibraryName PUBLIC cxx_std_17)
set_target_properties(LibraryName PROPERTIES
  VERSION ${PROJECT_VERSION}
  PUBLIC_HEADER Library.hpp
)
add_library(${PROJECT_NAME}::LibraryName ALIAS LibraryName)

set_target_properties(LibraryName PROPERTIES LINKER_LANGUAGE CXX)

