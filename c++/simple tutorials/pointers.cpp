#include <iostream>

using namespace std;

int main()
{
    double myNumber = 17.875;
    double *pMyNumber = &myNumber;

    cout << pMyNumber << endl;
    cout << &pMyNumber << endl;

    cout << *pMyNumber << endl;



    return 0;
}