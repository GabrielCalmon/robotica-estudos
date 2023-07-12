#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double arr[10];
    double *ptr = &arr[0];
    for(int i=0; i<10; i++){
        cout << "array " << &arr[i] << " pointer " << ptr << endl;
        ptr+=1;
    }    
       
    return 0;
}