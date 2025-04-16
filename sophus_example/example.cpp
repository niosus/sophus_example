#include <sophus_example/eigen_formatter.hpp>

#include <sophus/se3.hpp>

int main() {
  const Eigen::Matrix3d R = Eigen::Matrix3d::Identity();
  const Eigen::Vector3d t{1, 2, 3};
  const Sophus::SE3d se3{R, t};
  fmt::println("SE3 matrix:\n{}", se3.matrix());
  return 0;
}
