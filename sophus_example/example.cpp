#include <fmt/format.h>
#include <fmt/ostream.h>
#include <sophus/se3.hpp>

int main() {
  const Eigen::Matrix3d R = Eigen::Matrix3d::Identity();
  const Eigen::Vector3d t{1, 2, 3};
  const Sophus::SE3d se3{R, t};
  fmt::print("SE3 matrix: {}\n", se3.matrix());
  return 0;
}
