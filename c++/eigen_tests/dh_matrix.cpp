#include <iostream>
#include <Eigen/Dense>
 
using namespace Eigen;
int main()
{
    MatrixXf M1(3,3);    // Column-major storage
    M1 << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;
    Matrix4d M2;
    M2 << MatrixXd::Identity(4,4);
    std::cout << "Here is the matrix m:\n" << M1 << std::endl;
    std::cout << "Here is the matrix m:\n" << M2 << std::endl;
    // std::cout << "Here is the matrix m:\n" << M1.row(0) << std::endl;
    
    // Eigen::VectorXf v1 = M1.row(1);

    // std::cout << "v1:" << std::endl << v1 << std::endl;

//   Eigen::Matrix4d n;
//   std::cout << "Here is the matrix m:\n" << n << std::endl;

}