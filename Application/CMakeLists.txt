add_executable(ApplicationName "")
target_sources(ApplicationName PRIVATE Application.cpp)
target_include_directories(ApplicationName PRIVATE ${CMAKE_SOURCE_DIR})
target_link_libraries(ApplicationName
  PRIVATE
  ${PROJECT_NAME}::LibraryName
)
add_executable(${PROJECT_NAME}::ApplicationName ALIAS ApplicationName)

target_compile_features(ApplicationName PUBLIC cxx_std_17)
set_target_properties(ApplicationName PROPERTIES VERSION ${PROJECT_VERSION})
if(UNIX)
  set_target_properties(ApplicationName PROPERTIES
    INSTALL_RPATH "$ORIGIN/../${CMAKE_INSTALL_LIBDIR}")
endif()
