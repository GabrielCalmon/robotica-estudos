#include <iostream>
#include <cmath>

using namespace std;

void printArray(float array[], int sizeOfArray);

int main()
{
    
    int myMatrix[3][3]={
    {1,0,0},
    {0,1,0},
    {0,0,1}};
    
    for(int row=0; row<=2; row++){
        for(int line=0; line<=2; line++){
            cout << myMatrix[row][line] << " ";
        }
        cout << endl;
    }
    return 0;
}