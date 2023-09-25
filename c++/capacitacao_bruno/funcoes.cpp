#include <iostream>
using namespace std;

void isDivisible(int num1, int num2);

int main(){
    isDivisible(3, 2);
    isDivisible(5, 1);
    isDivisible(10, 4);
    isDivisible(1, 5);
    return 0;
}

void isDivisible(int num1, int num2){
    if(num1 % num2 == 0){
        cout << num1 << " is divisible by " << num2 << endl;
    } else {
        cout << num1 << " is not divisible by " << num2 << endl;
    }
}