find_package(Python REQUIRED COMPONENTS Interpreter Development)

if(Python_VERSION VERSION_GREATER_EQUAL 3)
  list(APPEND CMAKE_SWIG_FLAGS "-py3;-DPY3")
endif()

set_property(SOURCE ../InterfaceFilename.i PROPERTY CPLUSPLUS ON)
set_property(SOURCE ../InterfaceFilename.i PROPERTY SWIG_MODULE_NAME SwigModuleName)
swig_add_library(SwigLibraryName
  TYPE SHARED
  LANGUAGE python
  OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR}
  SOURCES ../InterfaceFilename.i)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test.py DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

target_include_directories(SwigLibraryName
  PRIVATE
  ${CMAKE_SOURCE_DIR}
  ${Python_INCLUDE_DIRS}
  )
set_property(TARGET SwigLibraryName PROPERTY SWIG_USE_TARGET_INCLUDE_DIRECTORIES ON)

set_target_properties(SwigLibraryName PROPERTIES
  INSTALL_RPATH "$ORIGIN:$ORIGIN/../../${PROJECT_NAME}/.libs"
)

target_link_libraries(SwigLibraryName PRIVATE LibraryName)

if(MSVC)
  target_link_libraries(SwigLibraryName PRIVATE ${Python_LIBRARIES})
endif()
