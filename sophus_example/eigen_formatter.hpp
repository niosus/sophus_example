#ifndef SOPHUS_EXAMPLE_EIGEN_FORMATTER_HPP
#define SOPHUS_EXAMPLE_EIGEN_FORMATTER_HPP

#include <Eigen/Core>
#include <fmt/format.h>
#include <fmt/ostream.h>

template <typename T>
requires std::is_base_of_v<Eigen::DenseBase<T>, T>
struct fmt::formatter<T> : ostream_formatter {
};

#endif /* SOPHUS_EXAMPLE_EIGEN_FORMATTER_HPP */
