#include <iostream>
#include <cmath>

using namespace std;

# define M_PI 3.14159265358979323846  // pi

int main()
{
  double x = 0.439203, result;
  
  result = cos(x);
  //cout << "sin(x) = " << result << endl;
  
  double xDegrees = 180.0;
  
  // converting degrees to radians
  x = xDegrees*M_PI/180;

  result = sin(x);
  
  //cout << "sin(x) = " << result << endl;
  cout << "Deg:" << xDegrees << " Rad:" << x << endl;

  return 0;
}