#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int randomInt(int min, int max){
    int value = (rand()%(max-min+1))+(min);
    return value;
}

int main()
{   
    // o time(0) e o time(NULL) retornam a mesma coisa
    // srand(time(NULL));
    srand(time(0));

    for(int x=0; x<20; x++){
        cout << randomInt(2,10) << endl;
    }

    // cout << time(NULL) << endl;
    // cout << time(0) << endl;
    return 0;
}