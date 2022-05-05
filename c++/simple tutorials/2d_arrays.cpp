#include <iostream>

using namespace std;

int main()
{
    int numberGrid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    //              l  c  
    int numberGrid2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for(int l = 0; l < 3; l++){
        for(int c = 0; c < 3; c++){
            cout << numberGrid[l][c] << " ";
        }
        cout << endl;
    }
    return 0;
}