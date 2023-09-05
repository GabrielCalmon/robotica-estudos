#include <iostream>
#include "Robot_poo.h"
using namespace std;

int main()
{
    Robot_poo rbt(10.5, 9);
    rbt.send_lidar();
    rbt.runMaxSpeed();
    return 0;
}
