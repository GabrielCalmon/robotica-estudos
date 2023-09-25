#include <geometry_msgs/msg/quaternion.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>

// Função para converter quaternion em ângulos de Euler
void quaternionToEuler(const geometry_msgs::msg::Quaternion& quaternion)
{
  tf2::Quaternion tf_quaternion(
    quaternion.x,
    quaternion.y,
    quaternion.z,
    quaternion.w
  );

  tf2::Matrix3x3 tf_matrix(tf_quaternion);

  double roll, pitch, yaw;
  tf_matrix.getRPY(roll, pitch, yaw);

  // Print dos ângulos de Euler
  std::cout << "Roll: " << roll << std::endl;
  std::cout << "Pitch: " << pitch << std::endl;
  std::cout << "Yaw: " << yaw << std::endl;
}

geometry_msgs::msg::Quaternion quaternion;
quaternion.x = 0.0;  // Substitua pelos valores reais do quaternion
quaternion.y = 0.0;
quaternion.z = 0.0;
quaternion.w = 1.0;

quaternionToEuler(quaternion);