add_library(cxx_setup INTERFACE)
target_compile_options(cxx_setup
 INTERFACE -Wall -Wextra)
target_compile_features(cxx_setup INTERFACE cxx_std_20)
target_include_directories(cxx_setup INTERFACE
 $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}>
 $<INSTALL_INTERFACE:include/>
)
add_library(${PROJECT_NAME}::cxx_setup ALIAS cxx_setup)
