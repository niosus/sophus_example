add_library(eigen_fmt_formatting INTERFACE)
target_link_libraries(eigen_fmt_formatting INTERFACE
  ${PROJECT_NAME}::cxx_setup
  fmt::fmt
  Sophus::Sophus
)
add_library(${PROJECT_NAME}::eigen_fmt_formatting ALIAS eigen_fmt_formatting)

add_executable(example example.cpp)
target_link_libraries(example PRIVATE
  ${PROJECT_NAME}::cxx_setup
  ${PROJECT_NAME}::eigen_fmt_formatting
  Sophus::Sophus)
