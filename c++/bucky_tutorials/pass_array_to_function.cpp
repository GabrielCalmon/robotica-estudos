#include <iostream>
#include <cmath>

using namespace std;

void printArray(float array[], int sizeOfArray);

int main()
{
    
    float floats[5]={1.2, 4.5, 9.81, 11.02, 14.99};
    printArray(floats, sizeof(floats)/ sizeof(float));

    return 0;
}

void printArray(float array[], int sizeOfArray){
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << array[i] << endl;
    }
    
}